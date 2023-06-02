// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from radar_conti_ars408_msgs:msg/ObjectExtended.idl
// generated code does not contain a copyright notice
#include "radar_conti_ars408_msgs/msg/detail/object_extended__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `obj_arellong`
// Member `obj_arellat`
// Member `obj_orientationangle`
// Member `obj_length`
// Member `obj_width`
#include "std_msgs/msg/detail/float64__functions.h"
// Member `obj_class`
#include "std_msgs/msg/detail/string__functions.h"

bool
radar_conti_ars408_msgs__msg__ObjectExtended__init(radar_conti_ars408_msgs__msg__ObjectExtended * msg)
{
  if (!msg) {
    return false;
  }
  // obj_arellong
  if (!std_msgs__msg__Float64__init(&msg->obj_arellong)) {
    radar_conti_ars408_msgs__msg__ObjectExtended__fini(msg);
    return false;
  }
  // obj_arellat
  if (!std_msgs__msg__Float64__init(&msg->obj_arellat)) {
    radar_conti_ars408_msgs__msg__ObjectExtended__fini(msg);
    return false;
  }
  // obj_class
  if (!std_msgs__msg__String__init(&msg->obj_class)) {
    radar_conti_ars408_msgs__msg__ObjectExtended__fini(msg);
    return false;
  }
  // obj_orientationangle
  if (!std_msgs__msg__Float64__init(&msg->obj_orientationangle)) {
    radar_conti_ars408_msgs__msg__ObjectExtended__fini(msg);
    return false;
  }
  // obj_length
  if (!std_msgs__msg__Float64__init(&msg->obj_length)) {
    radar_conti_ars408_msgs__msg__ObjectExtended__fini(msg);
    return false;
  }
  // obj_width
  if (!std_msgs__msg__Float64__init(&msg->obj_width)) {
    radar_conti_ars408_msgs__msg__ObjectExtended__fini(msg);
    return false;
  }
  return true;
}

void
radar_conti_ars408_msgs__msg__ObjectExtended__fini(radar_conti_ars408_msgs__msg__ObjectExtended * msg)
{
  if (!msg) {
    return;
  }
  // obj_arellong
  std_msgs__msg__Float64__fini(&msg->obj_arellong);
  // obj_arellat
  std_msgs__msg__Float64__fini(&msg->obj_arellat);
  // obj_class
  std_msgs__msg__String__fini(&msg->obj_class);
  // obj_orientationangle
  std_msgs__msg__Float64__fini(&msg->obj_orientationangle);
  // obj_length
  std_msgs__msg__Float64__fini(&msg->obj_length);
  // obj_width
  std_msgs__msg__Float64__fini(&msg->obj_width);
}

bool
radar_conti_ars408_msgs__msg__ObjectExtended__are_equal(const radar_conti_ars408_msgs__msg__ObjectExtended * lhs, const radar_conti_ars408_msgs__msg__ObjectExtended * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // obj_arellong
  if (!std_msgs__msg__Float64__are_equal(
      &(lhs->obj_arellong), &(rhs->obj_arellong)))
  {
    return false;
  }
  // obj_arellat
  if (!std_msgs__msg__Float64__are_equal(
      &(lhs->obj_arellat), &(rhs->obj_arellat)))
  {
    return false;
  }
  // obj_class
  if (!std_msgs__msg__String__are_equal(
      &(lhs->obj_class), &(rhs->obj_class)))
  {
    return false;
  }
  // obj_orientationangle
  if (!std_msgs__msg__Float64__are_equal(
      &(lhs->obj_orientationangle), &(rhs->obj_orientationangle)))
  {
    return false;
  }
  // obj_length
  if (!std_msgs__msg__Float64__are_equal(
      &(lhs->obj_length), &(rhs->obj_length)))
  {
    return false;
  }
  // obj_width
  if (!std_msgs__msg__Float64__are_equal(
      &(lhs->obj_width), &(rhs->obj_width)))
  {
    return false;
  }
  return true;
}

bool
radar_conti_ars408_msgs__msg__ObjectExtended__copy(
  const radar_conti_ars408_msgs__msg__ObjectExtended * input,
  radar_conti_ars408_msgs__msg__ObjectExtended * output)
{
  if (!input || !output) {
    return false;
  }
  // obj_arellong
  if (!std_msgs__msg__Float64__copy(
      &(input->obj_arellong), &(output->obj_arellong)))
  {
    return false;
  }
  // obj_arellat
  if (!std_msgs__msg__Float64__copy(
      &(input->obj_arellat), &(output->obj_arellat)))
  {
    return false;
  }
  // obj_class
  if (!std_msgs__msg__String__copy(
      &(input->obj_class), &(output->obj_class)))
  {
    return false;
  }
  // obj_orientationangle
  if (!std_msgs__msg__Float64__copy(
      &(input->obj_orientationangle), &(output->obj_orientationangle)))
  {
    return false;
  }
  // obj_length
  if (!std_msgs__msg__Float64__copy(
      &(input->obj_length), &(output->obj_length)))
  {
    return false;
  }
  // obj_width
  if (!std_msgs__msg__Float64__copy(
      &(input->obj_width), &(output->obj_width)))
  {
    return false;
  }
  return true;
}

radar_conti_ars408_msgs__msg__ObjectExtended *
radar_conti_ars408_msgs__msg__ObjectExtended__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  radar_conti_ars408_msgs__msg__ObjectExtended * msg = (radar_conti_ars408_msgs__msg__ObjectExtended *)allocator.allocate(sizeof(radar_conti_ars408_msgs__msg__ObjectExtended), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(radar_conti_ars408_msgs__msg__ObjectExtended));
  bool success = radar_conti_ars408_msgs__msg__ObjectExtended__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
radar_conti_ars408_msgs__msg__ObjectExtended__destroy(radar_conti_ars408_msgs__msg__ObjectExtended * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    radar_conti_ars408_msgs__msg__ObjectExtended__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
radar_conti_ars408_msgs__msg__ObjectExtended__Sequence__init(radar_conti_ars408_msgs__msg__ObjectExtended__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  radar_conti_ars408_msgs__msg__ObjectExtended * data = NULL;

  if (size) {
    data = (radar_conti_ars408_msgs__msg__ObjectExtended *)allocator.zero_allocate(size, sizeof(radar_conti_ars408_msgs__msg__ObjectExtended), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = radar_conti_ars408_msgs__msg__ObjectExtended__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        radar_conti_ars408_msgs__msg__ObjectExtended__fini(&data[i - 1]);
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
radar_conti_ars408_msgs__msg__ObjectExtended__Sequence__fini(radar_conti_ars408_msgs__msg__ObjectExtended__Sequence * array)
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
      radar_conti_ars408_msgs__msg__ObjectExtended__fini(&array->data[i]);
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

radar_conti_ars408_msgs__msg__ObjectExtended__Sequence *
radar_conti_ars408_msgs__msg__ObjectExtended__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  radar_conti_ars408_msgs__msg__ObjectExtended__Sequence * array = (radar_conti_ars408_msgs__msg__ObjectExtended__Sequence *)allocator.allocate(sizeof(radar_conti_ars408_msgs__msg__ObjectExtended__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = radar_conti_ars408_msgs__msg__ObjectExtended__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
radar_conti_ars408_msgs__msg__ObjectExtended__Sequence__destroy(radar_conti_ars408_msgs__msg__ObjectExtended__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    radar_conti_ars408_msgs__msg__ObjectExtended__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
radar_conti_ars408_msgs__msg__ObjectExtended__Sequence__are_equal(const radar_conti_ars408_msgs__msg__ObjectExtended__Sequence * lhs, const radar_conti_ars408_msgs__msg__ObjectExtended__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!radar_conti_ars408_msgs__msg__ObjectExtended__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
radar_conti_ars408_msgs__msg__ObjectExtended__Sequence__copy(
  const radar_conti_ars408_msgs__msg__ObjectExtended__Sequence * input,
  radar_conti_ars408_msgs__msg__ObjectExtended__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(radar_conti_ars408_msgs__msg__ObjectExtended);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    radar_conti_ars408_msgs__msg__ObjectExtended * data =
      (radar_conti_ars408_msgs__msg__ObjectExtended *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!radar_conti_ars408_msgs__msg__ObjectExtended__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          radar_conti_ars408_msgs__msg__ObjectExtended__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!radar_conti_ars408_msgs__msg__ObjectExtended__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
