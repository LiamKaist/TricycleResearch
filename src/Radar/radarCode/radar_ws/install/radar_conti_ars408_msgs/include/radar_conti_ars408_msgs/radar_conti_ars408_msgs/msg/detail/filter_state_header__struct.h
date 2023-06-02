// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from radar_conti_ars408_msgs:msg/FilterStateHeader.idl
// generated code does not contain a copyright notice

#ifndef RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__FILTER_STATE_HEADER__STRUCT_H_
#define RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__FILTER_STATE_HEADER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'filterstate_nofclusterfiltercfg'
// Member 'filterstate_nofobjectfiltercfg'
#include "std_msgs/msg/detail/u_int8__struct.h"

/// Struct defined in msg/FilterStateHeader in the package radar_conti_ars408_msgs.
typedef struct radar_conti_ars408_msgs__msg__FilterStateHeader
{
  std_msgs__msg__Header header;
  /// Number of filter status messages for configured cluster filter
  ///
  /// possible values 0-6
  /// 0: no cluster filter is set
  /// 1-6: cluster filters
  std_msgs__msg__UInt8 filterstate_nofclusterfiltercfg;
  /// Number of filter status messages for configured object filter
  ///
  /// possible values 0-16
  /// 0: no object filter is set
  /// 1-16: object filters
  std_msgs__msg__UInt8 filterstate_nofobjectfiltercfg;
} radar_conti_ars408_msgs__msg__FilterStateHeader;

// Struct for a sequence of radar_conti_ars408_msgs__msg__FilterStateHeader.
typedef struct radar_conti_ars408_msgs__msg__FilterStateHeader__Sequence
{
  radar_conti_ars408_msgs__msg__FilterStateHeader * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} radar_conti_ars408_msgs__msg__FilterStateHeader__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__FILTER_STATE_HEADER__STRUCT_H_
