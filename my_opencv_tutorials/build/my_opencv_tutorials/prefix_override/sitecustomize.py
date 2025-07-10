import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/kth/robot_dev/my_opencv_tutorials/install/my_opencv_tutorials'
