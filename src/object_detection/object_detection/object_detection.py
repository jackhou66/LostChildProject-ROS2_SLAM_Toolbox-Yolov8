import numpy as np
import cv2
from cv_bridge import CvBridge

# ROS Library
import rclpy
from rclpy.action import ActionServer
from rclpy.executors import MultiThreadedExecutor
from rclpy.node import Node
from sensor_msgs.msg import *
from std_msgs.msg import *
from msg_interface.action import AString

from ultralytics import YOLO
import os


import time

# 멀티 스레딩
from threading import Lock

class object_detection(Node):
    result_plotted_img = None
    image = None
    def __init__ (self, model):
        self.model = model
        self.shared_data = None

        # 멀티 스레딩 용도
        self.lock = Lock()


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
        
        # None 일 경우 아이를 찾는 중이 아님 즉 Object detection 비활성화

        self.target_childeren_id = None

        # 아이를 찾은 경우 이 변수가 None에서 찾은 결과로 바뀜 
        # 그 전까지 계속 FEEDBACK 반환
        # action 이 반환되면 다시 None으로 변경
        self.childeren_match_result = None

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

        self._action_server = ActionServer(self, AString, 'detect_childeren', self.action_callback)
        
        self.get_logger().info('Object_detection')
        self.get_logger().info('Waiting undistorted camera image input')


    def action_callback(self, goal_handle):
        self.get_logger().info('Executing goal...')
        feedback_msg = AString.Feedback()
        result = AString.Result()

        target_child_name = goal_handle.request.input_string
        # 아예 없는 이름이면 NULL, NULL 반환

        # 찾는 중이면 Searching
        # 찾은 다음에는 바로 Founded 이름

        # Result 는 box값
        if target_child_name in self.id2name:
            # 해당 이름의 아이를 찾는 다고 전체에서 설정

            # target_childeren_id를 target_child_name의 id로 변경
            
            # self.target_childeren_id는 여기서만 바꾸기 때문에 lock을 하지 않았다.
            self.target_childeren_id = self.id2name.index(target_child_name)

            # 아이를 완전히 찾을때 까지 feedback 메세지를 계속 보낸다.
            # 아이를 찾으면 self.childeren_match_result 가 None 이 아니게 된다.
            while self.childeren_match_result is None:
                feedback_msg.feedback_string = 'Searching {0}'.format(target_child_name)
                goal_handle.publish_feedback(feedback_msg)
                time.sleep(1)

            feedback_msg.feedback_string = 'Founded {0}'.format(target_child_name)
            result.output_string = self.childeren_match_result


            # 아이를 다 찾았으면 다시 초기화 한다.
            with self.lock:
                self.childeren_match_result = None
            self.target_childeren_id = None
            
            # 성공한 경우는 succeed하기
            goal_handle.succeed()
        else: # 찾을려는 아이 이름이 없는 경우
            feedback_msg.feedback_string = 'NULL'
            result.output_string = 'NULL'

        goal_handle.publish_feedback(feedback_msg)

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
    def object_detect(self, image, cls_id):
        assert (cls_id < len(self.id2name) and cls_id >= 0)

        pred_result = list(self.model(image)) # 예측된 결과 모두 불러오기
        result_plotted_img = pred_result[0].plot() # 예측된 결과 이미지 그리기
        result_boxes = pred_result[0].boxes # 예측된 결과의 모든 박스 좌표 가져오기 그 중에서 골라야 된다.

        #print (pred_result)
        #print (result_boxes)


        match_result = []
        for box in result_boxes:
            if box.cls == cls_id:
                match_result.append(box)
        return (result_plotted_img, match_result)
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


    def camera_callback(self, msg):

        # image는 동시에 쓰는 것이 아니기 때문에 lock을 하지 않았다.
        self.image = self.br.imgmsg_to_cv2(msg)

        self.get_logger().info('Image subscribed {0}'.format(self.image.shape))
        


        # 찾으려는 target의 id가 있는 경우

        # 중간에 self.target_childeren_id가 not None이었다가 id2name에서 None이 되버리는 경우가 생길 수 있으므로 하나로 묶어줬다.

        with self.lock:
            if self.target_childeren_id is not None:
                ri, match_result = self.object_detect(self.image, self.target_childeren_id)
                self.get_logger().info('Target Childeren id : {0}, name : {1}'.format(self.target_childeren_id, self.id2name[self.target_childeren_id]))

                # 찾은 경우
                if len(match_result) > 0:
                    # action 부분에서도 바꾸기 때문에 충돌 방지를 위해 설정
                    self.childeren_match_result = str(match_result)
                    #self.id2name[self.target_childeren_id]
                self.detect_image_recursive_publish_.publish(self.br.cv2_to_imgmsg(ri))
        
def main(args = None):
    rclpy.init(args = args)
    print(os.getcwd())
    model = YOLO('src/object_detection/object_detection/weight_file/best.pt')
    node = object_detection(model)
    executor = MultiThreadedExecutor()
    try:
        rclpy.spin(node, executor=executor)
    except KeyboardInterrupt:
        node.get_logger().info('Keyboard INterrupt (SIGINT)')
    finally:
        node.destroy_node()
        rclpy.shutdown()
if __name__ == '__main__':
    main()