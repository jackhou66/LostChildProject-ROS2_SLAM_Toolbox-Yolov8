import numpy as np
import cv2
from cv_bridge import CvBridge

# ROS Library
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import *
from std_msgs.msg import *

from ultralytics import YOLO
import os
import time
import threading
class object_detection(Node):
    def __init__ (self, model):
        self.model = model


        node_name = 'object_detection' # ROS2 노드 이름
        sub_topic_msg_type = Image
        sub_topic_msg_name = 'camera_undistorted_image'

        qos_profile = 10

        super().__init__(node_name)

        self.br = CvBridge()

        # 서비스를 입력 받아서 받은 queue에 찾으려는 아이 목록 클래스 변수로 저장하기
        self.target_childeren_class_id = [2]

        self.image_subscriber_ = self.create_subscription(sub_topic_msg_type, 
                                                sub_topic_msg_name, 
                                                self.camera_callback,
                                                qos_profile)
        self.get_logger().info('Object_detection')
        self.get_logger().info('Waiting undistorted camera image input')

        self.get_result_img = cv2.imread('src/bus.jpg')
        t1 = threading.Thread(target=self.show_image)
        t1.start()
    def show_image(self):
        while True:
            cv2.imshow("YOLOv8 Inference", self.get_result_img)
            cv2.waitKey(2)
        cv2.destroyAllWindows()
    def object_detect(self, image):
        pred_result = list(self.model(image)) # 예측된 결과 모두 불러오기

        get_boxes = pred_result[0].boxes # 예측된 결과의 박스 좌표 가져오기
        self.get_result_img = pred_result[0].plot() # 예측된 결과 이미지 그리기

        
        for i, box in enumerate(get_boxes): # 모든 박스 불러오기
            print (box.cls) # 박스의 클래스 출력
            if box.cls in self.target_childeren_class_id:
                print (box.xywhn)
                center_x, center_y, width, height = list(box.xywhn[0])
                self.get_logger().info('{name} childeren found at {x} {y} {w} {h}'.format(name = i, x = center_x, y= center_y, w=width, h=height))
                self.get_logger().info('Robot moving')

                break
                # error_x = 0.5 - center_x #목표값 - 현재 값
                

                # # action 으로 처리하기
                # if abs(error_x) <= allowed_error:
                #     print ("{name} childeren infront of me".format(name = target_child_name))
                #     #Robot Stop
                
        
    def camera_callback(self, msg):
        self.image = self.br.imgmsg_to_cv2(msg)
        self.object_detect(self.image)

        
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