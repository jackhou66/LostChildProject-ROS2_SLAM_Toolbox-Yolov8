// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from msg_interface:action/AString.idl
// generated code does not contain a copyright notice
#include "msg_interface/action/detail/a_string__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `input_string`
#include "rosidl_runtime_c/string_functions.h"

bool
msg_interface__action__AString_Goal__init(msg_interface__action__AString_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // input_string
  if (!rosidl_runtime_c__String__init(&msg->input_string)) {
    msg_interface__action__AString_Goal__fini(msg);
    return false;
  }
  return true;
}

void
msg_interface__action__AString_Goal__fini(msg_interface__action__AString_Goal * msg)
{
  if (!msg) {
    return;
  }
  // input_string
  rosidl_runtime_c__String__fini(&msg->input_string);
}

bool
msg_interface__action__AString_Goal__are_equal(const msg_interface__action__AString_Goal * lhs, const msg_interface__action__AString_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // input_string
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->input_string), &(rhs->input_string)))
  {
    return false;
  }
  return true;
}

bool
msg_interface__action__AString_Goal__copy(
  const msg_interface__action__AString_Goal * input,
  msg_interface__action__AString_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // input_string
  if (!rosidl_runtime_c__String__copy(
      &(input->input_string), &(output->input_string)))
  {
    return false;
  }
  return true;
}

msg_interface__action__AString_Goal *
msg_interface__action__AString_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_interface__action__AString_Goal * msg = (msg_interface__action__AString_Goal *)allocator.allocate(sizeof(msg_interface__action__AString_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(msg_interface__action__AString_Goal));
  bool success = msg_interface__action__AString_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
msg_interface__action__AString_Goal__destroy(msg_interface__action__AString_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    msg_interface__action__AString_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
msg_interface__action__AString_Goal__Sequence__init(msg_interface__action__AString_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_interface__action__AString_Goal * data = NULL;

  if (size) {
    data = (msg_interface__action__AString_Goal *)allocator.zero_allocate(size, sizeof(msg_interface__action__AString_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = msg_interface__action__AString_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        msg_interface__action__AString_Goal__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
msg_interface__action__AString_Goal__Sequence__fini(msg_interface__action__AString_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      msg_interface__action__AString_Goal__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

msg_interface__action__AString_Goal__Sequence *
msg_interface__action__AString_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_interface__action__AString_Goal__Sequence * array = (msg_interface__action__AString_Goal__Sequence *)allocator.allocate(sizeof(msg_interface__action__AString_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = msg_interface__action__AString_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
msg_interface__action__AString_Goal__Sequence__destroy(msg_interface__action__AString_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    msg_interface__action__AString_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
msg_interface__action__AString_Goal__Sequence__are_equal(const msg_interface__action__AString_Goal__Sequence * lhs, const msg_interface__action__AString_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!msg_interface__action__AString_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
msg_interface__action__AString_Goal__Sequence__copy(
  const msg_interface__action__AString_Goal__Sequence * input,
  msg_interface__action__AString_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(msg_interface__action__AString_Goal);
    msg_interface__action__AString_Goal * data =
      (msg_interface__action__AString_Goal *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!msg_interface__action__AString_Goal__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          msg_interface__action__AString_Goal__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!msg_interface__action__AString_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `output_string`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
msg_interface__action__AString_Result__init(msg_interface__action__AString_Result * msg)
{
  if (!msg) {
    return false;
  }
  // output_string
  if (!rosidl_runtime_c__String__init(&msg->output_string)) {
    msg_interface__action__AString_Result__fini(msg);
    return false;
  }
  return true;
}

void
msg_interface__action__AString_Result__fini(msg_interface__action__AString_Result * msg)
{
  if (!msg) {
    return;
  }
  // output_string
  rosidl_runtime_c__String__fini(&msg->output_string);
}

bool
msg_interface__action__AString_Result__are_equal(const msg_interface__action__AString_Result * lhs, const msg_interface__action__AString_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // output_string
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->output_string), &(rhs->output_string)))
  {
    return false;
  }
  return true;
}

bool
msg_interface__action__AString_Result__copy(
  const msg_interface__action__AString_Result * input,
  msg_interface__action__AString_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // output_string
  if (!rosidl_runtime_c__String__copy(
      &(input->output_string), &(output->output_string)))
  {
    return false;
  }
  return true;
}

msg_interface__action__AString_Result *
msg_interface__action__AString_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_interface__action__AString_Result * msg = (msg_interface__action__AString_Result *)allocator.allocate(sizeof(msg_interface__action__AString_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(msg_interface__action__AString_Result));
  bool success = msg_interface__action__AString_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
msg_interface__action__AString_Result__destroy(msg_interface__action__AString_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    msg_interface__action__AString_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
msg_interface__action__AString_Result__Sequence__init(msg_interface__action__AString_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_interface__action__AString_Result * data = NULL;

  if (size) {
    data = (msg_interface__action__AString_Result *)allocator.zero_allocate(size, sizeof(msg_interface__action__AString_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = msg_interface__action__AString_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        msg_interface__action__AString_Result__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
msg_interface__action__AString_Result__Sequence__fini(msg_interface__action__AString_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      msg_interface__action__AString_Result__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

msg_interface__action__AString_Result__Sequence *
msg_interface__action__AString_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_interface__action__AString_Result__Sequence * array = (msg_interface__action__AString_Result__Sequence *)allocator.allocate(sizeof(msg_interface__action__AString_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = msg_interface__action__AString_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
msg_interface__action__AString_Result__Sequence__destroy(msg_interface__action__AString_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    msg_interface__action__AString_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
msg_interface__action__AString_Result__Sequence__are_equal(const msg_interface__action__AString_Result__Sequence * lhs, const msg_interface__action__AString_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!msg_interface__action__AString_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
msg_interface__action__AString_Result__Sequence__copy(
  const msg_interface__action__AString_Result__Sequence * input,
  msg_interface__action__AString_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(msg_interface__action__AString_Result);
    msg_interface__action__AString_Result * data =
      (msg_interface__action__AString_Result *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!msg_interface__action__AString_Result__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          msg_interface__action__AString_Result__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!msg_interface__action__AString_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `feedback_string`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
msg_interface__action__AString_Feedback__init(msg_interface__action__AString_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // feedback_string
  if (!rosidl_runtime_c__String__init(&msg->feedback_string)) {
    msg_interface__action__AString_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
msg_interface__action__AString_Feedback__fini(msg_interface__action__AString_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // feedback_string
  rosidl_runtime_c__String__fini(&msg->feedback_string);
}

bool
msg_interface__action__AString_Feedback__are_equal(const msg_interface__action__AString_Feedback * lhs, const msg_interface__action__AString_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // feedback_string
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->feedback_string), &(rhs->feedback_string)))
  {
    return false;
  }
  return true;
}

bool
msg_interface__action__AString_Feedback__copy(
  const msg_interface__action__AString_Feedback * input,
  msg_interface__action__AString_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // feedback_string
  if (!rosidl_runtime_c__String__copy(
      &(input->feedback_string), &(output->feedback_string)))
  {
    return false;
  }
  return true;
}

msg_interface__action__AString_Feedback *
msg_interface__action__AString_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_interface__action__AString_Feedback * msg = (msg_interface__action__AString_Feedback *)allocator.allocate(sizeof(msg_interface__action__AString_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(msg_interface__action__AString_Feedback));
  bool success = msg_interface__action__AString_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
msg_interface__action__AString_Feedback__destroy(msg_interface__action__AString_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    msg_interface__action__AString_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
msg_interface__action__AString_Feedback__Sequence__init(msg_interface__action__AString_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_interface__action__AString_Feedback * data = NULL;

  if (size) {
    data = (msg_interface__action__AString_Feedback *)allocator.zero_allocate(size, sizeof(msg_interface__action__AString_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = msg_interface__action__AString_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        msg_interface__action__AString_Feedback__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
msg_interface__action__AString_Feedback__Sequence__fini(msg_interface__action__AString_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      msg_interface__action__AString_Feedback__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

msg_interface__action__AString_Feedback__Sequence *
msg_interface__action__AString_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_interface__action__AString_Feedback__Sequence * array = (msg_interface__action__AString_Feedback__Sequence *)allocator.allocate(sizeof(msg_interface__action__AString_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = msg_interface__action__AString_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
msg_interface__action__AString_Feedback__Sequence__destroy(msg_interface__action__AString_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    msg_interface__action__AString_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
msg_interface__action__AString_Feedback__Sequence__are_equal(const msg_interface__action__AString_Feedback__Sequence * lhs, const msg_interface__action__AString_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!msg_interface__action__AString_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
msg_interface__action__AString_Feedback__Sequence__copy(
  const msg_interface__action__AString_Feedback__Sequence * input,
  msg_interface__action__AString_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(msg_interface__action__AString_Feedback);
    msg_interface__action__AString_Feedback * data =
      (msg_interface__action__AString_Feedback *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!msg_interface__action__AString_Feedback__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          msg_interface__action__AString_Feedback__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!msg_interface__action__AString_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "msg_interface/action/detail/a_string__functions.h"

bool
msg_interface__action__AString_SendGoal_Request__init(msg_interface__action__AString_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    msg_interface__action__AString_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!msg_interface__action__AString_Goal__init(&msg->goal)) {
    msg_interface__action__AString_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
msg_interface__action__AString_SendGoal_Request__fini(msg_interface__action__AString_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  msg_interface__action__AString_Goal__fini(&msg->goal);
}

bool
msg_interface__action__AString_SendGoal_Request__are_equal(const msg_interface__action__AString_SendGoal_Request * lhs, const msg_interface__action__AString_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!msg_interface__action__AString_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
msg_interface__action__AString_SendGoal_Request__copy(
  const msg_interface__action__AString_SendGoal_Request * input,
  msg_interface__action__AString_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!msg_interface__action__AString_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

msg_interface__action__AString_SendGoal_Request *
msg_interface__action__AString_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_interface__action__AString_SendGoal_Request * msg = (msg_interface__action__AString_SendGoal_Request *)allocator.allocate(sizeof(msg_interface__action__AString_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(msg_interface__action__AString_SendGoal_Request));
  bool success = msg_interface__action__AString_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
msg_interface__action__AString_SendGoal_Request__destroy(msg_interface__action__AString_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    msg_interface__action__AString_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
msg_interface__action__AString_SendGoal_Request__Sequence__init(msg_interface__action__AString_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_interface__action__AString_SendGoal_Request * data = NULL;

  if (size) {
    data = (msg_interface__action__AString_SendGoal_Request *)allocator.zero_allocate(size, sizeof(msg_interface__action__AString_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = msg_interface__action__AString_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        msg_interface__action__AString_SendGoal_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
msg_interface__action__AString_SendGoal_Request__Sequence__fini(msg_interface__action__AString_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      msg_interface__action__AString_SendGoal_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

msg_interface__action__AString_SendGoal_Request__Sequence *
msg_interface__action__AString_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_interface__action__AString_SendGoal_Request__Sequence * array = (msg_interface__action__AString_SendGoal_Request__Sequence *)allocator.allocate(sizeof(msg_interface__action__AString_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = msg_interface__action__AString_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
msg_interface__action__AString_SendGoal_Request__Sequence__destroy(msg_interface__action__AString_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    msg_interface__action__AString_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
msg_interface__action__AString_SendGoal_Request__Sequence__are_equal(const msg_interface__action__AString_SendGoal_Request__Sequence * lhs, const msg_interface__action__AString_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!msg_interface__action__AString_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
msg_interface__action__AString_SendGoal_Request__Sequence__copy(
  const msg_interface__action__AString_SendGoal_Request__Sequence * input,
  msg_interface__action__AString_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(msg_interface__action__AString_SendGoal_Request);
    msg_interface__action__AString_SendGoal_Request * data =
      (msg_interface__action__AString_SendGoal_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!msg_interface__action__AString_SendGoal_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          msg_interface__action__AString_SendGoal_Request__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!msg_interface__action__AString_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
msg_interface__action__AString_SendGoal_Response__init(msg_interface__action__AString_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    msg_interface__action__AString_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
msg_interface__action__AString_SendGoal_Response__fini(msg_interface__action__AString_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
msg_interface__action__AString_SendGoal_Response__are_equal(const msg_interface__action__AString_SendGoal_Response * lhs, const msg_interface__action__AString_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
msg_interface__action__AString_SendGoal_Response__copy(
  const msg_interface__action__AString_SendGoal_Response * input,
  msg_interface__action__AString_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

msg_interface__action__AString_SendGoal_Response *
msg_interface__action__AString_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_interface__action__AString_SendGoal_Response * msg = (msg_interface__action__AString_SendGoal_Response *)allocator.allocate(sizeof(msg_interface__action__AString_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(msg_interface__action__AString_SendGoal_Response));
  bool success = msg_interface__action__AString_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
msg_interface__action__AString_SendGoal_Response__destroy(msg_interface__action__AString_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    msg_interface__action__AString_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
msg_interface__action__AString_SendGoal_Response__Sequence__init(msg_interface__action__AString_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_interface__action__AString_SendGoal_Response * data = NULL;

  if (size) {
    data = (msg_interface__action__AString_SendGoal_Response *)allocator.zero_allocate(size, sizeof(msg_interface__action__AString_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = msg_interface__action__AString_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        msg_interface__action__AString_SendGoal_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
msg_interface__action__AString_SendGoal_Response__Sequence__fini(msg_interface__action__AString_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      msg_interface__action__AString_SendGoal_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

msg_interface__action__AString_SendGoal_Response__Sequence *
msg_interface__action__AString_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_interface__action__AString_SendGoal_Response__Sequence * array = (msg_interface__action__AString_SendGoal_Response__Sequence *)allocator.allocate(sizeof(msg_interface__action__AString_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = msg_interface__action__AString_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
msg_interface__action__AString_SendGoal_Response__Sequence__destroy(msg_interface__action__AString_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    msg_interface__action__AString_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
msg_interface__action__AString_SendGoal_Response__Sequence__are_equal(const msg_interface__action__AString_SendGoal_Response__Sequence * lhs, const msg_interface__action__AString_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!msg_interface__action__AString_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
msg_interface__action__AString_SendGoal_Response__Sequence__copy(
  const msg_interface__action__AString_SendGoal_Response__Sequence * input,
  msg_interface__action__AString_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(msg_interface__action__AString_SendGoal_Response);
    msg_interface__action__AString_SendGoal_Response * data =
      (msg_interface__action__AString_SendGoal_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!msg_interface__action__AString_SendGoal_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          msg_interface__action__AString_SendGoal_Response__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!msg_interface__action__AString_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
msg_interface__action__AString_GetResult_Request__init(msg_interface__action__AString_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    msg_interface__action__AString_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
msg_interface__action__AString_GetResult_Request__fini(msg_interface__action__AString_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
msg_interface__action__AString_GetResult_Request__are_equal(const msg_interface__action__AString_GetResult_Request * lhs, const msg_interface__action__AString_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
msg_interface__action__AString_GetResult_Request__copy(
  const msg_interface__action__AString_GetResult_Request * input,
  msg_interface__action__AString_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

msg_interface__action__AString_GetResult_Request *
msg_interface__action__AString_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_interface__action__AString_GetResult_Request * msg = (msg_interface__action__AString_GetResult_Request *)allocator.allocate(sizeof(msg_interface__action__AString_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(msg_interface__action__AString_GetResult_Request));
  bool success = msg_interface__action__AString_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
msg_interface__action__AString_GetResult_Request__destroy(msg_interface__action__AString_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    msg_interface__action__AString_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
msg_interface__action__AString_GetResult_Request__Sequence__init(msg_interface__action__AString_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_interface__action__AString_GetResult_Request * data = NULL;

  if (size) {
    data = (msg_interface__action__AString_GetResult_Request *)allocator.zero_allocate(size, sizeof(msg_interface__action__AString_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = msg_interface__action__AString_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        msg_interface__action__AString_GetResult_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
msg_interface__action__AString_GetResult_Request__Sequence__fini(msg_interface__action__AString_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      msg_interface__action__AString_GetResult_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

msg_interface__action__AString_GetResult_Request__Sequence *
msg_interface__action__AString_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_interface__action__AString_GetResult_Request__Sequence * array = (msg_interface__action__AString_GetResult_Request__Sequence *)allocator.allocate(sizeof(msg_interface__action__AString_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = msg_interface__action__AString_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
msg_interface__action__AString_GetResult_Request__Sequence__destroy(msg_interface__action__AString_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    msg_interface__action__AString_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
msg_interface__action__AString_GetResult_Request__Sequence__are_equal(const msg_interface__action__AString_GetResult_Request__Sequence * lhs, const msg_interface__action__AString_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!msg_interface__action__AString_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
msg_interface__action__AString_GetResult_Request__Sequence__copy(
  const msg_interface__action__AString_GetResult_Request__Sequence * input,
  msg_interface__action__AString_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(msg_interface__action__AString_GetResult_Request);
    msg_interface__action__AString_GetResult_Request * data =
      (msg_interface__action__AString_GetResult_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!msg_interface__action__AString_GetResult_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          msg_interface__action__AString_GetResult_Request__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!msg_interface__action__AString_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "msg_interface/action/detail/a_string__functions.h"

bool
msg_interface__action__AString_GetResult_Response__init(msg_interface__action__AString_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!msg_interface__action__AString_Result__init(&msg->result)) {
    msg_interface__action__AString_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
msg_interface__action__AString_GetResult_Response__fini(msg_interface__action__AString_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  msg_interface__action__AString_Result__fini(&msg->result);
}

bool
msg_interface__action__AString_GetResult_Response__are_equal(const msg_interface__action__AString_GetResult_Response * lhs, const msg_interface__action__AString_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!msg_interface__action__AString_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
msg_interface__action__AString_GetResult_Response__copy(
  const msg_interface__action__AString_GetResult_Response * input,
  msg_interface__action__AString_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!msg_interface__action__AString_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

msg_interface__action__AString_GetResult_Response *
msg_interface__action__AString_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_interface__action__AString_GetResult_Response * msg = (msg_interface__action__AString_GetResult_Response *)allocator.allocate(sizeof(msg_interface__action__AString_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(msg_interface__action__AString_GetResult_Response));
  bool success = msg_interface__action__AString_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
msg_interface__action__AString_GetResult_Response__destroy(msg_interface__action__AString_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    msg_interface__action__AString_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
msg_interface__action__AString_GetResult_Response__Sequence__init(msg_interface__action__AString_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_interface__action__AString_GetResult_Response * data = NULL;

  if (size) {
    data = (msg_interface__action__AString_GetResult_Response *)allocator.zero_allocate(size, sizeof(msg_interface__action__AString_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = msg_interface__action__AString_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        msg_interface__action__AString_GetResult_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
msg_interface__action__AString_GetResult_Response__Sequence__fini(msg_interface__action__AString_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      msg_interface__action__AString_GetResult_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

msg_interface__action__AString_GetResult_Response__Sequence *
msg_interface__action__AString_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_interface__action__AString_GetResult_Response__Sequence * array = (msg_interface__action__AString_GetResult_Response__Sequence *)allocator.allocate(sizeof(msg_interface__action__AString_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = msg_interface__action__AString_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
msg_interface__action__AString_GetResult_Response__Sequence__destroy(msg_interface__action__AString_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    msg_interface__action__AString_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
msg_interface__action__AString_GetResult_Response__Sequence__are_equal(const msg_interface__action__AString_GetResult_Response__Sequence * lhs, const msg_interface__action__AString_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!msg_interface__action__AString_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
msg_interface__action__AString_GetResult_Response__Sequence__copy(
  const msg_interface__action__AString_GetResult_Response__Sequence * input,
  msg_interface__action__AString_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(msg_interface__action__AString_GetResult_Response);
    msg_interface__action__AString_GetResult_Response * data =
      (msg_interface__action__AString_GetResult_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!msg_interface__action__AString_GetResult_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          msg_interface__action__AString_GetResult_Response__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!msg_interface__action__AString_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "msg_interface/action/detail/a_string__functions.h"

bool
msg_interface__action__AString_FeedbackMessage__init(msg_interface__action__AString_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    msg_interface__action__AString_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!msg_interface__action__AString_Feedback__init(&msg->feedback)) {
    msg_interface__action__AString_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
msg_interface__action__AString_FeedbackMessage__fini(msg_interface__action__AString_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  msg_interface__action__AString_Feedback__fini(&msg->feedback);
}

bool
msg_interface__action__AString_FeedbackMessage__are_equal(const msg_interface__action__AString_FeedbackMessage * lhs, const msg_interface__action__AString_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!msg_interface__action__AString_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
msg_interface__action__AString_FeedbackMessage__copy(
  const msg_interface__action__AString_FeedbackMessage * input,
  msg_interface__action__AString_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!msg_interface__action__AString_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

msg_interface__action__AString_FeedbackMessage *
msg_interface__action__AString_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_interface__action__AString_FeedbackMessage * msg = (msg_interface__action__AString_FeedbackMessage *)allocator.allocate(sizeof(msg_interface__action__AString_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(msg_interface__action__AString_FeedbackMessage));
  bool success = msg_interface__action__AString_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
msg_interface__action__AString_FeedbackMessage__destroy(msg_interface__action__AString_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    msg_interface__action__AString_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
msg_interface__action__AString_FeedbackMessage__Sequence__init(msg_interface__action__AString_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_interface__action__AString_FeedbackMessage * data = NULL;

  if (size) {
    data = (msg_interface__action__AString_FeedbackMessage *)allocator.zero_allocate(size, sizeof(msg_interface__action__AString_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = msg_interface__action__AString_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        msg_interface__action__AString_FeedbackMessage__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
msg_interface__action__AString_FeedbackMessage__Sequence__fini(msg_interface__action__AString_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      msg_interface__action__AString_FeedbackMessage__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

msg_interface__action__AString_FeedbackMessage__Sequence *
msg_interface__action__AString_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_interface__action__AString_FeedbackMessage__Sequence * array = (msg_interface__action__AString_FeedbackMessage__Sequence *)allocator.allocate(sizeof(msg_interface__action__AString_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = msg_interface__action__AString_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
msg_interface__action__AString_FeedbackMessage__Sequence__destroy(msg_interface__action__AString_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    msg_interface__action__AString_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
msg_interface__action__AString_FeedbackMessage__Sequence__are_equal(const msg_interface__action__AString_FeedbackMessage__Sequence * lhs, const msg_interface__action__AString_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!msg_interface__action__AString_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
msg_interface__action__AString_FeedbackMessage__Sequence__copy(
  const msg_interface__action__AString_FeedbackMessage__Sequence * input,
  msg_interface__action__AString_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(msg_interface__action__AString_FeedbackMessage);
    msg_interface__action__AString_FeedbackMessage * data =
      (msg_interface__action__AString_FeedbackMessage *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!msg_interface__action__AString_FeedbackMessage__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          msg_interface__action__AString_FeedbackMessage__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!msg_interface__action__AString_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
