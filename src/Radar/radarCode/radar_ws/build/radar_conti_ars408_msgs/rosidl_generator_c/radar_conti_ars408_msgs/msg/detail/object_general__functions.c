// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from radar_conti_ars408_msgs:msg/ObjectGeneral.idl
// generated code does not contain a copyright notice
#include "radar_conti_ars408_msgs/msg/detail/object_general__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `obj_distlong`
// Member `obj_distlat`
// Member `obj_vrellong`
// Member `obj_vrellat`
// Member `obj_rcs`
#include "std_msgs/msg/detail/float64__functions.h"
// Member `obj_dynprop`
#include "std_msgs/msg/detail/string__functions.h"

bool
radar_conti_ars408_msgs__msg__ObjectGeneral__init(radar_conti_ars408_msgs__msg__ObjectGeneral * msg)
{
  if (!msg) {
    return false;
  }
  // obj_distlong
  if (!std_msgs__msg__Float64__init(&msg->obj_distlong)) {
    radar_conti_ars408_msgs__msg__ObjectGeneral__fini(msg);
    return false;
  }
  // obj_distlat
  if (!std_msgs__msg__Float64__init(&msg->obj_distlat)) {
    radar_conti_ars408_msgs__msg__ObjectGeneral__fini(msg);
    return false;
  }
  // obj_vrellong
  if (!std_msgs__msg__Float64__init(&msg->obj_vrellong)) {
    radar_conti_ars408_msgs__msg__ObjectGeneral__fini(msg);
    return false;
  }
  // obj_vrellat
  if (!std_msgs__msg__Float64__init(&msg->obj_vrellat)) {
    radar_conti_ars408_msgs__msg__ObjectGeneral__fini(msg);
    return false;
  }
  // obj_dynprop
  if (!std_msgs__msg__String__init(&msg->obj_dynprop)) {
    radar_conti_ars408_msgs__msg__ObjectGeneral__fini(msg);
    return false;
  }
  // obj_rcs
  if (!std_msgs__msg__Float64__init(&msg->obj_rcs)) {
    radar_conti_ars408_msgs__msg__ObjectGeneral__fini(msg);
    return false;
  }
  return true;
}

void
radar_conti_ars408_msgs__msg__ObjectGeneral__fini(radar_conti_ars408_msgs__msg__ObjectGeneral * msg)
{
  if (!msg) {
    return;
  }
  // obj_distlong
  std_msgs__msg__Float64__fini(&msg->obj_distlong);
  // obj_distlat
  std_msgs__msg__Float64__fini(&msg->obj_distlat);
  // obj_vrellong
  std_msgs__msg__Float64__fini(&msg->obj_vrellong);
  // obj_vrellat
  std_msgs__msg__Float64__fini(&msg->obj_vrellat);
  // obj_dynprop
  std_msgs__msg__String__fini(&msg->obj_dynprop);
  // obj_rcs
  std_msgs__msg__Float64__fini(&msg->obj_rcs);
}

bool
radar_conti_ars408_msgs__msg__ObjectGeneral__are_equal(const radar_conti_ars408_msgs__msg__ObjectGeneral * lhs, const radar_conti_ars408_msgs__msg__ObjectGeneral * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // obj_distlong
  if (!std_msgs__msg__Float64__are_equal(
      &(lhs->obj_distlong), &(rhs->obj_distlong)))
  {
    return false;
  }
  // obj_distlat
  if (!std_msgs__msg__Float64__are_equal(
      &(lhs->obj_distlat), &(rhs->obj_distlat)))
  {
    return false;
  }
  // obj_vrellong
  if (!std_msgs__msg__Float64__are_equal(
      &(lhs->obj_vrellong), &(rhs->obj_vrellong)))
  {
    return false;
  }
  // obj_vrellat
  if (!std_msgs__msg__Float64__are_equal(
      &(lhs->obj_vrellat), &(rhs->obj_vrellat)))
  {
    return false;
  }
  // obj_dynprop
  if (!std_msgs__msg__String__are_equal(
      &(lhs->obj_dynprop), &(rhs->obj_dynprop)))
  {
    return false;
  }
  // obj_rcs
  if (!std_msgs__msg__Float64__are_equal(
      &(lhs->obj_rcs), &(rhs->obj_rcs)))
  {
    return false;
  }
  return true;
}

bool
radar_conti_ars408_msgs__msg__ObjectGeneral__copy(
  const radar_conti_ars408_msgs__msg__ObjectGeneral * input,
  radar_conti_ars408_msgs__msg__ObjectGeneral * output)
{
  if (!input || !output) {
    return false;
  }
  // obj_distlong
  if (!std_msgs__msg__Float64__copy(
      &(input->obj_distlong), &(output->obj_distlong)))
  {
    return false;
  }
  // obj_distlat
  if (!std_msgs__msg__Float64__copy(
      &(input->obj_distlat), &(output->obj_distlat)))
  {
    return false;
  }
  // obj_vrellong
  if (!std_msgs__msg__Float64__copy(
      &(input->obj_vrellong), &(output->obj_vrellong)))
  {
    return false;
  }
  // obj_vrellat
  if (!std_msgs__msg__Float64__copy(
      &(input->obj_vrellat), &(output->obj_vrellat)))
  {
    return false;
  }
  // obj_dynprop
  if (!std_msgs__msg__String__copy(
      &(input->obj_dynprop), &(output->obj_dynprop)))
  {
    return false;
  }
  // obj_rcs
  if (!std_msgs__msg__Float64__copy(
      &(input->obj_rcs), &(output->obj_rcs)))
  {
    return false;
  }
  return true;
}

radar_conti_ars408_msgs__msg__ObjectGeneral *
radar_conti_ars408_msgs__msg__ObjectGeneral__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  radar_conti_ars408_msgs__msg__ObjectGeneral * msg = (radar_conti_ars408_msgs__msg__ObjectGeneral *)allocator.allocate(sizeof(radar_conti_ars408_msgs__msg__ObjectGeneral), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(radar_conti_ars408_msgs__msg__ObjectGeneral));
  bool success = radar_conti_ars408_msgs__msg__ObjectGeneral__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
radar_conti_ars408_msgs__msg__ObjectGeneral__destroy(radar_conti_ars408_msgs__msg__ObjectGeneral * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    radar_conti_ars408_msgs__msg__ObjectGeneral__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
radar_conti_ars408_msgs__msg__ObjectGeneral__Sequence__init(radar_conti_ars408_msgs__msg__ObjectGeneral__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  radar_conti_ars408_msgs__msg__ObjectGeneral * data = NULL;

  if (size) {
    data = (radar_conti_ars408_msgs__msg__ObjectGeneral *)allocator.zero_allocate(size, sizeof(radar_conti_ars408_msgs__msg__ObjectGeneral), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = radar_conti_ars408_msgs__msg__ObjectGeneral__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        radar_conti_ars408_msgs__msg__ObjectGeneral__fini(&data[i - 1]);
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
radar_conti_ars408_msgs__msg__ObjectGeneral__Sequence__fini(radar_conti_ars408_msgs__msg__ObjectGeneral__Sequence * array)
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
      radar_conti_ars408_msgs__msg__ObjectGeneral__fini(&array->data[i]);
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

radar_conti_ars408_msgs__msg__ObjectGeneral__Sequence *
radar_conti_ars408_msgs__msg__ObjectGeneral__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  radar_conti_ars408_msgs__msg__ObjectGeneral__Sequence * array = (radar_conti_ars408_msgs__msg__ObjectGeneral__Sequence *)allocator.allocate(sizeof(radar_conti_ars408_msgs__msg__ObjectGeneral__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = radar_conti_ars408_msgs__msg__ObjectGeneral__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
radar_conti_ars408_msgs__msg__ObjectGeneral__Sequence__destroy(radar_conti_ars408_msgs__msg__ObjectGeneral__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    radar_conti_ars408_msgs__msg__ObjectGeneral__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
radar_conti_ars408_msgs__msg__ObjectGeneral__Sequence__are_equal(const radar_conti_ars408_msgs__msg__ObjectGeneral__Sequence * lhs, const radar_conti_ars408_msgs__msg__ObjectGeneral__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!radar_conti_ars408_msgs__msg__ObjectGeneral__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
radar_conti_ars408_msgs__msg__ObjectGeneral__Sequence__copy(
  const radar_conti_ars408_msgs__msg__ObjectGeneral__Sequence * input,
  radar_conti_ars408_msgs__msg__ObjectGeneral__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(radar_conti_ars408_msgs__msg__ObjectGeneral);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    radar_conti_ars408_msgs__msg__ObjectGeneral * data =
      (radar_conti_ars408_msgs__msg__ObjectGeneral *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!radar_conti_ars408_msgs__msg__ObjectGeneral__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          radar_conti_ars408_msgs__msg__ObjectGeneral__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!radar_conti_ars408_msgs__msg__ObjectGeneral__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
