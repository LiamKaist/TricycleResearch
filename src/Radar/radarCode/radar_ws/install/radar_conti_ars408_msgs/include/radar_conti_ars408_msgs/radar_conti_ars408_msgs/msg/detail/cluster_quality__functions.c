// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from radar_conti_ars408_msgs:msg/ClusterQuality.idl
// generated code does not contain a copyright notice
#include "radar_conti_ars408_msgs/msg/detail/cluster_quality__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `cluster_distlong_rms`
// Member `cluster_distlat_rms`
// Member `cluster_vrellong_rms`
// Member `cluster_vrellat_rms`
#include "std_msgs/msg/detail/float64__functions.h"
// Member `cluster_pdh0`
// Member `cluster_invalidstate`
// Member `cluster_ambigstate`
#include "std_msgs/msg/detail/string__functions.h"

bool
radar_conti_ars408_msgs__msg__ClusterQuality__init(radar_conti_ars408_msgs__msg__ClusterQuality * msg)
{
  if (!msg) {
    return false;
  }
  // cluster_distlong_rms
  if (!std_msgs__msg__Float64__init(&msg->cluster_distlong_rms)) {
    radar_conti_ars408_msgs__msg__ClusterQuality__fini(msg);
    return false;
  }
  // cluster_distlat_rms
  if (!std_msgs__msg__Float64__init(&msg->cluster_distlat_rms)) {
    radar_conti_ars408_msgs__msg__ClusterQuality__fini(msg);
    return false;
  }
  // cluster_vrellong_rms
  if (!std_msgs__msg__Float64__init(&msg->cluster_vrellong_rms)) {
    radar_conti_ars408_msgs__msg__ClusterQuality__fini(msg);
    return false;
  }
  // cluster_vrellat_rms
  if (!std_msgs__msg__Float64__init(&msg->cluster_vrellat_rms)) {
    radar_conti_ars408_msgs__msg__ClusterQuality__fini(msg);
    return false;
  }
  // cluster_pdh0
  if (!std_msgs__msg__String__init(&msg->cluster_pdh0)) {
    radar_conti_ars408_msgs__msg__ClusterQuality__fini(msg);
    return false;
  }
  // cluster_invalidstate
  if (!std_msgs__msg__String__init(&msg->cluster_invalidstate)) {
    radar_conti_ars408_msgs__msg__ClusterQuality__fini(msg);
    return false;
  }
  // cluster_ambigstate
  if (!std_msgs__msg__String__init(&msg->cluster_ambigstate)) {
    radar_conti_ars408_msgs__msg__ClusterQuality__fini(msg);
    return false;
  }
  return true;
}

void
radar_conti_ars408_msgs__msg__ClusterQuality__fini(radar_conti_ars408_msgs__msg__ClusterQuality * msg)
{
  if (!msg) {
    return;
  }
  // cluster_distlong_rms
  std_msgs__msg__Float64__fini(&msg->cluster_distlong_rms);
  // cluster_distlat_rms
  std_msgs__msg__Float64__fini(&msg->cluster_distlat_rms);
  // cluster_vrellong_rms
  std_msgs__msg__Float64__fini(&msg->cluster_vrellong_rms);
  // cluster_vrellat_rms
  std_msgs__msg__Float64__fini(&msg->cluster_vrellat_rms);
  // cluster_pdh0
  std_msgs__msg__String__fini(&msg->cluster_pdh0);
  // cluster_invalidstate
  std_msgs__msg__String__fini(&msg->cluster_invalidstate);
  // cluster_ambigstate
  std_msgs__msg__String__fini(&msg->cluster_ambigstate);
}

bool
radar_conti_ars408_msgs__msg__ClusterQuality__are_equal(const radar_conti_ars408_msgs__msg__ClusterQuality * lhs, const radar_conti_ars408_msgs__msg__ClusterQuality * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // cluster_distlong_rms
  if (!std_msgs__msg__Float64__are_equal(
      &(lhs->cluster_distlong_rms), &(rhs->cluster_distlong_rms)))
  {
    return false;
  }
  // cluster_distlat_rms
  if (!std_msgs__msg__Float64__are_equal(
      &(lhs->cluster_distlat_rms), &(rhs->cluster_distlat_rms)))
  {
    return false;
  }
  // cluster_vrellong_rms
  if (!std_msgs__msg__Float64__are_equal(
      &(lhs->cluster_vrellong_rms), &(rhs->cluster_vrellong_rms)))
  {
    return false;
  }
  // cluster_vrellat_rms
  if (!std_msgs__msg__Float64__are_equal(
      &(lhs->cluster_vrellat_rms), &(rhs->cluster_vrellat_rms)))
  {
    return false;
  }
  // cluster_pdh0
  if (!std_msgs__msg__String__are_equal(
      &(lhs->cluster_pdh0), &(rhs->cluster_pdh0)))
  {
    return false;
  }
  // cluster_invalidstate
  if (!std_msgs__msg__String__are_equal(
      &(lhs->cluster_invalidstate), &(rhs->cluster_invalidstate)))
  {
    return false;
  }
  // cluster_ambigstate
  if (!std_msgs__msg__String__are_equal(
      &(lhs->cluster_ambigstate), &(rhs->cluster_ambigstate)))
  {
    return false;
  }
  return true;
}

bool
radar_conti_ars408_msgs__msg__ClusterQuality__copy(
  const radar_conti_ars408_msgs__msg__ClusterQuality * input,
  radar_conti_ars408_msgs__msg__ClusterQuality * output)
{
  if (!input || !output) {
    return false;
  }
  // cluster_distlong_rms
  if (!std_msgs__msg__Float64__copy(
      &(input->cluster_distlong_rms), &(output->cluster_distlong_rms)))
  {
    return false;
  }
  // cluster_distlat_rms
  if (!std_msgs__msg__Float64__copy(
      &(input->cluster_distlat_rms), &(output->cluster_distlat_rms)))
  {
    return false;
  }
  // cluster_vrellong_rms
  if (!std_msgs__msg__Float64__copy(
      &(input->cluster_vrellong_rms), &(output->cluster_vrellong_rms)))
  {
    return false;
  }
  // cluster_vrellat_rms
  if (!std_msgs__msg__Float64__copy(
      &(input->cluster_vrellat_rms), &(output->cluster_vrellat_rms)))
  {
    return false;
  }
  // cluster_pdh0
  if (!std_msgs__msg__String__copy(
      &(input->cluster_pdh0), &(output->cluster_pdh0)))
  {
    return false;
  }
  // cluster_invalidstate
  if (!std_msgs__msg__String__copy(
      &(input->cluster_invalidstate), &(output->cluster_invalidstate)))
  {
    return false;
  }
  // cluster_ambigstate
  if (!std_msgs__msg__String__copy(
      &(input->cluster_ambigstate), &(output->cluster_ambigstate)))
  {
    return false;
  }
  return true;
}

radar_conti_ars408_msgs__msg__ClusterQuality *
radar_conti_ars408_msgs__msg__ClusterQuality__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  radar_conti_ars408_msgs__msg__ClusterQuality * msg = (radar_conti_ars408_msgs__msg__ClusterQuality *)allocator.allocate(sizeof(radar_conti_ars408_msgs__msg__ClusterQuality), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(radar_conti_ars408_msgs__msg__ClusterQuality));
  bool success = radar_conti_ars408_msgs__msg__ClusterQuality__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
radar_conti_ars408_msgs__msg__ClusterQuality__destroy(radar_conti_ars408_msgs__msg__ClusterQuality * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    radar_conti_ars408_msgs__msg__ClusterQuality__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
radar_conti_ars408_msgs__msg__ClusterQuality__Sequence__init(radar_conti_ars408_msgs__msg__ClusterQuality__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  radar_conti_ars408_msgs__msg__ClusterQuality * data = NULL;

  if (size) {
    data = (radar_conti_ars408_msgs__msg__ClusterQuality *)allocator.zero_allocate(size, sizeof(radar_conti_ars408_msgs__msg__ClusterQuality), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = radar_conti_ars408_msgs__msg__ClusterQuality__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        radar_conti_ars408_msgs__msg__ClusterQuality__fini(&data[i - 1]);
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
radar_conti_ars408_msgs__msg__ClusterQuality__Sequence__fini(radar_conti_ars408_msgs__msg__ClusterQuality__Sequence * array)
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
      radar_conti_ars408_msgs__msg__ClusterQuality__fini(&array->data[i]);
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

radar_conti_ars408_msgs__msg__ClusterQuality__Sequence *
radar_conti_ars408_msgs__msg__ClusterQuality__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  radar_conti_ars408_msgs__msg__ClusterQuality__Sequence * array = (radar_conti_ars408_msgs__msg__ClusterQuality__Sequence *)allocator.allocate(sizeof(radar_conti_ars408_msgs__msg__ClusterQuality__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = radar_conti_ars408_msgs__msg__ClusterQuality__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
radar_conti_ars408_msgs__msg__ClusterQuality__Sequence__destroy(radar_conti_ars408_msgs__msg__ClusterQuality__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    radar_conti_ars408_msgs__msg__ClusterQuality__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
radar_conti_ars408_msgs__msg__ClusterQuality__Sequence__are_equal(const radar_conti_ars408_msgs__msg__ClusterQuality__Sequence * lhs, const radar_conti_ars408_msgs__msg__ClusterQuality__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!radar_conti_ars408_msgs__msg__ClusterQuality__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
radar_conti_ars408_msgs__msg__ClusterQuality__Sequence__copy(
  const radar_conti_ars408_msgs__msg__ClusterQuality__Sequence * input,
  radar_conti_ars408_msgs__msg__ClusterQuality__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(radar_conti_ars408_msgs__msg__ClusterQuality);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    radar_conti_ars408_msgs__msg__ClusterQuality * data =
      (radar_conti_ars408_msgs__msg__ClusterQuality *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!radar_conti_ars408_msgs__msg__ClusterQuality__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          radar_conti_ars408_msgs__msg__ClusterQuality__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!radar_conti_ars408_msgs__msg__ClusterQuality__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
