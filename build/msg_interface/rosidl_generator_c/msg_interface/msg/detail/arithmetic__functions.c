// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from msg_interface:msg/Arithmetic.idl
// generated code does not contain a copyright notice
#include "msg_interface/msg/detail/arithmetic__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
msg_interface__msg__Arithmetic__init(msg_interface__msg__Arithmetic * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    msg_interface__msg__Arithmetic__fini(msg);
    return false;
  }
  // argument
  return true;
}

void
msg_interface__msg__Arithmetic__fini(msg_interface__msg__Arithmetic * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // argument
}

bool
msg_interface__msg__Arithmetic__are_equal(const msg_interface__msg__Arithmetic * lhs, const msg_interface__msg__Arithmetic * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  // argument
  if (lhs->argument != rhs->argument) {
    return false;
  }
  return true;
}

bool
msg_interface__msg__Arithmetic__copy(
  const msg_interface__msg__Arithmetic * input,
  msg_interface__msg__Arithmetic * output)
{
  if (!input || !output) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  // argument
  output->argument = input->argument;
  return true;
}

msg_interface__msg__Arithmetic *
msg_interface__msg__Arithmetic__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_interface__msg__Arithmetic * msg = (msg_interface__msg__Arithmetic *)allocator.allocate(sizeof(msg_interface__msg__Arithmetic), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(msg_interface__msg__Arithmetic));
  bool success = msg_interface__msg__Arithmetic__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
msg_interface__msg__Arithmetic__destroy(msg_interface__msg__Arithmetic * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    msg_interface__msg__Arithmetic__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
msg_interface__msg__Arithmetic__Sequence__init(msg_interface__msg__Arithmetic__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_interface__msg__Arithmetic * data = NULL;

  if (size) {
    data = (msg_interface__msg__Arithmetic *)allocator.zero_allocate(size, sizeof(msg_interface__msg__Arithmetic), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = msg_interface__msg__Arithmetic__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        msg_interface__msg__Arithmetic__fini(&data[i - 1]);
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
msg_interface__msg__Arithmetic__Sequence__fini(msg_interface__msg__Arithmetic__Sequence * array)
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
      msg_interface__msg__Arithmetic__fini(&array->data[i]);
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

msg_interface__msg__Arithmetic__Sequence *
msg_interface__msg__Arithmetic__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_interface__msg__Arithmetic__Sequence * array = (msg_interface__msg__Arithmetic__Sequence *)allocator.allocate(sizeof(msg_interface__msg__Arithmetic__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = msg_interface__msg__Arithmetic__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
msg_interface__msg__Arithmetic__Sequence__destroy(msg_interface__msg__Arithmetic__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    msg_interface__msg__Arithmetic__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
msg_interface__msg__Arithmetic__Sequence__are_equal(const msg_interface__msg__Arithmetic__Sequence * lhs, const msg_interface__msg__Arithmetic__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!msg_interface__msg__Arithmetic__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
msg_interface__msg__Arithmetic__Sequence__copy(
  const msg_interface__msg__Arithmetic__Sequence * input,
  msg_interface__msg__Arithmetic__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(msg_interface__msg__Arithmetic);
    msg_interface__msg__Arithmetic * data =
      (msg_interface__msg__Arithmetic *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!msg_interface__msg__Arithmetic__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          msg_interface__msg__Arithmetic__fini(&data[i]);
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
    if (!msg_interface__msg__Arithmetic__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
