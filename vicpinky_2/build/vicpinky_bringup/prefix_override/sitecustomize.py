import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/kth/robot_dev/vicpinky_2/install/vicpinky_bringup'
