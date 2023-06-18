// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from msg_interface:srv/AddToQueue.idl
// generated code does not contain a copyright notice

#ifndef MSG_INTERFACE__SRV__DETAIL__ADD_TO_QUEUE__STRUCT_H_
#define MSG_INTERFACE__SRV__DETAIL__ADD_TO_QUEUE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'input_string'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/AddToQueue in the package msg_interface.
typedef struct msg_interface__srv__AddToQueue_Request
{
  rosidl_runtime_c__String input_string;
} msg_interface__srv__AddToQueue_Request;

// Struct for a sequence of msg_interface__srv__AddToQueue_Request.
typedef struct msg_interface__srv__AddToQueue_Request__Sequence
{
  msg_interface__srv__AddToQueue_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg_interface__srv__AddToQueue_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'string_list'
// already included above
// #include "rosidl_runtime_c/string.h"

// Struct defined in srv/AddToQueue in the package msg_interface.
typedef struct msg_interface__srv__AddToQueue_Response
{
  bool success;
  rosidl_runtime_c__String string_list;
} msg_interface__srv__AddToQueue_Response;

// Struct for a sequence of msg_interface__srv__AddToQueue_Response.
typedef struct msg_interface__srv__AddToQueue_Response__Sequence
{
  msg_interface__srv__AddToQueue_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg_interface__srv__AddToQueue_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MSG_INTERFACE__SRV__DETAIL__ADD_TO_QUEUE__STRUCT_H_
