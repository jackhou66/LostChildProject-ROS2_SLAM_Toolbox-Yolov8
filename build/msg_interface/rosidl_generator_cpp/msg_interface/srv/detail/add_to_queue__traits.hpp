// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from msg_interface:srv/AddToQueue.idl
// generated code does not contain a copyright notice

#ifndef MSG_INTERFACE__SRV__DETAIL__ADD_TO_QUEUE__TRAITS_HPP_
#define MSG_INTERFACE__SRV__DETAIL__ADD_TO_QUEUE__TRAITS_HPP_

#include "msg_interface/srv/detail/add_to_queue__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<msg_interface::srv::AddToQueue_Request>()
{
  return "msg_interface::srv::AddToQueue_Request";
}

template<>
inline const char * name<msg_interface::srv::AddToQueue_Request>()
{
  return "msg_interface/srv/AddToQueue_Request";
}

template<>
struct has_fixed_size<msg_interface::srv::AddToQueue_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<msg_interface::srv::AddToQueue_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<msg_interface::srv::AddToQueue_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<msg_interface::srv::AddToQueue_Response>()
{
  return "msg_interface::srv::AddToQueue_Response";
}

template<>
inline const char * name<msg_interface::srv::AddToQueue_Response>()
{
  return "msg_interface/srv/AddToQueue_Response";
}

template<>
struct has_fixed_size<msg_interface::srv::AddToQueue_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<msg_interface::srv::AddToQueue_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<msg_interface::srv::AddToQueue_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<msg_interface::srv::AddToQueue>()
{
  return "msg_interface::srv::AddToQueue";
}

template<>
inline const char * name<msg_interface::srv::AddToQueue>()
{
  return "msg_interface/srv/AddToQueue";
}

template<>
struct has_fixed_size<msg_interface::srv::AddToQueue>
  : std::integral_constant<
    bool,
    has_fixed_size<msg_interface::srv::AddToQueue_Request>::value &&
    has_fixed_size<msg_interface::srv::AddToQueue_Response>::value
  >
{
};

template<>
struct has_bounded_size<msg_interface::srv::AddToQueue>
  : std::integral_constant<
    bool,
    has_bounded_size<msg_interface::srv::AddToQueue_Request>::value &&
    has_bounded_size<msg_interface::srv::AddToQueue_Response>::value
  >
{
};

template<>
struct is_service<msg_interface::srv::AddToQueue>
  : std::true_type
{
};

template<>
struct is_service_request<msg_interface::srv::AddToQueue_Request>
  : std::true_type
{
};

template<>
struct is_service_response<msg_interface::srv::AddToQueue_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MSG_INTERFACE__SRV__DETAIL__ADD_TO_QUEUE__TRAITS_HPP_
