// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from radar_conti_ars408_msgs:msg/RadarConfiguration.idl
// generated code does not contain a copyright notice

#ifndef RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__RADAR_CONFIGURATION__TRAITS_HPP_
#define RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__RADAR_CONFIGURATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "radar_conti_ars408_msgs/msg/detail/radar_configuration__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
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
#include "std_msgs/msg/detail/u_int8__traits.hpp"

namespace radar_conti_ars408_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RadarConfiguration & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: radarcfg_storeinnvm_valid
  {
    out << "radarcfg_storeinnvm_valid: ";
    to_flow_style_yaml(msg.radarcfg_storeinnvm_valid, out);
    out << ", ";
  }

  // member: radarcfg_sortindex_valid
  {
    out << "radarcfg_sortindex_valid: ";
    to_flow_style_yaml(msg.radarcfg_sortindex_valid, out);
    out << ", ";
  }

  // member: radarcfg_sendextinfo_valid
  {
    out << "radarcfg_sendextinfo_valid: ";
    to_flow_style_yaml(msg.radarcfg_sendextinfo_valid, out);
    out << ", ";
  }

  // member: radarcfg_sendquality_valid
  {
    out << "radarcfg_sendquality_valid: ";
    to_flow_style_yaml(msg.radarcfg_sendquality_valid, out);
    out << ", ";
  }

  // member: radarcfg_outputtype_valid
  {
    out << "radarcfg_outputtype_valid: ";
    to_flow_style_yaml(msg.radarcfg_outputtype_valid, out);
    out << ", ";
  }

  // member: radarcfg_radarpower_valid
  {
    out << "radarcfg_radarpower_valid: ";
    to_flow_style_yaml(msg.radarcfg_radarpower_valid, out);
    out << ", ";
  }

  // member: radarcfg_sensorid_valid
  {
    out << "radarcfg_sensorid_valid: ";
    to_flow_style_yaml(msg.radarcfg_sensorid_valid, out);
    out << ", ";
  }

  // member: radarcfg_maxdistance_valid
  {
    out << "radarcfg_maxdistance_valid: ";
    to_flow_style_yaml(msg.radarcfg_maxdistance_valid, out);
    out << ", ";
  }

  // member: radarcfg_maxdistance
  {
    out << "radarcfg_maxdistance: ";
    to_flow_style_yaml(msg.radarcfg_maxdistance, out);
    out << ", ";
  }

  // member: radarcfg_radarpower
  {
    out << "radarcfg_radarpower: ";
    to_flow_style_yaml(msg.radarcfg_radarpower, out);
    out << ", ";
  }

  // member: radarcfg_outputtype
  {
    out << "radarcfg_outputtype: ";
    to_flow_style_yaml(msg.radarcfg_outputtype, out);
    out << ", ";
  }

  // member: radarcfg_sensorid
  {
    out << "radarcfg_sensorid: ";
    to_flow_style_yaml(msg.radarcfg_sensorid, out);
    out << ", ";
  }

  // member: radarcfg_storeinnvm
  {
    out << "radarcfg_storeinnvm: ";
    to_flow_style_yaml(msg.radarcfg_storeinnvm, out);
    out << ", ";
  }

  // member: radarcfg_sortindex
  {
    out << "radarcfg_sortindex: ";
    to_flow_style_yaml(msg.radarcfg_sortindex, out);
    out << ", ";
  }

  // member: radarcfg_sendextinfo
  {
    out << "radarcfg_sendextinfo: ";
    to_flow_style_yaml(msg.radarcfg_sendextinfo, out);
    out << ", ";
  }

  // member: radarcfg_sendquality
  {
    out << "radarcfg_sendquality: ";
    to_flow_style_yaml(msg.radarcfg_sendquality, out);
    out << ", ";
  }

  // member: radarcfg_ctrlrelay
  {
    out << "radarcfg_ctrlrelay: ";
    to_flow_style_yaml(msg.radarcfg_ctrlrelay, out);
    out << ", ";
  }

  // member: radarcfg_ctrlrelay_valid
  {
    out << "radarcfg_ctrlrelay_valid: ";
    to_flow_style_yaml(msg.radarcfg_ctrlrelay_valid, out);
    out << ", ";
  }

  // member: radarcfg_rcs_threshold
  {
    out << "radarcfg_rcs_threshold: ";
    to_flow_style_yaml(msg.radarcfg_rcs_threshold, out);
    out << ", ";
  }

  // member: radarcfg_rcs_threshold_valid
  {
    out << "radarcfg_rcs_threshold_valid: ";
    to_flow_style_yaml(msg.radarcfg_rcs_threshold_valid, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RadarConfiguration & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: radarcfg_storeinnvm_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radarcfg_storeinnvm_valid:\n";
    to_block_style_yaml(msg.radarcfg_storeinnvm_valid, out, indentation + 2);
  }

  // member: radarcfg_sortindex_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radarcfg_sortindex_valid:\n";
    to_block_style_yaml(msg.radarcfg_sortindex_valid, out, indentation + 2);
  }

  // member: radarcfg_sendextinfo_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radarcfg_sendextinfo_valid:\n";
    to_block_style_yaml(msg.radarcfg_sendextinfo_valid, out, indentation + 2);
  }

  // member: radarcfg_sendquality_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radarcfg_sendquality_valid:\n";
    to_block_style_yaml(msg.radarcfg_sendquality_valid, out, indentation + 2);
  }

  // member: radarcfg_outputtype_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radarcfg_outputtype_valid:\n";
    to_block_style_yaml(msg.radarcfg_outputtype_valid, out, indentation + 2);
  }

  // member: radarcfg_radarpower_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radarcfg_radarpower_valid:\n";
    to_block_style_yaml(msg.radarcfg_radarpower_valid, out, indentation + 2);
  }

  // member: radarcfg_sensorid_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radarcfg_sensorid_valid:\n";
    to_block_style_yaml(msg.radarcfg_sensorid_valid, out, indentation + 2);
  }

  // member: radarcfg_maxdistance_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radarcfg_maxdistance_valid:\n";
    to_block_style_yaml(msg.radarcfg_maxdistance_valid, out, indentation + 2);
  }

  // member: radarcfg_maxdistance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radarcfg_maxdistance:\n";
    to_block_style_yaml(msg.radarcfg_maxdistance, out, indentation + 2);
  }

  // member: radarcfg_radarpower
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radarcfg_radarpower:\n";
    to_block_style_yaml(msg.radarcfg_radarpower, out, indentation + 2);
  }

  // member: radarcfg_outputtype
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radarcfg_outputtype:\n";
    to_block_style_yaml(msg.radarcfg_outputtype, out, indentation + 2);
  }

  // member: radarcfg_sensorid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radarcfg_sensorid:\n";
    to_block_style_yaml(msg.radarcfg_sensorid, out, indentation + 2);
  }

  // member: radarcfg_storeinnvm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radarcfg_storeinnvm:\n";
    to_block_style_yaml(msg.radarcfg_storeinnvm, out, indentation + 2);
  }

  // member: radarcfg_sortindex
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radarcfg_sortindex:\n";
    to_block_style_yaml(msg.radarcfg_sortindex, out, indentation + 2);
  }

  // member: radarcfg_sendextinfo
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radarcfg_sendextinfo:\n";
    to_block_style_yaml(msg.radarcfg_sendextinfo, out, indentation + 2);
  }

  // member: radarcfg_sendquality
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radarcfg_sendquality:\n";
    to_block_style_yaml(msg.radarcfg_sendquality, out, indentation + 2);
  }

  // member: radarcfg_ctrlrelay
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radarcfg_ctrlrelay:\n";
    to_block_style_yaml(msg.radarcfg_ctrlrelay, out, indentation + 2);
  }

  // member: radarcfg_ctrlrelay_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radarcfg_ctrlrelay_valid:\n";
    to_block_style_yaml(msg.radarcfg_ctrlrelay_valid, out, indentation + 2);
  }

  // member: radarcfg_rcs_threshold
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radarcfg_rcs_threshold:\n";
    to_block_style_yaml(msg.radarcfg_rcs_threshold, out, indentation + 2);
  }

  // member: radarcfg_rcs_threshold_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radarcfg_rcs_threshold_valid:\n";
    to_block_style_yaml(msg.radarcfg_rcs_threshold_valid, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RadarConfiguration & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace radar_conti_ars408_msgs

namespace rosidl_generator_traits
{

[[deprecated("use radar_conti_ars408_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const radar_conti_ars408_msgs::msg::RadarConfiguration & msg,
  std::ostream & out, size_t indentation = 0)
{
  radar_conti_ars408_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use radar_conti_ars408_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const radar_conti_ars408_msgs::msg::RadarConfiguration & msg)
{
  return radar_conti_ars408_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<radar_conti_ars408_msgs::msg::RadarConfiguration>()
{
  return "radar_conti_ars408_msgs::msg::RadarConfiguration";
}

template<>
inline const char * name<radar_conti_ars408_msgs::msg::RadarConfiguration>()
{
  return "radar_conti_ars408_msgs/msg/RadarConfiguration";
}

template<>
struct has_fixed_size<radar_conti_ars408_msgs::msg::RadarConfiguration>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value && has_fixed_size<std_msgs::msg::UInt8>::value> {};

template<>
struct has_bounded_size<radar_conti_ars408_msgs::msg::RadarConfiguration>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value && has_bounded_size<std_msgs::msg::UInt8>::value> {};

template<>
struct is_message<radar_conti_ars408_msgs::msg::RadarConfiguration>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__RADAR_CONFIGURATION__TRAITS_HPP_
