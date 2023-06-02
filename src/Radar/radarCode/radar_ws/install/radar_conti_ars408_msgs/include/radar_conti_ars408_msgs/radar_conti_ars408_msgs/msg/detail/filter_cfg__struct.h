// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from radar_conti_ars408_msgs:msg/FilterCfg.idl
// generated code does not contain a copyright notice

#ifndef RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__FILTER_CFG__STRUCT_H_
#define RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__FILTER_CFG__STRUCT_H_

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
// Member 'filtercfg_valid'
// Member 'filtercfg_active'
// Member 'filtercfg_index'
// Member 'filtercfg_type'
// Member 'filtercfg_min_nofobj'
// Member 'filtercfg_min_distance'
// Member 'filtercfg_min_azimuth'
// Member 'filtercfg_min_vreloncome'
// Member 'filtercfg_min_vreldepart'
// Member 'filtercfg_min_rcs'
// Member 'filtercfg_min_lifetime'
// Member 'filtercfg_min_size'
// Member 'filtercfg_min_probexists'
// Member 'filtercfg_min_y'
// Member 'filtercfg_min_x'
// Member 'filtercfg_min_vyrightleft'
// Member 'filtercfg_min_vxoncome'
// Member 'filtercfg_min_vyleftright'
// Member 'filtercfg_min_vxdepart'
// Member 'filtercfg_min_object_class'
// Member 'filtercfg_max_nofobj'
// Member 'filtercfg_max_distance'
// Member 'filtercfg_max_azimuth'
// Member 'filtercfg_max_vreloncome'
// Member 'filtercfg_max_vreldepart'
// Member 'filtercfg_max_rcs'
// Member 'filtercfg_max_lifetime'
// Member 'filtercfg_max_size'
// Member 'filtercfg_max_probexists'
// Member 'filtercfg_max_y'
// Member 'filtercfg_max_x'
// Member 'filtercfg_max_vyrightleft'
// Member 'filtercfg_max_vxoncome'
// Member 'filtercfg_max_vyleftright'
// Member 'filtercfg_max_vxdepart'
// Member 'filtercfg_max_object_class'
#include "std_msgs/msg/detail/u_int8__struct.h"

/// Struct defined in msg/FilterCfg in the package radar_conti_ars408_msgs.
typedef struct radar_conti_ars408_msgs__msg__FilterCfg
{
  std_msgs__msg__Header header;
  std_msgs__msg__UInt8 filtercfg_valid;
  std_msgs__msg__UInt8 filtercfg_active;
  std_msgs__msg__UInt8 filtercfg_index;
  std_msgs__msg__UInt8 filtercfg_type;
  std_msgs__msg__UInt8 filtercfg_min_nofobj;
  std_msgs__msg__UInt8 filtercfg_min_distance;
  std_msgs__msg__UInt8 filtercfg_min_azimuth;
  std_msgs__msg__UInt8 filtercfg_min_vreloncome;
  std_msgs__msg__UInt8 filtercfg_min_vreldepart;
  std_msgs__msg__UInt8 filtercfg_min_rcs;
  std_msgs__msg__UInt8 filtercfg_min_lifetime;
  std_msgs__msg__UInt8 filtercfg_min_size;
  std_msgs__msg__UInt8 filtercfg_min_probexists;
  std_msgs__msg__UInt8 filtercfg_min_y;
  std_msgs__msg__UInt8 filtercfg_min_x;
  std_msgs__msg__UInt8 filtercfg_min_vyrightleft;
  std_msgs__msg__UInt8 filtercfg_min_vxoncome;
  std_msgs__msg__UInt8 filtercfg_min_vyleftright;
  std_msgs__msg__UInt8 filtercfg_min_vxdepart;
  std_msgs__msg__UInt8 filtercfg_min_object_class;
  std_msgs__msg__UInt8 filtercfg_max_nofobj;
  std_msgs__msg__UInt8 filtercfg_max_distance;
  std_msgs__msg__UInt8 filtercfg_max_azimuth;
  std_msgs__msg__UInt8 filtercfg_max_vreloncome;
  std_msgs__msg__UInt8 filtercfg_max_vreldepart;
  std_msgs__msg__UInt8 filtercfg_max_rcs;
  std_msgs__msg__UInt8 filtercfg_max_lifetime;
  std_msgs__msg__UInt8 filtercfg_max_size;
  std_msgs__msg__UInt8 filtercfg_max_probexists;
  std_msgs__msg__UInt8 filtercfg_max_y;
  std_msgs__msg__UInt8 filtercfg_max_x;
  std_msgs__msg__UInt8 filtercfg_max_vyrightleft;
  std_msgs__msg__UInt8 filtercfg_max_vxoncome;
  std_msgs__msg__UInt8 filtercfg_max_vyleftright;
  std_msgs__msg__UInt8 filtercfg_max_vxdepart;
  std_msgs__msg__UInt8 filtercfg_max_object_class;
} radar_conti_ars408_msgs__msg__FilterCfg;

// Struct for a sequence of radar_conti_ars408_msgs__msg__FilterCfg.
typedef struct radar_conti_ars408_msgs__msg__FilterCfg__Sequence
{
  radar_conti_ars408_msgs__msg__FilterCfg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} radar_conti_ars408_msgs__msg__FilterCfg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__FILTER_CFG__STRUCT_H_
