// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from msg_interface:msg/Arithmetic.idl
// generated code does not contain a copyright notice

#ifndef MSG_INTERFACE__MSG__DETAIL__ARITHMETIC__BUILDER_HPP_
#define MSG_INTERFACE__MSG__DETAIL__ARITHMETIC__BUILDER_HPP_

#include "msg_interface/msg/detail/arithmetic__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace msg_interface
{

namespace msg
{

namespace builder
{

class Init_Arithmetic_argument
{
public:
  explicit Init_Arithmetic_argument(::msg_interface::msg::Arithmetic & msg)
  : msg_(msg)
  {}
  ::msg_interface::msg::Arithmetic argument(::msg_interface::msg::Arithmetic::_argument_type arg)
  {
    msg_.argument = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg_interface::msg::Arithmetic msg_;
};

class Init_Arithmetic_stamp
{
public:
  Init_Arithmetic_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Arithmetic_argument stamp(::msg_interface::msg::Arithmetic::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_Arithmetic_argument(msg_);
  }

private:
  ::msg_interface::msg::Arithmetic msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg_interface::msg::Arithmetic>()
{
  return msg_interface::msg::builder::Init_Arithmetic_stamp();
}

}  // namespace msg_interface

#endif  // MSG_INTERFACE__MSG__DETAIL__ARITHMETIC__BUILDER_HPP_
