import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Imu
from geometry_msgs.msg import Vector3
from roboid import *
from std_msgs.msg import Header
import math


class IMUPublisher(Node):
    def __init__(self, b):
        self.b = b
        super().__init__("IMU_publisher")
        self.publisher = self.create_publisher(Imu, "imu_topic", 10)
        self.timer = self.create_timer(1.0, self.publish_imu)

    def publish_imu(self):
        index, x, y, z = self.b.accelerometer()  # 요거는 단위가 g임. 하지만 Acc는 m/s^2을 사용
        index, x1, y1, z1 = self.b.gyroscope()
        msg = Imu()
        msg.header = Header()
        msg.header.frame_id = "imu"
        msg.header.stamp = self.get_clock().now().to_msg()
        acceleration = Vector3()
        angular = Vector3()

        acceleration.x = x * 9.8
        acceleration.y = y * 9.8
        acceleration.z = z * 9.8

        angular.x = x1 * (math.pi / 180)
        angular.y = y1 * (math.pi / 180)
        angular.z = z1 * (math.pi / 180)

        msg.linear_acceleration = acceleration
        msg.angular_velocity = angular

        self.publisher.publish(msg)

        self.get_logger().info("Published value: %s" % msg)


def main(args=None):
    b = Beagle()
    rclpy.init(args=args)
    imu_publisher = IMUPublisher(b)
    rclpy.spin(imu_publisher)
    imu_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()
