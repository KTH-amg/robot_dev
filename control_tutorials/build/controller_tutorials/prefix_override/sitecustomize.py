import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/kth/robot_dev/control_tutorials/install/controller_tutorials'
