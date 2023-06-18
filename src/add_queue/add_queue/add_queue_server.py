import rclpy
from rclpy.node import Node
from msg_interface.srv import AddToQueue


class Server(Node):
    def __init__(self):
        super().__init__("add_to_queue_server")
        self.string_queue = []
        self.srv = self.create_service(
            AddToQueue, "add_to_queue", self.add_to_queue_callback
        )
        self.get_logger().info("AddToQueue service is ready")

    def add_to_queue_callback(self, request, response):
        input_string = request.input_string
        self.string_queue.append(input_string)

        response.success = True
        response.string_list = ", ".join(self.string_queue)

        # 문자열은 self.string_queue에 저장된다.
        self.get_logger().info(f"Concatenated strings: {', '.join(self.string_queue)}")

        return response


def main(args=None):
    rclpy.init(args=args)
    add_to_queue_server = Server()
    rclpy.spin(add_to_queue_server)
    rclpy.shutdown()


if __name__ == "__main__":
    main()
