// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from radar_conti_ars408_msgs:msg/Cluster.idl
// generated code does not contain a copyright notice

#ifndef RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__CLUSTER__STRUCT_H_
#define RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__CLUSTER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'cluster_id'
#include "std_msgs/msg/detail/int32__struct.h"
// Member 'cluster_general'
#include "radar_conti_ars408_msgs/msg/detail/cluster_general__struct.h"
// Member 'cluster_quality'
#include "radar_conti_ars408_msgs/msg/detail/cluster_quality__struct.h"

/// Struct defined in msg/Cluster in the package radar_conti_ars408_msgs.
typedef struct radar_conti_ars408_msgs__msg__Cluster
{
  std_msgs__msg__Int32 cluster_id;
  radar_conti_ars408_msgs__msg__ClusterGeneral cluster_general;
  radar_conti_ars408_msgs__msg__ClusterQuality cluster_quality;
} radar_conti_ars408_msgs__msg__Cluster;

// Struct for a sequence of radar_conti_ars408_msgs__msg__Cluster.
typedef struct radar_conti_ars408_msgs__msg__Cluster__Sequence
{
  radar_conti_ars408_msgs__msg__Cluster * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} radar_conti_ars408_msgs__msg__Cluster__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__CLUSTER__STRUCT_H_
