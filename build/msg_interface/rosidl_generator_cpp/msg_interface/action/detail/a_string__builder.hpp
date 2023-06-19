// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from msg_interface:action/AString.idl
// generated code does not contain a copyright notice

#ifndef MSG_INTERFACE__ACTION__DETAIL__A_STRING__BUILDER_HPP_
#define MSG_INTERFACE__ACTION__DETAIL__A_STRING__BUILDER_HPP_

#include "msg_interface/action/detail/a_string__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace msg_interface
{

namespace action
{

namespace builder
{

class Init_AString_Goal_input_strg
{
public:
  Init_AString_Goal_input_strg()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::msg_interface::action::AString_Goal input_strg(::msg_interface::action::AString_Goal::_input_strg_type arg)
  {
    msg_.input_strg = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg_interface::action::AString_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg_interface::action::AString_Goal>()
{
  return msg_interface::action::builder::Init_AString_Goal_input_strg();
}

}  // namespace msg_interface


namespace msg_interface
{

namespace action
{

namespace builder
{

class Init_AString_Result_output_string
{
public:
  Init_AString_Result_output_string()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::msg_interface::action::AString_Result output_string(::msg_interface::action::AString_Result::_output_string_type arg)
  {
    msg_.output_string = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg_interface::action::AString_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg_interface::action::AString_Result>()
{
  return msg_interface::action::builder::Init_AString_Result_output_string();
}

}  // namespace msg_interface


namespace msg_interface
{

namespace action
{

namespace builder
{

class Init_AString_Feedback_feedback_string
{
public:
  Init_AString_Feedback_feedback_string()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::msg_interface::action::AString_Feedback feedback_string(::msg_interface::action::AString_Feedback::_feedback_string_type arg)
  {
    msg_.feedback_string = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg_interface::action::AString_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg_interface::action::AString_Feedback>()
{
  return msg_interface::action::builder::Init_AString_Feedback_feedback_string();
}

}  // namespace msg_interface


namespace msg_interface
{

namespace action
{

namespace builder
{

class Init_AString_SendGoal_Request_goal
{
public:
  explicit Init_AString_SendGoal_Request_goal(::msg_interface::action::AString_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::msg_interface::action::AString_SendGoal_Request goal(::msg_interface::action::AString_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg_interface::action::AString_SendGoal_Request msg_;
};

class Init_AString_SendGoal_Request_goal_id
{
public:
  Init_AString_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AString_SendGoal_Request_goal goal_id(::msg_interface::action::AString_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_AString_SendGoal_Request_goal(msg_);
  }

private:
  ::msg_interface::action::AString_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg_interface::action::AString_SendGoal_Request>()
{
  return msg_interface::action::builder::Init_AString_SendGoal_Request_goal_id();
}

}  // namespace msg_interface


namespace msg_interface
{

namespace action
{

namespace builder
{

class Init_AString_SendGoal_Response_stamp
{
public:
  explicit Init_AString_SendGoal_Response_stamp(::msg_interface::action::AString_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::msg_interface::action::AString_SendGoal_Response stamp(::msg_interface::action::AString_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg_interface::action::AString_SendGoal_Response msg_;
};

class Init_AString_SendGoal_Response_accepted
{
public:
  Init_AString_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AString_SendGoal_Response_stamp accepted(::msg_interface::action::AString_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_AString_SendGoal_Response_stamp(msg_);
  }

private:
  ::msg_interface::action::AString_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg_interface::action::AString_SendGoal_Response>()
{
  return msg_interface::action::builder::Init_AString_SendGoal_Response_accepted();
}

}  // namespace msg_interface


namespace msg_interface
{

namespace action
{

namespace builder
{

class Init_AString_GetResult_Request_goal_id
{
public:
  Init_AString_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::msg_interface::action::AString_GetResult_Request goal_id(::msg_interface::action::AString_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg_interface::action::AString_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg_interface::action::AString_GetResult_Request>()
{
  return msg_interface::action::builder::Init_AString_GetResult_Request_goal_id();
}

}  // namespace msg_interface


namespace msg_interface
{

namespace action
{

namespace builder
{

class Init_AString_GetResult_Response_result
{
public:
  explicit Init_AString_GetResult_Response_result(::msg_interface::action::AString_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::msg_interface::action::AString_GetResult_Response result(::msg_interface::action::AString_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg_interface::action::AString_GetResult_Response msg_;
};

class Init_AString_GetResult_Response_status
{
public:
  Init_AString_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AString_GetResult_Response_result status(::msg_interface::action::AString_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_AString_GetResult_Response_result(msg_);
  }

private:
  ::msg_interface::action::AString_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg_interface::action::AString_GetResult_Response>()
{
  return msg_interface::action::builder::Init_AString_GetResult_Response_status();
}

}  // namespace msg_interface


namespace msg_interface
{

namespace action
{

namespace builder
{

class Init_AString_FeedbackMessage_feedback
{
public:
  explicit Init_AString_FeedbackMessage_feedback(::msg_interface::action::AString_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::msg_interface::action::AString_FeedbackMessage feedback(::msg_interface::action::AString_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg_interface::action::AString_FeedbackMessage msg_;
};

class Init_AString_FeedbackMessage_goal_id
{
public:
  Init_AString_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AString_FeedbackMessage_feedback goal_id(::msg_interface::action::AString_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_AString_FeedbackMessage_feedback(msg_);
  }

private:
  ::msg_interface::action::AString_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg_interface::action::AString_FeedbackMessage>()
{
  return msg_interface::action::builder::Init_AString_FeedbackMessage_goal_id();
}

}  // namespace msg_interface

#endif  // MSG_INTERFACE__ACTION__DETAIL__A_STRING__BUILDER_HPP_
