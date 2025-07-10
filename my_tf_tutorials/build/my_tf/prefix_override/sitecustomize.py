import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/kth/robot_dev/my_tf_tutorials/install/my_tf'
