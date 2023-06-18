import rclpy
from rclpy.node import Node
from msg_interface.srv import AddToQueue


class AddToQueueClient(Node):
    def __init__(self):
        super().__init__("add_to_queue_client")
        self.cli = self.create_client(AddToQueue, "add_to_queue")

    def add_to_queue(self, input_string):
        request = AddToQueue.Request()
        request.input_string = input_string

        future = self.cli.call_async(request)
        rclpy.spin_until_future_complete(self, future)
        if future.result() is not None:
            success = future.result().success
            if success:
                self.get_logger().info(f"String added to the queue: {input_string}")
            else:
                self.get_logger().info("Failed to add string to the queue")
        else:
            self.get_logger().info("Service call failed")


def main(args=None):
    rclpy.init(args=args)
    add_to_queue_client = AddToQueueClient()

    # Example usage: Adding strings to the queue interactively
    while True:
        input_string = input("Enter a string (or 'q' to quit): ")
        if input_string == "q":
            break
        add_to_queue_client.add_to_queue(input_string)

    rclpy.shutdown()


if __name__ == "__main__":
    main()
