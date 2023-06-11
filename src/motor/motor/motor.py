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
        self.subscriber = self.create_subscription(LaserScan, "scan", self.lidar_callback, 10)
        self.publisher_ = self.create_publisher(Float32MultiArray, "motor_topic", 10)
        #self.timer = self.create_timer(1, self.motor_publish)
    def lidar_callback(self, msg):
        list_msg_ranges = list(msg.ranges)
        minimum_ranges = min(list_msg_ranges)
        front = 0
        left = front + 90
        back = left + 90
        right = back + 90
        print (msg.ranges[front], msg.ranges[left], msg.ranges[back], msg.ranges[right])

        if (msg.ranges[front] < 0.3):
            #왼쪽 또는 오른쪽을 비교 한뒤 더 긴 곳으로 간다.
            if (msg.ranges[left] > msg.ranges[right]):
                self.motor_publish(0, 10)
            else:
                self.motor_publish(10, 0)
        elif (msg.ranges[left] < 0.3): # 내 왼쪽에 장애물이 있는 경우
            self.motor_publish(10, 0) #오른쪽으로 튼다.
        elif (msg.ranges[back] < 0.3):# 뒤쪽에 있으면 조금더 빨리 간다.
            self.motor_publish(15, 15)
        elif (msg.ranges[right] < 0.3):#오른쪽에 있으면 왼쪽으로 꺾는다.
            self.motor_publish(0, 10)
        else: # 그냥 괜찮은 경우
            self.motor_publish(10, 10)
        # if (minimum_ranges < 0.5): #50 cm 보다 작다면
        #     minimum_index = list_msg_ranges.index(minimum_ranges)
            

    def motor_publish(self, left, right):
        msg = Float32MultiArray()
        msg.data = [float(left), float(right)]

        self.publisher_.publish(msg)
    def motor_stop(self):
        msg = Float32MultiArray()

        msg.data = [0.0, 0.0]
        self.publisher_.publish(msg)

def main(args=None):
    rclpy.init(args=args)
    motor_publish = motor()
    try:
        rclpy.spin(motor_publish)
    finally:
        motor_publish.motor_stop()
        rclpy.shutdown()
        motor_publish.destroy_node()


if __name__ == "__main__":
    main()
