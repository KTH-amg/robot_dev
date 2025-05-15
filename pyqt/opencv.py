import sys
from PyQt6.QtCore import QObject
from PyQt6.QtWidgets import *
from PyQt6.QtGui import *
from PyQt6 import uic
from PyQt6.QtCore import *
import cv2, imutils
import time
import datetime

from_class = uic.loadUiType("opencv.ui")[0]

class Camera(QThread):
    update = pyqtSignal()

    def __init__(self, sec=0, parent=None):
        super().__init__()
        self.main = parent
        self.running = True

    def run(self):
        #count = 0
        while self.running == True:
            self.update.emit()
            #time.sleep(0.05)
            self.msleep(50)

    def stop(self):
        self.running = False

class WindowClass(QMainWindow, from_class):
    def __init__(self):
        super().__init__()
        self.setupUi(self)
        self.setWindowTitle("I Want To Break Free")

        self.isCameraOn = False
        self.isRecStart = False
        self.btnRecord.hide()

        self.pixmap = QPixmap()

        self.camera = Camera(self)
        self.camera.daemon = True

        self.record = Camera(self)
        self.record.daemon = True

        self.show_vid = Camera(self)
        self.show_vid.daemon = True

        self.btnOpen.clicked.connect(self.openFile)
        self.btnCamera.clicked.connect(self.clickCamera)
        self.camera.update.connect(self.updateCamera)
        self.btnRecord.clicked.connect(self.clickRecord)
        self.record.update.connect(self.updateRecording)
        self.show_vid.update.connect(self.updateVideo)

    def openFile(self):
        file = QFileDialog.getOpenFileName(filter='Image (*.*)')

        file_type = file[0].split('.')[1]
        if file_type in ['jpg', 'png', 'bmp']:
            image = cv2.imread(file[0])
            image = cv2.cvtColor(image, cv2.COLOR_BGR2RGB)

            h, w, c = image.shape
            qimage = QImage(image.data, w, h, w*c, QImage.Format.Format_RGB888)

            self.pixmap = self.pixmap.fromImage(qimage)
            self.pixmap = self.pixmap.scaled(self.label.width(), self.label.height())

            self.label.setPixmap(self.pixmap)
        elif file_type in ['avi', 'mp4']:
            self.show_vid.running = True
            self.show_vid.start()
            self.video = cv2.VideoCapture(file[0])

    def updateVideo(self):
        retval, self.image = self.video.read()
        if retval:
            #self.image = cv2.cvtColor(self.image, cv2.COLOR_BGR2RGB)
            h, w, c = self.image.shape
            qimage = QImage(self.image.data, w, h, w*c, QImage.Format.Format_RGB888)

            self.pixmap = self.pixmap.fromImage(qimage)
            self.pixmap = self.pixmap.scaled(self.label.width(), self.label.height())

            self.label.setPixmap(self.pixmap)


    def clickCamera(self):
        if self.isCameraOn == False:
            self.btnCamera.setText("Camera Off")
            self.isCameraOn = True
            self.btnRecord.show()

            self.cameraStart()
        else:
            self.btnCamera.setText("Camera On")
            self.isCameraOn = False
            self.btnRecord.hide()

            self.cameraStop()
            self.recordingStop()

    def clickRecord(self):
        if self.isRecStart == False:
            self.btnRecord.setText("Rec Stop")
            self.isRecStart = True

            self.recordingStart()
        else:
            self.btnRecord.setText("Rec Start")
            self.isRecStart = False

            self.recordingStop()

    def cameraStart(self):
        self.camera.running = True
        self.camera.start()
        self.video = cv2.VideoCapture(-1)

    def cameraStop(self):
        self.camera.running = False
        self.video.release()

    def updateCamera(self):
        retval, self.image = self.video.read()
        if retval:
            self.image = cv2.cvtColor(self.image, cv2.COLOR_BGR2RGB)

            h, w, c = self.image.shape
            qimage = QImage(self.image.data, w, h, w*c, QImage.Format.Format_RGB888)

            self.pixmap = self.pixmap.fromImage(qimage)
            self.pixmap = self.pixmap.scaled(self.label.width(), self.label.height())

            self.label.setPixmap(self.pixmap)

    def recordingStart(self):
        self.record.running = True
        self.record.start()

        self.now = datetime.datetime.now().strftime('%Y%m%d_%H%M%S')
        filename = self.now + '.avi'
        self.fourcc = cv2.VideoWriter_fourcc(*'DIVX')

        w = int(self.video.get(cv2.CAP_PROP_FRAME_WIDTH))
        h = int(self.video.get(cv2.CAP_PROP_FRAME_HEIGHT))

        self.writer = cv2.VideoWriter(filename, self.fourcc, 20, (w, h))

    def recordingStop(self):
        self.record.running = False

        if self.isRecStart == True:
            self.writer.release()

    def updateRecording(self):
        self.writer.write(cv2.cvtColor(self.image, cv2.COLOR_BGR2RGB))

if __name__ == "__main__":
    app = QApplication(sys.argv)
    myWindows = WindowClass()
    myWindows.show()

    sys.exit(app.exec())