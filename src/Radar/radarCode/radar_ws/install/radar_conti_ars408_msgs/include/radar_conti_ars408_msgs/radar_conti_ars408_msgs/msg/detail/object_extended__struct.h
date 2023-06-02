// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from radar_conti_ars408_msgs:msg/ObjectExtended.idl
// generated code does not contain a copyright notice

#ifndef RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__OBJECT_EXTENDED__STRUCT_H_
#define RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__OBJECT_EXTENDED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'obj_arellong'
// Member 'obj_arellat'
// Member 'obj_orientationangle'
// Member 'obj_length'
// Member 'obj_width'
#include "std_msgs/msg/detail/float64__struct.h"
// Member 'obj_class'
#include "std_msgs/msg/detail/string__struct.h"

/// Struct defined in msg/ObjectExtended in the package radar_conti_ars408_msgs.
/**
  * ------------------------------------------------------------------------
  *
  * Name:       Obj_3_Extended
  * Id:         0x60d
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
  *                                        +-- Obj_ID
  *          +---+---+---+---+---+---+---+---+
  *        1 |<------------------------------|
  *          +---+---+---+---+---+---+---+---+
  *        2 |----------x|<------------------|
  *          +---+---+---+---+---+---+---+---+
  *                    +-- Obj_ArelLong
  *          +---+---+---+---+---+---+---+---+
  *        3 |--------------x|   |<---------x|
  *    B     +---+---+---+---+---+---+---+---+
  *    y                   |               +-- Obj_Class
  *    t                   +-- Obj_ArelLat
  *    e     +---+---+---+---+---+---+---+---+
  *        4 |<------------------------------|
  *          +---+---+---+---+---+---+---+---+
  *        5 |------x|   |   |   |   |   |   |
  *          +---+---+---+---+---+---+---+---+
  *                +-- Obj_OrientationAngle
  *          +---+---+---+---+---+---+---+---+
  *        6 |<-----------------------------x|
  *          +---+---+---+---+---+---+---+---+
  *                                        +-- Obj_Length
  *          +---+---+---+---+---+---+---+---+
  *        7 |<-----------------------------x|
  *          +---+---+---+---+---+---+---+---+
  *                                        +-- Obj_Width
  *
  * Signal tree:
  *
  *   -- {root}
  *      +-- Obj_ID
  *      +-- Obj_ArelLong
  *      +-- Obj_ArelLat
  *      +-- Obj_Class
  *      +-- Obj_OrientationAngle
  *      +-- Obj_Length
  *      +-- Obj_Width
  *
  * ------------------------------------------------------------------------
 */
typedef struct radar_conti_ars408_msgs__msg__ObjectExtended
{
  std_msgs__msg__Float64 obj_arellong;
  std_msgs__msg__Float64 obj_arellat;
  std_msgs__msg__String obj_class;
  std_msgs__msg__Float64 obj_orientationangle;
  std_msgs__msg__Float64 obj_length;
  std_msgs__msg__Float64 obj_width;
} radar_conti_ars408_msgs__msg__ObjectExtended;

// Struct for a sequence of radar_conti_ars408_msgs__msg__ObjectExtended.
typedef struct radar_conti_ars408_msgs__msg__ObjectExtended__Sequence
{
  radar_conti_ars408_msgs__msg__ObjectExtended * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} radar_conti_ars408_msgs__msg__ObjectExtended__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__OBJECT_EXTENDED__STRUCT_H_
