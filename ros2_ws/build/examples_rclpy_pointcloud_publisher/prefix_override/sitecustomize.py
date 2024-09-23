import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/agusb/Desktop/ROS2-Teleoperacion-Wifi/ros2_ws/install/examples_rclpy_pointcloud_publisher'
