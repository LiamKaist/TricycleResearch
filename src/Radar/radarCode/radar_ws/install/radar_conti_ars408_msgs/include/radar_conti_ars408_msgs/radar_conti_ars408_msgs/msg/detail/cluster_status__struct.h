// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from radar_conti_ars408_msgs:msg/ClusterStatus.idl
// generated code does not contain a copyright notice

#ifndef RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__CLUSTER_STATUS__STRUCT_H_
#define RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__CLUSTER_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'cluster_nofclustersnear'
// Member 'cluster_nofclustersfar'
// Member 'cluster_meascounter'
// Member 'cluster_interfaceversion'
#include "std_msgs/msg/detail/int32__struct.h"

/// Struct defined in msg/ClusterStatus in the package radar_conti_ars408_msgs.
/**
  * ------------------------------------------------------------------------
  *
  * Name:       Cluster_0_Status
  * Id:         0x600
  * Length:     5 bytes
  * Cycle time: 0 ms
  * Senders:    ARS_ISF
  * Layout:
  *
  *                         Bit
  *
  *            7   6   5   4   3   2   1   0
  *          +---+---+---+---+---+---+---+---+
  *        0 |<-----------------------------x|
  *          +---+---+---+---+---+---+---+---+
  *                                        +-- Cluster_NofClustersNear
  *          +---+---+---+---+---+---+---+---+
  *        1 |<-----------------------------x|
  *          +---+---+---+---+---+---+---+---+
  *    B                                   +-- Cluster_NofClustersFar
  *    y     +---+---+---+---+---+---+---+---+
  *    t   2 |<------------------------------|
  *    e     +---+---+---+---+---+---+---+---+
  *        3 |------------------------------x|
  *          +---+---+---+---+---+---+---+---+
  *                                        +-- Cluster_MeasCounter
  *          +---+---+---+---+---+---+---+---+
  *        4 |<-------------x|   |   |   |   |
  *          +---+---+---+---+---+---+---+---+
  *                        +-- Cluster_InterfaceVersion
  *
  * Signal tree:
  *
  *   -- {root}
  *      +-- Cluster_NofClustersNear
  *      +-- Cluster_NofClustersFar
  *      +-- Cluster_MeasCounter
  *      +-- Cluster_InterfaceVersion
  *
  * ------------------------------------------------------------------------
 */
typedef struct radar_conti_ars408_msgs__msg__ClusterStatus
{
  std_msgs__msg__Int32 cluster_nofclustersnear;
  std_msgs__msg__Int32 cluster_nofclustersfar;
  std_msgs__msg__Int32 cluster_meascounter;
  std_msgs__msg__Int32 cluster_interfaceversion;
} radar_conti_ars408_msgs__msg__ClusterStatus;

// Struct for a sequence of radar_conti_ars408_msgs__msg__ClusterStatus.
typedef struct radar_conti_ars408_msgs__msg__ClusterStatus__Sequence
{
  radar_conti_ars408_msgs__msg__ClusterStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} radar_conti_ars408_msgs__msg__ClusterStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__CLUSTER_STATUS__STRUCT_H_
