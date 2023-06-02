// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from radar_conti_ars408_msgs:msg/RadarConfiguration.idl
// generated code does not contain a copyright notice
#include "radar_conti_ars408_msgs/msg/detail/radar_configuration__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `radarcfg_storeinnvm_valid`
// Member `radarcfg_sortindex_valid`
// Member `radarcfg_sendextinfo_valid`
// Member `radarcfg_sendquality_valid`
// Member `radarcfg_outputtype_valid`
// Member `radarcfg_radarpower_valid`
// Member `radarcfg_sensorid_valid`
// Member `radarcfg_maxdistance_valid`
// Member `radarcfg_maxdistance`
// Member `radarcfg_radarpower`
// Member `radarcfg_outputtype`
// Member `radarcfg_sensorid`
// Member `radarcfg_storeinnvm`
// Member `radarcfg_sortindex`
// Member `radarcfg_sendextinfo`
// Member `radarcfg_sendquality`
// Member `radarcfg_ctrlrelay`
// Member `radarcfg_ctrlrelay_valid`
// Member `radarcfg_rcs_threshold`
// Member `radarcfg_rcs_threshold_valid`
#include "std_msgs/msg/detail/u_int8__functions.h"

bool
radar_conti_ars408_msgs__msg__RadarConfiguration__init(radar_conti_ars408_msgs__msg__RadarConfiguration * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    radar_conti_ars408_msgs__msg__RadarConfiguration__fini(msg);
    return false;
  }
  // radarcfg_storeinnvm_valid
  if (!std_msgs__msg__UInt8__init(&msg->radarcfg_storeinnvm_valid)) {
    radar_conti_ars408_msgs__msg__RadarConfiguration__fini(msg);
    return false;
  }
  // radarcfg_sortindex_valid
  if (!std_msgs__msg__UInt8__init(&msg->radarcfg_sortindex_valid)) {
    radar_conti_ars408_msgs__msg__RadarConfiguration__fini(msg);
    return false;
  }
  // radarcfg_sendextinfo_valid
  if (!std_msgs__msg__UInt8__init(&msg->radarcfg_sendextinfo_valid)) {
    radar_conti_ars408_msgs__msg__RadarConfiguration__fini(msg);
    return false;
  }
  // radarcfg_sendquality_valid
  if (!std_msgs__msg__UInt8__init(&msg->radarcfg_sendquality_valid)) {
    radar_conti_ars408_msgs__msg__RadarConfiguration__fini(msg);
    return false;
  }
  // radarcfg_outputtype_valid
  if (!std_msgs__msg__UInt8__init(&msg->radarcfg_outputtype_valid)) {
    radar_conti_ars408_msgs__msg__RadarConfiguration__fini(msg);
    return false;
  }
  // radarcfg_radarpower_valid
  if (!std_msgs__msg__UInt8__init(&msg->radarcfg_radarpower_valid)) {
    radar_conti_ars408_msgs__msg__RadarConfiguration__fini(msg);
    return false;
  }
  // radarcfg_sensorid_valid
  if (!std_msgs__msg__UInt8__init(&msg->radarcfg_sensorid_valid)) {
    radar_conti_ars408_msgs__msg__RadarConfiguration__fini(msg);
    return false;
  }
  // radarcfg_maxdistance_valid
  if (!std_msgs__msg__UInt8__init(&msg->radarcfg_maxdistance_valid)) {
    radar_conti_ars408_msgs__msg__RadarConfiguration__fini(msg);
    return false;
  }
  // radarcfg_maxdistance
  if (!std_msgs__msg__UInt8__init(&msg->radarcfg_maxdistance)) {
    radar_conti_ars408_msgs__msg__RadarConfiguration__fini(msg);
    return false;
  }
  // radarcfg_radarpower
  if (!std_msgs__msg__UInt8__init(&msg->radarcfg_radarpower)) {
    radar_conti_ars408_msgs__msg__RadarConfiguration__fini(msg);
    return false;
  }
  // radarcfg_outputtype
  if (!std_msgs__msg__UInt8__init(&msg->radarcfg_outputtype)) {
    radar_conti_ars408_msgs__msg__RadarConfiguration__fini(msg);
    return false;
  }
  // radarcfg_sensorid
  if (!std_msgs__msg__UInt8__init(&msg->radarcfg_sensorid)) {
    radar_conti_ars408_msgs__msg__RadarConfiguration__fini(msg);
    return false;
  }
  // radarcfg_storeinnvm
  if (!std_msgs__msg__UInt8__init(&msg->radarcfg_storeinnvm)) {
    radar_conti_ars408_msgs__msg__RadarConfiguration__fini(msg);
    return false;
  }
  // radarcfg_sortindex
  if (!std_msgs__msg__UInt8__init(&msg->radarcfg_sortindex)) {
    radar_conti_ars408_msgs__msg__RadarConfiguration__fini(msg);
    return false;
  }
  // radarcfg_sendextinfo
  if (!std_msgs__msg__UInt8__init(&msg->radarcfg_sendextinfo)) {
    radar_conti_ars408_msgs__msg__RadarConfiguration__fini(msg);
    return false;
  }
  // radarcfg_sendquality
  if (!std_msgs__msg__UInt8__init(&msg->radarcfg_sendquality)) {
    radar_conti_ars408_msgs__msg__RadarConfiguration__fini(msg);
    return false;
  }
  // radarcfg_ctrlrelay
  if (!std_msgs__msg__UInt8__init(&msg->radarcfg_ctrlrelay)) {
    radar_conti_ars408_msgs__msg__RadarConfiguration__fini(msg);
    return false;
  }
  // radarcfg_ctrlrelay_valid
  if (!std_msgs__msg__UInt8__init(&msg->radarcfg_ctrlrelay_valid)) {
    radar_conti_ars408_msgs__msg__RadarConfiguration__fini(msg);
    return false;
  }
  // radarcfg_rcs_threshold
  if (!std_msgs__msg__UInt8__init(&msg->radarcfg_rcs_threshold)) {
    radar_conti_ars408_msgs__msg__RadarConfiguration__fini(msg);
    return false;
  }
  // radarcfg_rcs_threshold_valid
  if (!std_msgs__msg__UInt8__init(&msg->radarcfg_rcs_threshold_valid)) {
    radar_conti_ars408_msgs__msg__RadarConfiguration__fini(msg);
    return false;
  }
  return true;
}

void
radar_conti_ars408_msgs__msg__RadarConfiguration__fini(radar_conti_ars408_msgs__msg__RadarConfiguration * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // radarcfg_storeinnvm_valid
  std_msgs__msg__UInt8__fini(&msg->radarcfg_storeinnvm_valid);
  // radarcfg_sortindex_valid
  std_msgs__msg__UInt8__fini(&msg->radarcfg_sortindex_valid);
  // radarcfg_sendextinfo_valid
  std_msgs__msg__UInt8__fini(&msg->radarcfg_sendextinfo_valid);
  // radarcfg_sendquality_valid
  std_msgs__msg__UInt8__fini(&msg->radarcfg_sendquality_valid);
  // radarcfg_outputtype_valid
  std_msgs__msg__UInt8__fini(&msg->radarcfg_outputtype_valid);
  // radarcfg_radarpower_valid
  std_msgs__msg__UInt8__fini(&msg->radarcfg_radarpower_valid);
  // radarcfg_sensorid_valid
  std_msgs__msg__UInt8__fini(&msg->radarcfg_sensorid_valid);
  // radarcfg_maxdistance_valid
  std_msgs__msg__UInt8__fini(&msg->radarcfg_maxdistance_valid);
  // radarcfg_maxdistance
  std_msgs__msg__UInt8__fini(&msg->radarcfg_maxdistance);
  // radarcfg_radarpower
  std_msgs__msg__UInt8__fini(&msg->radarcfg_radarpower);
  // radarcfg_outputtype
  std_msgs__msg__UInt8__fini(&msg->radarcfg_outputtype);
  // radarcfg_sensorid
  std_msgs__msg__UInt8__fini(&msg->radarcfg_sensorid);
  // radarcfg_storeinnvm
  std_msgs__msg__UInt8__fini(&msg->radarcfg_storeinnvm);
  // radarcfg_sortindex
  std_msgs__msg__UInt8__fini(&msg->radarcfg_sortindex);
  // radarcfg_sendextinfo
  std_msgs__msg__UInt8__fini(&msg->radarcfg_sendextinfo);
  // radarcfg_sendquality
  std_msgs__msg__UInt8__fini(&msg->radarcfg_sendquality);
  // radarcfg_ctrlrelay
  std_msgs__msg__UInt8__fini(&msg->radarcfg_ctrlrelay);
  // radarcfg_ctrlrelay_valid
  std_msgs__msg__UInt8__fini(&msg->radarcfg_ctrlrelay_valid);
  // radarcfg_rcs_threshold
  std_msgs__msg__UInt8__fini(&msg->radarcfg_rcs_threshold);
  // radarcfg_rcs_threshold_valid
  std_msgs__msg__UInt8__fini(&msg->radarcfg_rcs_threshold_valid);
}

bool
radar_conti_ars408_msgs__msg__RadarConfiguration__are_equal(const radar_conti_ars408_msgs__msg__RadarConfiguration * lhs, const radar_conti_ars408_msgs__msg__RadarConfiguration * rhs)
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
  // radarcfg_storeinnvm_valid
  if (!std_msgs__msg__UInt8__are_equal(
      &(lhs->radarcfg_storeinnvm_valid), &(rhs->radarcfg_storeinnvm_valid)))
  {
    return false;
  }
  // radarcfg_sortindex_valid
  if (!std_msgs__msg__UInt8__are_equal(
      &(lhs->radarcfg_sortindex_valid), &(rhs->radarcfg_sortindex_valid)))
  {
    return false;
  }
  // radarcfg_sendextinfo_valid
  if (!std_msgs__msg__UInt8__are_equal(
      &(lhs->radarcfg_sendextinfo_valid), &(rhs->radarcfg_sendextinfo_valid)))
  {
    return false;
  }
  // radarcfg_sendquality_valid
  if (!std_msgs__msg__UInt8__are_equal(
      &(lhs->radarcfg_sendquality_valid), &(rhs->radarcfg_sendquality_valid)))
  {
    return false;
  }
  // radarcfg_outputtype_valid
  if (!std_msgs__msg__UInt8__are_equal(
      &(lhs->radarcfg_outputtype_valid), &(rhs->radarcfg_outputtype_valid)))
  {
    return false;
  }
  // radarcfg_radarpower_valid
  if (!std_msgs__msg__UInt8__are_equal(
      &(lhs->radarcfg_radarpower_valid), &(rhs->radarcfg_radarpower_valid)))
  {
    return false;
  }
  // radarcfg_sensorid_valid
  if (!std_msgs__msg__UInt8__are_equal(
      &(lhs->radarcfg_sensorid_valid), &(rhs->radarcfg_sensorid_valid)))
  {
    return false;
  }
  // radarcfg_maxdistance_valid
  if (!std_msgs__msg__UInt8__are_equal(
      &(lhs->radarcfg_maxdistance_valid), &(rhs->radarcfg_maxdistance_valid)))
  {
    return false;
  }
  // radarcfg_maxdistance
  if (!std_msgs__msg__UInt8__are_equal(
      &(lhs->radarcfg_maxdistance), &(rhs->radarcfg_maxdistance)))
  {
    return false;
  }
  // radarcfg_radarpower
  if (!std_msgs__msg__UInt8__are_equal(
      &(lhs->radarcfg_radarpower), &(rhs->radarcfg_radarpower)))
  {
    return false;
  }
  // radarcfg_outputtype
  if (!std_msgs__msg__UInt8__are_equal(
      &(lhs->radarcfg_outputtype), &(rhs->radarcfg_outputtype)))
  {
    return false;
  }
  // radarcfg_sensorid
  if (!std_msgs__msg__UInt8__are_equal(
      &(lhs->radarcfg_sensorid), &(rhs->radarcfg_sensorid)))
  {
    return false;
  }
  // radarcfg_storeinnvm
  if (!std_msgs__msg__UInt8__are_equal(
      &(lhs->radarcfg_storeinnvm), &(rhs->radarcfg_storeinnvm)))
  {
    return false;
  }
  // radarcfg_sortindex
  if (!std_msgs__msg__UInt8__are_equal(
      &(lhs->radarcfg_sortindex), &(rhs->radarcfg_sortindex)))
  {
    return false;
  }
  // radarcfg_sendextinfo
  if (!std_msgs__msg__UInt8__are_equal(
      &(lhs->radarcfg_sendextinfo), &(rhs->radarcfg_sendextinfo)))
  {
    return false;
  }
  // radarcfg_sendquality
  if (!std_msgs__msg__UInt8__are_equal(
      &(lhs->radarcfg_sendquality), &(rhs->radarcfg_sendquality)))
  {
    return false;
  }
  // radarcfg_ctrlrelay
  if (!std_msgs__msg__UInt8__are_equal(
      &(lhs->radarcfg_ctrlrelay), &(rhs->radarcfg_ctrlrelay)))
  {
    return false;
  }
  // radarcfg_ctrlrelay_valid
  if (!std_msgs__msg__UInt8__are_equal(
      &(lhs->radarcfg_ctrlrelay_valid), &(rhs->radarcfg_ctrlrelay_valid)))
  {
    return false;
  }
  // radarcfg_rcs_threshold
  if (!std_msgs__msg__UInt8__are_equal(
      &(lhs->radarcfg_rcs_threshold), &(rhs->radarcfg_rcs_threshold)))
  {
    return false;
  }
  // radarcfg_rcs_threshold_valid
  if (!std_msgs__msg__UInt8__are_equal(
      &(lhs->radarcfg_rcs_threshold_valid), &(rhs->radarcfg_rcs_threshold_valid)))
  {
    return false;
  }
  return true;
}

bool
radar_conti_ars408_msgs__msg__RadarConfiguration__copy(
  const radar_conti_ars408_msgs__msg__RadarConfiguration * input,
  radar_conti_ars408_msgs__msg__RadarConfiguration * output)
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
  // radarcfg_storeinnvm_valid
  if (!std_msgs__msg__UInt8__copy(
      &(input->radarcfg_storeinnvm_valid), &(output->radarcfg_storeinnvm_valid)))
  {
    return false;
  }
  // radarcfg_sortindex_valid
  if (!std_msgs__msg__UInt8__copy(
      &(input->radarcfg_sortindex_valid), &(output->radarcfg_sortindex_valid)))
  {
    return false;
  }
  // radarcfg_sendextinfo_valid
  if (!std_msgs__msg__UInt8__copy(
      &(input->radarcfg_sendextinfo_valid), &(output->radarcfg_sendextinfo_valid)))
  {
    return false;
  }
  // radarcfg_sendquality_valid
  if (!std_msgs__msg__UInt8__copy(
      &(input->radarcfg_sendquality_valid), &(output->radarcfg_sendquality_valid)))
  {
    return false;
  }
  // radarcfg_outputtype_valid
  if (!std_msgs__msg__UInt8__copy(
      &(input->radarcfg_outputtype_valid), &(output->radarcfg_outputtype_valid)))
  {
    return false;
  }
  // radarcfg_radarpower_valid
  if (!std_msgs__msg__UInt8__copy(
      &(input->radarcfg_radarpower_valid), &(output->radarcfg_radarpower_valid)))
  {
    return false;
  }
  // radarcfg_sensorid_valid
  if (!std_msgs__msg__UInt8__copy(
      &(input->radarcfg_sensorid_valid), &(output->radarcfg_sensorid_valid)))
  {
    return false;
  }
  // radarcfg_maxdistance_valid
  if (!std_msgs__msg__UInt8__copy(
      &(input->radarcfg_maxdistance_valid), &(output->radarcfg_maxdistance_valid)))
  {
    return false;
  }
  // radarcfg_maxdistance
  if (!std_msgs__msg__UInt8__copy(
      &(input->radarcfg_maxdistance), &(output->radarcfg_maxdistance)))
  {
    return false;
  }
  // radarcfg_radarpower
  if (!std_msgs__msg__UInt8__copy(
      &(input->radarcfg_radarpower), &(output->radarcfg_radarpower)))
  {
    return false;
  }
  // radarcfg_outputtype
  if (!std_msgs__msg__UInt8__copy(
      &(input->radarcfg_outputtype), &(output->radarcfg_outputtype)))
  {
    return false;
  }
  // radarcfg_sensorid
  if (!std_msgs__msg__UInt8__copy(
      &(input->radarcfg_sensorid), &(output->radarcfg_sensorid)))
  {
    return false;
  }
  // radarcfg_storeinnvm
  if (!std_msgs__msg__UInt8__copy(
      &(input->radarcfg_storeinnvm), &(output->radarcfg_storeinnvm)))
  {
    return false;
  }
  // radarcfg_sortindex
  if (!std_msgs__msg__UInt8__copy(
      &(input->radarcfg_sortindex), &(output->radarcfg_sortindex)))
  {
    return false;
  }
  // radarcfg_sendextinfo
  if (!std_msgs__msg__UInt8__copy(
      &(input->radarcfg_sendextinfo), &(output->radarcfg_sendextinfo)))
  {
    return false;
  }
  // radarcfg_sendquality
  if (!std_msgs__msg__UInt8__copy(
      &(input->radarcfg_sendquality), &(output->radarcfg_sendquality)))
  {
    return false;
  }
  // radarcfg_ctrlrelay
  if (!std_msgs__msg__UInt8__copy(
      &(input->radarcfg_ctrlrelay), &(output->radarcfg_ctrlrelay)))
  {
    return false;
  }
  // radarcfg_ctrlrelay_valid
  if (!std_msgs__msg__UInt8__copy(
      &(input->radarcfg_ctrlrelay_valid), &(output->radarcfg_ctrlrelay_valid)))
  {
    return false;
  }
  // radarcfg_rcs_threshold
  if (!std_msgs__msg__UInt8__copy(
      &(input->radarcfg_rcs_threshold), &(output->radarcfg_rcs_threshold)))
  {
    return false;
  }
  // radarcfg_rcs_threshold_valid
  if (!std_msgs__msg__UInt8__copy(
      &(input->radarcfg_rcs_threshold_valid), &(output->radarcfg_rcs_threshold_valid)))
  {
    return false;
  }
  return true;
}

radar_conti_ars408_msgs__msg__RadarConfiguration *
radar_conti_ars408_msgs__msg__RadarConfiguration__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  radar_conti_ars408_msgs__msg__RadarConfiguration * msg = (radar_conti_ars408_msgs__msg__RadarConfiguration *)allocator.allocate(sizeof(radar_conti_ars408_msgs__msg__RadarConfiguration), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(radar_conti_ars408_msgs__msg__RadarConfiguration));
  bool success = radar_conti_ars408_msgs__msg__RadarConfiguration__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
radar_conti_ars408_msgs__msg__RadarConfiguration__destroy(radar_conti_ars408_msgs__msg__RadarConfiguration * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    radar_conti_ars408_msgs__msg__RadarConfiguration__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
radar_conti_ars408_msgs__msg__RadarConfiguration__Sequence__init(radar_conti_ars408_msgs__msg__RadarConfiguration__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  radar_conti_ars408_msgs__msg__RadarConfiguration * data = NULL;

  if (size) {
    data = (radar_conti_ars408_msgs__msg__RadarConfiguration *)allocator.zero_allocate(size, sizeof(radar_conti_ars408_msgs__msg__RadarConfiguration), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = radar_conti_ars408_msgs__msg__RadarConfiguration__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        radar_conti_ars408_msgs__msg__RadarConfiguration__fini(&data[i - 1]);
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
radar_conti_ars408_msgs__msg__RadarConfiguration__Sequence__fini(radar_conti_ars408_msgs__msg__RadarConfiguration__Sequence * array)
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
      radar_conti_ars408_msgs__msg__RadarConfiguration__fini(&array->data[i]);
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

radar_conti_ars408_msgs__msg__RadarConfiguration__Sequence *
radar_conti_ars408_msgs__msg__RadarConfiguration__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  radar_conti_ars408_msgs__msg__RadarConfiguration__Sequence * array = (radar_conti_ars408_msgs__msg__RadarConfiguration__Sequence *)allocator.allocate(sizeof(radar_conti_ars408_msgs__msg__RadarConfiguration__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = radar_conti_ars408_msgs__msg__RadarConfiguration__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
radar_conti_ars408_msgs__msg__RadarConfiguration__Sequence__destroy(radar_conti_ars408_msgs__msg__RadarConfiguration__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    radar_conti_ars408_msgs__msg__RadarConfiguration__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
radar_conti_ars408_msgs__msg__RadarConfiguration__Sequence__are_equal(const radar_conti_ars408_msgs__msg__RadarConfiguration__Sequence * lhs, const radar_conti_ars408_msgs__msg__RadarConfiguration__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!radar_conti_ars408_msgs__msg__RadarConfiguration__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
radar_conti_ars408_msgs__msg__RadarConfiguration__Sequence__copy(
  const radar_conti_ars408_msgs__msg__RadarConfiguration__Sequence * input,
  radar_conti_ars408_msgs__msg__RadarConfiguration__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(radar_conti_ars408_msgs__msg__RadarConfiguration);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    radar_conti_ars408_msgs__msg__RadarConfiguration * data =
      (radar_conti_ars408_msgs__msg__RadarConfiguration *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!radar_conti_ars408_msgs__msg__RadarConfiguration__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          radar_conti_ars408_msgs__msg__RadarConfiguration__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!radar_conti_ars408_msgs__msg__RadarConfiguration__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
