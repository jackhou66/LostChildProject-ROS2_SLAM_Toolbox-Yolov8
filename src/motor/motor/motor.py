import rclpy
from rclpy.node import Node
from roboid import *
from sensor_msgs.msg import LaserScan
from std_msgs.msg import Header
import math


class lidara(Node):
    def __init__(self, b):
        self.b = b
        super().__init__("motor")
        self.publisher_ = self.create_publisher(LaserScan, "motor", 10)
        self.timer = self.create_timer(1, self.lidar_publish)

    def lidar_publish(self):
        self.b.wheels(100, 100)


def main(args=None):
    b = Beagle()
    rclpy.init(args=args)
    lidar_publish = lidara(b)
    rclpy.spin(lidar_publish)
    lidar_publish.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()
