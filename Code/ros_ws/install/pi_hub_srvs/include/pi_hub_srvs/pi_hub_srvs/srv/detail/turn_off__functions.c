// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pi_hub_srvs:srv/TurnOff.idl
// generated code does not contain a copyright notice
#include "pi_hub_srvs/srv/detail/turn_off__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
pi_hub_srvs__srv__TurnOff_Request__init(pi_hub_srvs__srv__TurnOff_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
pi_hub_srvs__srv__TurnOff_Request__fini(pi_hub_srvs__srv__TurnOff_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
pi_hub_srvs__srv__TurnOff_Request__are_equal(const pi_hub_srvs__srv__TurnOff_Request * lhs, const pi_hub_srvs__srv__TurnOff_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
pi_hub_srvs__srv__TurnOff_Request__copy(
  const pi_hub_srvs__srv__TurnOff_Request * input,
  pi_hub_srvs__srv__TurnOff_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

pi_hub_srvs__srv__TurnOff_Request *
pi_hub_srvs__srv__TurnOff_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pi_hub_srvs__srv__TurnOff_Request * msg = (pi_hub_srvs__srv__TurnOff_Request *)allocator.allocate(sizeof(pi_hub_srvs__srv__TurnOff_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pi_hub_srvs__srv__TurnOff_Request));
  bool success = pi_hub_srvs__srv__TurnOff_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pi_hub_srvs__srv__TurnOff_Request__destroy(pi_hub_srvs__srv__TurnOff_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pi_hub_srvs__srv__TurnOff_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pi_hub_srvs__srv__TurnOff_Request__Sequence__init(pi_hub_srvs__srv__TurnOff_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pi_hub_srvs__srv__TurnOff_Request * data = NULL;

  if (size) {
    data = (pi_hub_srvs__srv__TurnOff_Request *)allocator.zero_allocate(size, sizeof(pi_hub_srvs__srv__TurnOff_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pi_hub_srvs__srv__TurnOff_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pi_hub_srvs__srv__TurnOff_Request__fini(&data[i - 1]);
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
pi_hub_srvs__srv__TurnOff_Request__Sequence__fini(pi_hub_srvs__srv__TurnOff_Request__Sequence * array)
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
      pi_hub_srvs__srv__TurnOff_Request__fini(&array->data[i]);
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

pi_hub_srvs__srv__TurnOff_Request__Sequence *
pi_hub_srvs__srv__TurnOff_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pi_hub_srvs__srv__TurnOff_Request__Sequence * array = (pi_hub_srvs__srv__TurnOff_Request__Sequence *)allocator.allocate(sizeof(pi_hub_srvs__srv__TurnOff_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pi_hub_srvs__srv__TurnOff_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pi_hub_srvs__srv__TurnOff_Request__Sequence__destroy(pi_hub_srvs__srv__TurnOff_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pi_hub_srvs__srv__TurnOff_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pi_hub_srvs__srv__TurnOff_Request__Sequence__are_equal(const pi_hub_srvs__srv__TurnOff_Request__Sequence * lhs, const pi_hub_srvs__srv__TurnOff_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pi_hub_srvs__srv__TurnOff_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pi_hub_srvs__srv__TurnOff_Request__Sequence__copy(
  const pi_hub_srvs__srv__TurnOff_Request__Sequence * input,
  pi_hub_srvs__srv__TurnOff_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pi_hub_srvs__srv__TurnOff_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pi_hub_srvs__srv__TurnOff_Request * data =
      (pi_hub_srvs__srv__TurnOff_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pi_hub_srvs__srv__TurnOff_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pi_hub_srvs__srv__TurnOff_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pi_hub_srvs__srv__TurnOff_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
pi_hub_srvs__srv__TurnOff_Response__init(pi_hub_srvs__srv__TurnOff_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
pi_hub_srvs__srv__TurnOff_Response__fini(pi_hub_srvs__srv__TurnOff_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
pi_hub_srvs__srv__TurnOff_Response__are_equal(const pi_hub_srvs__srv__TurnOff_Response * lhs, const pi_hub_srvs__srv__TurnOff_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
pi_hub_srvs__srv__TurnOff_Response__copy(
  const pi_hub_srvs__srv__TurnOff_Response * input,
  pi_hub_srvs__srv__TurnOff_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

pi_hub_srvs__srv__TurnOff_Response *
pi_hub_srvs__srv__TurnOff_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pi_hub_srvs__srv__TurnOff_Response * msg = (pi_hub_srvs__srv__TurnOff_Response *)allocator.allocate(sizeof(pi_hub_srvs__srv__TurnOff_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pi_hub_srvs__srv__TurnOff_Response));
  bool success = pi_hub_srvs__srv__TurnOff_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pi_hub_srvs__srv__TurnOff_Response__destroy(pi_hub_srvs__srv__TurnOff_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pi_hub_srvs__srv__TurnOff_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pi_hub_srvs__srv__TurnOff_Response__Sequence__init(pi_hub_srvs__srv__TurnOff_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pi_hub_srvs__srv__TurnOff_Response * data = NULL;

  if (size) {
    data = (pi_hub_srvs__srv__TurnOff_Response *)allocator.zero_allocate(size, sizeof(pi_hub_srvs__srv__TurnOff_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pi_hub_srvs__srv__TurnOff_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pi_hub_srvs__srv__TurnOff_Response__fini(&data[i - 1]);
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
pi_hub_srvs__srv__TurnOff_Response__Sequence__fini(pi_hub_srvs__srv__TurnOff_Response__Sequence * array)
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
      pi_hub_srvs__srv__TurnOff_Response__fini(&array->data[i]);
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

pi_hub_srvs__srv__TurnOff_Response__Sequence *
pi_hub_srvs__srv__TurnOff_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pi_hub_srvs__srv__TurnOff_Response__Sequence * array = (pi_hub_srvs__srv__TurnOff_Response__Sequence *)allocator.allocate(sizeof(pi_hub_srvs__srv__TurnOff_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pi_hub_srvs__srv__TurnOff_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pi_hub_srvs__srv__TurnOff_Response__Sequence__destroy(pi_hub_srvs__srv__TurnOff_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pi_hub_srvs__srv__TurnOff_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pi_hub_srvs__srv__TurnOff_Response__Sequence__are_equal(const pi_hub_srvs__srv__TurnOff_Response__Sequence * lhs, const pi_hub_srvs__srv__TurnOff_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pi_hub_srvs__srv__TurnOff_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pi_hub_srvs__srv__TurnOff_Response__Sequence__copy(
  const pi_hub_srvs__srv__TurnOff_Response__Sequence * input,
  pi_hub_srvs__srv__TurnOff_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pi_hub_srvs__srv__TurnOff_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pi_hub_srvs__srv__TurnOff_Response * data =
      (pi_hub_srvs__srv__TurnOff_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pi_hub_srvs__srv__TurnOff_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pi_hub_srvs__srv__TurnOff_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pi_hub_srvs__srv__TurnOff_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
