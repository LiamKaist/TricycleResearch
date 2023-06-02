// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from radar_conti_ars408_msgs:msg/RadarState.idl
// generated code does not contain a copyright notice
#include "radar_conti_ars408_msgs/msg/detail/radar_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `radarstate_nvmwritestatus`
// Member `radarstate_nvmreadstatus`
// Member `radarstate_maxdistancecfg`
// Member `radarstate_persistent_error`
// Member `radarstate_interference`
// Member `radarstate_temperature_error`
// Member `radarstate_temporary_error`
// Member `radarstate_voltage_error`
// Member `radarstate_radarpowercfg`
// Member `radarstate_sortindex`
// Member `radarstate_sensorid`
// Member `radarstate_motionrxstate`
// Member `radarstate_sendextinfocfg`
// Member `radarstate_sendqualitycfg`
// Member `radarstate_outputtypecfg`
// Member `radarstate_ctrlrelaycfg`
// Member `radarstate_rcs_threshold`
#include "std_msgs/msg/detail/u_int8__functions.h"

bool
radar_conti_ars408_msgs__msg__RadarState__init(radar_conti_ars408_msgs__msg__RadarState * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    radar_conti_ars408_msgs__msg__RadarState__fini(msg);
    return false;
  }
  // radarstate_nvmwritestatus
  if (!std_msgs__msg__UInt8__init(&msg->radarstate_nvmwritestatus)) {
    radar_conti_ars408_msgs__msg__RadarState__fini(msg);
    return false;
  }
  // radarstate_nvmreadstatus
  if (!std_msgs__msg__UInt8__init(&msg->radarstate_nvmreadstatus)) {
    radar_conti_ars408_msgs__msg__RadarState__fini(msg);
    return false;
  }
  // radarstate_maxdistancecfg
  if (!std_msgs__msg__UInt8__init(&msg->radarstate_maxdistancecfg)) {
    radar_conti_ars408_msgs__msg__RadarState__fini(msg);
    return false;
  }
  // radarstate_persistent_error
  if (!std_msgs__msg__UInt8__init(&msg->radarstate_persistent_error)) {
    radar_conti_ars408_msgs__msg__RadarState__fini(msg);
    return false;
  }
  // radarstate_interference
  if (!std_msgs__msg__UInt8__init(&msg->radarstate_interference)) {
    radar_conti_ars408_msgs__msg__RadarState__fini(msg);
    return false;
  }
  // radarstate_temperature_error
  if (!std_msgs__msg__UInt8__init(&msg->radarstate_temperature_error)) {
    radar_conti_ars408_msgs__msg__RadarState__fini(msg);
    return false;
  }
  // radarstate_temporary_error
  if (!std_msgs__msg__UInt8__init(&msg->radarstate_temporary_error)) {
    radar_conti_ars408_msgs__msg__RadarState__fini(msg);
    return false;
  }
  // radarstate_voltage_error
  if (!std_msgs__msg__UInt8__init(&msg->radarstate_voltage_error)) {
    radar_conti_ars408_msgs__msg__RadarState__fini(msg);
    return false;
  }
  // radarstate_radarpowercfg
  if (!std_msgs__msg__UInt8__init(&msg->radarstate_radarpowercfg)) {
    radar_conti_ars408_msgs__msg__RadarState__fini(msg);
    return false;
  }
  // radarstate_sortindex
  if (!std_msgs__msg__UInt8__init(&msg->radarstate_sortindex)) {
    radar_conti_ars408_msgs__msg__RadarState__fini(msg);
    return false;
  }
  // radarstate_sensorid
  if (!std_msgs__msg__UInt8__init(&msg->radarstate_sensorid)) {
    radar_conti_ars408_msgs__msg__RadarState__fini(msg);
    return false;
  }
  // radarstate_motionrxstate
  if (!std_msgs__msg__UInt8__init(&msg->radarstate_motionrxstate)) {
    radar_conti_ars408_msgs__msg__RadarState__fini(msg);
    return false;
  }
  // radarstate_sendextinfocfg
  if (!std_msgs__msg__UInt8__init(&msg->radarstate_sendextinfocfg)) {
    radar_conti_ars408_msgs__msg__RadarState__fini(msg);
    return false;
  }
  // radarstate_sendqualitycfg
  if (!std_msgs__msg__UInt8__init(&msg->radarstate_sendqualitycfg)) {
    radar_conti_ars408_msgs__msg__RadarState__fini(msg);
    return false;
  }
  // radarstate_outputtypecfg
  if (!std_msgs__msg__UInt8__init(&msg->radarstate_outputtypecfg)) {
    radar_conti_ars408_msgs__msg__RadarState__fini(msg);
    return false;
  }
  // radarstate_ctrlrelaycfg
  if (!std_msgs__msg__UInt8__init(&msg->radarstate_ctrlrelaycfg)) {
    radar_conti_ars408_msgs__msg__RadarState__fini(msg);
    return false;
  }
  // radarstate_rcs_threshold
  if (!std_msgs__msg__UInt8__init(&msg->radarstate_rcs_threshold)) {
    radar_conti_ars408_msgs__msg__RadarState__fini(msg);
    return false;
  }
  return true;
}

void
radar_conti_ars408_msgs__msg__RadarState__fini(radar_conti_ars408_msgs__msg__RadarState * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // radarstate_nvmwritestatus
  std_msgs__msg__UInt8__fini(&msg->radarstate_nvmwritestatus);
  // radarstate_nvmreadstatus
  std_msgs__msg__UInt8__fini(&msg->radarstate_nvmreadstatus);
  // radarstate_maxdistancecfg
  std_msgs__msg__UInt8__fini(&msg->radarstate_maxdistancecfg);
  // radarstate_persistent_error
  std_msgs__msg__UInt8__fini(&msg->radarstate_persistent_error);
  // radarstate_interference
  std_msgs__msg__UInt8__fini(&msg->radarstate_interference);
  // radarstate_temperature_error
  std_msgs__msg__UInt8__fini(&msg->radarstate_temperature_error);
  // radarstate_temporary_error
  std_msgs__msg__UInt8__fini(&msg->radarstate_temporary_error);
  // radarstate_voltage_error
  std_msgs__msg__UInt8__fini(&msg->radarstate_voltage_error);
  // radarstate_radarpowercfg
  std_msgs__msg__UInt8__fini(&msg->radarstate_radarpowercfg);
  // radarstate_sortindex
  std_msgs__msg__UInt8__fini(&msg->radarstate_sortindex);
  // radarstate_sensorid
  std_msgs__msg__UInt8__fini(&msg->radarstate_sensorid);
  // radarstate_motionrxstate
  std_msgs__msg__UInt8__fini(&msg->radarstate_motionrxstate);
  // radarstate_sendextinfocfg
  std_msgs__msg__UInt8__fini(&msg->radarstate_sendextinfocfg);
  // radarstate_sendqualitycfg
  std_msgs__msg__UInt8__fini(&msg->radarstate_sendqualitycfg);
  // radarstate_outputtypecfg
  std_msgs__msg__UInt8__fini(&msg->radarstate_outputtypecfg);
  // radarstate_ctrlrelaycfg
  std_msgs__msg__UInt8__fini(&msg->radarstate_ctrlrelaycfg);
  // radarstate_rcs_threshold
  std_msgs__msg__UInt8__fini(&msg->radarstate_rcs_threshold);
}

bool
radar_conti_ars408_msgs__msg__RadarState__are_equal(const radar_conti_ars408_msgs__msg__RadarState * lhs, const radar_conti_ars408_msgs__msg__RadarState * rhs)
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
  // radarstate_nvmwritestatus
  if (!std_msgs__msg__UInt8__are_equal(
      &(lhs->radarstate_nvmwritestatus), &(rhs->radarstate_nvmwritestatus)))
  {
    return false;
  }
  // radarstate_nvmreadstatus
  if (!std_msgs__msg__UInt8__are_equal(
      &(lhs->radarstate_nvmreadstatus), &(rhs->radarstate_nvmreadstatus)))
  {
    return false;
  }
  // radarstate_maxdistancecfg
  if (!std_msgs__msg__UInt8__are_equal(
      &(lhs->radarstate_maxdistancecfg), &(rhs->radarstate_maxdistancecfg)))
  {
    return false;
  }
  // radarstate_persistent_error
  if (!std_msgs__msg__UInt8__are_equal(
      &(lhs->radarstate_persistent_error), &(rhs->radarstate_persistent_error)))
  {
    return false;
  }
  // radarstate_interference
  if (!std_msgs__msg__UInt8__are_equal(
      &(lhs->radarstate_interference), &(rhs->radarstate_interference)))
  {
    return false;
  }
  // radarstate_temperature_error
  if (!std_msgs__msg__UInt8__are_equal(
      &(lhs->radarstate_temperature_error), &(rhs->radarstate_temperature_error)))
  {
    return false;
  }
  // radarstate_temporary_error
  if (!std_msgs__msg__UInt8__are_equal(
      &(lhs->radarstate_temporary_error), &(rhs->radarstate_temporary_error)))
  {
    return false;
  }
  // radarstate_voltage_error
  if (!std_msgs__msg__UInt8__are_equal(
      &(lhs->radarstate_voltage_error), &(rhs->radarstate_voltage_error)))
  {
    return false;
  }
  // radarstate_radarpowercfg
  if (!std_msgs__msg__UInt8__are_equal(
      &(lhs->radarstate_radarpowercfg), &(rhs->radarstate_radarpowercfg)))
  {
    return false;
  }
  // radarstate_sortindex
  if (!std_msgs__msg__UInt8__are_equal(
      &(lhs->radarstate_sortindex), &(rhs->radarstate_sortindex)))
  {
    return false;
  }
  // radarstate_sensorid
  if (!std_msgs__msg__UInt8__are_equal(
      &(lhs->radarstate_sensorid), &(rhs->radarstate_sensorid)))
  {
    return false;
  }
  // radarstate_motionrxstate
  if (!std_msgs__msg__UInt8__are_equal(
      &(lhs->radarstate_motionrxstate), &(rhs->radarstate_motionrxstate)))
  {
    return false;
  }
  // radarstate_sendextinfocfg
  if (!std_msgs__msg__UInt8__are_equal(
      &(lhs->radarstate_sendextinfocfg), &(rhs->radarstate_sendextinfocfg)))
  {
    return false;
  }
  // radarstate_sendqualitycfg
  if (!std_msgs__msg__UInt8__are_equal(
      &(lhs->radarstate_sendqualitycfg), &(rhs->radarstate_sendqualitycfg)))
  {
    return false;
  }
  // radarstate_outputtypecfg
  if (!std_msgs__msg__UInt8__are_equal(
      &(lhs->radarstate_outputtypecfg), &(rhs->radarstate_outputtypecfg)))
  {
    return false;
  }
  // radarstate_ctrlrelaycfg
  if (!std_msgs__msg__UInt8__are_equal(
      &(lhs->radarstate_ctrlrelaycfg), &(rhs->radarstate_ctrlrelaycfg)))
  {
    return false;
  }
  // radarstate_rcs_threshold
  if (!std_msgs__msg__UInt8__are_equal(
      &(lhs->radarstate_rcs_threshold), &(rhs->radarstate_rcs_threshold)))
  {
    return false;
  }
  return true;
}

bool
radar_conti_ars408_msgs__msg__RadarState__copy(
  const radar_conti_ars408_msgs__msg__RadarState * input,
  radar_conti_ars408_msgs__msg__RadarState * output)
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
  // radarstate_nvmwritestatus
  if (!std_msgs__msg__UInt8__copy(
      &(input->radarstate_nvmwritestatus), &(output->radarstate_nvmwritestatus)))
  {
    return false;
  }
  // radarstate_nvmreadstatus
  if (!std_msgs__msg__UInt8__copy(
      &(input->radarstate_nvmreadstatus), &(output->radarstate_nvmreadstatus)))
  {
    return false;
  }
  // radarstate_maxdistancecfg
  if (!std_msgs__msg__UInt8__copy(
      &(input->radarstate_maxdistancecfg), &(output->radarstate_maxdistancecfg)))
  {
    return false;
  }
  // radarstate_persistent_error
  if (!std_msgs__msg__UInt8__copy(
      &(input->radarstate_persistent_error), &(output->radarstate_persistent_error)))
  {
    return false;
  }
  // radarstate_interference
  if (!std_msgs__msg__UInt8__copy(
      &(input->radarstate_interference), &(output->radarstate_interference)))
  {
    return false;
  }
  // radarstate_temperature_error
  if (!std_msgs__msg__UInt8__copy(
      &(input->radarstate_temperature_error), &(output->radarstate_temperature_error)))
  {
    return false;
  }
  // radarstate_temporary_error
  if (!std_msgs__msg__UInt8__copy(
      &(input->radarstate_temporary_error), &(output->radarstate_temporary_error)))
  {
    return false;
  }
  // radarstate_voltage_error
  if (!std_msgs__msg__UInt8__copy(
      &(input->radarstate_voltage_error), &(output->radarstate_voltage_error)))
  {
    return false;
  }
  // radarstate_radarpowercfg
  if (!std_msgs__msg__UInt8__copy(
      &(input->radarstate_radarpowercfg), &(output->radarstate_radarpowercfg)))
  {
    return false;
  }
  // radarstate_sortindex
  if (!std_msgs__msg__UInt8__copy(
      &(input->radarstate_sortindex), &(output->radarstate_sortindex)))
  {
    return false;
  }
  // radarstate_sensorid
  if (!std_msgs__msg__UInt8__copy(
      &(input->radarstate_sensorid), &(output->radarstate_sensorid)))
  {
    return false;
  }
  // radarstate_motionrxstate
  if (!std_msgs__msg__UInt8__copy(
      &(input->radarstate_motionrxstate), &(output->radarstate_motionrxstate)))
  {
    return false;
  }
  // radarstate_sendextinfocfg
  if (!std_msgs__msg__UInt8__copy(
      &(input->radarstate_sendextinfocfg), &(output->radarstate_sendextinfocfg)))
  {
    return false;
  }
  // radarstate_sendqualitycfg
  if (!std_msgs__msg__UInt8__copy(
      &(input->radarstate_sendqualitycfg), &(output->radarstate_sendqualitycfg)))
  {
    return false;
  }
  // radarstate_outputtypecfg
  if (!std_msgs__msg__UInt8__copy(
      &(input->radarstate_outputtypecfg), &(output->radarstate_outputtypecfg)))
  {
    return false;
  }
  // radarstate_ctrlrelaycfg
  if (!std_msgs__msg__UInt8__copy(
      &(input->radarstate_ctrlrelaycfg), &(output->radarstate_ctrlrelaycfg)))
  {
    return false;
  }
  // radarstate_rcs_threshold
  if (!std_msgs__msg__UInt8__copy(
      &(input->radarstate_rcs_threshold), &(output->radarstate_rcs_threshold)))
  {
    return false;
  }
  return true;
}

radar_conti_ars408_msgs__msg__RadarState *
radar_conti_ars408_msgs__msg__RadarState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  radar_conti_ars408_msgs__msg__RadarState * msg = (radar_conti_ars408_msgs__msg__RadarState *)allocator.allocate(sizeof(radar_conti_ars408_msgs__msg__RadarState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(radar_conti_ars408_msgs__msg__RadarState));
  bool success = radar_conti_ars408_msgs__msg__RadarState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
radar_conti_ars408_msgs__msg__RadarState__destroy(radar_conti_ars408_msgs__msg__RadarState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    radar_conti_ars408_msgs__msg__RadarState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
radar_conti_ars408_msgs__msg__RadarState__Sequence__init(radar_conti_ars408_msgs__msg__RadarState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  radar_conti_ars408_msgs__msg__RadarState * data = NULL;

  if (size) {
    data = (radar_conti_ars408_msgs__msg__RadarState *)allocator.zero_allocate(size, sizeof(radar_conti_ars408_msgs__msg__RadarState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = radar_conti_ars408_msgs__msg__RadarState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        radar_conti_ars408_msgs__msg__RadarState__fini(&data[i - 1]);
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
radar_conti_ars408_msgs__msg__RadarState__Sequence__fini(radar_conti_ars408_msgs__msg__RadarState__Sequence * array)
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
      radar_conti_ars408_msgs__msg__RadarState__fini(&array->data[i]);
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

radar_conti_ars408_msgs__msg__RadarState__Sequence *
radar_conti_ars408_msgs__msg__RadarState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  radar_conti_ars408_msgs__msg__RadarState__Sequence * array = (radar_conti_ars408_msgs__msg__RadarState__Sequence *)allocator.allocate(sizeof(radar_conti_ars408_msgs__msg__RadarState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = radar_conti_ars408_msgs__msg__RadarState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
radar_conti_ars408_msgs__msg__RadarState__Sequence__destroy(radar_conti_ars408_msgs__msg__RadarState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    radar_conti_ars408_msgs__msg__RadarState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
radar_conti_ars408_msgs__msg__RadarState__Sequence__are_equal(const radar_conti_ars408_msgs__msg__RadarState__Sequence * lhs, const radar_conti_ars408_msgs__msg__RadarState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!radar_conti_ars408_msgs__msg__RadarState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
radar_conti_ars408_msgs__msg__RadarState__Sequence__copy(
  const radar_conti_ars408_msgs__msg__RadarState__Sequence * input,
  radar_conti_ars408_msgs__msg__RadarState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(radar_conti_ars408_msgs__msg__RadarState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    radar_conti_ars408_msgs__msg__RadarState * data =
      (radar_conti_ars408_msgs__msg__RadarState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!radar_conti_ars408_msgs__msg__RadarState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          radar_conti_ars408_msgs__msg__RadarState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!radar_conti_ars408_msgs__msg__RadarState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
