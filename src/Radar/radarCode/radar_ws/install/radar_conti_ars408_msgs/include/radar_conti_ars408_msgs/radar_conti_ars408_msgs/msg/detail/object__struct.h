// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from radar_conti_ars408_msgs:msg/Object.idl
// generated code does not contain a copyright notice

#ifndef RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__OBJECT__STRUCT_H_
#define RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__OBJECT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'obj_id'
#include "std_msgs/msg/detail/int32__struct.h"
// Member 'object_general'
#include "radar_conti_ars408_msgs/msg/detail/object_general__struct.h"
// Member 'object_extended'
#include "radar_conti_ars408_msgs/msg/detail/object_extended__struct.h"
// Member 'object_quality'
#include "radar_conti_ars408_msgs/msg/detail/object_quality__struct.h"

/// Struct defined in msg/Object in the package radar_conti_ars408_msgs.
typedef struct radar_conti_ars408_msgs__msg__Object
{
  std_msgs__msg__Int32 obj_id;
  radar_conti_ars408_msgs__msg__ObjectGeneral object_general;
  radar_conti_ars408_msgs__msg__ObjectExtended object_extended;
  radar_conti_ars408_msgs__msg__ObjectQuality object_quality;
} radar_conti_ars408_msgs__msg__Object;

// Struct for a sequence of radar_conti_ars408_msgs__msg__Object.
typedef struct radar_conti_ars408_msgs__msg__Object__Sequence
{
  radar_conti_ars408_msgs__msg__Object * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} radar_conti_ars408_msgs__msg__Object__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__OBJECT__STRUCT_H_
