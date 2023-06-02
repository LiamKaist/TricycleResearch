// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from radar_conti_ars408_msgs:msg/VersionID.idl
// generated code does not contain a copyright notice

#ifndef RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__VERSION_ID__STRUCT_H_
#define RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__VERSION_ID__STRUCT_H_

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
// Member 'version_majorrelease'
// Member 'version_minorrelease'
// Member 'version_patchlevel'
#include "std_msgs/msg/detail/int32__struct.h"
// Member 'version_extendedrange'
// Member 'version_countrycode'
#include "std_msgs/msg/detail/string__struct.h"

/// Struct defined in msg/VersionID in the package radar_conti_ars408_msgs.
/**
  * ------------------------------------------------------------------------
  *
  * Name:       VersionID
  * Id:         0x700
  * Length:     4 bytes
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
  *                                        +-- Version_MajorRelease
  *          +---+---+---+---+---+---+---+---+
  *        1 |<-----------------------------x|
  *    B     +---+---+---+---+---+---+---+---+
  *    y                                   +-- Version_MinorRelease
  *    t     +---+---+---+---+---+---+---+---+
  *    e   2 |<-----------------------------x|
  *          +---+---+---+---+---+---+---+---+
  *                                        +-- Version_PatchLevel
  *          +---+---+---+---+---+---+---+---+
  *        3 |   |   |   |   |   |   |<-x|<-x|
  *          +---+---+---+---+---+---+---+---+
  *                                    |   +-- Version_CountryCode
  *                                    +-- Version_ExtendedRange
  *
  * Signal tree:
  *
  *   -- {root}
  *      +-- Version_MajorRelease
  *      +-- Version_MinorRelease
  *      +-- Version_PatchLevel
  *      +-- Version_ExtendedRange
  *      +-- Version_CountryCode
  *
  * ------------------------------------------------------------------------
 */
typedef struct radar_conti_ars408_msgs__msg__VersionID
{
  std_msgs__msg__Header header;
  std_msgs__msg__Int32 version_majorrelease;
  std_msgs__msg__Int32 version_minorrelease;
  std_msgs__msg__Int32 version_patchlevel;
  std_msgs__msg__String version_extendedrange;
  std_msgs__msg__String version_countrycode;
} radar_conti_ars408_msgs__msg__VersionID;

// Struct for a sequence of radar_conti_ars408_msgs__msg__VersionID.
typedef struct radar_conti_ars408_msgs__msg__VersionID__Sequence
{
  radar_conti_ars408_msgs__msg__VersionID * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} radar_conti_ars408_msgs__msg__VersionID__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__VERSION_ID__STRUCT_H_
