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
        topic_msg_name = 'camera_raw' # Topic msg name
        qos_profile = 10
        fps = 15 # 얼마의 주기로 topic msg 를 보낼 것인지 (카메리의 FPS와 동일하게 설정)
        timer_period = 1/fps

        super().__init__(node_name)

        self.br = CvBridge()
        self.publisher_ = self.create_publisher(topic_msg_type, 
                                                topic_msg_name, 
                                                qos_profile)
  
        self.timer = self.create_timer(timer_period, self.camera_publish)


    def camera_publish(self):
        cam_image = self.camera_instance.read()

        try:
            camera_msg = self.br.cv2_to_imgmsg(cam_image)
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