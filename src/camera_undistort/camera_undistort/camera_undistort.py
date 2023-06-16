import numpy as np
import cv2
from cv_bridge import CvBridge

# ROS Library
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import *
from std_msgs.msg import *

class camera_undistort(Node):
    def __init__ (self):
        # 카메라 매개변수 설정
        self.rms = 0.628610
        self.fx = 389.438894
        self.fy = 389.438894
        self.cx = 320.000000
        self.cy = 160.000000
        self.k1 = -0.357859
        self.k2 = 0.142288
        self.p1 = -0.010197
        self.p2 = -0.001690
        self.k3 = 0.0  # 추가: k3 왜곡 계수

        self.hfov = 78.8
        self.vfov = 44.7


        node_name = 'camera_undistrot' # ROS2 노드 이름
        sub_topic_msg_type = Image # Topic msg type
        sub_topic_msg_name = 'camera_raw' # Topic msg name


        pub_topic_msg_type = Image
        pub_topic_msg_name = 'camera_undistorted_image'

        qos_profile = 10

        super().__init__(node_name)

        self.br = CvBridge()

        self.publisher_ = self.create_publisher(pub_topic_msg_type, 
                                        pub_topic_msg_name, 
                                        qos_profile)
        self.subscriber_ = self.create_subscription(sub_topic_msg_type, 
                                                sub_topic_msg_name, 
                                                self.camera_callback,
                                                qos_profile)
        self.get_logger().info('Camera undistort')
        self.get_logger().info('Waiting raw camera input')

    def camera_callback(self, msg):



        # 카메라 매개변수로 카메라 행렬 생성
        camera_matrix = np.array([[self.fx, 0, self.cx], [0, self.fy, self.cy], [0, 0, 1]])

        # 왜곡 계수 생성
        dist_coeffs = np.array([self.k1, self.k2, self.p1, self.p2, self.k3])  # 수정: k3 왜곡 계수 추가

        # 왜곡 보정에 사용할 이미지 로드
        image = self.br.imgmsg_to_cv2(msg)

        # 이미지 크기에 맞는 새로운 카메라 매개변수 계산
        new_camera_matrix, roi = cv2.getOptimalNewCameraMatrix(camera_matrix, dist_coeffs, (image.shape[1], image.shape[0]), 1)

        # 보정된 이미지 계산
        undistorted_image = cv2.undistort(image, camera_matrix, dist_coeffs, None, new_camera_matrix)

        # ROI를 사용하여 보정된 이미지를 적절한 크기로 잘라냄
        x, y, w, h = roi
        undistorted_image = undistorted_image[y:y+h, x:x+w]

        # 보정된 이미지 출력
        undistorted_image_msg = self.br.cv2_to_imgmsg(undistorted_image)
        self.publisher_.publish(undistorted_image_msg)
        self.get_logger().info('Undistorted camera published : {0}x{1}'.format(undistorted_image_msg.width, undistorted_image_msg.height))
        #cv2.imshow('Undistorted Image', undistorted_image)
def main(args = None):
    rclpy.init(args = args)
    node = camera_undistort()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        node.get_logger().info('Keyboard INterrupt (SIGINT)')
    finally:
        node.destroy_node()
        rclpy.shutdown()
if __name__ == '__main__':
    main()