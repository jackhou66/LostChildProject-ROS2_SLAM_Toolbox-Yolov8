// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from msg_interface:srv/AddToQueue.idl
// generated code does not contain a copyright notice
#include "msg_interface/srv/detail/add_to_queue__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `input_string`
#include "rosidl_runtime_c/string_functions.h"

bool
msg_interface__srv__AddToQueue_Request__init(msg_interface__srv__AddToQueue_Request * msg)
{
  if (!msg) {
    return false;
  }
  // input_string
  if (!rosidl_runtime_c__String__init(&msg->input_string)) {
    msg_interface__srv__AddToQueue_Request__fini(msg);
    return false;
  }
  return true;
}

void
msg_interface__srv__AddToQueue_Request__fini(msg_interface__srv__AddToQueue_Request * msg)
{
  if (!msg) {
    return;
  }
  // input_string
  rosidl_runtime_c__String__fini(&msg->input_string);
}

bool
msg_interface__srv__AddToQueue_Request__are_equal(const msg_interface__srv__AddToQueue_Request * lhs, const msg_interface__srv__AddToQueue_Request * rhs)
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
msg_interface__srv__AddToQueue_Request__copy(
  const msg_interface__srv__AddToQueue_Request * input,
  msg_interface__srv__AddToQueue_Request * output)
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

msg_interface__srv__AddToQueue_Request *
msg_interface__srv__AddToQueue_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_interface__srv__AddToQueue_Request * msg = (msg_interface__srv__AddToQueue_Request *)allocator.allocate(sizeof(msg_interface__srv__AddToQueue_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(msg_interface__srv__AddToQueue_Request));
  bool success = msg_interface__srv__AddToQueue_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
msg_interface__srv__AddToQueue_Request__destroy(msg_interface__srv__AddToQueue_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    msg_interface__srv__AddToQueue_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
msg_interface__srv__AddToQueue_Request__Sequence__init(msg_interface__srv__AddToQueue_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_interface__srv__AddToQueue_Request * data = NULL;

  if (size) {
    data = (msg_interface__srv__AddToQueue_Request *)allocator.zero_allocate(size, sizeof(msg_interface__srv__AddToQueue_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = msg_interface__srv__AddToQueue_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        msg_interface__srv__AddToQueue_Request__fini(&data[i - 1]);
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
msg_interface__srv__AddToQueue_Request__Sequence__fini(msg_interface__srv__AddToQueue_Request__Sequence * array)
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
      msg_interface__srv__AddToQueue_Request__fini(&array->data[i]);
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

msg_interface__srv__AddToQueue_Request__Sequence *
msg_interface__srv__AddToQueue_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_interface__srv__AddToQueue_Request__Sequence * array = (msg_interface__srv__AddToQueue_Request__Sequence *)allocator.allocate(sizeof(msg_interface__srv__AddToQueue_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = msg_interface__srv__AddToQueue_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
msg_interface__srv__AddToQueue_Request__Sequence__destroy(msg_interface__srv__AddToQueue_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    msg_interface__srv__AddToQueue_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
msg_interface__srv__AddToQueue_Request__Sequence__are_equal(const msg_interface__srv__AddToQueue_Request__Sequence * lhs, const msg_interface__srv__AddToQueue_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!msg_interface__srv__AddToQueue_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
msg_interface__srv__AddToQueue_Request__Sequence__copy(
  const msg_interface__srv__AddToQueue_Request__Sequence * input,
  msg_interface__srv__AddToQueue_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(msg_interface__srv__AddToQueue_Request);
    msg_interface__srv__AddToQueue_Request * data =
      (msg_interface__srv__AddToQueue_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!msg_interface__srv__AddToQueue_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          msg_interface__srv__AddToQueue_Request__fini(&data[i]);
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
    if (!msg_interface__srv__AddToQueue_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `string_list`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
msg_interface__srv__AddToQueue_Response__init(msg_interface__srv__AddToQueue_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // string_list
  if (!rosidl_runtime_c__String__init(&msg->string_list)) {
    msg_interface__srv__AddToQueue_Response__fini(msg);
    return false;
  }
  return true;
}

void
msg_interface__srv__AddToQueue_Response__fini(msg_interface__srv__AddToQueue_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // string_list
  rosidl_runtime_c__String__fini(&msg->string_list);
}

bool
msg_interface__srv__AddToQueue_Response__are_equal(const msg_interface__srv__AddToQueue_Response * lhs, const msg_interface__srv__AddToQueue_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // string_list
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->string_list), &(rhs->string_list)))
  {
    return false;
  }
  return true;
}

bool
msg_interface__srv__AddToQueue_Response__copy(
  const msg_interface__srv__AddToQueue_Response * input,
  msg_interface__srv__AddToQueue_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // string_list
  if (!rosidl_runtime_c__String__copy(
      &(input->string_list), &(output->string_list)))
  {
    return false;
  }
  return true;
}

msg_interface__srv__AddToQueue_Response *
msg_interface__srv__AddToQueue_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_interface__srv__AddToQueue_Response * msg = (msg_interface__srv__AddToQueue_Response *)allocator.allocate(sizeof(msg_interface__srv__AddToQueue_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(msg_interface__srv__AddToQueue_Response));
  bool success = msg_interface__srv__AddToQueue_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
msg_interface__srv__AddToQueue_Response__destroy(msg_interface__srv__AddToQueue_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    msg_interface__srv__AddToQueue_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
msg_interface__srv__AddToQueue_Response__Sequence__init(msg_interface__srv__AddToQueue_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_interface__srv__AddToQueue_Response * data = NULL;

  if (size) {
    data = (msg_interface__srv__AddToQueue_Response *)allocator.zero_allocate(size, sizeof(msg_interface__srv__AddToQueue_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = msg_interface__srv__AddToQueue_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        msg_interface__srv__AddToQueue_Response__fini(&data[i - 1]);
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
msg_interface__srv__AddToQueue_Response__Sequence__fini(msg_interface__srv__AddToQueue_Response__Sequence * array)
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
      msg_interface__srv__AddToQueue_Response__fini(&array->data[i]);
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

msg_interface__srv__AddToQueue_Response__Sequence *
msg_interface__srv__AddToQueue_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_interface__srv__AddToQueue_Response__Sequence * array = (msg_interface__srv__AddToQueue_Response__Sequence *)allocator.allocate(sizeof(msg_interface__srv__AddToQueue_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = msg_interface__srv__AddToQueue_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
msg_interface__srv__AddToQueue_Response__Sequence__destroy(msg_interface__srv__AddToQueue_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    msg_interface__srv__AddToQueue_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
msg_interface__srv__AddToQueue_Response__Sequence__are_equal(const msg_interface__srv__AddToQueue_Response__Sequence * lhs, const msg_interface__srv__AddToQueue_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!msg_interface__srv__AddToQueue_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
msg_interface__srv__AddToQueue_Response__Sequence__copy(
  const msg_interface__srv__AddToQueue_Response__Sequence * input,
  msg_interface__srv__AddToQueue_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(msg_interface__srv__AddToQueue_Response);
    msg_interface__srv__AddToQueue_Response * data =
      (msg_interface__srv__AddToQueue_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!msg_interface__srv__AddToQueue_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          msg_interface__srv__AddToQueue_Response__fini(&data[i]);
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
    if (!msg_interface__srv__AddToQueue_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
