// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from radar_conti_ars408_msgs:msg/RadarState.idl
// generated code does not contain a copyright notice

#ifndef RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__RADAR_STATE__TRAITS_HPP_
#define RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__RADAR_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "radar_conti_ars408_msgs/msg/detail/radar_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'radarstate_nvmwritestatus'
// Member 'radarstate_nvmreadstatus'
// Member 'radarstate_maxdistancecfg'
// Member 'radarstate_persistent_error'
// Member 'radarstate_interference'
// Member 'radarstate_temperature_error'
// Member 'radarstate_temporary_error'
// Member 'radarstate_voltage_error'
// Member 'radarstate_radarpowercfg'
// Member 'radarstate_sortindex'
// Member 'radarstate_sensorid'
// Member 'radarstate_motionrxstate'
// Member 'radarstate_sendextinfocfg'
// Member 'radarstate_sendqualitycfg'
// Member 'radarstate_outputtypecfg'
// Member 'radarstate_ctrlrelaycfg'
// Member 'radarstate_rcs_threshold'
#include "std_msgs/msg/detail/u_int8__traits.hpp"

namespace radar_conti_ars408_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RadarState & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: radarstate_nvmwritestatus
  {
    out << "radarstate_nvmwritestatus: ";
    to_flow_style_yaml(msg.radarstate_nvmwritestatus, out);
    out << ", ";
  }

  // member: radarstate_nvmreadstatus
  {
    out << "radarstate_nvmreadstatus: ";
    to_flow_style_yaml(msg.radarstate_nvmreadstatus, out);
    out << ", ";
  }

  // member: radarstate_maxdistancecfg
  {
    out << "radarstate_maxdistancecfg: ";
    to_flow_style_yaml(msg.radarstate_maxdistancecfg, out);
    out << ", ";
  }

  // member: radarstate_persistent_error
  {
    out << "radarstate_persistent_error: ";
    to_flow_style_yaml(msg.radarstate_persistent_error, out);
    out << ", ";
  }

  // member: radarstate_interference
  {
    out << "radarstate_interference: ";
    to_flow_style_yaml(msg.radarstate_interference, out);
    out << ", ";
  }

  // member: radarstate_temperature_error
  {
    out << "radarstate_temperature_error: ";
    to_flow_style_yaml(msg.radarstate_temperature_error, out);
    out << ", ";
  }

  // member: radarstate_temporary_error
  {
    out << "radarstate_temporary_error: ";
    to_flow_style_yaml(msg.radarstate_temporary_error, out);
    out << ", ";
  }

  // member: radarstate_voltage_error
  {
    out << "radarstate_voltage_error: ";
    to_flow_style_yaml(msg.radarstate_voltage_error, out);
    out << ", ";
  }

  // member: radarstate_radarpowercfg
  {
    out << "radarstate_radarpowercfg: ";
    to_flow_style_yaml(msg.radarstate_radarpowercfg, out);
    out << ", ";
  }

  // member: radarstate_sortindex
  {
    out << "radarstate_sortindex: ";
    to_flow_style_yaml(msg.radarstate_sortindex, out);
    out << ", ";
  }

  // member: radarstate_sensorid
  {
    out << "radarstate_sensorid: ";
    to_flow_style_yaml(msg.radarstate_sensorid, out);
    out << ", ";
  }

  // member: radarstate_motionrxstate
  {
    out << "radarstate_motionrxstate: ";
    to_flow_style_yaml(msg.radarstate_motionrxstate, out);
    out << ", ";
  }

  // member: radarstate_sendextinfocfg
  {
    out << "radarstate_sendextinfocfg: ";
    to_flow_style_yaml(msg.radarstate_sendextinfocfg, out);
    out << ", ";
  }

  // member: radarstate_sendqualitycfg
  {
    out << "radarstate_sendqualitycfg: ";
    to_flow_style_yaml(msg.radarstate_sendqualitycfg, out);
    out << ", ";
  }

  // member: radarstate_outputtypecfg
  {
    out << "radarstate_outputtypecfg: ";
    to_flow_style_yaml(msg.radarstate_outputtypecfg, out);
    out << ", ";
  }

  // member: radarstate_ctrlrelaycfg
  {
    out << "radarstate_ctrlrelaycfg: ";
    to_flow_style_yaml(msg.radarstate_ctrlrelaycfg, out);
    out << ", ";
  }

  // member: radarstate_rcs_threshold
  {
    out << "radarstate_rcs_threshold: ";
    to_flow_style_yaml(msg.radarstate_rcs_threshold, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RadarState & msg,
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

  // member: radarstate_nvmwritestatus
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radarstate_nvmwritestatus:\n";
    to_block_style_yaml(msg.radarstate_nvmwritestatus, out, indentation + 2);
  }

  // member: radarstate_nvmreadstatus
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radarstate_nvmreadstatus:\n";
    to_block_style_yaml(msg.radarstate_nvmreadstatus, out, indentation + 2);
  }

  // member: radarstate_maxdistancecfg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radarstate_maxdistancecfg:\n";
    to_block_style_yaml(msg.radarstate_maxdistancecfg, out, indentation + 2);
  }

  // member: radarstate_persistent_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radarstate_persistent_error:\n";
    to_block_style_yaml(msg.radarstate_persistent_error, out, indentation + 2);
  }

  // member: radarstate_interference
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radarstate_interference:\n";
    to_block_style_yaml(msg.radarstate_interference, out, indentation + 2);
  }

  // member: radarstate_temperature_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radarstate_temperature_error:\n";
    to_block_style_yaml(msg.radarstate_temperature_error, out, indentation + 2);
  }

  // member: radarstate_temporary_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radarstate_temporary_error:\n";
    to_block_style_yaml(msg.radarstate_temporary_error, out, indentation + 2);
  }

  // member: radarstate_voltage_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radarstate_voltage_error:\n";
    to_block_style_yaml(msg.radarstate_voltage_error, out, indentation + 2);
  }

  // member: radarstate_radarpowercfg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radarstate_radarpowercfg:\n";
    to_block_style_yaml(msg.radarstate_radarpowercfg, out, indentation + 2);
  }

  // member: radarstate_sortindex
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radarstate_sortindex:\n";
    to_block_style_yaml(msg.radarstate_sortindex, out, indentation + 2);
  }

  // member: radarstate_sensorid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radarstate_sensorid:\n";
    to_block_style_yaml(msg.radarstate_sensorid, out, indentation + 2);
  }

  // member: radarstate_motionrxstate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radarstate_motionrxstate:\n";
    to_block_style_yaml(msg.radarstate_motionrxstate, out, indentation + 2);
  }

  // member: radarstate_sendextinfocfg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radarstate_sendextinfocfg:\n";
    to_block_style_yaml(msg.radarstate_sendextinfocfg, out, indentation + 2);
  }

  // member: radarstate_sendqualitycfg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radarstate_sendqualitycfg:\n";
    to_block_style_yaml(msg.radarstate_sendqualitycfg, out, indentation + 2);
  }

  // member: radarstate_outputtypecfg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radarstate_outputtypecfg:\n";
    to_block_style_yaml(msg.radarstate_outputtypecfg, out, indentation + 2);
  }

  // member: radarstate_ctrlrelaycfg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radarstate_ctrlrelaycfg:\n";
    to_block_style_yaml(msg.radarstate_ctrlrelaycfg, out, indentation + 2);
  }

  // member: radarstate_rcs_threshold
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radarstate_rcs_threshold:\n";
    to_block_style_yaml(msg.radarstate_rcs_threshold, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RadarState & msg, bool use_flow_style = false)
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
  const radar_conti_ars408_msgs::msg::RadarState & msg,
  std::ostream & out, size_t indentation = 0)
{
  radar_conti_ars408_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use radar_conti_ars408_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const radar_conti_ars408_msgs::msg::RadarState & msg)
{
  return radar_conti_ars408_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<radar_conti_ars408_msgs::msg::RadarState>()
{
  return "radar_conti_ars408_msgs::msg::RadarState";
}

template<>
inline const char * name<radar_conti_ars408_msgs::msg::RadarState>()
{
  return "radar_conti_ars408_msgs/msg/RadarState";
}

template<>
struct has_fixed_size<radar_conti_ars408_msgs::msg::RadarState>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value && has_fixed_size<std_msgs::msg::UInt8>::value> {};

template<>
struct has_bounded_size<radar_conti_ars408_msgs::msg::RadarState>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value && has_bounded_size<std_msgs::msg::UInt8>::value> {};

template<>
struct is_message<radar_conti_ars408_msgs::msg::RadarState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__RADAR_STATE__TRAITS_HPP_
