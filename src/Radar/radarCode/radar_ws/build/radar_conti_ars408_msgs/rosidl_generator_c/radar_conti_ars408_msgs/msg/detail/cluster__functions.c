// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from radar_conti_ars408_msgs:msg/Cluster.idl
// generated code does not contain a copyright notice
#include "radar_conti_ars408_msgs/msg/detail/cluster__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `cluster_id`
#include "std_msgs/msg/detail/int32__functions.h"
// Member `cluster_general`
#include "radar_conti_ars408_msgs/msg/detail/cluster_general__functions.h"
// Member `cluster_quality`
#include "radar_conti_ars408_msgs/msg/detail/cluster_quality__functions.h"

bool
radar_conti_ars408_msgs__msg__Cluster__init(radar_conti_ars408_msgs__msg__Cluster * msg)
{
  if (!msg) {
    return false;
  }
  // cluster_id
  if (!std_msgs__msg__Int32__init(&msg->cluster_id)) {
    radar_conti_ars408_msgs__msg__Cluster__fini(msg);
    return false;
  }
  // cluster_general
  if (!radar_conti_ars408_msgs__msg__ClusterGeneral__init(&msg->cluster_general)) {
    radar_conti_ars408_msgs__msg__Cluster__fini(msg);
    return false;
  }
  // cluster_quality
  if (!radar_conti_ars408_msgs__msg__ClusterQuality__init(&msg->cluster_quality)) {
    radar_conti_ars408_msgs__msg__Cluster__fini(msg);
    return false;
  }
  return true;
}

void
radar_conti_ars408_msgs__msg__Cluster__fini(radar_conti_ars408_msgs__msg__Cluster * msg)
{
  if (!msg) {
    return;
  }
  // cluster_id
  std_msgs__msg__Int32__fini(&msg->cluster_id);
  // cluster_general
  radar_conti_ars408_msgs__msg__ClusterGeneral__fini(&msg->cluster_general);
  // cluster_quality
  radar_conti_ars408_msgs__msg__ClusterQuality__fini(&msg->cluster_quality);
}

bool
radar_conti_ars408_msgs__msg__Cluster__are_equal(const radar_conti_ars408_msgs__msg__Cluster * lhs, const radar_conti_ars408_msgs__msg__Cluster * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // cluster_id
  if (!std_msgs__msg__Int32__are_equal(
      &(lhs->cluster_id), &(rhs->cluster_id)))
  {
    return false;
  }
  // cluster_general
  if (!radar_conti_ars408_msgs__msg__ClusterGeneral__are_equal(
      &(lhs->cluster_general), &(rhs->cluster_general)))
  {
    return false;
  }
  // cluster_quality
  if (!radar_conti_ars408_msgs__msg__ClusterQuality__are_equal(
      &(lhs->cluster_quality), &(rhs->cluster_quality)))
  {
    return false;
  }
  return true;
}

bool
radar_conti_ars408_msgs__msg__Cluster__copy(
  const radar_conti_ars408_msgs__msg__Cluster * input,
  radar_conti_ars408_msgs__msg__Cluster * output)
{
  if (!input || !output) {
    return false;
  }
  // cluster_id
  if (!std_msgs__msg__Int32__copy(
      &(input->cluster_id), &(output->cluster_id)))
  {
    return false;
  }
  // cluster_general
  if (!radar_conti_ars408_msgs__msg__ClusterGeneral__copy(
      &(input->cluster_general), &(output->cluster_general)))
  {
    return false;
  }
  // cluster_quality
  if (!radar_conti_ars408_msgs__msg__ClusterQuality__copy(
      &(input->cluster_quality), &(output->cluster_quality)))
  {
    return false;
  }
  return true;
}

radar_conti_ars408_msgs__msg__Cluster *
radar_conti_ars408_msgs__msg__Cluster__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  radar_conti_ars408_msgs__msg__Cluster * msg = (radar_conti_ars408_msgs__msg__Cluster *)allocator.allocate(sizeof(radar_conti_ars408_msgs__msg__Cluster), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(radar_conti_ars408_msgs__msg__Cluster));
  bool success = radar_conti_ars408_msgs__msg__Cluster__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
radar_conti_ars408_msgs__msg__Cluster__destroy(radar_conti_ars408_msgs__msg__Cluster * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    radar_conti_ars408_msgs__msg__Cluster__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
radar_conti_ars408_msgs__msg__Cluster__Sequence__init(radar_conti_ars408_msgs__msg__Cluster__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  radar_conti_ars408_msgs__msg__Cluster * data = NULL;

  if (size) {
    data = (radar_conti_ars408_msgs__msg__Cluster *)allocator.zero_allocate(size, sizeof(radar_conti_ars408_msgs__msg__Cluster), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = radar_conti_ars408_msgs__msg__Cluster__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        radar_conti_ars408_msgs__msg__Cluster__fini(&data[i - 1]);
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
radar_conti_ars408_msgs__msg__Cluster__Sequence__fini(radar_conti_ars408_msgs__msg__Cluster__Sequence * array)
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
      radar_conti_ars408_msgs__msg__Cluster__fini(&array->data[i]);
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

radar_conti_ars408_msgs__msg__Cluster__Sequence *
radar_conti_ars408_msgs__msg__Cluster__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  radar_conti_ars408_msgs__msg__Cluster__Sequence * array = (radar_conti_ars408_msgs__msg__Cluster__Sequence *)allocator.allocate(sizeof(radar_conti_ars408_msgs__msg__Cluster__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = radar_conti_ars408_msgs__msg__Cluster__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
radar_conti_ars408_msgs__msg__Cluster__Sequence__destroy(radar_conti_ars408_msgs__msg__Cluster__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    radar_conti_ars408_msgs__msg__Cluster__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
radar_conti_ars408_msgs__msg__Cluster__Sequence__are_equal(const radar_conti_ars408_msgs__msg__Cluster__Sequence * lhs, const radar_conti_ars408_msgs__msg__Cluster__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!radar_conti_ars408_msgs__msg__Cluster__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
radar_conti_ars408_msgs__msg__Cluster__Sequence__copy(
  const radar_conti_ars408_msgs__msg__Cluster__Sequence * input,
  radar_conti_ars408_msgs__msg__Cluster__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(radar_conti_ars408_msgs__msg__Cluster);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    radar_conti_ars408_msgs__msg__Cluster * data =
      (radar_conti_ars408_msgs__msg__Cluster *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!radar_conti_ars408_msgs__msg__Cluster__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          radar_conti_ars408_msgs__msg__Cluster__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!radar_conti_ars408_msgs__msg__Cluster__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
