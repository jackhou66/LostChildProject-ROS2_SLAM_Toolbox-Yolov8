// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from msg_interface:srv/AddToQueue.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "msg_interface/srv/detail/add_to_queue__rosidl_typesupport_introspection_c.h"
#include "msg_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "msg_interface/srv/detail/add_to_queue__functions.h"
#include "msg_interface/srv/detail/add_to_queue__struct.h"


// Include directives for member types
// Member `input_string`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void AddToQueue_Request__rosidl_typesupport_introspection_c__AddToQueue_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  msg_interface__srv__AddToQueue_Request__init(message_memory);
}

void AddToQueue_Request__rosidl_typesupport_introspection_c__AddToQueue_Request_fini_function(void * message_memory)
{
  msg_interface__srv__AddToQueue_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember AddToQueue_Request__rosidl_typesupport_introspection_c__AddToQueue_Request_message_member_array[1] = {
  {
    "input_string",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_interface__srv__AddToQueue_Request, input_string),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers AddToQueue_Request__rosidl_typesupport_introspection_c__AddToQueue_Request_message_members = {
  "msg_interface__srv",  // message namespace
  "AddToQueue_Request",  // message name
  1,  // number of fields
  sizeof(msg_interface__srv__AddToQueue_Request),
  AddToQueue_Request__rosidl_typesupport_introspection_c__AddToQueue_Request_message_member_array,  // message members
  AddToQueue_Request__rosidl_typesupport_introspection_c__AddToQueue_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  AddToQueue_Request__rosidl_typesupport_introspection_c__AddToQueue_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t AddToQueue_Request__rosidl_typesupport_introspection_c__AddToQueue_Request_message_type_support_handle = {
  0,
  &AddToQueue_Request__rosidl_typesupport_introspection_c__AddToQueue_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_msg_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_interface, srv, AddToQueue_Request)() {
  if (!AddToQueue_Request__rosidl_typesupport_introspection_c__AddToQueue_Request_message_type_support_handle.typesupport_identifier) {
    AddToQueue_Request__rosidl_typesupport_introspection_c__AddToQueue_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &AddToQueue_Request__rosidl_typesupport_introspection_c__AddToQueue_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "msg_interface/srv/detail/add_to_queue__rosidl_typesupport_introspection_c.h"
// already included above
// #include "msg_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "msg_interface/srv/detail/add_to_queue__functions.h"
// already included above
// #include "msg_interface/srv/detail/add_to_queue__struct.h"


// Include directives for member types
// Member `string_list`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void AddToQueue_Response__rosidl_typesupport_introspection_c__AddToQueue_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  msg_interface__srv__AddToQueue_Response__init(message_memory);
}

void AddToQueue_Response__rosidl_typesupport_introspection_c__AddToQueue_Response_fini_function(void * message_memory)
{
  msg_interface__srv__AddToQueue_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember AddToQueue_Response__rosidl_typesupport_introspection_c__AddToQueue_Response_message_member_array[2] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_interface__srv__AddToQueue_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "string_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_interface__srv__AddToQueue_Response, string_list),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers AddToQueue_Response__rosidl_typesupport_introspection_c__AddToQueue_Response_message_members = {
  "msg_interface__srv",  // message namespace
  "AddToQueue_Response",  // message name
  2,  // number of fields
  sizeof(msg_interface__srv__AddToQueue_Response),
  AddToQueue_Response__rosidl_typesupport_introspection_c__AddToQueue_Response_message_member_array,  // message members
  AddToQueue_Response__rosidl_typesupport_introspection_c__AddToQueue_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  AddToQueue_Response__rosidl_typesupport_introspection_c__AddToQueue_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t AddToQueue_Response__rosidl_typesupport_introspection_c__AddToQueue_Response_message_type_support_handle = {
  0,
  &AddToQueue_Response__rosidl_typesupport_introspection_c__AddToQueue_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_msg_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_interface, srv, AddToQueue_Response)() {
  if (!AddToQueue_Response__rosidl_typesupport_introspection_c__AddToQueue_Response_message_type_support_handle.typesupport_identifier) {
    AddToQueue_Response__rosidl_typesupport_introspection_c__AddToQueue_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &AddToQueue_Response__rosidl_typesupport_introspection_c__AddToQueue_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "msg_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "msg_interface/srv/detail/add_to_queue__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers msg_interface__srv__detail__add_to_queue__rosidl_typesupport_introspection_c__AddToQueue_service_members = {
  "msg_interface__srv",  // service namespace
  "AddToQueue",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // msg_interface__srv__detail__add_to_queue__rosidl_typesupport_introspection_c__AddToQueue_Request_message_type_support_handle,
  NULL  // response message
  // msg_interface__srv__detail__add_to_queue__rosidl_typesupport_introspection_c__AddToQueue_Response_message_type_support_handle
};

static rosidl_service_type_support_t msg_interface__srv__detail__add_to_queue__rosidl_typesupport_introspection_c__AddToQueue_service_type_support_handle = {
  0,
  &msg_interface__srv__detail__add_to_queue__rosidl_typesupport_introspection_c__AddToQueue_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_interface, srv, AddToQueue_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_interface, srv, AddToQueue_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_msg_interface
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_interface, srv, AddToQueue)() {
  if (!msg_interface__srv__detail__add_to_queue__rosidl_typesupport_introspection_c__AddToQueue_service_type_support_handle.typesupport_identifier) {
    msg_interface__srv__detail__add_to_queue__rosidl_typesupport_introspection_c__AddToQueue_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)msg_interface__srv__detail__add_to_queue__rosidl_typesupport_introspection_c__AddToQueue_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_interface, srv, AddToQueue_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_interface, srv, AddToQueue_Response)()->data;
  }

  return &msg_interface__srv__detail__add_to_queue__rosidl_typesupport_introspection_c__AddToQueue_service_type_support_handle;
}
