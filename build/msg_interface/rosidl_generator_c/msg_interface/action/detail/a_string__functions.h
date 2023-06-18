// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from msg_interface:action/AString.idl
// generated code does not contain a copyright notice

#ifndef MSG_INTERFACE__ACTION__DETAIL__A_STRING__FUNCTIONS_H_
#define MSG_INTERFACE__ACTION__DETAIL__A_STRING__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "msg_interface/msg/rosidl_generator_c__visibility_control.h"

#include "msg_interface/action/detail/a_string__struct.h"

/// Initialize action/AString message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * msg_interface__action__AString_Goal
 * )) before or use
 * msg_interface__action__AString_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_interface
bool
msg_interface__action__AString_Goal__init(msg_interface__action__AString_Goal * msg);

/// Finalize action/AString message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_interface
void
msg_interface__action__AString_Goal__fini(msg_interface__action__AString_Goal * msg);

/// Create action/AString message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * msg_interface__action__AString_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_interface
msg_interface__action__AString_Goal *
msg_interface__action__AString_Goal__create();

/// Destroy action/AString message.
/**
 * It calls
 * msg_interface__action__AString_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_interface
void
msg_interface__action__AString_Goal__destroy(msg_interface__action__AString_Goal * msg);

/// Check for action/AString message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_interface
bool
msg_interface__action__AString_Goal__are_equal(const msg_interface__action__AString_Goal * lhs, const msg_interface__action__AString_Goal * rhs);

/// Copy a action/AString message.
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
msg_interface__action__AString_Goal__copy(
  const msg_interface__action__AString_Goal * input,
  msg_interface__action__AString_Goal * output);

/// Initialize array of action/AString messages.
/**
 * It allocates the memory for the number of elements and calls
 * msg_interface__action__AString_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_interface
bool
msg_interface__action__AString_Goal__Sequence__init(msg_interface__action__AString_Goal__Sequence * array, size_t size);

/// Finalize array of action/AString messages.
/**
 * It calls
 * msg_interface__action__AString_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_interface
void
msg_interface__action__AString_Goal__Sequence__fini(msg_interface__action__AString_Goal__Sequence * array);

/// Create array of action/AString messages.
/**
 * It allocates the memory for the array and calls
 * msg_interface__action__AString_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_interface
msg_interface__action__AString_Goal__Sequence *
msg_interface__action__AString_Goal__Sequence__create(size_t size);

/// Destroy array of action/AString messages.
/**
 * It calls
 * msg_interface__action__AString_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_interface
void
msg_interface__action__AString_Goal__Sequence__destroy(msg_interface__action__AString_Goal__Sequence * array);

/// Check for action/AString message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_interface
bool
msg_interface__action__AString_Goal__Sequence__are_equal(const msg_interface__action__AString_Goal__Sequence * lhs, const msg_interface__action__AString_Goal__Sequence * rhs);

/// Copy an array of action/AString messages.
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
msg_interface__action__AString_Goal__Sequence__copy(
  const msg_interface__action__AString_Goal__Sequence * input,
  msg_interface__action__AString_Goal__Sequence * output);

/// Initialize action/AString message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * msg_interface__action__AString_Result
 * )) before or use
 * msg_interface__action__AString_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_interface
bool
msg_interface__action__AString_Result__init(msg_interface__action__AString_Result * msg);

/// Finalize action/AString message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_interface
void
msg_interface__action__AString_Result__fini(msg_interface__action__AString_Result * msg);

/// Create action/AString message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * msg_interface__action__AString_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_interface
msg_interface__action__AString_Result *
msg_interface__action__AString_Result__create();

/// Destroy action/AString message.
/**
 * It calls
 * msg_interface__action__AString_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_interface
void
msg_interface__action__AString_Result__destroy(msg_interface__action__AString_Result * msg);

/// Check for action/AString message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_interface
bool
msg_interface__action__AString_Result__are_equal(const msg_interface__action__AString_Result * lhs, const msg_interface__action__AString_Result * rhs);

/// Copy a action/AString message.
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
msg_interface__action__AString_Result__copy(
  const msg_interface__action__AString_Result * input,
  msg_interface__action__AString_Result * output);

/// Initialize array of action/AString messages.
/**
 * It allocates the memory for the number of elements and calls
 * msg_interface__action__AString_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_interface
bool
msg_interface__action__AString_Result__Sequence__init(msg_interface__action__AString_Result__Sequence * array, size_t size);

/// Finalize array of action/AString messages.
/**
 * It calls
 * msg_interface__action__AString_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_interface
void
msg_interface__action__AString_Result__Sequence__fini(msg_interface__action__AString_Result__Sequence * array);

/// Create array of action/AString messages.
/**
 * It allocates the memory for the array and calls
 * msg_interface__action__AString_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_interface
msg_interface__action__AString_Result__Sequence *
msg_interface__action__AString_Result__Sequence__create(size_t size);

/// Destroy array of action/AString messages.
/**
 * It calls
 * msg_interface__action__AString_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_interface
void
msg_interface__action__AString_Result__Sequence__destroy(msg_interface__action__AString_Result__Sequence * array);

/// Check for action/AString message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_interface
bool
msg_interface__action__AString_Result__Sequence__are_equal(const msg_interface__action__AString_Result__Sequence * lhs, const msg_interface__action__AString_Result__Sequence * rhs);

/// Copy an array of action/AString messages.
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
msg_interface__action__AString_Result__Sequence__copy(
  const msg_interface__action__AString_Result__Sequence * input,
  msg_interface__action__AString_Result__Sequence * output);

/// Initialize action/AString message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * msg_interface__action__AString_Feedback
 * )) before or use
 * msg_interface__action__AString_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_interface
bool
msg_interface__action__AString_Feedback__init(msg_interface__action__AString_Feedback * msg);

/// Finalize action/AString message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_interface
void
msg_interface__action__AString_Feedback__fini(msg_interface__action__AString_Feedback * msg);

/// Create action/AString message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * msg_interface__action__AString_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_interface
msg_interface__action__AString_Feedback *
msg_interface__action__AString_Feedback__create();

/// Destroy action/AString message.
/**
 * It calls
 * msg_interface__action__AString_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_interface
void
msg_interface__action__AString_Feedback__destroy(msg_interface__action__AString_Feedback * msg);

/// Check for action/AString message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_interface
bool
msg_interface__action__AString_Feedback__are_equal(const msg_interface__action__AString_Feedback * lhs, const msg_interface__action__AString_Feedback * rhs);

/// Copy a action/AString message.
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
msg_interface__action__AString_Feedback__copy(
  const msg_interface__action__AString_Feedback * input,
  msg_interface__action__AString_Feedback * output);

/// Initialize array of action/AString messages.
/**
 * It allocates the memory for the number of elements and calls
 * msg_interface__action__AString_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_interface
bool
msg_interface__action__AString_Feedback__Sequence__init(msg_interface__action__AString_Feedback__Sequence * array, size_t size);

/// Finalize array of action/AString messages.
/**
 * It calls
 * msg_interface__action__AString_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_interface
void
msg_interface__action__AString_Feedback__Sequence__fini(msg_interface__action__AString_Feedback__Sequence * array);

/// Create array of action/AString messages.
/**
 * It allocates the memory for the array and calls
 * msg_interface__action__AString_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_interface
msg_interface__action__AString_Feedback__Sequence *
msg_interface__action__AString_Feedback__Sequence__create(size_t size);

/// Destroy array of action/AString messages.
/**
 * It calls
 * msg_interface__action__AString_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_interface
void
msg_interface__action__AString_Feedback__Sequence__destroy(msg_interface__action__AString_Feedback__Sequence * array);

/// Check for action/AString message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_interface
bool
msg_interface__action__AString_Feedback__Sequence__are_equal(const msg_interface__action__AString_Feedback__Sequence * lhs, const msg_interface__action__AString_Feedback__Sequence * rhs);

/// Copy an array of action/AString messages.
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
msg_interface__action__AString_Feedback__Sequence__copy(
  const msg_interface__action__AString_Feedback__Sequence * input,
  msg_interface__action__AString_Feedback__Sequence * output);

/// Initialize action/AString message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * msg_interface__action__AString_SendGoal_Request
 * )) before or use
 * msg_interface__action__AString_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_interface
bool
msg_interface__action__AString_SendGoal_Request__init(msg_interface__action__AString_SendGoal_Request * msg);

/// Finalize action/AString message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_interface
void
msg_interface__action__AString_SendGoal_Request__fini(msg_interface__action__AString_SendGoal_Request * msg);

/// Create action/AString message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * msg_interface__action__AString_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_interface
msg_interface__action__AString_SendGoal_Request *
msg_interface__action__AString_SendGoal_Request__create();

/// Destroy action/AString message.
/**
 * It calls
 * msg_interface__action__AString_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_interface
void
msg_interface__action__AString_SendGoal_Request__destroy(msg_interface__action__AString_SendGoal_Request * msg);

/// Check for action/AString message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_interface
bool
msg_interface__action__AString_SendGoal_Request__are_equal(const msg_interface__action__AString_SendGoal_Request * lhs, const msg_interface__action__AString_SendGoal_Request * rhs);

/// Copy a action/AString message.
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
msg_interface__action__AString_SendGoal_Request__copy(
  const msg_interface__action__AString_SendGoal_Request * input,
  msg_interface__action__AString_SendGoal_Request * output);

/// Initialize array of action/AString messages.
/**
 * It allocates the memory for the number of elements and calls
 * msg_interface__action__AString_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_interface
bool
msg_interface__action__AString_SendGoal_Request__Sequence__init(msg_interface__action__AString_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/AString messages.
/**
 * It calls
 * msg_interface__action__AString_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_interface
void
msg_interface__action__AString_SendGoal_Request__Sequence__fini(msg_interface__action__AString_SendGoal_Request__Sequence * array);

/// Create array of action/AString messages.
/**
 * It allocates the memory for the array and calls
 * msg_interface__action__AString_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_interface
msg_interface__action__AString_SendGoal_Request__Sequence *
msg_interface__action__AString_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/AString messages.
/**
 * It calls
 * msg_interface__action__AString_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_interface
void
msg_interface__action__AString_SendGoal_Request__Sequence__destroy(msg_interface__action__AString_SendGoal_Request__Sequence * array);

/// Check for action/AString message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_interface
bool
msg_interface__action__AString_SendGoal_Request__Sequence__are_equal(const msg_interface__action__AString_SendGoal_Request__Sequence * lhs, const msg_interface__action__AString_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/AString messages.
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
msg_interface__action__AString_SendGoal_Request__Sequence__copy(
  const msg_interface__action__AString_SendGoal_Request__Sequence * input,
  msg_interface__action__AString_SendGoal_Request__Sequence * output);

/// Initialize action/AString message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * msg_interface__action__AString_SendGoal_Response
 * )) before or use
 * msg_interface__action__AString_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_interface
bool
msg_interface__action__AString_SendGoal_Response__init(msg_interface__action__AString_SendGoal_Response * msg);

/// Finalize action/AString message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_interface
void
msg_interface__action__AString_SendGoal_Response__fini(msg_interface__action__AString_SendGoal_Response * msg);

/// Create action/AString message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * msg_interface__action__AString_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_interface
msg_interface__action__AString_SendGoal_Response *
msg_interface__action__AString_SendGoal_Response__create();

/// Destroy action/AString message.
/**
 * It calls
 * msg_interface__action__AString_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_interface
void
msg_interface__action__AString_SendGoal_Response__destroy(msg_interface__action__AString_SendGoal_Response * msg);

/// Check for action/AString message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_interface
bool
msg_interface__action__AString_SendGoal_Response__are_equal(const msg_interface__action__AString_SendGoal_Response * lhs, const msg_interface__action__AString_SendGoal_Response * rhs);

/// Copy a action/AString message.
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
msg_interface__action__AString_SendGoal_Response__copy(
  const msg_interface__action__AString_SendGoal_Response * input,
  msg_interface__action__AString_SendGoal_Response * output);

/// Initialize array of action/AString messages.
/**
 * It allocates the memory for the number of elements and calls
 * msg_interface__action__AString_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_interface
bool
msg_interface__action__AString_SendGoal_Response__Sequence__init(msg_interface__action__AString_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/AString messages.
/**
 * It calls
 * msg_interface__action__AString_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_interface
void
msg_interface__action__AString_SendGoal_Response__Sequence__fini(msg_interface__action__AString_SendGoal_Response__Sequence * array);

/// Create array of action/AString messages.
/**
 * It allocates the memory for the array and calls
 * msg_interface__action__AString_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_interface
msg_interface__action__AString_SendGoal_Response__Sequence *
msg_interface__action__AString_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/AString messages.
/**
 * It calls
 * msg_interface__action__AString_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_interface
void
msg_interface__action__AString_SendGoal_Response__Sequence__destroy(msg_interface__action__AString_SendGoal_Response__Sequence * array);

/// Check for action/AString message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_interface
bool
msg_interface__action__AString_SendGoal_Response__Sequence__are_equal(const msg_interface__action__AString_SendGoal_Response__Sequence * lhs, const msg_interface__action__AString_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/AString messages.
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
msg_interface__action__AString_SendGoal_Response__Sequence__copy(
  const msg_interface__action__AString_SendGoal_Response__Sequence * input,
  msg_interface__action__AString_SendGoal_Response__Sequence * output);

/// Initialize action/AString message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * msg_interface__action__AString_GetResult_Request
 * )) before or use
 * msg_interface__action__AString_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_interface
bool
msg_interface__action__AString_GetResult_Request__init(msg_interface__action__AString_GetResult_Request * msg);

/// Finalize action/AString message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_interface
void
msg_interface__action__AString_GetResult_Request__fini(msg_interface__action__AString_GetResult_Request * msg);

/// Create action/AString message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * msg_interface__action__AString_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_interface
msg_interface__action__AString_GetResult_Request *
msg_interface__action__AString_GetResult_Request__create();

/// Destroy action/AString message.
/**
 * It calls
 * msg_interface__action__AString_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_interface
void
msg_interface__action__AString_GetResult_Request__destroy(msg_interface__action__AString_GetResult_Request * msg);

/// Check for action/AString message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_interface
bool
msg_interface__action__AString_GetResult_Request__are_equal(const msg_interface__action__AString_GetResult_Request * lhs, const msg_interface__action__AString_GetResult_Request * rhs);

/// Copy a action/AString message.
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
msg_interface__action__AString_GetResult_Request__copy(
  const msg_interface__action__AString_GetResult_Request * input,
  msg_interface__action__AString_GetResult_Request * output);

/// Initialize array of action/AString messages.
/**
 * It allocates the memory for the number of elements and calls
 * msg_interface__action__AString_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_interface
bool
msg_interface__action__AString_GetResult_Request__Sequence__init(msg_interface__action__AString_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/AString messages.
/**
 * It calls
 * msg_interface__action__AString_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_interface
void
msg_interface__action__AString_GetResult_Request__Sequence__fini(msg_interface__action__AString_GetResult_Request__Sequence * array);

/// Create array of action/AString messages.
/**
 * It allocates the memory for the array and calls
 * msg_interface__action__AString_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_interface
msg_interface__action__AString_GetResult_Request__Sequence *
msg_interface__action__AString_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/AString messages.
/**
 * It calls
 * msg_interface__action__AString_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_interface
void
msg_interface__action__AString_GetResult_Request__Sequence__destroy(msg_interface__action__AString_GetResult_Request__Sequence * array);

/// Check for action/AString message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_interface
bool
msg_interface__action__AString_GetResult_Request__Sequence__are_equal(const msg_interface__action__AString_GetResult_Request__Sequence * lhs, const msg_interface__action__AString_GetResult_Request__Sequence * rhs);

/// Copy an array of action/AString messages.
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
msg_interface__action__AString_GetResult_Request__Sequence__copy(
  const msg_interface__action__AString_GetResult_Request__Sequence * input,
  msg_interface__action__AString_GetResult_Request__Sequence * output);

/// Initialize action/AString message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * msg_interface__action__AString_GetResult_Response
 * )) before or use
 * msg_interface__action__AString_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_interface
bool
msg_interface__action__AString_GetResult_Response__init(msg_interface__action__AString_GetResult_Response * msg);

/// Finalize action/AString message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_interface
void
msg_interface__action__AString_GetResult_Response__fini(msg_interface__action__AString_GetResult_Response * msg);

/// Create action/AString message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * msg_interface__action__AString_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_interface
msg_interface__action__AString_GetResult_Response *
msg_interface__action__AString_GetResult_Response__create();

/// Destroy action/AString message.
/**
 * It calls
 * msg_interface__action__AString_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_interface
void
msg_interface__action__AString_GetResult_Response__destroy(msg_interface__action__AString_GetResult_Response * msg);

/// Check for action/AString message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_interface
bool
msg_interface__action__AString_GetResult_Response__are_equal(const msg_interface__action__AString_GetResult_Response * lhs, const msg_interface__action__AString_GetResult_Response * rhs);

/// Copy a action/AString message.
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
msg_interface__action__AString_GetResult_Response__copy(
  const msg_interface__action__AString_GetResult_Response * input,
  msg_interface__action__AString_GetResult_Response * output);

/// Initialize array of action/AString messages.
/**
 * It allocates the memory for the number of elements and calls
 * msg_interface__action__AString_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_interface
bool
msg_interface__action__AString_GetResult_Response__Sequence__init(msg_interface__action__AString_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/AString messages.
/**
 * It calls
 * msg_interface__action__AString_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_interface
void
msg_interface__action__AString_GetResult_Response__Sequence__fini(msg_interface__action__AString_GetResult_Response__Sequence * array);

/// Create array of action/AString messages.
/**
 * It allocates the memory for the array and calls
 * msg_interface__action__AString_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_interface
msg_interface__action__AString_GetResult_Response__Sequence *
msg_interface__action__AString_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/AString messages.
/**
 * It calls
 * msg_interface__action__AString_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_interface
void
msg_interface__action__AString_GetResult_Response__Sequence__destroy(msg_interface__action__AString_GetResult_Response__Sequence * array);

/// Check for action/AString message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_interface
bool
msg_interface__action__AString_GetResult_Response__Sequence__are_equal(const msg_interface__action__AString_GetResult_Response__Sequence * lhs, const msg_interface__action__AString_GetResult_Response__Sequence * rhs);

/// Copy an array of action/AString messages.
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
msg_interface__action__AString_GetResult_Response__Sequence__copy(
  const msg_interface__action__AString_GetResult_Response__Sequence * input,
  msg_interface__action__AString_GetResult_Response__Sequence * output);

/// Initialize action/AString message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * msg_interface__action__AString_FeedbackMessage
 * )) before or use
 * msg_interface__action__AString_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_interface
bool
msg_interface__action__AString_FeedbackMessage__init(msg_interface__action__AString_FeedbackMessage * msg);

/// Finalize action/AString message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_interface
void
msg_interface__action__AString_FeedbackMessage__fini(msg_interface__action__AString_FeedbackMessage * msg);

/// Create action/AString message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * msg_interface__action__AString_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_interface
msg_interface__action__AString_FeedbackMessage *
msg_interface__action__AString_FeedbackMessage__create();

/// Destroy action/AString message.
/**
 * It calls
 * msg_interface__action__AString_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_interface
void
msg_interface__action__AString_FeedbackMessage__destroy(msg_interface__action__AString_FeedbackMessage * msg);

/// Check for action/AString message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_interface
bool
msg_interface__action__AString_FeedbackMessage__are_equal(const msg_interface__action__AString_FeedbackMessage * lhs, const msg_interface__action__AString_FeedbackMessage * rhs);

/// Copy a action/AString message.
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
msg_interface__action__AString_FeedbackMessage__copy(
  const msg_interface__action__AString_FeedbackMessage * input,
  msg_interface__action__AString_FeedbackMessage * output);

/// Initialize array of action/AString messages.
/**
 * It allocates the memory for the number of elements and calls
 * msg_interface__action__AString_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_interface
bool
msg_interface__action__AString_FeedbackMessage__Sequence__init(msg_interface__action__AString_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/AString messages.
/**
 * It calls
 * msg_interface__action__AString_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_interface
void
msg_interface__action__AString_FeedbackMessage__Sequence__fini(msg_interface__action__AString_FeedbackMessage__Sequence * array);

/// Create array of action/AString messages.
/**
 * It allocates the memory for the array and calls
 * msg_interface__action__AString_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_interface
msg_interface__action__AString_FeedbackMessage__Sequence *
msg_interface__action__AString_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/AString messages.
/**
 * It calls
 * msg_interface__action__AString_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_interface
void
msg_interface__action__AString_FeedbackMessage__Sequence__destroy(msg_interface__action__AString_FeedbackMessage__Sequence * array);

/// Check for action/AString message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_interface
bool
msg_interface__action__AString_FeedbackMessage__Sequence__are_equal(const msg_interface__action__AString_FeedbackMessage__Sequence * lhs, const msg_interface__action__AString_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/AString messages.
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
msg_interface__action__AString_FeedbackMessage__Sequence__copy(
  const msg_interface__action__AString_FeedbackMessage__Sequence * input,
  msg_interface__action__AString_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MSG_INTERFACE__ACTION__DETAIL__A_STRING__FUNCTIONS_H_
