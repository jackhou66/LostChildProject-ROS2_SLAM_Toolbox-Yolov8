// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from msg_interface:msg/Arithmetic.idl
// generated code does not contain a copyright notice

#ifndef MSG_INTERFACE__MSG__DETAIL__ARITHMETIC__STRUCT_H_
#define MSG_INTERFACE__MSG__DETAIL__ARITHMETIC__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in msg/Arithmetic in the package msg_interface.
typedef struct msg_interface__msg__Arithmetic
{
  builtin_interfaces__msg__Time stamp;
  int32_t argument;
} msg_interface__msg__Arithmetic;

// Struct for a sequence of msg_interface__msg__Arithmetic.
typedef struct msg_interface__msg__Arithmetic__Sequence
{
  msg_interface__msg__Arithmetic * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg_interface__msg__Arithmetic__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MSG_INTERFACE__MSG__DETAIL__ARITHMETIC__STRUCT_H_
