// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from msg_interface:action/AString.idl
// generated code does not contain a copyright notice

#ifndef MSG_INTERFACE__ACTION__DETAIL__A_STRING__STRUCT_H_
#define MSG_INTERFACE__ACTION__DETAIL__A_STRING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'input_strg'
#include "rosidl_runtime_c/string.h"

// Struct defined in action/AString in the package msg_interface.
typedef struct msg_interface__action__AString_Goal
{
  rosidl_runtime_c__String input_strg;
} msg_interface__action__AString_Goal;

// Struct for a sequence of msg_interface__action__AString_Goal.
typedef struct msg_interface__action__AString_Goal__Sequence
{
  msg_interface__action__AString_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg_interface__action__AString_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'output_string'
// already included above
// #include "rosidl_runtime_c/string.h"

// Struct defined in action/AString in the package msg_interface.
typedef struct msg_interface__action__AString_Result
{
  rosidl_runtime_c__String output_string;
} msg_interface__action__AString_Result;

// Struct for a sequence of msg_interface__action__AString_Result.
typedef struct msg_interface__action__AString_Result__Sequence
{
  msg_interface__action__AString_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg_interface__action__AString_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'feedback_string'
// already included above
// #include "rosidl_runtime_c/string.h"

// Struct defined in action/AString in the package msg_interface.
typedef struct msg_interface__action__AString_Feedback
{
  rosidl_runtime_c__String feedback_string;
} msg_interface__action__AString_Feedback;

// Struct for a sequence of msg_interface__action__AString_Feedback.
typedef struct msg_interface__action__AString_Feedback__Sequence
{
  msg_interface__action__AString_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg_interface__action__AString_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "msg_interface/action/detail/a_string__struct.h"

// Struct defined in action/AString in the package msg_interface.
typedef struct msg_interface__action__AString_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  msg_interface__action__AString_Goal goal;
} msg_interface__action__AString_SendGoal_Request;

// Struct for a sequence of msg_interface__action__AString_SendGoal_Request.
typedef struct msg_interface__action__AString_SendGoal_Request__Sequence
{
  msg_interface__action__AString_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg_interface__action__AString_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in action/AString in the package msg_interface.
typedef struct msg_interface__action__AString_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} msg_interface__action__AString_SendGoal_Response;

// Struct for a sequence of msg_interface__action__AString_SendGoal_Response.
typedef struct msg_interface__action__AString_SendGoal_Response__Sequence
{
  msg_interface__action__AString_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg_interface__action__AString_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

// Struct defined in action/AString in the package msg_interface.
typedef struct msg_interface__action__AString_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} msg_interface__action__AString_GetResult_Request;

// Struct for a sequence of msg_interface__action__AString_GetResult_Request.
typedef struct msg_interface__action__AString_GetResult_Request__Sequence
{
  msg_interface__action__AString_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg_interface__action__AString_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "msg_interface/action/detail/a_string__struct.h"

// Struct defined in action/AString in the package msg_interface.
typedef struct msg_interface__action__AString_GetResult_Response
{
  int8_t status;
  msg_interface__action__AString_Result result;
} msg_interface__action__AString_GetResult_Response;

// Struct for a sequence of msg_interface__action__AString_GetResult_Response.
typedef struct msg_interface__action__AString_GetResult_Response__Sequence
{
  msg_interface__action__AString_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg_interface__action__AString_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "msg_interface/action/detail/a_string__struct.h"

// Struct defined in action/AString in the package msg_interface.
typedef struct msg_interface__action__AString_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  msg_interface__action__AString_Feedback feedback;
} msg_interface__action__AString_FeedbackMessage;

// Struct for a sequence of msg_interface__action__AString_FeedbackMessage.
typedef struct msg_interface__action__AString_FeedbackMessage__Sequence
{
  msg_interface__action__AString_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg_interface__action__AString_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MSG_INTERFACE__ACTION__DETAIL__A_STRING__STRUCT_H_
