// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from msg_interface:msg/Arithmetic.idl
// generated code does not contain a copyright notice

#ifndef MSG_INTERFACE__MSG__DETAIL__ARITHMETIC__TRAITS_HPP_
#define MSG_INTERFACE__MSG__DETAIL__ARITHMETIC__TRAITS_HPP_

#include "msg_interface/msg/detail/arithmetic__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<msg_interface::msg::Arithmetic>()
{
  return "msg_interface::msg::Arithmetic";
}

template<>
inline const char * name<msg_interface::msg::Arithmetic>()
{
  return "msg_interface/msg/Arithmetic";
}

template<>
struct has_fixed_size<msg_interface::msg::Arithmetic>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<msg_interface::msg::Arithmetic>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<msg_interface::msg::Arithmetic>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MSG_INTERFACE__MSG__DETAIL__ARITHMETIC__TRAITS_HPP_
