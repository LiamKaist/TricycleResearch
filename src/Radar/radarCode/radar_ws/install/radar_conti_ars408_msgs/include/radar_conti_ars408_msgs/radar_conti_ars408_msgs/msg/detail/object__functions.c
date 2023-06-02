// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from radar_conti_ars408_msgs:msg/Object.idl
// generated code does not contain a copyright notice
#include "radar_conti_ars408_msgs/msg/detail/object__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `obj_id`
#include "std_msgs/msg/detail/int32__functions.h"
// Member `object_general`
#include "radar_conti_ars408_msgs/msg/detail/object_general__functions.h"
// Member `object_extended`
#include "radar_conti_ars408_msgs/msg/detail/object_extended__functions.h"
// Member `object_quality`
#include "radar_conti_ars408_msgs/msg/detail/object_quality__functions.h"

bool
radar_conti_ars408_msgs__msg__Object__init(radar_conti_ars408_msgs__msg__Object * msg)
{
  if (!msg) {
    return false;
  }
  // obj_id
  if (!std_msgs__msg__Int32__init(&msg->obj_id)) {
    radar_conti_ars408_msgs__msg__Object__fini(msg);
    return false;
  }
  // object_general
  if (!radar_conti_ars408_msgs__msg__ObjectGeneral__init(&msg->object_general)) {
    radar_conti_ars408_msgs__msg__Object__fini(msg);
    return false;
  }
  // object_extended
  if (!radar_conti_ars408_msgs__msg__ObjectExtended__init(&msg->object_extended)) {
    radar_conti_ars408_msgs__msg__Object__fini(msg);
    return false;
  }
  // object_quality
  if (!radar_conti_ars408_msgs__msg__ObjectQuality__init(&msg->object_quality)) {
    radar_conti_ars408_msgs__msg__Object__fini(msg);
    return false;
  }
  return true;
}

void
radar_conti_ars408_msgs__msg__Object__fini(radar_conti_ars408_msgs__msg__Object * msg)
{
  if (!msg) {
    return;
  }
  // obj_id
  std_msgs__msg__Int32__fini(&msg->obj_id);
  // object_general
  radar_conti_ars408_msgs__msg__ObjectGeneral__fini(&msg->object_general);
  // object_extended
  radar_conti_ars408_msgs__msg__ObjectExtended__fini(&msg->object_extended);
  // object_quality
  radar_conti_ars408_msgs__msg__ObjectQuality__fini(&msg->object_quality);
}

bool
radar_conti_ars408_msgs__msg__Object__are_equal(const radar_conti_ars408_msgs__msg__Object * lhs, const radar_conti_ars408_msgs__msg__Object * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // obj_id
  if (!std_msgs__msg__Int32__are_equal(
      &(lhs->obj_id), &(rhs->obj_id)))
  {
    return false;
  }
  // object_general
  if (!radar_conti_ars408_msgs__msg__ObjectGeneral__are_equal(
      &(lhs->object_general), &(rhs->object_general)))
  {
    return false;
  }
  // object_extended
  if (!radar_conti_ars408_msgs__msg__ObjectExtended__are_equal(
      &(lhs->object_extended), &(rhs->object_extended)))
  {
    return false;
  }
  // object_quality
  if (!radar_conti_ars408_msgs__msg__ObjectQuality__are_equal(
      &(lhs->object_quality), &(rhs->object_quality)))
  {
    return false;
  }
  return true;
}

bool
radar_conti_ars408_msgs__msg__Object__copy(
  const radar_conti_ars408_msgs__msg__Object * input,
  radar_conti_ars408_msgs__msg__Object * output)
{
  if (!input || !output) {
    return false;
  }
  // obj_id
  if (!std_msgs__msg__Int32__copy(
      &(input->obj_id), &(output->obj_id)))
  {
    return false;
  }
  // object_general
  if (!radar_conti_ars408_msgs__msg__ObjectGeneral__copy(
      &(input->object_general), &(output->object_general)))
  {
    return false;
  }
  // object_extended
  if (!radar_conti_ars408_msgs__msg__ObjectExtended__copy(
      &(input->object_extended), &(output->object_extended)))
  {
    return false;
  }
  // object_quality
  if (!radar_conti_ars408_msgs__msg__ObjectQuality__copy(
      &(input->object_quality), &(output->object_quality)))
  {
    return false;
  }
  return true;
}

radar_conti_ars408_msgs__msg__Object *
radar_conti_ars408_msgs__msg__Object__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  radar_conti_ars408_msgs__msg__Object * msg = (radar_conti_ars408_msgs__msg__Object *)allocator.allocate(sizeof(radar_conti_ars408_msgs__msg__Object), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(radar_conti_ars408_msgs__msg__Object));
  bool success = radar_conti_ars408_msgs__msg__Object__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
radar_conti_ars408_msgs__msg__Object__destroy(radar_conti_ars408_msgs__msg__Object * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    radar_conti_ars408_msgs__msg__Object__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
radar_conti_ars408_msgs__msg__Object__Sequence__init(radar_conti_ars408_msgs__msg__Object__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  radar_conti_ars408_msgs__msg__Object * data = NULL;

  if (size) {
    data = (radar_conti_ars408_msgs__msg__Object *)allocator.zero_allocate(size, sizeof(radar_conti_ars408_msgs__msg__Object), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = radar_conti_ars408_msgs__msg__Object__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        radar_conti_ars408_msgs__msg__Object__fini(&data[i - 1]);
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
radar_conti_ars408_msgs__msg__Object__Sequence__fini(radar_conti_ars408_msgs__msg__Object__Sequence * array)
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
      radar_conti_ars408_msgs__msg__Object__fini(&array->data[i]);
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

radar_conti_ars408_msgs__msg__Object__Sequence *
radar_conti_ars408_msgs__msg__Object__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  radar_conti_ars408_msgs__msg__Object__Sequence * array = (radar_conti_ars408_msgs__msg__Object__Sequence *)allocator.allocate(sizeof(radar_conti_ars408_msgs__msg__Object__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = radar_conti_ars408_msgs__msg__Object__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
radar_conti_ars408_msgs__msg__Object__Sequence__destroy(radar_conti_ars408_msgs__msg__Object__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    radar_conti_ars408_msgs__msg__Object__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
radar_conti_ars408_msgs__msg__Object__Sequence__are_equal(const radar_conti_ars408_msgs__msg__Object__Sequence * lhs, const radar_conti_ars408_msgs__msg__Object__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!radar_conti_ars408_msgs__msg__Object__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
radar_conti_ars408_msgs__msg__Object__Sequence__copy(
  const radar_conti_ars408_msgs__msg__Object__Sequence * input,
  radar_conti_ars408_msgs__msg__Object__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(radar_conti_ars408_msgs__msg__Object);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    radar_conti_ars408_msgs__msg__Object * data =
      (radar_conti_ars408_msgs__msg__Object *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!radar_conti_ars408_msgs__msg__Object__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          radar_conti_ars408_msgs__msg__Object__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!radar_conti_ars408_msgs__msg__Object__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
