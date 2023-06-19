#include <chrono>
#include <rclcpp/rclcpp.hpp>

using namespace std::chrono_literals;

class ExecutionTimeNode : public rclcpp::Node
{
public:
  ExecutionTimeNode() : Node("execution_time_node")
  {
    // Get the start time
    start_time_ = std::chrono::high_resolution_clock::now();

    // Create a timer to periodically trigger the callback function
    timer_ = create_wall_timer(1s, std::bind(&ExecutionTimeNode::timerCallback, this));
  }

private:
  void timerCallback()
  {
    auto current_time = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(current_time - start_time_);

    RCLCPP_INFO(get_logger(), "Total execution time: %ld ms", duration.count());
  }

  std::chrono::high_resolution_clock::time_point start_time_;
  rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char** argv)
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<ExecutionTimeNode>());
  rclcpp::shutdown();
  return 0;
}
