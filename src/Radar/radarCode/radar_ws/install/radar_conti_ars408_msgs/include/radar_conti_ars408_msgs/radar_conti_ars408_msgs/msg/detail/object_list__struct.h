// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from radar_conti_ars408_msgs:msg/ObjectList.idl
// generated code does not contain a copyright notice

#ifndef RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__OBJECT_LIST__STRUCT_H_
#define RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__OBJECT_LIST__STRUCT_H_

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
// Member 'object_count'
#include "std_msgs/msg/detail/int32__struct.h"
// Member 'objects'
#include "radar_conti_ars408_msgs/msg/detail/object__struct.h"

/// Struct defined in msg/ObjectList in the package radar_conti_ars408_msgs.
typedef struct radar_conti_ars408_msgs__msg__ObjectList
{
  std_msgs__msg__Header header;
  std_msgs__msg__Int32 object_count;
  radar_conti_ars408_msgs__msg__Object__Sequence objects;
} radar_conti_ars408_msgs__msg__ObjectList;

// Struct for a sequence of radar_conti_ars408_msgs__msg__ObjectList.
typedef struct radar_conti_ars408_msgs__msg__ObjectList__Sequence
{
  radar_conti_ars408_msgs__msg__ObjectList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} radar_conti_ars408_msgs__msg__ObjectList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__OBJECT_LIST__STRUCT_H_
