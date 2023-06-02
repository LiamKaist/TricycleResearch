// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from radar_conti_ars408_msgs:msg/ClusterList.idl
// generated code does not contain a copyright notice
#include "radar_conti_ars408_msgs/msg/detail/cluster_list__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `cluster_count`
#include "std_msgs/msg/detail/int32__functions.h"
// Member `clusters`
#include "radar_conti_ars408_msgs/msg/detail/cluster__functions.h"

bool
radar_conti_ars408_msgs__msg__ClusterList__init(radar_conti_ars408_msgs__msg__ClusterList * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    radar_conti_ars408_msgs__msg__ClusterList__fini(msg);
    return false;
  }
  // cluster_count
  if (!std_msgs__msg__Int32__init(&msg->cluster_count)) {
    radar_conti_ars408_msgs__msg__ClusterList__fini(msg);
    return false;
  }
  // clusters
  if (!radar_conti_ars408_msgs__msg__Cluster__Sequence__init(&msg->clusters, 0)) {
    radar_conti_ars408_msgs__msg__ClusterList__fini(msg);
    return false;
  }
  return true;
}

void
radar_conti_ars408_msgs__msg__ClusterList__fini(radar_conti_ars408_msgs__msg__ClusterList * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // cluster_count
  std_msgs__msg__Int32__fini(&msg->cluster_count);
  // clusters
  radar_conti_ars408_msgs__msg__Cluster__Sequence__fini(&msg->clusters);
}

bool
radar_conti_ars408_msgs__msg__ClusterList__are_equal(const radar_conti_ars408_msgs__msg__ClusterList * lhs, const radar_conti_ars408_msgs__msg__ClusterList * rhs)
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
  // cluster_count
  if (!std_msgs__msg__Int32__are_equal(
      &(lhs->cluster_count), &(rhs->cluster_count)))
  {
    return false;
  }
  // clusters
  if (!radar_conti_ars408_msgs__msg__Cluster__Sequence__are_equal(
      &(lhs->clusters), &(rhs->clusters)))
  {
    return false;
  }
  return true;
}

bool
radar_conti_ars408_msgs__msg__ClusterList__copy(
  const radar_conti_ars408_msgs__msg__ClusterList * input,
  radar_conti_ars408_msgs__msg__ClusterList * output)
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
  // cluster_count
  if (!std_msgs__msg__Int32__copy(
      &(input->cluster_count), &(output->cluster_count)))
  {
    return false;
  }
  // clusters
  if (!radar_conti_ars408_msgs__msg__Cluster__Sequence__copy(
      &(input->clusters), &(output->clusters)))
  {
    return false;
  }
  return true;
}

radar_conti_ars408_msgs__msg__ClusterList *
radar_conti_ars408_msgs__msg__ClusterList__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  radar_conti_ars408_msgs__msg__ClusterList * msg = (radar_conti_ars408_msgs__msg__ClusterList *)allocator.allocate(sizeof(radar_conti_ars408_msgs__msg__ClusterList), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(radar_conti_ars408_msgs__msg__ClusterList));
  bool success = radar_conti_ars408_msgs__msg__ClusterList__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
radar_conti_ars408_msgs__msg__ClusterList__destroy(radar_conti_ars408_msgs__msg__ClusterList * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    radar_conti_ars408_msgs__msg__ClusterList__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
radar_conti_ars408_msgs__msg__ClusterList__Sequence__init(radar_conti_ars408_msgs__msg__ClusterList__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  radar_conti_ars408_msgs__msg__ClusterList * data = NULL;

  if (size) {
    data = (radar_conti_ars408_msgs__msg__ClusterList *)allocator.zero_allocate(size, sizeof(radar_conti_ars408_msgs__msg__ClusterList), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = radar_conti_ars408_msgs__msg__ClusterList__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        radar_conti_ars408_msgs__msg__ClusterList__fini(&data[i - 1]);
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
radar_conti_ars408_msgs__msg__ClusterList__Sequence__fini(radar_conti_ars408_msgs__msg__ClusterList__Sequence * array)
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
      radar_conti_ars408_msgs__msg__ClusterList__fini(&array->data[i]);
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

radar_conti_ars408_msgs__msg__ClusterList__Sequence *
radar_conti_ars408_msgs__msg__ClusterList__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  radar_conti_ars408_msgs__msg__ClusterList__Sequence * array = (radar_conti_ars408_msgs__msg__ClusterList__Sequence *)allocator.allocate(sizeof(radar_conti_ars408_msgs__msg__ClusterList__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = radar_conti_ars408_msgs__msg__ClusterList__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
radar_conti_ars408_msgs__msg__ClusterList__Sequence__destroy(radar_conti_ars408_msgs__msg__ClusterList__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    radar_conti_ars408_msgs__msg__ClusterList__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
radar_conti_ars408_msgs__msg__ClusterList__Sequence__are_equal(const radar_conti_ars408_msgs__msg__ClusterList__Sequence * lhs, const radar_conti_ars408_msgs__msg__ClusterList__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!radar_conti_ars408_msgs__msg__ClusterList__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
radar_conti_ars408_msgs__msg__ClusterList__Sequence__copy(
  const radar_conti_ars408_msgs__msg__ClusterList__Sequence * input,
  radar_conti_ars408_msgs__msg__ClusterList__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(radar_conti_ars408_msgs__msg__ClusterList);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    radar_conti_ars408_msgs__msg__ClusterList * data =
      (radar_conti_ars408_msgs__msg__ClusterList *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!radar_conti_ars408_msgs__msg__ClusterList__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          radar_conti_ars408_msgs__msg__ClusterList__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!radar_conti_ars408_msgs__msg__ClusterList__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
