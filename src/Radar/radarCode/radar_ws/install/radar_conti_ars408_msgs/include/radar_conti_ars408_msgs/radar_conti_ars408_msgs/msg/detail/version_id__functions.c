// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from radar_conti_ars408_msgs:msg/VersionID.idl
// generated code does not contain a copyright notice
#include "radar_conti_ars408_msgs/msg/detail/version_id__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `version_majorrelease`
// Member `version_minorrelease`
// Member `version_patchlevel`
#include "std_msgs/msg/detail/int32__functions.h"
// Member `version_extendedrange`
// Member `version_countrycode`
#include "std_msgs/msg/detail/string__functions.h"

bool
radar_conti_ars408_msgs__msg__VersionID__init(radar_conti_ars408_msgs__msg__VersionID * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    radar_conti_ars408_msgs__msg__VersionID__fini(msg);
    return false;
  }
  // version_majorrelease
  if (!std_msgs__msg__Int32__init(&msg->version_majorrelease)) {
    radar_conti_ars408_msgs__msg__VersionID__fini(msg);
    return false;
  }
  // version_minorrelease
  if (!std_msgs__msg__Int32__init(&msg->version_minorrelease)) {
    radar_conti_ars408_msgs__msg__VersionID__fini(msg);
    return false;
  }
  // version_patchlevel
  if (!std_msgs__msg__Int32__init(&msg->version_patchlevel)) {
    radar_conti_ars408_msgs__msg__VersionID__fini(msg);
    return false;
  }
  // version_extendedrange
  if (!std_msgs__msg__String__init(&msg->version_extendedrange)) {
    radar_conti_ars408_msgs__msg__VersionID__fini(msg);
    return false;
  }
  // version_countrycode
  if (!std_msgs__msg__String__init(&msg->version_countrycode)) {
    radar_conti_ars408_msgs__msg__VersionID__fini(msg);
    return false;
  }
  return true;
}

void
radar_conti_ars408_msgs__msg__VersionID__fini(radar_conti_ars408_msgs__msg__VersionID * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // version_majorrelease
  std_msgs__msg__Int32__fini(&msg->version_majorrelease);
  // version_minorrelease
  std_msgs__msg__Int32__fini(&msg->version_minorrelease);
  // version_patchlevel
  std_msgs__msg__Int32__fini(&msg->version_patchlevel);
  // version_extendedrange
  std_msgs__msg__String__fini(&msg->version_extendedrange);
  // version_countrycode
  std_msgs__msg__String__fini(&msg->version_countrycode);
}

bool
radar_conti_ars408_msgs__msg__VersionID__are_equal(const radar_conti_ars408_msgs__msg__VersionID * lhs, const radar_conti_ars408_msgs__msg__VersionID * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // version_majorrelease
  if (!std_msgs__msg__Int32__are_equal(
      &(lhs->version_majorrelease), &(rhs->version_majorrelease)))
  {
    return false;
  }
  // version_minorrelease
  if (!std_msgs__msg__Int32__are_equal(
      &(lhs->version_minorrelease), &(rhs->version_minorrelease)))
  {
    return false;
  }
  // version_patchlevel
  if (!std_msgs__msg__Int32__are_equal(
      &(lhs->version_patchlevel), &(rhs->version_patchlevel)))
  {
    return false;
  }
  // version_extendedrange
  if (!std_msgs__msg__String__are_equal(
      &(lhs->version_extendedrange), &(rhs->version_extendedrange)))
  {
    return false;
  }
  // version_countrycode
  if (!std_msgs__msg__String__are_equal(
      &(lhs->version_countrycode), &(rhs->version_countrycode)))
  {
    return false;
  }
  return true;
}

bool
radar_conti_ars408_msgs__msg__VersionID__copy(
  const radar_conti_ars408_msgs__msg__VersionID * input,
  radar_conti_ars408_msgs__msg__VersionID * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // version_majorrelease
  if (!std_msgs__msg__Int32__copy(
      &(input->version_majorrelease), &(output->version_majorrelease)))
  {
    return false;
  }
  // version_minorrelease
  if (!std_msgs__msg__Int32__copy(
      &(input->version_minorrelease), &(output->version_minorrelease)))
  {
    return false;
  }
  // version_patchlevel
  if (!std_msgs__msg__Int32__copy(
      &(input->version_patchlevel), &(output->version_patchlevel)))
  {
    return false;
  }
  // version_extendedrange
  if (!std_msgs__msg__String__copy(
      &(input->version_extendedrange), &(output->version_extendedrange)))
  {
    return false;
  }
  // version_countrycode
  if (!std_msgs__msg__String__copy(
      &(input->version_countrycode), &(output->version_countrycode)))
  {
    return false;
  }
  return true;
}

radar_conti_ars408_msgs__msg__VersionID *
radar_conti_ars408_msgs__msg__VersionID__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  radar_conti_ars408_msgs__msg__VersionID * msg = (radar_conti_ars408_msgs__msg__VersionID *)allocator.allocate(sizeof(radar_conti_ars408_msgs__msg__VersionID), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(radar_conti_ars408_msgs__msg__VersionID));
  bool success = radar_conti_ars408_msgs__msg__VersionID__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
radar_conti_ars408_msgs__msg__VersionID__destroy(radar_conti_ars408_msgs__msg__VersionID * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    radar_conti_ars408_msgs__msg__VersionID__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
radar_conti_ars408_msgs__msg__VersionID__Sequence__init(radar_conti_ars408_msgs__msg__VersionID__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  radar_conti_ars408_msgs__msg__VersionID * data = NULL;

  if (size) {
    data = (radar_conti_ars408_msgs__msg__VersionID *)allocator.zero_allocate(size, sizeof(radar_conti_ars408_msgs__msg__VersionID), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = radar_conti_ars408_msgs__msg__VersionID__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        radar_conti_ars408_msgs__msg__VersionID__fini(&data[i - 1]);
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
radar_conti_ars408_msgs__msg__VersionID__Sequence__fini(radar_conti_ars408_msgs__msg__VersionID__Sequence * array)
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
      radar_conti_ars408_msgs__msg__VersionID__fini(&array->data[i]);
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

radar_conti_ars408_msgs__msg__VersionID__Sequence *
radar_conti_ars408_msgs__msg__VersionID__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  radar_conti_ars408_msgs__msg__VersionID__Sequence * array = (radar_conti_ars408_msgs__msg__VersionID__Sequence *)allocator.allocate(sizeof(radar_conti_ars408_msgs__msg__VersionID__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = radar_conti_ars408_msgs__msg__VersionID__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
radar_conti_ars408_msgs__msg__VersionID__Sequence__destroy(radar_conti_ars408_msgs__msg__VersionID__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    radar_conti_ars408_msgs__msg__VersionID__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
radar_conti_ars408_msgs__msg__VersionID__Sequence__are_equal(const radar_conti_ars408_msgs__msg__VersionID__Sequence * lhs, const radar_conti_ars408_msgs__msg__VersionID__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!radar_conti_ars408_msgs__msg__VersionID__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
radar_conti_ars408_msgs__msg__VersionID__Sequence__copy(
  const radar_conti_ars408_msgs__msg__VersionID__Sequence * input,
  radar_conti_ars408_msgs__msg__VersionID__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(radar_conti_ars408_msgs__msg__VersionID);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    radar_conti_ars408_msgs__msg__VersionID * data =
      (radar_conti_ars408_msgs__msg__VersionID *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!radar_conti_ars408_msgs__msg__VersionID__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          radar_conti_ars408_msgs__msg__VersionID__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!radar_conti_ars408_msgs__msg__VersionID__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
