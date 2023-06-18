// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from msg_interface:action/AString.idl
// generated code does not contain a copyright notice

#ifndef MSG_INTERFACE__ACTION__DETAIL__A_STRING__TRAITS_HPP_
#define MSG_INTERFACE__ACTION__DETAIL__A_STRING__TRAITS_HPP_

#include "msg_interface/action/detail/a_string__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<msg_interface::action::AString_Goal>()
{
  return "msg_interface::action::AString_Goal";
}

template<>
inline const char * name<msg_interface::action::AString_Goal>()
{
  return "msg_interface/action/AString_Goal";
}

template<>
struct has_fixed_size<msg_interface::action::AString_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<msg_interface::action::AString_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<msg_interface::action::AString_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<msg_interface::action::AString_Result>()
{
  return "msg_interface::action::AString_Result";
}

template<>
inline const char * name<msg_interface::action::AString_Result>()
{
  return "msg_interface/action/AString_Result";
}

template<>
struct has_fixed_size<msg_interface::action::AString_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<msg_interface::action::AString_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<msg_interface::action::AString_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<msg_interface::action::AString_Feedback>()
{
  return "msg_interface::action::AString_Feedback";
}

template<>
inline const char * name<msg_interface::action::AString_Feedback>()
{
  return "msg_interface/action/AString_Feedback";
}

template<>
struct has_fixed_size<msg_interface::action::AString_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<msg_interface::action::AString_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<msg_interface::action::AString_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "msg_interface/action/detail/a_string__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<msg_interface::action::AString_SendGoal_Request>()
{
  return "msg_interface::action::AString_SendGoal_Request";
}

template<>
inline const char * name<msg_interface::action::AString_SendGoal_Request>()
{
  return "msg_interface/action/AString_SendGoal_Request";
}

template<>
struct has_fixed_size<msg_interface::action::AString_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<msg_interface::action::AString_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<msg_interface::action::AString_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<msg_interface::action::AString_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<msg_interface::action::AString_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<msg_interface::action::AString_SendGoal_Response>()
{
  return "msg_interface::action::AString_SendGoal_Response";
}

template<>
inline const char * name<msg_interface::action::AString_SendGoal_Response>()
{
  return "msg_interface/action/AString_SendGoal_Response";
}

template<>
struct has_fixed_size<msg_interface::action::AString_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<msg_interface::action::AString_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<msg_interface::action::AString_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<msg_interface::action::AString_SendGoal>()
{
  return "msg_interface::action::AString_SendGoal";
}

template<>
inline const char * name<msg_interface::action::AString_SendGoal>()
{
  return "msg_interface/action/AString_SendGoal";
}

template<>
struct has_fixed_size<msg_interface::action::AString_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<msg_interface::action::AString_SendGoal_Request>::value &&
    has_fixed_size<msg_interface::action::AString_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<msg_interface::action::AString_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<msg_interface::action::AString_SendGoal_Request>::value &&
    has_bounded_size<msg_interface::action::AString_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<msg_interface::action::AString_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<msg_interface::action::AString_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<msg_interface::action::AString_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<msg_interface::action::AString_GetResult_Request>()
{
  return "msg_interface::action::AString_GetResult_Request";
}

template<>
inline const char * name<msg_interface::action::AString_GetResult_Request>()
{
  return "msg_interface/action/AString_GetResult_Request";
}

template<>
struct has_fixed_size<msg_interface::action::AString_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<msg_interface::action::AString_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<msg_interface::action::AString_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "msg_interface/action/detail/a_string__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<msg_interface::action::AString_GetResult_Response>()
{
  return "msg_interface::action::AString_GetResult_Response";
}

template<>
inline const char * name<msg_interface::action::AString_GetResult_Response>()
{
  return "msg_interface/action/AString_GetResult_Response";
}

template<>
struct has_fixed_size<msg_interface::action::AString_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<msg_interface::action::AString_Result>::value> {};

template<>
struct has_bounded_size<msg_interface::action::AString_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<msg_interface::action::AString_Result>::value> {};

template<>
struct is_message<msg_interface::action::AString_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<msg_interface::action::AString_GetResult>()
{
  return "msg_interface::action::AString_GetResult";
}

template<>
inline const char * name<msg_interface::action::AString_GetResult>()
{
  return "msg_interface/action/AString_GetResult";
}

template<>
struct has_fixed_size<msg_interface::action::AString_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<msg_interface::action::AString_GetResult_Request>::value &&
    has_fixed_size<msg_interface::action::AString_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<msg_interface::action::AString_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<msg_interface::action::AString_GetResult_Request>::value &&
    has_bounded_size<msg_interface::action::AString_GetResult_Response>::value
  >
{
};

template<>
struct is_service<msg_interface::action::AString_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<msg_interface::action::AString_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<msg_interface::action::AString_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "msg_interface/action/detail/a_string__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<msg_interface::action::AString_FeedbackMessage>()
{
  return "msg_interface::action::AString_FeedbackMessage";
}

template<>
inline const char * name<msg_interface::action::AString_FeedbackMessage>()
{
  return "msg_interface/action/AString_FeedbackMessage";
}

template<>
struct has_fixed_size<msg_interface::action::AString_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<msg_interface::action::AString_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<msg_interface::action::AString_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<msg_interface::action::AString_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<msg_interface::action::AString_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<msg_interface::action::AString>
  : std::true_type
{
};

template<>
struct is_action_goal<msg_interface::action::AString_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<msg_interface::action::AString_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<msg_interface::action::AString_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // MSG_INTERFACE__ACTION__DETAIL__A_STRING__TRAITS_HPP_
