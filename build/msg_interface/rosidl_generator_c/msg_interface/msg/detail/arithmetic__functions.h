// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from msg_interface:msg/Arithmetic.idl
// generated code does not contain a copyright notice

#ifndef MSG_INTERFACE__MSG__DETAIL__ARITHMETIC__FUNCTIONS_H_
#define MSG_INTERFACE__MSG__DETAIL__ARITHMETIC__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "msg_interface/msg/rosidl_generator_c__visibility_control.h"

#include "msg_interface/msg/detail/arithmetic__struct.h"

/// Initialize msg/Arithmetic message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * msg_interface__msg__Arithmetic
 * )) before or use
 * msg_interface__msg__Arithmetic__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_interface
bool
msg_interface__msg__Arithmetic__init(msg_interface__msg__Arithmetic * msg);

/// Finalize msg/Arithmetic message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_interface
void
msg_interface__msg__Arithmetic__fini(msg_interface__msg__Arithmetic * msg);

/// Create msg/Arithmetic message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * msg_interface__msg__Arithmetic__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_interface
msg_interface__msg__Arithmetic *
msg_interface__msg__Arithmetic__create();

/// Destroy msg/Arithmetic message.
/**
 * It calls
 * msg_interface__msg__Arithmetic__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_interface
void
msg_interface__msg__Arithmetic__destroy(msg_interface__msg__Arithmetic * msg);

/// Check for msg/Arithmetic message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_interface
bool
msg_interface__msg__Arithmetic__are_equal(const msg_interface__msg__Arithmetic * lhs, const msg_interface__msg__Arithmetic * rhs);

/// Copy a msg/Arithmetic message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_interface
bool
msg_interface__msg__Arithmetic__copy(
  const msg_interface__msg__Arithmetic * input,
  msg_interface__msg__Arithmetic * output);

/// Initialize array of msg/Arithmetic messages.
/**
 * It allocates the memory for the number of elements and calls
 * msg_interface__msg__Arithmetic__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_interface
bool
msg_interface__msg__Arithmetic__Sequence__init(msg_interface__msg__Arithmetic__Sequence * array, size_t size);

/// Finalize array of msg/Arithmetic messages.
/**
 * It calls
 * msg_interface__msg__Arithmetic__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_interface
void
msg_interface__msg__Arithmetic__Sequence__fini(msg_interface__msg__Arithmetic__Sequence * array);

/// Create array of msg/Arithmetic messages.
/**
 * It allocates the memory for the array and calls
 * msg_interface__msg__Arithmetic__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_interface
msg_interface__msg__Arithmetic__Sequence *
msg_interface__msg__Arithmetic__Sequence__create(size_t size);

/// Destroy array of msg/Arithmetic messages.
/**
 * It calls
 * msg_interface__msg__Arithmetic__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_interface
void
msg_interface__msg__Arithmetic__Sequence__destroy(msg_interface__msg__Arithmetic__Sequence * array);

/// Check for msg/Arithmetic message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_interface
bool
msg_interface__msg__Arithmetic__Sequence__are_equal(const msg_interface__msg__Arithmetic__Sequence * lhs, const msg_interface__msg__Arithmetic__Sequence * rhs);

/// Copy an array of msg/Arithmetic messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_interface
bool
msg_interface__msg__Arithmetic__Sequence__copy(
  const msg_interface__msg__Arithmetic__Sequence * input,
  msg_interface__msg__Arithmetic__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MSG_INTERFACE__MSG__DETAIL__ARITHMETIC__FUNCTIONS_H_
