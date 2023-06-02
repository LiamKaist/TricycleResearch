// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from radar_conti_ars408_msgs:msg/ObjectQuality.idl
// generated code does not contain a copyright notice

#ifndef RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__OBJECT_QUALITY__STRUCT_H_
#define RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__OBJECT_QUALITY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'obj_distlong_rms'
// Member 'obj_distlat_rms'
// Member 'obj_vrellong_rms'
// Member 'obj_vrellat_rms'
// Member 'obj_arellong_rms'
// Member 'obj_arellat_rms'
// Member 'obj_orientation_rms'
// Member 'obj_probofexist'
#include "std_msgs/msg/detail/float64__struct.h"
// Member 'obj_measstate'
#include "std_msgs/msg/detail/string__struct.h"

/// Struct defined in msg/ObjectQuality in the package radar_conti_ars408_msgs.
/**
  * ------------------------------------------------------------------------
  *
  * Name:       Obj_2_Quality
  * Id:         0x60c
  * Length:     7 bytes
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
  *                                        +-- Obj_ID
  *          +---+---+---+---+---+---+---+---+
  *        1 |<-----------------x|<----------|
  *          +---+---+---+---+---+---+---+---+
  *                            +-- Obj_DistLong_rms
  *          +---+---+---+---+---+---+---+---+
  *        2 |------x|<-----------------x|<--|
  *          +---+---+---+---+---+---+---+---+
  *                |                   +-- Obj_VrelLong_rms
  *                +-- Obj_DistLat_rms
  *    B     +---+---+---+---+---+---+---+---+
  *    y   3 |--------------x|<--------------|
  *    t     +---+---+---+---+---+---+---+---+
  *    e                   +-- Obj_VrelLat_rms
  *          +---+---+---+---+---+---+---+---+
  *        4 |--x|<-----------------x|<------|
  *          +---+---+---+---+---+---+---+---+
  *            |                   +-- Obj_ArelLat_rms
  *            +-- Obj_ArelLong_rms
  *          +---+---+---+---+---+---+---+---+
  *        5 |----------x|   |   |   |   |   |
  *          +---+---+---+---+---+---+---+---+
  *                    +-- Obj_Orientation_rms
  *          +---+---+---+---+---+---+---+---+
  *        6 |<---------x|<---------x|   |   |
  *          +---+---+---+---+---+---+---+---+
  *                    |           +-- Obj_MeasState
  *                    +-- Obj_ProbOfExist
  *
  * Signal tree:
  *
  *   -- {root}
  *      +-- Obj_ID
  *      +-- Obj_DistLong_rms
  *      +-- Obj_DistLat_rms
  *      +-- Obj_VrelLong_rms
  *      +-- Obj_VrelLat_rms
  *      +-- Obj_ArelLong_rms
  *      +-- Obj_ArelLat_rms
  *      +-- Obj_Orientation_rms
  *      +-- Obj_ProbOfExist
  *      +-- Obj_MeasState
  *
  * ------------------------------------------------------------------------
 */
typedef struct radar_conti_ars408_msgs__msg__ObjectQuality
{
  std_msgs__msg__Float64 obj_distlong_rms;
  std_msgs__msg__Float64 obj_distlat_rms;
  std_msgs__msg__Float64 obj_vrellong_rms;
  std_msgs__msg__Float64 obj_vrellat_rms;
  std_msgs__msg__Float64 obj_arellong_rms;
  std_msgs__msg__Float64 obj_arellat_rms;
  std_msgs__msg__Float64 obj_orientation_rms;
  std_msgs__msg__Float64 obj_probofexist;
  std_msgs__msg__String obj_measstate;
} radar_conti_ars408_msgs__msg__ObjectQuality;

// Struct for a sequence of radar_conti_ars408_msgs__msg__ObjectQuality.
typedef struct radar_conti_ars408_msgs__msg__ObjectQuality__Sequence
{
  radar_conti_ars408_msgs__msg__ObjectQuality * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} radar_conti_ars408_msgs__msg__ObjectQuality__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__OBJECT_QUALITY__STRUCT_H_
