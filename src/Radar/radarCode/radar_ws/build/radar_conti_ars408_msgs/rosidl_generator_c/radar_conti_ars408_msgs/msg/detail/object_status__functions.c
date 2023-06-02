// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from radar_conti_ars408_msgs:msg/ObjectStatus.idl
// generated code does not contain a copyright notice
#include "radar_conti_ars408_msgs/msg/detail/object_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `obj_nofobjects`
// Member `obj_meascounter`
// Member `obj_interfaceversion`
#include "std_msgs/msg/detail/int32__functions.h"

bool
radar_conti_ars408_msgs__msg__ObjectStatus__init(radar_conti_ars408_msgs__msg__ObjectStatus * msg)
{
  if (!msg) {
    return false;
  }
  // obj_nofobjects
  if (!std_msgs__msg__Int32__init(&msg->obj_nofobjects)) {
    radar_conti_ars408_msgs__msg__ObjectStatus__fini(msg);
    return false;
  }
  // obj_meascounter
  if (!std_msgs__msg__Int32__init(&msg->obj_meascounter)) {
    radar_conti_ars408_msgs__msg__ObjectStatus__fini(msg);
    return false;
  }
  // obj_interfaceversion
  if (!std_msgs__msg__Int32__init(&msg->obj_interfaceversion)) {
    radar_conti_ars408_msgs__msg__ObjectStatus__fini(msg);
    return false;
  }
  return true;
}

void
radar_conti_ars408_msgs__msg__ObjectStatus__fini(radar_conti_ars408_msgs__msg__ObjectStatus * msg)
{
  if (!msg) {
    return;
  }
  // obj_nofobjects
  std_msgs__msg__Int32__fini(&msg->obj_nofobjects);
  // obj_meascounter
  std_msgs__msg__Int32__fini(&msg->obj_meascounter);
  // obj_interfaceversion
  std_msgs__msg__Int32__fini(&msg->obj_interfaceversion);
}

bool
radar_conti_ars408_msgs__msg__ObjectStatus__are_equal(const radar_conti_ars408_msgs__msg__ObjectStatus * lhs, const radar_conti_ars408_msgs__msg__ObjectStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // obj_nofobjects
  if (!std_msgs__msg__Int32__are_equal(
      &(lhs->obj_nofobjects), &(rhs->obj_nofobjects)))
  {
    return false;
  }
  // obj_meascounter
  if (!std_msgs__msg__Int32__are_equal(
      &(lhs->obj_meascounter), &(rhs->obj_meascounter)))
  {
    return false;
  }
  // obj_interfaceversion
  if (!std_msgs__msg__Int32__are_equal(
      &(lhs->obj_interfaceversion), &(rhs->obj_interfaceversion)))
  {
    return false;
  }
  return true;
}

bool
radar_conti_ars408_msgs__msg__ObjectStatus__copy(
  const radar_conti_ars408_msgs__msg__ObjectStatus * input,
  radar_conti_ars408_msgs__msg__ObjectStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // obj_nofobjects
  if (!std_msgs__msg__Int32__copy(
      &(input->obj_nofobjects), &(output->obj_nofobjects)))
  {
    return false;
  }
  // obj_meascounter
  if (!std_msgs__msg__Int32__copy(
      &(input->obj_meascounter), &(output->obj_meascounter)))
  {
    return false;
  }
  // obj_interfaceversion
  if (!std_msgs__msg__Int32__copy(
      &(input->obj_interfaceversion), &(output->obj_interfaceversion)))
  {
    return false;
  }
  return true;
}

radar_conti_ars408_msgs__msg__ObjectStatus *
radar_conti_ars408_msgs__msg__ObjectStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  radar_conti_ars408_msgs__msg__ObjectStatus * msg = (radar_conti_ars408_msgs__msg__ObjectStatus *)allocator.allocate(sizeof(radar_conti_ars408_msgs__msg__ObjectStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(radar_conti_ars408_msgs__msg__ObjectStatus));
  bool success = radar_conti_ars408_msgs__msg__ObjectStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
radar_conti_ars408_msgs__msg__ObjectStatus__destroy(radar_conti_ars408_msgs__msg__ObjectStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    radar_conti_ars408_msgs__msg__ObjectStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
radar_conti_ars408_msgs__msg__ObjectStatus__Sequence__init(radar_conti_ars408_msgs__msg__ObjectStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  radar_conti_ars408_msgs__msg__ObjectStatus * data = NULL;

  if (size) {
    data = (radar_conti_ars408_msgs__msg__ObjectStatus *)allocator.zero_allocate(size, sizeof(radar_conti_ars408_msgs__msg__ObjectStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = radar_conti_ars408_msgs__msg__ObjectStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        radar_conti_ars408_msgs__msg__ObjectStatus__fini(&data[i - 1]);
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
radar_conti_ars408_msgs__msg__ObjectStatus__Sequence__fini(radar_conti_ars408_msgs__msg__ObjectStatus__Sequence * array)
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
      radar_conti_ars408_msgs__msg__ObjectStatus__fini(&array->data[i]);
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

radar_conti_ars408_msgs__msg__ObjectStatus__Sequence *
radar_conti_ars408_msgs__msg__ObjectStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  radar_conti_ars408_msgs__msg__ObjectStatus__Sequence * array = (radar_conti_ars408_msgs__msg__ObjectStatus__Sequence *)allocator.allocate(sizeof(radar_conti_ars408_msgs__msg__ObjectStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = radar_conti_ars408_msgs__msg__ObjectStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
radar_conti_ars408_msgs__msg__ObjectStatus__Sequence__destroy(radar_conti_ars408_msgs__msg__ObjectStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    radar_conti_ars408_msgs__msg__ObjectStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
radar_conti_ars408_msgs__msg__ObjectStatus__Sequence__are_equal(const radar_conti_ars408_msgs__msg__ObjectStatus__Sequence * lhs, const radar_conti_ars408_msgs__msg__ObjectStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!radar_conti_ars408_msgs__msg__ObjectStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
radar_conti_ars408_msgs__msg__ObjectStatus__Sequence__copy(
  const radar_conti_ars408_msgs__msg__ObjectStatus__Sequence * input,
  radar_conti_ars408_msgs__msg__ObjectStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(radar_conti_ars408_msgs__msg__ObjectStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    radar_conti_ars408_msgs__msg__ObjectStatus * data =
      (radar_conti_ars408_msgs__msg__ObjectStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!radar_conti_ars408_msgs__msg__ObjectStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          radar_conti_ars408_msgs__msg__ObjectStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!radar_conti_ars408_msgs__msg__ObjectStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
