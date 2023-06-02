// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from radar_conti_ars408_msgs:msg/ClusterGeneral.idl
// generated code does not contain a copyright notice

#ifndef RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__CLUSTER_GENERAL__STRUCT_H_
#define RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__CLUSTER_GENERAL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'cluster_distlong'
// Member 'cluster_distlat'
// Member 'cluster_vrellong'
// Member 'cluster_vrellat'
// Member 'cluster_rcs'
#include "std_msgs/msg/detail/float64__struct.h"
// Member 'cluster_dynprop'
#include "std_msgs/msg/detail/int32__struct.h"

/// Struct defined in msg/ClusterGeneral in the package radar_conti_ars408_msgs.
/**
  * ------------------------------------------------------------------------
  *
  * Name:       Cluster_1_General
  * Id:         0x701
  * Length:     8 bytes
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
  *                                        +-- Cluster_ID
  *          +---+---+---+---+---+---+---+---+
  *        1 |<------------------------------|
  *          +---+---+---+---+---+---+---+---+
  *        2 |------------------x|   |<------|
  *          +---+---+---+---+---+---+---+---+
  *                            +-- Cluster_DistLong
  *          +---+---+---+---+---+---+---+---+
  *        3 |------------------------------x|
  *    B     +---+---+---+---+---+---+---+---+
  *    y                                   +-- Cluster_DistLat
  *    t     +---+---+---+---+---+---+---+---+
  *    e   4 |<------------------------------|
  *          +---+---+---+---+---+---+---+---+
  *        5 |------x|<----------------------|
  *          +---+---+---+---+---+---+---+---+
  *                +-- Cluster_VrelLong
  *          +---+---+---+---+---+---+---+---+
  *        6 |----------x|   |   |<---------x|
  *          +---+---+---+---+---+---+---+---+
  *                    |                   +-- Cluster_DynProp
  *                    +-- Cluster_VrelLat
  *          +---+---+---+---+---+---+---+---+
  *        7 |<-----------------------------x|
  *          +---+---+---+---+---+---+---+---+
  *                                        +-- Cluster_RCS
  *
  * Signal tree:
  *
  *   -- {root}
  *      +-- Cluster_ID
  *      +-- Cluster_DistLong
  *      +-- Cluster_DistLat
  *      +-- Cluster_VrelLong
  *      +-- Cluster_VrelLat
  *      +-- Cluster_DynProp
  *      +-- Cluster_RCS
  *
  * ------------------------------------------------------------------------
 */
typedef struct radar_conti_ars408_msgs__msg__ClusterGeneral
{
  std_msgs__msg__Float64 cluster_distlong;
  std_msgs__msg__Float64 cluster_distlat;
  std_msgs__msg__Float64 cluster_vrellong;
  std_msgs__msg__Float64 cluster_vrellat;
  std_msgs__msg__Int32 cluster_dynprop;
  std_msgs__msg__Float64 cluster_rcs;
} radar_conti_ars408_msgs__msg__ClusterGeneral;

// Struct for a sequence of radar_conti_ars408_msgs__msg__ClusterGeneral.
typedef struct radar_conti_ars408_msgs__msg__ClusterGeneral__Sequence
{
  radar_conti_ars408_msgs__msg__ClusterGeneral * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} radar_conti_ars408_msgs__msg__ClusterGeneral__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__CLUSTER_GENERAL__STRUCT_H_
