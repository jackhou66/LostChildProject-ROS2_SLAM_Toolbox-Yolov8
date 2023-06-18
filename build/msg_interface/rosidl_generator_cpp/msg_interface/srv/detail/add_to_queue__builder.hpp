// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from msg_interface:srv/AddToQueue.idl
// generated code does not contain a copyright notice

#ifndef MSG_INTERFACE__SRV__DETAIL__ADD_TO_QUEUE__BUILDER_HPP_
#define MSG_INTERFACE__SRV__DETAIL__ADD_TO_QUEUE__BUILDER_HPP_

#include "msg_interface/srv/detail/add_to_queue__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace msg_interface
{

namespace srv
{

namespace builder
{

class Init_AddToQueue_Request_input_string
{
public:
  Init_AddToQueue_Request_input_string()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::msg_interface::srv::AddToQueue_Request input_string(::msg_interface::srv::AddToQueue_Request::_input_string_type arg)
  {
    msg_.input_string = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg_interface::srv::AddToQueue_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg_interface::srv::AddToQueue_Request>()
{
  return msg_interface::srv::builder::Init_AddToQueue_Request_input_string();
}

}  // namespace msg_interface


namespace msg_interface
{

namespace srv
{

namespace builder
{

class Init_AddToQueue_Response_string_list
{
public:
  explicit Init_AddToQueue_Response_string_list(::msg_interface::srv::AddToQueue_Response & msg)
  : msg_(msg)
  {}
  ::msg_interface::srv::AddToQueue_Response string_list(::msg_interface::srv::AddToQueue_Response::_string_list_type arg)
  {
    msg_.string_list = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg_interface::srv::AddToQueue_Response msg_;
};

class Init_AddToQueue_Response_success
{
public:
  Init_AddToQueue_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AddToQueue_Response_string_list success(::msg_interface::srv::AddToQueue_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_AddToQueue_Response_string_list(msg_);
  }

private:
  ::msg_interface::srv::AddToQueue_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg_interface::srv::AddToQueue_Response>()
{
  return msg_interface::srv::builder::Init_AddToQueue_Response_success();
}

}  // namespace msg_interface

#endif  // MSG_INTERFACE__SRV__DETAIL__ADD_TO_QUEUE__BUILDER_HPP_
