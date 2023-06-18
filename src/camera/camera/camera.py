import numpy as np
import cv2
from cv_bridge import CvBridge

# ROS Library
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import *
from std_msgs.msg import *

# Beagle Library
import roboidai as ai
class camera_pub(Node):
    def __init__ (self, camera_instance_):
        self.camera_instance = camera_instance_

        node_name = 'camera' # ROS2 노드 이름
        topic_msg_type = Image # Topic msg type
        topic_msg_name = 'camera' # Topic msg name
        qos_profile = 10
        fps = 15 # 얼마의 주기로 topic msg 를 보낼 것인지 (카메리의 FPS와 동일하게 설정)
        timer_period = 1/fps



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



        super().__init__(node_name)

        self.br = CvBridge()
        self.publisher_ = self.create_publisher(topic_msg_type, 
                                                topic_msg_name, 
                                                qos_profile)
  
        self.timer = self.create_timer(timer_period, self.camera_publish)

    def camera_undistort(self, image):



        # 카메라 매개변수로 카메라 행렬 생성
        camera_matrix = np.array([[self.fx, 0, self.cx], [0, self.fy, self.cy], [0, 0, 1]])

        # 왜곡 계수 생성
        dist_coeffs = np.array([self.k1, self.k2, self.p1, self.p2, self.k3])  # 수정: k3 왜곡 계수 추가


        # 이미지 크기에 맞는 새로운 카메라 매개변수 계산
        new_camera_matrix, roi = cv2.getOptimalNewCameraMatrix(camera_matrix, dist_coeffs, (image.shape[1], image.shape[0]), 1)

        # 보정된 이미지 계산
        undistorted_image = cv2.undistort(image, camera_matrix, dist_coeffs, None, new_camera_matrix)

        # ROI를 사용하여 보정된 이미지를 적절한 크기로 잘라냄
        x, y, w, h = roi
        undistorted_image = undistorted_image[y:y+h, x:x+w]

        return undistorted_image # 보정된 이미지 출력

    def camera_publish(self):
        cam_image = self.camera_instance.read()
        calibrated_image = self.camera_undistort(cam_image)
        try:
            camera_msg = self.br.cv2_to_imgmsg(calibrated_image)
            self.publisher_.publish(camera_msg) # Init에서 create_publish 한 instance를 이용해 publish 
        except (UnboundLocalError, TypeError) as e:
            self.get_logger().info('Camera is loading : {0}'.format(e))
        except Exception as e:
            self.get_logger().info('Error : {error}'.format(error = e))
        else:
            self.get_logger().info('Camera published : {0}x{1}'.format(camera_msg.width, camera_msg.height))
def main(args = None):
    camera_type = 'ip0'
    cam = ai.Camera(camera_type)
    rclpy.init(args = args)
    node = camera_pub(cam)
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        node.get_logger().info('Keyboard INterrupt (SIGINT)')
    finally:
        node.destroy_node()
        rclpy.shutdown()
if __name__ == '__main__':
    main()