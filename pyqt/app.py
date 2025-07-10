import sys, os, subprocess, signal, re, psutil, time
from PyQt5.QtWidgets import *
from PyQt5.QtGui import *
from PyQt5.QtCore import QThread, pyqtSignal, QTimer
from PyQt5 import uic

from_class = uic.loadUiType("app.ui")[0]

class CmdThread(QThread):
    update = pyqtSignal(str)

    def __init__(self, parent):
        super().__init__()
        self.parent = parent

    def run(self):
        self.cmd = self.parent.echocmd
        self.process = subprocess.Popen(self.cmd, shell=True, stdout=subprocess.PIPE, encoding='utf-8')
        self.echopid = self.process.pid + 1
        self.parent.runpid.append(self.echopid)

        while True:
            output = self.process.stdout.readline()
            if output == '' and self.process.poll() is not None:
                break
            if output:
                self.update.emit(output.strip())

    def stop(self):
        try:
            os.kill(self.echopid, signal.SIGTERM)
        except Exception as e:
            print("X")

class WindowClass(QMainWindow, from_class):
    def __init__(self):
        super().__init__()
        self.setupUi(self)
        self.setWindowTitle("ROS2 GUI - Cmd Tab")

        self.runlist = []
        self.runpid = []
        self.nodedict = {}
        self.app_pid = os.getpid()
        self.topic = None
        self.topicmsg = None
        self.onceflag = False
        self.terminalflag = False

        self.once = ""

        self.linearx = "0.0"
        self.lineary = "0.0"
        self.linearz = "0.0"
        self.angularx = "0.0"
        self.angulary = "0.0"
        self.angularz = "0.0"

        self.linelix.setText(self.linearx)
        self.lineliy.setText(self.lineary)
        self.lineliz.setText(self.linearz)
        self.lineanx.setText(self.angularx)
        self.lineany.setText(self.angulary)
        self.lineanz.setText(self.angularz)

        self.cmd_1 = self.comboCmd_1.currentText()
        self.cmd_2 = self.comboCmd_2.currentText()
        self.cmd_3 = self.comboCmd_3.currentText()
        self.cmd_4 = self.comboCmd_4.currentText()

        self.comboCmd_1.addItem("")
        self.comboCmd_1.addItem("ros2 run")
        self.comboCmd_1.addItem("ros2 launch")
        self.comboCmd_1.addItem("ros2 node")
        self.comboCmd_1.addItem("ros2 topic")
        self.comboCmd_1.addItem("ros2 service")

        self.btnEndAll.clicked.connect(self.endall_btn)

        self.checkTerminal.stateChanged.connect(self.terminal_check)
        self.lineCmd.returnPressed.connect(self.cmd_clicked)
        self.btnCmd.clicked.connect(self.cmd_clicked)
        self.comboCmd_1.currentTextChanged.connect(self.cmd1_combo)
        self.comboCmd_2.currentTextChanged.connect(self.cmd2_combo)
        self.comboCmd_3.currentTextChanged.connect(self.cmd3_combo)
        self.comboCmd_4.currentTextChanged.connect(self.cmd4_combo)

        self.lineSearchpkg.textChanged.connect(self.search_pkg)
        self.listWidget.itemClicked.connect(self.chooseprocess)
        self.btnExit.clicked.connect(self.exitnode)

        self.btnTopiclistReset.clicked.connect(self.topiclist_btn)
        self.btnTopic.clicked.connect(self.topic_btn)

        self.checkOnce.stateChanged.connect(self.pubonce_check)

        self.btnPub.clicked.connect(self.publish_btn)
        self.btnPubEnd.clicked.connect(self.publishend_btn)

        self.btnPose.clicked.connect(self.btnshowpose)
        self.btnPosestop.clicked.connect(self.btnstopshowpose)

        self.linelix.textChanged.connect(self.setpubcmd)
        self.lineliy.textChanged.connect(self.setpubcmd)
        self.lineliz.textChanged.connect(self.setpubcmd)
        self.lineanx.textChanged.connect(self.setpubcmd)
        self.lineany.textChanged.connect(self.setpubcmd)
        self.lineanz.textChanged.connect(self.setpubcmd)

        self.btnPubEnd.setEnabled(False)
        self.btnPosestop.setEnabled(False)

        self.btnServiceReset.clicked.connect(self.servicelist_btn)
        self.btnService.clicked.connect(self.service_btn)

        self.btnCall.clicked.connect(self.call_btn)
        self.lineCallcmd.returnPressed.connect(self.call_btn)

    def cmd1_combo(self):
        self.cmd_1 = self.comboCmd_1.currentText()
        self.lineSearchpkg.clear()
        self.lineCmd.setText(f"{self.cmd_1} ")
        self.comboCmd_2.clear()
        self.comboCmd_2.addItem("")
        self.comboCmd_3.clear()
        self.comboCmd_4.clear()

        if self.cmd_1 == "ros2 run" or self.cmd_1 == "ros2 launch":
            self.all_package = os.popen("ros2 pkg list").read().split("\n")[:-1]
            self.package_list = []
            for package in self.all_package:
                self.package_list.append(package.split(" ")[0])

            self.comboCmd_2.addItems(self.package_list)
        
        elif self.cmd_1 == "ros2 topic":
            topic_cmd = ["bw", "delay", "echo", "find", "hz", "info", "list", "pub", "type"]

            self.comboCmd_2.addItems(topic_cmd)

        elif self.cmd_1 == "ros2 node":
            node_cmd = ["info", "list"]

            self.comboCmd_2.addItems(node_cmd)

        elif self.cmd_1 == "ros2 service":
            service_cmd = ["call", "find", "info", "list", "type"]

            self.comboCmd_2.addItems(service_cmd)

    def cmd2_combo(self):
        self.cmd_2 = self.comboCmd_2.currentText()
        self.comboCmd_3.clear()
        self.comboCmd_4.clear()
        self.comboCmd_3.addItem("")
        self.lineCmd.setText(f"{self.cmd_1} {self.cmd_2} ")

        if self.cmd_1 == "ros2 run":
            path = f"/opt/ros/jazzy/lib/{self.cmd_2}"
            if os.path.exists(path):
                node_list = os.popen(f"ls {path}").read().split("\n")

                for node in node_list:
                    self.comboCmd_3.addItem(node)

        if self.cmd_1 == "ros2 launch":
            if self.cmd2 != "":
                self.launch_pwd = os.popen(f"ros2 pkg list {self.cmd_2}").read().split("\n")[0]
                find_launch = os.popen(f"ls {self.launch_pwd}").read().split("\n")

                if "launch" in find_launch:
                    launch_list = os.popen(f"ls {self.launch_pwd}/launch").read().split("\n")
                    for launch in launch_list:
                        self.comboCmd_3.addItem(launch)

    def cmd3_combo(self):
        self.comboCmd_4.clear()
        self.comboCmd_4.addItem("")
        self.cmd_3 = self.comboCmd_3.currentText()
        self.lineCmd.setText(f"{self.cmd_1} {self.cmd_2} {self.cmd_3} ")

        if self.cmd_1 == "ros2 launch":
            try:
                txt = self.launch_pwd + "/launch/" + self.cmd_3
                with open(txt, "r") as f:
                    launch_file = f.read()

                arg_list = []
                for i in re.findall(r"<arg\s.+/>", launch_file):
                    launch_arg = re.findall(r'name="(\w+)"', i)[0]
                    if launch_arg not in arg_list:
                        arg_list.append(launch_arg)
                        self.comboCmd_4.addItem(launch_arg)
            except:
                pass

    def cmd4_combo(self):
        self.cmd_4 = self.comboCmd_4.currentText()
        if self.cmd_1 == "ros2 launch" and self.cmd_3 != "":
            self.lineCmd.insert(f" {self.cmd_4}:=")

    def search_pkg(self):
        self.comboCmd_2.clear()
        self.comboCmd_3.clear()
        self.comboCmd_4.clear()
        self.pkgsearch = self.lineSearchpkg.text()
        self.comboCmd_2.addItem("")

        for package in self.package_list:
            if self.pkgsearch in package:
                self.comboCmd_2.addItem(package.split(" ")[0])

    def cmd_clicked(self):
        self.cmd = self.lineCmd.text()
        command = self.cmd
        if self.terminalflag:
            command = f"gnome-terminal -- bash -c '{command}; exec bash'"

        self.node = subprocess.Popen(command, shell=True, stdout=subprocess.PIPE, encoding='utf-8')
        if "ros2 run" in self.cmd:
            parts = self.cmd.split()
            if len(parts) > 3:
                nodename = parts[3]
                if nodename != "" and nodename not in self.runlist:
                    self.runlist.append(nodename)
        self.processlist()

    def terminal_check(self):
        self.terminalflag = self.checkTerminal.isChecked()

    def endall_btn(self):
        for key, val in self.nodedict.items():
            try:
                os.kill(val, signal.SIGTERM)
            except Exception as e:
                pass

        exit()

    def exitnode(self):
        node = self.linePro.text()
        os.kill(self.nodedict[node], signal.SIGTERM)
        del self.nodedict[node]
        self.runlist.remove(node)
        self.processlist()
        self.linePro.clear()

    def chooseprocess(self):
        name = self.listWidget.currentItem().text()
        self.linePro.setText(name)

    def processlist(self):
        self.listWidget.clear()
        time.sleep(1)

        self.pdict = {}
        for proc in psutil.process_iter():
            try:
                pname = proc.name()
                pid = proc.pid
                pstatus = proc.status()
                self.pdict[pid] = pname
                if pname == "python3" and pstatus == "sleeping" and self.app_pid < pid:
                    self.runpid.append(pid)
            except:
                pass

        nodedict_copy = self.nodedict.copy()
        for key, value in nodedict_copy.items():
            if value not in self.pdict:
                del self.nodedict[key]
                self.runlist.remove(key)
                if value in self.runpid:
                    self.runpid.remove(value)

        if len(self.runlist) > len(self.nodedict):
            for proc in psutil.process_iter(['pid', 'name', 'cmdline']):
                try:
                    p_name = proc.info['name']
                    for run_name in self.runlist:
                        if run_name == p_name and run_name not in self.nodedict:
                            self.nodedict[run_name] = proc.info['pid']
                            break
                except (psutil.NoSuchProcess, psutil.AccessDenied):
                    pass

        for key, value in self.nodedict.items():
            self.listWidget.addItem(f"{key}")

    def btnshowpose(self):
        self.pose()
        self.btnPose.setEnabled(False)
        self.btnPosestop.setEnabled(True)

    def btnstopshowpose(self):
        self.pose_thread.stop()
        self.btnPose.setEnabled(True)
        self.btnPosestop.setEnabled(False)

    def pose(self):
        turtle_name = self.topic.split("/")[1]
        self.echocmd = f"ros2 topic echo /{turtle_name}/pose"
        self.pose_thread = CmdThread(self)
        self.pose_thread.update.connect(self.pose_output)
        self.pose_thread.daemon = True
        self.pose_thread.start()

    def pose_output(self, output):
        self.textEcho.append(output)

    def setpubcmd(self):
        self.linearx = self.linelix.text()
        self.lineary = self.lineliy.text()
        self.linearz = self.lineliz.text()
        self.angularx = self.lineanx.text()
        self.angulary = self.lineany.text()
        self.angularz = self.lineanz.text()
        if not self.topic == None:
            turtle_name = self.topic.split("/")[1]
            self.echocmd = f"ros2 topic echo /{turtle_name}/pose"

        pubcmd = f"ros2 topic pub {self.once} {self.topic} {self.topicmsg}"

        self.linePubcmd.setText(pubcmd)
        cmdvel = f" '{{linear: {{x: {self.linearx}, y: {self.lineary}, z: {self.linearz}}}, angular: {{x: {self.angularx}, y: {self.angulary}, z: {self.angularz}}}}}'"
        if "cmd_vel" in self.topic:
            self.linePubcmd.insert(cmdvel)

        self.linePose.setText(self.echocmd)

    def publishend_btn(self):
        try:
            os.kill(self.pubpid, signal.SIGTERM)
        except:
            pass
        self.btnPub.setEnabled(True)
        self.btnPubEnd.setEnabled(False)

    def publish_btn(self):
        pubcmd = self.linePubcmd.text()
        if self.terminalflag:
            pubcmd = "gnome-terminal -- " + pubcmd

        if self.onceflag:
            self.pubprocess = subprocess.Popen(pubcmd, shell=True, stdout=subprocess.PIPE)
            self.pubpid = self.pubprocess.pid + 1
            try:
                os.kill(self.pubpid, signal.SIGTERM)
            except:
                pass
        else:
            if not self.terminalflag:
                self.btnPub.setEnabled(False)
                self.btnPubEnd.setEnabled(True)
            self.pubprocess = subprocess.Popen(pubcmd, shell=True, stdout=subprocess.PIPE)
            self.pubpid = self.pubprocess.pid + 1

    def pubonce_check(self):
        self.onceflag = self.checkOnce.isChecked()
        if self.onceflag:
            self.once == "--once"
        else:
            self.once = ""
        self.setpubcmd()

    def topic_btn(self):
        self.topic = self.comboTopiclist.currentText()
        self.topicmsg = os.popen(f"ros2 topic type {self.topic}").read().replace("\n", "")
        self.lineTopicmsg.setText(self.topicmsg)
        self.setpubcmd()

    def topiclist_btn(self):
        topiclist = os.popen("ros2 topic list").read().split("\n")
        self.comboTopiclist.clear()
        self.comboTopiclist.addItem("")
        for topic in topiclist:
            self.comboTopiclist.addItem(topic)

    def call_btn(self):
        call_cmd = self.lineCallcmd.text()
        if self.terminalflag:
            call_cmd = f"gnome-terminal -- bash -c '{call_cmd}; exec bash'"
        self.pubprocess = subprocess.Popen(call_cmd, shell=True, stdout=subprocess.PIPE, encoding='utf-8')
        self.pubpid = self.pubprocess.pid + 1

        output, err = self.pubprocess.communicate()
        self.textCallshow.setText(output)

    def service_btn(self):
        self.service = self.comboServicelist.currentText()
        if not self.service:
            return

        self.servicesrv = os.popen(f"ros2 service type {self.service}").read().strip()
        self.lineSrvtype.setText(self.servicesrv)
        srvshow = os.popen(f"ros2 interface show {self.servicesrv}").read()

        self.textSrv.setText(srvshow)

        request_args = []
        for line in srvshow.split('\n'):
            if '---' in line:
                break

            line_without_comment = line.split('#')[0].strip()

            if not line_without_comment or '=' in line_without_comment:
                continue

            arg_name = line_without_comment.split()[-1]
            request_args.append(arg_name)

        yaml_args = ", ".join([f"{arg}: 0" for arg in request_args])

        call_cmd = f"ros2 service call {self.service} {self.servicesrv} \"{{{yaml_args}}}\""
        self.lineCallcmd.setText(call_cmd)

    def servicelist_btn(self):
        servicelist = os.popen(f"ros2 service list").read().split("\n")
        self.comboServicelist.clear()
        self.comboServicelist.addItem("")
        for service in servicelist[:-1]:
            self.comboServicelist.addItem(service)


if __name__ == "__main__":
    app = QApplication(sys.argv)
    myWindow = WindowClass()
    myWindow.show()
    sys.exit(app.exec_())