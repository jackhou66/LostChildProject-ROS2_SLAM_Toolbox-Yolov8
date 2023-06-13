import rclpy
from rclpy.node import Node
from std_msgs.msg import Float32MultiArray
from roboid import *
import math


class PulsePublisher(Node):
    def __init__(self, b):
        self.b = b
        super().__init__("encoder_publisher")
        self.publisher = self.create_publisher(Float32MultiArray, "encoder_topic", 10)
        self.timer = self.create_timer(1.0, self.publish_encoder_data)

    def publish_encoder_data(self):
        pulses_per_revolution = 1000
        time_interval = 1.0
        # 엔코더 값은 정수 -2147483648 ~ 2147483647 초기 0 의 정수 값을 가진다
        pulse_right = self.b.left_encoder()
        pulse_left = self.b.right_encoder()

        scale_factor = (2 * math.pi) / pulses_per_revolution
        velocity_right = pulse_right * scale_factor
        velocity_left = pulse_left * scale_factor
        velocity_right_mps = velocity_right * (
            math.pi * 0.05
        )  # 지름 5cm인 바퀴의 한바퀴당 가는 거리. m 단위
        velocity_left_mps = velocity_left * (math.pi * 0.05)

        msg = Float32MultiArray()
        msg.data = [velocity_left_mps, velocity_right_mps]

        self.publisher.publish(msg)

        self.get_logger().info("Published Gyro value: %s" % msg.data)


def main(args=None):
    b = Beagle()
    rclpy.init(args=args)
    encoder_publisher = PulsePublisher(b)
    rclpy.spin(encoder_publisher)
    encoder_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()
