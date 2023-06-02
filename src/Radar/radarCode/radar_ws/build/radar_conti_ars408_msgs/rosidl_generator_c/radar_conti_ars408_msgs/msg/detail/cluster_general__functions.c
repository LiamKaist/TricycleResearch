// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from radar_conti_ars408_msgs:msg/ClusterGeneral.idl
// generated code does not contain a copyright notice
#include "radar_conti_ars408_msgs/msg/detail/cluster_general__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `cluster_distlong`
// Member `cluster_distlat`
// Member `cluster_vrellong`
// Member `cluster_vrellat`
// Member `cluster_rcs`
#include "std_msgs/msg/detail/float64__functions.h"
// Member `cluster_dynprop`
#include "std_msgs/msg/detail/int32__functions.h"

bool
radar_conti_ars408_msgs__msg__ClusterGeneral__init(radar_conti_ars408_msgs__msg__ClusterGeneral * msg)
{
  if (!msg) {
    return false;
  }
  // cluster_distlong
  if (!std_msgs__msg__Float64__init(&msg->cluster_distlong)) {
    radar_conti_ars408_msgs__msg__ClusterGeneral__fini(msg);
    return false;
  }
  // cluster_distlat
  if (!std_msgs__msg__Float64__init(&msg->cluster_distlat)) {
    radar_conti_ars408_msgs__msg__ClusterGeneral__fini(msg);
    return false;
  }
  // cluster_vrellong
  if (!std_msgs__msg__Float64__init(&msg->cluster_vrellong)) {
    radar_conti_ars408_msgs__msg__ClusterGeneral__fini(msg);
    return false;
  }
  // cluster_vrellat
  if (!std_msgs__msg__Float64__init(&msg->cluster_vrellat)) {
    radar_conti_ars408_msgs__msg__ClusterGeneral__fini(msg);
    return false;
  }
  // cluster_dynprop
  if (!std_msgs__msg__Int32__init(&msg->cluster_dynprop)) {
    radar_conti_ars408_msgs__msg__ClusterGeneral__fini(msg);
    return false;
  }
  // cluster_rcs
  if (!std_msgs__msg__Float64__init(&msg->cluster_rcs)) {
    radar_conti_ars408_msgs__msg__ClusterGeneral__fini(msg);
    return false;
  }
  return true;
}

void
radar_conti_ars408_msgs__msg__ClusterGeneral__fini(radar_conti_ars408_msgs__msg__ClusterGeneral * msg)
{
  if (!msg) {
    return;
  }
  // cluster_distlong
  std_msgs__msg__Float64__fini(&msg->cluster_distlong);
  // cluster_distlat
  std_msgs__msg__Float64__fini(&msg->cluster_distlat);
  // cluster_vrellong
  std_msgs__msg__Float64__fini(&msg->cluster_vrellong);
  // cluster_vrellat
  std_msgs__msg__Float64__fini(&msg->cluster_vrellat);
  // cluster_dynprop
  std_msgs__msg__Int32__fini(&msg->cluster_dynprop);
  // cluster_rcs
  std_msgs__msg__Float64__fini(&msg->cluster_rcs);
}

bool
radar_conti_ars408_msgs__msg__ClusterGeneral__are_equal(const radar_conti_ars408_msgs__msg__ClusterGeneral * lhs, const radar_conti_ars408_msgs__msg__ClusterGeneral * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // cluster_distlong
  if (!std_msgs__msg__Float64__are_equal(
      &(lhs->cluster_distlong), &(rhs->cluster_distlong)))
  {
    return false;
  }
  // cluster_distlat
  if (!std_msgs__msg__Float64__are_equal(
      &(lhs->cluster_distlat), &(rhs->cluster_distlat)))
  {
    return false;
  }
  // cluster_vrellong
  if (!std_msgs__msg__Float64__are_equal(
      &(lhs->cluster_vrellong), &(rhs->cluster_vrellong)))
  {
    return false;
  }
  // cluster_vrellat
  if (!std_msgs__msg__Float64__are_equal(
      &(lhs->cluster_vrellat), &(rhs->cluster_vrellat)))
  {
    return false;
  }
  // cluster_dynprop
  if (!std_msgs__msg__Int32__are_equal(
      &(lhs->cluster_dynprop), &(rhs->cluster_dynprop)))
  {
    return false;
  }
  // cluster_rcs
  if (!std_msgs__msg__Float64__are_equal(
      &(lhs->cluster_rcs), &(rhs->cluster_rcs)))
  {
    return false;
  }
  return true;
}

bool
radar_conti_ars408_msgs__msg__ClusterGeneral__copy(
  const radar_conti_ars408_msgs__msg__ClusterGeneral * input,
  radar_conti_ars408_msgs__msg__ClusterGeneral * output)
{
  if (!input || !output) {
    return false;
  }
  // cluster_distlong
  if (!std_msgs__msg__Float64__copy(
      &(input->cluster_distlong), &(output->cluster_distlong)))
  {
    return false;
  }
  // cluster_distlat
  if (!std_msgs__msg__Float64__copy(
      &(input->cluster_distlat), &(output->cluster_distlat)))
  {
    return false;
  }
  // cluster_vrellong
  if (!std_msgs__msg__Float64__copy(
      &(input->cluster_vrellong), &(output->cluster_vrellong)))
  {
    return false;
  }
  // cluster_vrellat
  if (!std_msgs__msg__Float64__copy(
      &(input->cluster_vrellat), &(output->cluster_vrellat)))
  {
    return false;
  }
  // cluster_dynprop
  if (!std_msgs__msg__Int32__copy(
      &(input->cluster_dynprop), &(output->cluster_dynprop)))
  {
    return false;
  }
  // cluster_rcs
  if (!std_msgs__msg__Float64__copy(
      &(input->cluster_rcs), &(output->cluster_rcs)))
  {
    return false;
  }
  return true;
}

radar_conti_ars408_msgs__msg__ClusterGeneral *
radar_conti_ars408_msgs__msg__ClusterGeneral__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  radar_conti_ars408_msgs__msg__ClusterGeneral * msg = (radar_conti_ars408_msgs__msg__ClusterGeneral *)allocator.allocate(sizeof(radar_conti_ars408_msgs__msg__ClusterGeneral), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(radar_conti_ars408_msgs__msg__ClusterGeneral));
  bool success = radar_conti_ars408_msgs__msg__ClusterGeneral__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
radar_conti_ars408_msgs__msg__ClusterGeneral__destroy(radar_conti_ars408_msgs__msg__ClusterGeneral * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    radar_conti_ars408_msgs__msg__ClusterGeneral__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
radar_conti_ars408_msgs__msg__ClusterGeneral__Sequence__init(radar_conti_ars408_msgs__msg__ClusterGeneral__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  radar_conti_ars408_msgs__msg__ClusterGeneral * data = NULL;

  if (size) {
    data = (radar_conti_ars408_msgs__msg__ClusterGeneral *)allocator.zero_allocate(size, sizeof(radar_conti_ars408_msgs__msg__ClusterGeneral), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = radar_conti_ars408_msgs__msg__ClusterGeneral__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        radar_conti_ars408_msgs__msg__ClusterGeneral__fini(&data[i - 1]);
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
radar_conti_ars408_msgs__msg__ClusterGeneral__Sequence__fini(radar_conti_ars408_msgs__msg__ClusterGeneral__Sequence * array)
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
      radar_conti_ars408_msgs__msg__ClusterGeneral__fini(&array->data[i]);
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

radar_conti_ars408_msgs__msg__ClusterGeneral__Sequence *
radar_conti_ars408_msgs__msg__ClusterGeneral__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  radar_conti_ars408_msgs__msg__ClusterGeneral__Sequence * array = (radar_conti_ars408_msgs__msg__ClusterGeneral__Sequence *)allocator.allocate(sizeof(radar_conti_ars408_msgs__msg__ClusterGeneral__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = radar_conti_ars408_msgs__msg__ClusterGeneral__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
radar_conti_ars408_msgs__msg__ClusterGeneral__Sequence__destroy(radar_conti_ars408_msgs__msg__ClusterGeneral__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    radar_conti_ars408_msgs__msg__ClusterGeneral__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
radar_conti_ars408_msgs__msg__ClusterGeneral__Sequence__are_equal(const radar_conti_ars408_msgs__msg__ClusterGeneral__Sequence * lhs, const radar_conti_ars408_msgs__msg__ClusterGeneral__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!radar_conti_ars408_msgs__msg__ClusterGeneral__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
radar_conti_ars408_msgs__msg__ClusterGeneral__Sequence__copy(
  const radar_conti_ars408_msgs__msg__ClusterGeneral__Sequence * input,
  radar_conti_ars408_msgs__msg__ClusterGeneral__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(radar_conti_ars408_msgs__msg__ClusterGeneral);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    radar_conti_ars408_msgs__msg__ClusterGeneral * data =
      (radar_conti_ars408_msgs__msg__ClusterGeneral *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!radar_conti_ars408_msgs__msg__ClusterGeneral__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          radar_conti_ars408_msgs__msg__ClusterGeneral__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!radar_conti_ars408_msgs__msg__ClusterGeneral__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
