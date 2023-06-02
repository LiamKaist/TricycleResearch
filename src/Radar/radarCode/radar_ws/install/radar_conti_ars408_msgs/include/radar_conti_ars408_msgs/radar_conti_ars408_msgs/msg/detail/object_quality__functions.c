// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from radar_conti_ars408_msgs:msg/ObjectQuality.idl
// generated code does not contain a copyright notice
#include "radar_conti_ars408_msgs/msg/detail/object_quality__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `obj_distlong_rms`
// Member `obj_distlat_rms`
// Member `obj_vrellong_rms`
// Member `obj_vrellat_rms`
// Member `obj_arellong_rms`
// Member `obj_arellat_rms`
// Member `obj_orientation_rms`
// Member `obj_probofexist`
#include "std_msgs/msg/detail/float64__functions.h"
// Member `obj_measstate`
#include "std_msgs/msg/detail/string__functions.h"

bool
radar_conti_ars408_msgs__msg__ObjectQuality__init(radar_conti_ars408_msgs__msg__ObjectQuality * msg)
{
  if (!msg) {
    return false;
  }
  // obj_distlong_rms
  if (!std_msgs__msg__Float64__init(&msg->obj_distlong_rms)) {
    radar_conti_ars408_msgs__msg__ObjectQuality__fini(msg);
    return false;
  }
  // obj_distlat_rms
  if (!std_msgs__msg__Float64__init(&msg->obj_distlat_rms)) {
    radar_conti_ars408_msgs__msg__ObjectQuality__fini(msg);
    return false;
  }
  // obj_vrellong_rms
  if (!std_msgs__msg__Float64__init(&msg->obj_vrellong_rms)) {
    radar_conti_ars408_msgs__msg__ObjectQuality__fini(msg);
    return false;
  }
  // obj_vrellat_rms
  if (!std_msgs__msg__Float64__init(&msg->obj_vrellat_rms)) {
    radar_conti_ars408_msgs__msg__ObjectQuality__fini(msg);
    return false;
  }
  // obj_arellong_rms
  if (!std_msgs__msg__Float64__init(&msg->obj_arellong_rms)) {
    radar_conti_ars408_msgs__msg__ObjectQuality__fini(msg);
    return false;
  }
  // obj_arellat_rms
  if (!std_msgs__msg__Float64__init(&msg->obj_arellat_rms)) {
    radar_conti_ars408_msgs__msg__ObjectQuality__fini(msg);
    return false;
  }
  // obj_orientation_rms
  if (!std_msgs__msg__Float64__init(&msg->obj_orientation_rms)) {
    radar_conti_ars408_msgs__msg__ObjectQuality__fini(msg);
    return false;
  }
  // obj_probofexist
  if (!std_msgs__msg__Float64__init(&msg->obj_probofexist)) {
    radar_conti_ars408_msgs__msg__ObjectQuality__fini(msg);
    return false;
  }
  // obj_measstate
  if (!std_msgs__msg__String__init(&msg->obj_measstate)) {
    radar_conti_ars408_msgs__msg__ObjectQuality__fini(msg);
    return false;
  }
  return true;
}

void
radar_conti_ars408_msgs__msg__ObjectQuality__fini(radar_conti_ars408_msgs__msg__ObjectQuality * msg)
{
  if (!msg) {
    return;
  }
  // obj_distlong_rms
  std_msgs__msg__Float64__fini(&msg->obj_distlong_rms);
  // obj_distlat_rms
  std_msgs__msg__Float64__fini(&msg->obj_distlat_rms);
  // obj_vrellong_rms
  std_msgs__msg__Float64__fini(&msg->obj_vrellong_rms);
  // obj_vrellat_rms
  std_msgs__msg__Float64__fini(&msg->obj_vrellat_rms);
  // obj_arellong_rms
  std_msgs__msg__Float64__fini(&msg->obj_arellong_rms);
  // obj_arellat_rms
  std_msgs__msg__Float64__fini(&msg->obj_arellat_rms);
  // obj_orientation_rms
  std_msgs__msg__Float64__fini(&msg->obj_orientation_rms);
  // obj_probofexist
  std_msgs__msg__Float64__fini(&msg->obj_probofexist);
  // obj_measstate
  std_msgs__msg__String__fini(&msg->obj_measstate);
}

bool
radar_conti_ars408_msgs__msg__ObjectQuality__are_equal(const radar_conti_ars408_msgs__msg__ObjectQuality * lhs, const radar_conti_ars408_msgs__msg__ObjectQuality * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // obj_distlong_rms
  if (!std_msgs__msg__Float64__are_equal(
      &(lhs->obj_distlong_rms), &(rhs->obj_distlong_rms)))
  {
    return false;
  }
  // obj_distlat_rms
  if (!std_msgs__msg__Float64__are_equal(
      &(lhs->obj_distlat_rms), &(rhs->obj_distlat_rms)))
  {
    return false;
  }
  // obj_vrellong_rms
  if (!std_msgs__msg__Float64__are_equal(
      &(lhs->obj_vrellong_rms), &(rhs->obj_vrellong_rms)))
  {
    return false;
  }
  // obj_vrellat_rms
  if (!std_msgs__msg__Float64__are_equal(
      &(lhs->obj_vrellat_rms), &(rhs->obj_vrellat_rms)))
  {
    return false;
  }
  // obj_arellong_rms
  if (!std_msgs__msg__Float64__are_equal(
      &(lhs->obj_arellong_rms), &(rhs->obj_arellong_rms)))
  {
    return false;
  }
  // obj_arellat_rms
  if (!std_msgs__msg__Float64__are_equal(
      &(lhs->obj_arellat_rms), &(rhs->obj_arellat_rms)))
  {
    return false;
  }
  // obj_orientation_rms
  if (!std_msgs__msg__Float64__are_equal(
      &(lhs->obj_orientation_rms), &(rhs->obj_orientation_rms)))
  {
    return false;
  }
  // obj_probofexist
  if (!std_msgs__msg__Float64__are_equal(
      &(lhs->obj_probofexist), &(rhs->obj_probofexist)))
  {
    return false;
  }
  // obj_measstate
  if (!std_msgs__msg__String__are_equal(
      &(lhs->obj_measstate), &(rhs->obj_measstate)))
  {
    return false;
  }
  return true;
}

bool
radar_conti_ars408_msgs__msg__ObjectQuality__copy(
  const radar_conti_ars408_msgs__msg__ObjectQuality * input,
  radar_conti_ars408_msgs__msg__ObjectQuality * output)
{
  if (!input || !output) {
    return false;
  }
  // obj_distlong_rms
  if (!std_msgs__msg__Float64__copy(
      &(input->obj_distlong_rms), &(output->obj_distlong_rms)))
  {
    return false;
  }
  // obj_distlat_rms
  if (!std_msgs__msg__Float64__copy(
      &(input->obj_distlat_rms), &(output->obj_distlat_rms)))
  {
    return false;
  }
  // obj_vrellong_rms
  if (!std_msgs__msg__Float64__copy(
      &(input->obj_vrellong_rms), &(output->obj_vrellong_rms)))
  {
    return false;
  }
  // obj_vrellat_rms
  if (!std_msgs__msg__Float64__copy(
      &(input->obj_vrellat_rms), &(output->obj_vrellat_rms)))
  {
    return false;
  }
  // obj_arellong_rms
  if (!std_msgs__msg__Float64__copy(
      &(input->obj_arellong_rms), &(output->obj_arellong_rms)))
  {
    return false;
  }
  // obj_arellat_rms
  if (!std_msgs__msg__Float64__copy(
      &(input->obj_arellat_rms), &(output->obj_arellat_rms)))
  {
    return false;
  }
  // obj_orientation_rms
  if (!std_msgs__msg__Float64__copy(
      &(input->obj_orientation_rms), &(output->obj_orientation_rms)))
  {
    return false;
  }
  // obj_probofexist
  if (!std_msgs__msg__Float64__copy(
      &(input->obj_probofexist), &(output->obj_probofexist)))
  {
    return false;
  }
  // obj_measstate
  if (!std_msgs__msg__String__copy(
      &(input->obj_measstate), &(output->obj_measstate)))
  {
    return false;
  }
  return true;
}

radar_conti_ars408_msgs__msg__ObjectQuality *
radar_conti_ars408_msgs__msg__ObjectQuality__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  radar_conti_ars408_msgs__msg__ObjectQuality * msg = (radar_conti_ars408_msgs__msg__ObjectQuality *)allocator.allocate(sizeof(radar_conti_ars408_msgs__msg__ObjectQuality), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(radar_conti_ars408_msgs__msg__ObjectQuality));
  bool success = radar_conti_ars408_msgs__msg__ObjectQuality__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
radar_conti_ars408_msgs__msg__ObjectQuality__destroy(radar_conti_ars408_msgs__msg__ObjectQuality * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    radar_conti_ars408_msgs__msg__ObjectQuality__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
radar_conti_ars408_msgs__msg__ObjectQuality__Sequence__init(radar_conti_ars408_msgs__msg__ObjectQuality__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  radar_conti_ars408_msgs__msg__ObjectQuality * data = NULL;

  if (size) {
    data = (radar_conti_ars408_msgs__msg__ObjectQuality *)allocator.zero_allocate(size, sizeof(radar_conti_ars408_msgs__msg__ObjectQuality), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = radar_conti_ars408_msgs__msg__ObjectQuality__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        radar_conti_ars408_msgs__msg__ObjectQuality__fini(&data[i - 1]);
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
radar_conti_ars408_msgs__msg__ObjectQuality__Sequence__fini(radar_conti_ars408_msgs__msg__ObjectQuality__Sequence * array)
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
      radar_conti_ars408_msgs__msg__ObjectQuality__fini(&array->data[i]);
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

radar_conti_ars408_msgs__msg__ObjectQuality__Sequence *
radar_conti_ars408_msgs__msg__ObjectQuality__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  radar_conti_ars408_msgs__msg__ObjectQuality__Sequence * array = (radar_conti_ars408_msgs__msg__ObjectQuality__Sequence *)allocator.allocate(sizeof(radar_conti_ars408_msgs__msg__ObjectQuality__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = radar_conti_ars408_msgs__msg__ObjectQuality__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
radar_conti_ars408_msgs__msg__ObjectQuality__Sequence__destroy(radar_conti_ars408_msgs__msg__ObjectQuality__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    radar_conti_ars408_msgs__msg__ObjectQuality__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
radar_conti_ars408_msgs__msg__ObjectQuality__Sequence__are_equal(const radar_conti_ars408_msgs__msg__ObjectQuality__Sequence * lhs, const radar_conti_ars408_msgs__msg__ObjectQuality__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!radar_conti_ars408_msgs__msg__ObjectQuality__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
radar_conti_ars408_msgs__msg__ObjectQuality__Sequence__copy(
  const radar_conti_ars408_msgs__msg__ObjectQuality__Sequence * input,
  radar_conti_ars408_msgs__msg__ObjectQuality__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(radar_conti_ars408_msgs__msg__ObjectQuality);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    radar_conti_ars408_msgs__msg__ObjectQuality * data =
      (radar_conti_ars408_msgs__msg__ObjectQuality *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!radar_conti_ars408_msgs__msg__ObjectQuality__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          radar_conti_ars408_msgs__msg__ObjectQuality__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!radar_conti_ars408_msgs__msg__ObjectQuality__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
