import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/kth/robot_dev/bt_tutorials/install/py_trees_ros_viewer'
