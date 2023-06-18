import sys

from action_msgs.msg import GoalStatus
from msg_interface.action import AString

import rclpy
from rclpy.action import ActionClient
from rclpy.node import Node


class StringActionClient(Node):

    def __init__(self):
        super().__init__('string_action_client')
        self._action_client = ActionClient(self, AString, 'detect_childeren')

    def feedback_callback(self, feedback):
        self.get_logger().info('Received feedback: {0}'.format(feedback.feedback.feedback_string))

    def send_goal(self, input_string):
        goal_msg = AString.Goal()
        goal_msg.input_string = input_string

        self._action_client.wait_for_server()

        self._send_goal_future = self._action_client.send_goal_async(
            goal_msg,
            feedback_callback=self.feedback_callback)

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


def main(args=None):
    rclpy.init(args=args)

    action_client = StringActionClient()

    action_client.send_goal('newjeans_minjai')

    rclpy.spin(action_client)

    rclpy.shutdown()


if __name__ == '__main__':
    main()