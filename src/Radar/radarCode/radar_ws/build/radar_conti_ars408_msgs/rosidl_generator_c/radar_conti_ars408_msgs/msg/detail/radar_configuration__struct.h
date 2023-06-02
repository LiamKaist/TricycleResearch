// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from radar_conti_ars408_msgs:msg/RadarConfiguration.idl
// generated code does not contain a copyright notice

#ifndef RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__RADAR_CONFIGURATION__STRUCT_H_
#define RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__RADAR_CONFIGURATION__STRUCT_H_

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
// Member 'radarcfg_storeinnvm_valid'
// Member 'radarcfg_sortindex_valid'
// Member 'radarcfg_sendextinfo_valid'
// Member 'radarcfg_sendquality_valid'
// Member 'radarcfg_outputtype_valid'
// Member 'radarcfg_radarpower_valid'
// Member 'radarcfg_sensorid_valid'
// Member 'radarcfg_maxdistance_valid'
// Member 'radarcfg_maxdistance'
// Member 'radarcfg_radarpower'
// Member 'radarcfg_outputtype'
// Member 'radarcfg_sensorid'
// Member 'radarcfg_storeinnvm'
// Member 'radarcfg_sortindex'
// Member 'radarcfg_sendextinfo'
// Member 'radarcfg_sendquality'
// Member 'radarcfg_ctrlrelay'
// Member 'radarcfg_ctrlrelay_valid'
// Member 'radarcfg_rcs_threshold'
// Member 'radarcfg_rcs_threshold_valid'
#include "std_msgs/msg/detail/u_int8__struct.h"

/// Struct defined in msg/RadarConfiguration in the package radar_conti_ars408_msgs.
/**
  * ------------------------------------------------------------------------
  *
  * Name:       RadarConfiguration
  * Id:         0x200
  * Length:     8 bytes
  * Cycle time: 0 ms
  * Senders:    ExternalUnit
  * Layout:
  *
  *                         Bit
  *
  *            7   6   5   4   3   2   1   0
  *          +---+---+---+---+---+---+---+---+
  *        0 |<-x|<-x|<-x|<-x|<-x|<-x|<-x|<-x|
  *          +---+---+---+---+---+---+---+---+
  *            |   |   |   |   |   |   |   +-- RadarCfg_MaxDistance_valid
  *            |   |   |   |   |   |   +-- RadarCfg_SensorID_valid
  *            |   |   |   |   |   +-- RadarCfg_RadarPower_valid
  *            |   |   |   |   +-- RadarCfg_OutputType_valid
  *            |   |   |   +-- RadarCfg_SendQuality_valid
  *            |   |   +-- RadarCfg_SendExtInfo_valid
  *            |   +-- RadarCfg_SortIndex_valid
  *            +-- RadarCfg_StoreInNVM_valid
  *          +---+---+---+---+---+---+---+---+
  *        1 |<------------------------------|
  *          +---+---+---+---+---+---+---+---+
  *        2 |------x|   |   |   |   |   |   |
  *          +---+---+---+---+---+---+---+---+
  *                +-- RadarCfg_MaxDistance
  *          +---+---+---+---+---+---+---+---+
  *        3 |   |   |   |   |   |   |   |   |
  *    B     +---+---+---+---+---+---+---+---+
  *    y   4 |<---------x|<-----x|<---------x|
  *    t     +---+---+---+---+---+---+---+---+
  *    e               |       |           +-- RadarCfg_SensorID
  *                    |       +-- RadarCfg_OutputType
  *                    +-- RadarCfg_RadarPower
  *          +---+---+---+---+---+---+---+---+
  *        5 |<-x|<---------x|<-x|<-x|<-x|<-x|
  *          +---+---+---+---+---+---+---+---+
  *            |           |   |   |   |   +-- RadarCfg_CtrlRelay_valid
  *            |           |   |   |   +-- RadarCfg_CtrlRelay
  *            |           |   |   +-- RadarCfg_SendQuality
  *            |           |   +-- RadarCfg_SendExtInfo
  *            |           +-- RadarCfg_SortIndex
  *            +-- RadarCfg_StoreInNVM
  *          +---+---+---+---+---+---+---+---+
  *        6 |   |   |   |   |<---------x|<-x|
  *          +---+---+---+---+---+---+---+---+
  *                                    |   +-- RadarCfg_RCS_Threshold_valid
  *                                    +-- RadarCfg_RCS_Threshold
  *          +---+---+---+---+---+---+---+---+
  *        7 |   |   |   |   |   |   |   |   |
  *          +---+---+---+---+---+---+---+---+
  *
  * Signal tree:
  *
  *   -- {root}
  *      +-- RadarCfg_StoreInNVM_valid
  *      +-- RadarCfg_SortIndex_valid
  *      +-- RadarCfg_SendExtInfo_valid
  *      +-- RadarCfg_SendQuality_valid
  *      +-- RadarCfg_OutputType_valid
  *      +-- RadarCfg_RadarPower_valid
  *      +-- RadarCfg_SensorID_valid
  *      +-- RadarCfg_MaxDistance_valid
  *      +-- RadarCfg_MaxDistance
  *      +-- RadarCfg_RadarPower
  *      +-- RadarCfg_OutputType
  *      +-- RadarCfg_SensorID
  *      +-- RadarCfg_StoreInNVM
  *      +-- RadarCfg_SortIndex
  *      +-- RadarCfg_SendExtInfo
  *      +-- RadarCfg_SendQuality
  *      +-- RadarCfg_CtrlRelay
  *      +-- RadarCfg_CtrlRelay_valid
  *      +-- RadarCfg_RCS_Threshold
  *      +-- RadarCfg_RCS_Threshold_valid
  *
  * ------------------------------------------------------------------------
 */
typedef struct radar_conti_ars408_msgs__msg__RadarConfiguration
{
  std_msgs__msg__Header header;
  std_msgs__msg__UInt8 radarcfg_storeinnvm_valid;
  std_msgs__msg__UInt8 radarcfg_sortindex_valid;
  std_msgs__msg__UInt8 radarcfg_sendextinfo_valid;
  std_msgs__msg__UInt8 radarcfg_sendquality_valid;
  std_msgs__msg__UInt8 radarcfg_outputtype_valid;
  std_msgs__msg__UInt8 radarcfg_radarpower_valid;
  std_msgs__msg__UInt8 radarcfg_sensorid_valid;
  std_msgs__msg__UInt8 radarcfg_maxdistance_valid;
  std_msgs__msg__UInt8 radarcfg_maxdistance;
  std_msgs__msg__UInt8 radarcfg_radarpower;
  std_msgs__msg__UInt8 radarcfg_outputtype;
  std_msgs__msg__UInt8 radarcfg_sensorid;
  std_msgs__msg__UInt8 radarcfg_storeinnvm;
  std_msgs__msg__UInt8 radarcfg_sortindex;
  std_msgs__msg__UInt8 radarcfg_sendextinfo;
  std_msgs__msg__UInt8 radarcfg_sendquality;
  std_msgs__msg__UInt8 radarcfg_ctrlrelay;
  std_msgs__msg__UInt8 radarcfg_ctrlrelay_valid;
  std_msgs__msg__UInt8 radarcfg_rcs_threshold;
  std_msgs__msg__UInt8 radarcfg_rcs_threshold_valid;
} radar_conti_ars408_msgs__msg__RadarConfiguration;

// Struct for a sequence of radar_conti_ars408_msgs__msg__RadarConfiguration.
typedef struct radar_conti_ars408_msgs__msg__RadarConfiguration__Sequence
{
  radar_conti_ars408_msgs__msg__RadarConfiguration * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} radar_conti_ars408_msgs__msg__RadarConfiguration__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__RADAR_CONFIGURATION__STRUCT_H_
