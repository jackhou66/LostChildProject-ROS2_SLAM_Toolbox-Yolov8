// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from msg_interface:action/AString.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "msg_interface/action/detail/a_string__rosidl_typesupport_introspection_c.h"
#include "msg_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "msg_interface/action/detail/a_string__functions.h"
#include "msg_interface/action/detail/a_string__struct.h"


// Include directives for member types
// Member `input_string`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void AString_Goal__rosidl_typesupport_introspection_c__AString_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  msg_interface__action__AString_Goal__init(message_memory);
}

void AString_Goal__rosidl_typesupport_introspection_c__AString_Goal_fini_function(void * message_memory)
{
  msg_interface__action__AString_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember AString_Goal__rosidl_typesupport_introspection_c__AString_Goal_message_member_array[1] = {
  {
    "input_string",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_interface__action__AString_Goal, input_string),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers AString_Goal__rosidl_typesupport_introspection_c__AString_Goal_message_members = {
  "msg_interface__action",  // message namespace
  "AString_Goal",  // message name
  1,  // number of fields
  sizeof(msg_interface__action__AString_Goal),
  AString_Goal__rosidl_typesupport_introspection_c__AString_Goal_message_member_array,  // message members
  AString_Goal__rosidl_typesupport_introspection_c__AString_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  AString_Goal__rosidl_typesupport_introspection_c__AString_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t AString_Goal__rosidl_typesupport_introspection_c__AString_Goal_message_type_support_handle = {
  0,
  &AString_Goal__rosidl_typesupport_introspection_c__AString_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_msg_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_interface, action, AString_Goal)() {
  if (!AString_Goal__rosidl_typesupport_introspection_c__AString_Goal_message_type_support_handle.typesupport_identifier) {
    AString_Goal__rosidl_typesupport_introspection_c__AString_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &AString_Goal__rosidl_typesupport_introspection_c__AString_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "msg_interface/action/detail/a_string__rosidl_typesupport_introspection_c.h"
// already included above
// #include "msg_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "msg_interface/action/detail/a_string__functions.h"
// already included above
// #include "msg_interface/action/detail/a_string__struct.h"


// Include directives for member types
// Member `output_string`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void AString_Result__rosidl_typesupport_introspection_c__AString_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  msg_interface__action__AString_Result__init(message_memory);
}

void AString_Result__rosidl_typesupport_introspection_c__AString_Result_fini_function(void * message_memory)
{
  msg_interface__action__AString_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember AString_Result__rosidl_typesupport_introspection_c__AString_Result_message_member_array[1] = {
  {
    "output_string",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_interface__action__AString_Result, output_string),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers AString_Result__rosidl_typesupport_introspection_c__AString_Result_message_members = {
  "msg_interface__action",  // message namespace
  "AString_Result",  // message name
  1,  // number of fields
  sizeof(msg_interface__action__AString_Result),
  AString_Result__rosidl_typesupport_introspection_c__AString_Result_message_member_array,  // message members
  AString_Result__rosidl_typesupport_introspection_c__AString_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  AString_Result__rosidl_typesupport_introspection_c__AString_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t AString_Result__rosidl_typesupport_introspection_c__AString_Result_message_type_support_handle = {
  0,
  &AString_Result__rosidl_typesupport_introspection_c__AString_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_msg_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_interface, action, AString_Result)() {
  if (!AString_Result__rosidl_typesupport_introspection_c__AString_Result_message_type_support_handle.typesupport_identifier) {
    AString_Result__rosidl_typesupport_introspection_c__AString_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &AString_Result__rosidl_typesupport_introspection_c__AString_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "msg_interface/action/detail/a_string__rosidl_typesupport_introspection_c.h"
// already included above
// #include "msg_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "msg_interface/action/detail/a_string__functions.h"
// already included above
// #include "msg_interface/action/detail/a_string__struct.h"


// Include directives for member types
// Member `feedback_string`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void AString_Feedback__rosidl_typesupport_introspection_c__AString_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  msg_interface__action__AString_Feedback__init(message_memory);
}

void AString_Feedback__rosidl_typesupport_introspection_c__AString_Feedback_fini_function(void * message_memory)
{
  msg_interface__action__AString_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember AString_Feedback__rosidl_typesupport_introspection_c__AString_Feedback_message_member_array[1] = {
  {
    "feedback_string",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_interface__action__AString_Feedback, feedback_string),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers AString_Feedback__rosidl_typesupport_introspection_c__AString_Feedback_message_members = {
  "msg_interface__action",  // message namespace
  "AString_Feedback",  // message name
  1,  // number of fields
  sizeof(msg_interface__action__AString_Feedback),
  AString_Feedback__rosidl_typesupport_introspection_c__AString_Feedback_message_member_array,  // message members
  AString_Feedback__rosidl_typesupport_introspection_c__AString_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  AString_Feedback__rosidl_typesupport_introspection_c__AString_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t AString_Feedback__rosidl_typesupport_introspection_c__AString_Feedback_message_type_support_handle = {
  0,
  &AString_Feedback__rosidl_typesupport_introspection_c__AString_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_msg_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_interface, action, AString_Feedback)() {
  if (!AString_Feedback__rosidl_typesupport_introspection_c__AString_Feedback_message_type_support_handle.typesupport_identifier) {
    AString_Feedback__rosidl_typesupport_introspection_c__AString_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &AString_Feedback__rosidl_typesupport_introspection_c__AString_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "msg_interface/action/detail/a_string__rosidl_typesupport_introspection_c.h"
// already included above
// #include "msg_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "msg_interface/action/detail/a_string__functions.h"
// already included above
// #include "msg_interface/action/detail/a_string__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "msg_interface/action/a_string.h"
// Member `goal`
// already included above
// #include "msg_interface/action/detail/a_string__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void AString_SendGoal_Request__rosidl_typesupport_introspection_c__AString_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  msg_interface__action__AString_SendGoal_Request__init(message_memory);
}

void AString_SendGoal_Request__rosidl_typesupport_introspection_c__AString_SendGoal_Request_fini_function(void * message_memory)
{
  msg_interface__action__AString_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember AString_SendGoal_Request__rosidl_typesupport_introspection_c__AString_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_interface__action__AString_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_interface__action__AString_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers AString_SendGoal_Request__rosidl_typesupport_introspection_c__AString_SendGoal_Request_message_members = {
  "msg_interface__action",  // message namespace
  "AString_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(msg_interface__action__AString_SendGoal_Request),
  AString_SendGoal_Request__rosidl_typesupport_introspection_c__AString_SendGoal_Request_message_member_array,  // message members
  AString_SendGoal_Request__rosidl_typesupport_introspection_c__AString_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  AString_SendGoal_Request__rosidl_typesupport_introspection_c__AString_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t AString_SendGoal_Request__rosidl_typesupport_introspection_c__AString_SendGoal_Request_message_type_support_handle = {
  0,
  &AString_SendGoal_Request__rosidl_typesupport_introspection_c__AString_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_msg_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_interface, action, AString_SendGoal_Request)() {
  AString_SendGoal_Request__rosidl_typesupport_introspection_c__AString_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  AString_SendGoal_Request__rosidl_typesupport_introspection_c__AString_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_interface, action, AString_Goal)();
  if (!AString_SendGoal_Request__rosidl_typesupport_introspection_c__AString_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    AString_SendGoal_Request__rosidl_typesupport_introspection_c__AString_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &AString_SendGoal_Request__rosidl_typesupport_introspection_c__AString_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "msg_interface/action/detail/a_string__rosidl_typesupport_introspection_c.h"
// already included above
// #include "msg_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "msg_interface/action/detail/a_string__functions.h"
// already included above
// #include "msg_interface/action/detail/a_string__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void AString_SendGoal_Response__rosidl_typesupport_introspection_c__AString_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  msg_interface__action__AString_SendGoal_Response__init(message_memory);
}

void AString_SendGoal_Response__rosidl_typesupport_introspection_c__AString_SendGoal_Response_fini_function(void * message_memory)
{
  msg_interface__action__AString_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember AString_SendGoal_Response__rosidl_typesupport_introspection_c__AString_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_interface__action__AString_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_interface__action__AString_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers AString_SendGoal_Response__rosidl_typesupport_introspection_c__AString_SendGoal_Response_message_members = {
  "msg_interface__action",  // message namespace
  "AString_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(msg_interface__action__AString_SendGoal_Response),
  AString_SendGoal_Response__rosidl_typesupport_introspection_c__AString_SendGoal_Response_message_member_array,  // message members
  AString_SendGoal_Response__rosidl_typesupport_introspection_c__AString_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  AString_SendGoal_Response__rosidl_typesupport_introspection_c__AString_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t AString_SendGoal_Response__rosidl_typesupport_introspection_c__AString_SendGoal_Response_message_type_support_handle = {
  0,
  &AString_SendGoal_Response__rosidl_typesupport_introspection_c__AString_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_msg_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_interface, action, AString_SendGoal_Response)() {
  AString_SendGoal_Response__rosidl_typesupport_introspection_c__AString_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!AString_SendGoal_Response__rosidl_typesupport_introspection_c__AString_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    AString_SendGoal_Response__rosidl_typesupport_introspection_c__AString_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &AString_SendGoal_Response__rosidl_typesupport_introspection_c__AString_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "msg_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "msg_interface/action/detail/a_string__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers msg_interface__action__detail__a_string__rosidl_typesupport_introspection_c__AString_SendGoal_service_members = {
  "msg_interface__action",  // service namespace
  "AString_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // msg_interface__action__detail__a_string__rosidl_typesupport_introspection_c__AString_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // msg_interface__action__detail__a_string__rosidl_typesupport_introspection_c__AString_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t msg_interface__action__detail__a_string__rosidl_typesupport_introspection_c__AString_SendGoal_service_type_support_handle = {
  0,
  &msg_interface__action__detail__a_string__rosidl_typesupport_introspection_c__AString_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_interface, action, AString_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_interface, action, AString_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_msg_interface
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_interface, action, AString_SendGoal)() {
  if (!msg_interface__action__detail__a_string__rosidl_typesupport_introspection_c__AString_SendGoal_service_type_support_handle.typesupport_identifier) {
    msg_interface__action__detail__a_string__rosidl_typesupport_introspection_c__AString_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)msg_interface__action__detail__a_string__rosidl_typesupport_introspection_c__AString_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_interface, action, AString_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_interface, action, AString_SendGoal_Response)()->data;
  }

  return &msg_interface__action__detail__a_string__rosidl_typesupport_introspection_c__AString_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "msg_interface/action/detail/a_string__rosidl_typesupport_introspection_c.h"
// already included above
// #include "msg_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "msg_interface/action/detail/a_string__functions.h"
// already included above
// #include "msg_interface/action/detail/a_string__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void AString_GetResult_Request__rosidl_typesupport_introspection_c__AString_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  msg_interface__action__AString_GetResult_Request__init(message_memory);
}

void AString_GetResult_Request__rosidl_typesupport_introspection_c__AString_GetResult_Request_fini_function(void * message_memory)
{
  msg_interface__action__AString_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember AString_GetResult_Request__rosidl_typesupport_introspection_c__AString_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_interface__action__AString_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers AString_GetResult_Request__rosidl_typesupport_introspection_c__AString_GetResult_Request_message_members = {
  "msg_interface__action",  // message namespace
  "AString_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(msg_interface__action__AString_GetResult_Request),
  AString_GetResult_Request__rosidl_typesupport_introspection_c__AString_GetResult_Request_message_member_array,  // message members
  AString_GetResult_Request__rosidl_typesupport_introspection_c__AString_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  AString_GetResult_Request__rosidl_typesupport_introspection_c__AString_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t AString_GetResult_Request__rosidl_typesupport_introspection_c__AString_GetResult_Request_message_type_support_handle = {
  0,
  &AString_GetResult_Request__rosidl_typesupport_introspection_c__AString_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_msg_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_interface, action, AString_GetResult_Request)() {
  AString_GetResult_Request__rosidl_typesupport_introspection_c__AString_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!AString_GetResult_Request__rosidl_typesupport_introspection_c__AString_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    AString_GetResult_Request__rosidl_typesupport_introspection_c__AString_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &AString_GetResult_Request__rosidl_typesupport_introspection_c__AString_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "msg_interface/action/detail/a_string__rosidl_typesupport_introspection_c.h"
// already included above
// #include "msg_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "msg_interface/action/detail/a_string__functions.h"
// already included above
// #include "msg_interface/action/detail/a_string__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "msg_interface/action/a_string.h"
// Member `result`
// already included above
// #include "msg_interface/action/detail/a_string__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void AString_GetResult_Response__rosidl_typesupport_introspection_c__AString_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  msg_interface__action__AString_GetResult_Response__init(message_memory);
}

void AString_GetResult_Response__rosidl_typesupport_introspection_c__AString_GetResult_Response_fini_function(void * message_memory)
{
  msg_interface__action__AString_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember AString_GetResult_Response__rosidl_typesupport_introspection_c__AString_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_interface__action__AString_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_interface__action__AString_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers AString_GetResult_Response__rosidl_typesupport_introspection_c__AString_GetResult_Response_message_members = {
  "msg_interface__action",  // message namespace
  "AString_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(msg_interface__action__AString_GetResult_Response),
  AString_GetResult_Response__rosidl_typesupport_introspection_c__AString_GetResult_Response_message_member_array,  // message members
  AString_GetResult_Response__rosidl_typesupport_introspection_c__AString_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  AString_GetResult_Response__rosidl_typesupport_introspection_c__AString_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t AString_GetResult_Response__rosidl_typesupport_introspection_c__AString_GetResult_Response_message_type_support_handle = {
  0,
  &AString_GetResult_Response__rosidl_typesupport_introspection_c__AString_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_msg_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_interface, action, AString_GetResult_Response)() {
  AString_GetResult_Response__rosidl_typesupport_introspection_c__AString_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_interface, action, AString_Result)();
  if (!AString_GetResult_Response__rosidl_typesupport_introspection_c__AString_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    AString_GetResult_Response__rosidl_typesupport_introspection_c__AString_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &AString_GetResult_Response__rosidl_typesupport_introspection_c__AString_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "msg_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "msg_interface/action/detail/a_string__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers msg_interface__action__detail__a_string__rosidl_typesupport_introspection_c__AString_GetResult_service_members = {
  "msg_interface__action",  // service namespace
  "AString_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // msg_interface__action__detail__a_string__rosidl_typesupport_introspection_c__AString_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // msg_interface__action__detail__a_string__rosidl_typesupport_introspection_c__AString_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t msg_interface__action__detail__a_string__rosidl_typesupport_introspection_c__AString_GetResult_service_type_support_handle = {
  0,
  &msg_interface__action__detail__a_string__rosidl_typesupport_introspection_c__AString_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_interface, action, AString_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_interface, action, AString_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_msg_interface
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_interface, action, AString_GetResult)() {
  if (!msg_interface__action__detail__a_string__rosidl_typesupport_introspection_c__AString_GetResult_service_type_support_handle.typesupport_identifier) {
    msg_interface__action__detail__a_string__rosidl_typesupport_introspection_c__AString_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)msg_interface__action__detail__a_string__rosidl_typesupport_introspection_c__AString_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_interface, action, AString_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_interface, action, AString_GetResult_Response)()->data;
  }

  return &msg_interface__action__detail__a_string__rosidl_typesupport_introspection_c__AString_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "msg_interface/action/detail/a_string__rosidl_typesupport_introspection_c.h"
// already included above
// #include "msg_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "msg_interface/action/detail/a_string__functions.h"
// already included above
// #include "msg_interface/action/detail/a_string__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "msg_interface/action/a_string.h"
// Member `feedback`
// already included above
// #include "msg_interface/action/detail/a_string__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void AString_FeedbackMessage__rosidl_typesupport_introspection_c__AString_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  msg_interface__action__AString_FeedbackMessage__init(message_memory);
}

void AString_FeedbackMessage__rosidl_typesupport_introspection_c__AString_FeedbackMessage_fini_function(void * message_memory)
{
  msg_interface__action__AString_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember AString_FeedbackMessage__rosidl_typesupport_introspection_c__AString_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_interface__action__AString_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_interface__action__AString_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers AString_FeedbackMessage__rosidl_typesupport_introspection_c__AString_FeedbackMessage_message_members = {
  "msg_interface__action",  // message namespace
  "AString_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(msg_interface__action__AString_FeedbackMessage),
  AString_FeedbackMessage__rosidl_typesupport_introspection_c__AString_FeedbackMessage_message_member_array,  // message members
  AString_FeedbackMessage__rosidl_typesupport_introspection_c__AString_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  AString_FeedbackMessage__rosidl_typesupport_introspection_c__AString_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t AString_FeedbackMessage__rosidl_typesupport_introspection_c__AString_FeedbackMessage_message_type_support_handle = {
  0,
  &AString_FeedbackMessage__rosidl_typesupport_introspection_c__AString_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_msg_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_interface, action, AString_FeedbackMessage)() {
  AString_FeedbackMessage__rosidl_typesupport_introspection_c__AString_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  AString_FeedbackMessage__rosidl_typesupport_introspection_c__AString_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_interface, action, AString_Feedback)();
  if (!AString_FeedbackMessage__rosidl_typesupport_introspection_c__AString_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    AString_FeedbackMessage__rosidl_typesupport_introspection_c__AString_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &AString_FeedbackMessage__rosidl_typesupport_introspection_c__AString_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
