import rclpy
from rclpy.node import Node
from roboid import *
from sensor_msgs.msg import LaserScan
from std_msgs.msg import Float32MultiArray
from sensor_msgs.msg import LaserScan
import math


class motor(Node):
    def __init__(self):
        super().__init__("motor")
        self.subscriber = self.subscriptions(LaserScan, "scan", self.lidar_callback, 10)
        self.publisher_ = self.create_publisher(Float32MultiArray, "motor_topic", 10)
        self.timer = self.create_timer(1, self.motor_publish)
    def lidar_callback(self, msg):
        list_msg_ranges = list(msg.ranges)
        minimum_ranges = min(list_msg_ranges)
        
        if (minimum_ranges < 0.5): #50 cm 보다 작다면
            minimum_index = list_msg_ranges.index(minimum_ranges)
            

    def motor_publish(self):
        msg = Float32MultiArray()

        msg.data = [10.0, 10.0]

        self.publisher_.publish(msg)
    def motor_stop(self):
        msg = Float32MultiArray()

        msg.data = [0.0, 0.0]
        self.publisher_.publish(msg)

def main(args=None):
    rclpy.init(args=args)
    lidar_publish = motor()
    try:
        rclpy.spin(lidar_publish)
    finally:
        lidar_publish.motor_stop()
        rclpy.shutdown()
        lidar_publish.destroy_node()


if __name__ == "__main__":
    main()
