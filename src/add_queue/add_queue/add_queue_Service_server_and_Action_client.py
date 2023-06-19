import rclpy
from rclpy.node import Node

# Service
from msg_interface.srv import AddToQueue
from collections import deque

# Action
from rclpy.action import ActionClient
from action_msgs.msg import GoalStatus

# Action용 String
from msg_interface.action import AString

import threading
# MultiTHreading
from rclpy.executors import MultiThreadedExecutor
from threading import Lock

class Server(Node):
    def __init__(self):
        super().__init__("add_to_queue_server")
        self.string_queue = deque()
        self.srv = self.create_service(
            AddToQueue, "add_to_queue", self.add_to_queue_callback
        )
        self.IsSearching = False
        self.lock = Lock()
        self.get_logger().info("AddToQueue service is ready")
        self.action = ActionClient(self, AString, 'detect_childeren')

        self.t1 = threading.Thread (target=self.call_send_goal_multithread)
        self.t1.start()
    def call_send_goal_multithread(self):
        target = None

        while True:
            if self.string_queue: # 큐가 비어있지 않으면
                with self.lock:
                    target = self.string_queue.pop()
                self.get_logger().info('Goal sent {0}'.format(target))
                self.send_goal(target)
                while self.IsSearching:#검색이 완료될때까지 보내는 것 대기
                    pass
    def add_to_queue_callback(self, request, response):

        # 넣을때마다 queue에 집어넣어지고 queue가 다 비워질때 까지 계속 send_goal


        input_string = request.input_string

        if input_string not in self.string_queue: # 처음 값을 집어 넣었을때 기존에 없는 것 이고
            # feedback을 보냈을때 받은 feedback이 NULL이 아니고 Searching 인 경우
            with self.lock:
                self.string_queue.append(input_string)

            response.success = True
            response.string_list = ", ".join(self.string_queue)
            # 문자열은 self.string_queue에 저장된다.
            self.get_logger().info(f"Concatenated strings: {', '.join(self.string_queue)}")

        return response

    def feedback_callback(self, feedback):
        self.get_logger().info('Received feedback: {0}'.format(feedback.feedback.feedback_string))

    def send_goal(self, input_string):
        with self.lock:
            self.IsSearching = True
        goal_msg = AString.Goal()
        goal_msg.input_string = input_string

        self.action.wait_for_server()

        # 등록
        self._send_goal_future = self.action.send_goal_async(
            goal_msg,
            feedback_callback=self.feedback_callback)

        # Callback
        self._send_goal_future.add_done_callback(self.goal_response_callback)

    def goal_response_callback(self, future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().info('Goal rejected :(')
            return

        self.get_logger().info('Goal accepted :)')

        self._get_result_future = goal_handle.get_result_async()
        self._get_result_future.add_done_callback(self.get_result_callback)

    def get_result_callback(self, future):
        status = future.result().status
        if status == GoalStatus.STATUS_SUCCEEDED:
            self.get_logger().info('Goal succeeded! Result: {0}'.format(future.result().result.output_string))
        else:
            self.get_logger().info('Goal failed with status code: {0}'.format(status))
        with self.lock:
            self.IsSearching = False
def main(args=None):
    rclpy.init(args=args)
    add_to_queue_server = Server()
    executor = MultiThreadedExecutor()
    rclpy.spin(add_to_queue_server, executor=executor)
    rclpy.shutdown()


if __name__ == "__main__":
    main()
