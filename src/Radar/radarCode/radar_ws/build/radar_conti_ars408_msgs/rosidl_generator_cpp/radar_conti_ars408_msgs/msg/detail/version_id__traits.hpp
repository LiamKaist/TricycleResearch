// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from radar_conti_ars408_msgs:msg/VersionID.idl
// generated code does not contain a copyright notice

#ifndef RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__VERSION_ID__TRAITS_HPP_
#define RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__VERSION_ID__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "radar_conti_ars408_msgs/msg/detail/version_id__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'version_majorrelease'
// Member 'version_minorrelease'
// Member 'version_patchlevel'
#include "std_msgs/msg/detail/int32__traits.hpp"
// Member 'version_extendedrange'
// Member 'version_countrycode'
#include "std_msgs/msg/detail/string__traits.hpp"

namespace radar_conti_ars408_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const VersionID & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: version_majorrelease
  {
    out << "version_majorrelease: ";
    to_flow_style_yaml(msg.version_majorrelease, out);
    out << ", ";
  }

  // member: version_minorrelease
  {
    out << "version_minorrelease: ";
    to_flow_style_yaml(msg.version_minorrelease, out);
    out << ", ";
  }

  // member: version_patchlevel
  {
    out << "version_patchlevel: ";
    to_flow_style_yaml(msg.version_patchlevel, out);
    out << ", ";
  }

  // member: version_extendedrange
  {
    out << "version_extendedrange: ";
    to_flow_style_yaml(msg.version_extendedrange, out);
    out << ", ";
  }

  // member: version_countrycode
  {
    out << "version_countrycode: ";
    to_flow_style_yaml(msg.version_countrycode, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VersionID & msg,
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

  // member: version_majorrelease
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "version_majorrelease:\n";
    to_block_style_yaml(msg.version_majorrelease, out, indentation + 2);
  }

  // member: version_minorrelease
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "version_minorrelease:\n";
    to_block_style_yaml(msg.version_minorrelease, out, indentation + 2);
  }

  // member: version_patchlevel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "version_patchlevel:\n";
    to_block_style_yaml(msg.version_patchlevel, out, indentation + 2);
  }

  // member: version_extendedrange
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "version_extendedrange:\n";
    to_block_style_yaml(msg.version_extendedrange, out, indentation + 2);
  }

  // member: version_countrycode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "version_countrycode:\n";
    to_block_style_yaml(msg.version_countrycode, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VersionID & msg, bool use_flow_style = false)
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
  const radar_conti_ars408_msgs::msg::VersionID & msg,
  std::ostream & out, size_t indentation = 0)
{
  radar_conti_ars408_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use radar_conti_ars408_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const radar_conti_ars408_msgs::msg::VersionID & msg)
{
  return radar_conti_ars408_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<radar_conti_ars408_msgs::msg::VersionID>()
{
  return "radar_conti_ars408_msgs::msg::VersionID";
}

template<>
inline const char * name<radar_conti_ars408_msgs::msg::VersionID>()
{
  return "radar_conti_ars408_msgs/msg/VersionID";
}

template<>
struct has_fixed_size<radar_conti_ars408_msgs::msg::VersionID>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value && has_fixed_size<std_msgs::msg::Int32>::value && has_fixed_size<std_msgs::msg::String>::value> {};

template<>
struct has_bounded_size<radar_conti_ars408_msgs::msg::VersionID>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value && has_bounded_size<std_msgs::msg::Int32>::value && has_bounded_size<std_msgs::msg::String>::value> {};

template<>
struct is_message<radar_conti_ars408_msgs::msg::VersionID>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__VERSION_ID__TRAITS_HPP_
