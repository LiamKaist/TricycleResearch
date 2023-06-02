// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from radar_conti_ars408_msgs:msg/ClusterList.idl
// generated code does not contain a copyright notice

#ifndef RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__CLUSTER_LIST__STRUCT_H_
#define RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__CLUSTER_LIST__STRUCT_H_

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
// Member 'cluster_count'
#include "std_msgs/msg/detail/int32__struct.h"
// Member 'clusters'
#include "radar_conti_ars408_msgs/msg/detail/cluster__struct.h"

/// Struct defined in msg/ClusterList in the package radar_conti_ars408_msgs.
typedef struct radar_conti_ars408_msgs__msg__ClusterList
{
  std_msgs__msg__Header header;
  std_msgs__msg__Int32 cluster_count;
  radar_conti_ars408_msgs__msg__Cluster__Sequence clusters;
} radar_conti_ars408_msgs__msg__ClusterList;

// Struct for a sequence of radar_conti_ars408_msgs__msg__ClusterList.
typedef struct radar_conti_ars408_msgs__msg__ClusterList__Sequence
{
  radar_conti_ars408_msgs__msg__ClusterList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} radar_conti_ars408_msgs__msg__ClusterList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__CLUSTER_LIST__STRUCT_H_
