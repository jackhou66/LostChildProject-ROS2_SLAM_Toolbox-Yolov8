import numpy as np
import cv2
from cv_bridge import CvBridge

# ROS Library
import rclpy
from rclpy.action import ActionServer
from rclpy.node import Node
from sensor_msgs.msg import *
from std_msgs.msg import *
from msg_interface.action import AString

from ultralytics import YOLO
import os


import time
import threading

class object_detection(Node):
    result_plotted_img = None
    image = None
    def __init__ (self, model):
        self.model = model


        node_name = 'object_detection' # ROS2 노드 이름
        sub_topic_msg_type = Image
        sub_topic_msg_name = 'camera'
        qos_profile = 10


        # RVIZ2에서 보기 위해 자기한테 보내고 자기가 확인할 것임
        detect_image_pub_topic_msg_type = Image
        detect_image_pub_topic_msg_name = 'detected_image'
        detect_image_sub_topic_msg_type = detect_image_pub_topic_msg_type
        detect_image_sub_topic_msg_name = detect_image_pub_topic_msg_name
        super().__init__(node_name)

        self.br = CvBridge()

        # 서비스를 입력 받아서 받은 queue에 찾으려는 아이 목록 클래스 변수로 저장하기
        #self.target_childeren_id_set = set()
        #self.target_childeren_id_set.add(2)
        

        self.id2name = ['ben_afflek', 'elton_john', 'face', 'gang_ho_dong', 'iu', 'jerry_seinfeld', 'kim_soo_hyun', 'madonna', 'mindy_kaling', 'nam_joo_hyuk', 'newjeans_minji', 'park_soi']



        self.image_subscriber_ = self.create_subscription(sub_topic_msg_type, 
                                                sub_topic_msg_name, 
                                                self.camera_callback,
                                                qos_profile)
        

        self.detect_image_recursive_publish_ = self.create_publisher(
                                                detect_image_pub_topic_msg_type, 
                                                detect_image_pub_topic_msg_name, 
                                                qos_profile)
        
        self.detect_image_recursive_subscriber_ = self.create_subscription(
                                                detect_image_sub_topic_msg_type, 
                                                detect_image_sub_topic_msg_name, 
                                                self.dummy,
                                                qos_profile)

        self._action_server = ActionServer(self, AString, 'string_action', self.execute_callback)
        
        self.get_logger().info('Object_detection')
        self.get_logger().info('Waiting undistorted camera image input')


    def execute_callback(self, goal_handle):
        self.get_logger().info('Executing goal...')
        feedback_msg = AString.Feedback()
        feedback_msg.feedback_string = 'Processing: ' + goal_handle.request.input_string
        goal_handle.publish_feedback(feedback_msg)
        
        result = AString.Result()
        result.output_string = 'Output: ' + goal_handle.request.input_string
        return result
    def show_image(self, image):
        try:
            cv2.imshow("YOLOv8 Inference", image)
            cv2.waitKey(1)
        except Exception as e:
            self.get_logger().error("{0}".format(e))
            cv2.destroyAllWindows()
    def dummy(self, msg):
        pass
    def object_detect(self, image):
        pred_result = list(self.model(image)) # 예측된 결과 모두 불러오기
        #self.get_logger().info('self.image {0}'.format(self.image))
        result_boxes = pred_result[0].boxes # 예측된 결과의 모든 박스 좌표 가져오기 그 중에서 골라야 된다.

        # print(result_boxes.cls)
        # founded = self.target_childeren_list & set(result_boxes.cls)
        # if founded:

        #     for i in founded:
        #         result_box_index = result_boxes.cls.index(i) # 찾았으니깐 반드시 i 클래스가 존재해야됨 실제 index반환 만약 여러게라면 첫번째 index 반환
        #         result_box = result_boxes[result_box_index]
        #         center_x, center_y, width, height = list(result_box.xywhn[0])

        #         self.get_logger().info('Childeren class id : {0}, name : {1} founded at {x} {y} {w} {h}'.format(i, self.id2name[i], center_x, center_y, width, height))
        #         self.target_childeren_list.pop(i)
            
            # for i, box in enumerate(result_boxes): # 모든 박스 불러오기
            #     self.get_logger().info('box cls : {0}'.format(box.cls)) # 박스의 클래스 출력
            #     if box.cls in self.target_childeren_class_id:
            #         self.get_logger().info('{0}'.format(box.xywhn))
            #         center_x, center_y, width, height = list(box.xywhn[0])
            #         self.get_logger().info('{name} childeren found at {x} {y} {w} {h}'.format(name = i, x = center_x, y= center_y, w=width, h=height))
            #         self.get_logger().info('Robot moving')

            #         break

        
        result_plotted_img = pred_result[0].plot() # 예측된 결과 이미지 그리기
        return (result_plotted_img, result_boxes)
    def camera_callback(self, msg):
        self.image = self.br.imgmsg_to_cv2(msg)
        self.get_logger().info('Image subscribed {0}'.format(self.image.shape))
        self.get_logger().info('Target Childeren {0}'.format(self.target_childeren_list))
        ri, rb = self.object_detect(self.image)
        self.detect_image_recursive_publish_.publish(self.br.cv2_to_imgmsg(ri))
        
def main(args = None):
    rclpy.init(args = args)
    print(os.getcwd())
    model = YOLO('src/object_detection/object_detection/weight_file/best.pt')
    node = object_detection(model)
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        node.get_logger().info('Keyboard INterrupt (SIGINT)')
    finally:
        node.destroy_node()
        rclpy.shutdown()
if __name__ == '__main__':
    main()