// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from radar_conti_ars408_msgs:msg/FilterStateHeader.idl
// generated code does not contain a copyright notice

#ifndef RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__FILTER_STATE_HEADER__TRAITS_HPP_
#define RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__FILTER_STATE_HEADER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "radar_conti_ars408_msgs/msg/detail/filter_state_header__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'filterstate_nofclusterfiltercfg'
// Member 'filterstate_nofobjectfiltercfg'
#include "std_msgs/msg/detail/u_int8__traits.hpp"

namespace radar_conti_ars408_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const FilterStateHeader & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: filterstate_nofclusterfiltercfg
  {
    out << "filterstate_nofclusterfiltercfg: ";
    to_flow_style_yaml(msg.filterstate_nofclusterfiltercfg, out);
    out << ", ";
  }

  // member: filterstate_nofobjectfiltercfg
  {
    out << "filterstate_nofobjectfiltercfg: ";
    to_flow_style_yaml(msg.filterstate_nofobjectfiltercfg, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FilterStateHeader & msg,
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

  // member: filterstate_nofclusterfiltercfg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "filterstate_nofclusterfiltercfg:\n";
    to_block_style_yaml(msg.filterstate_nofclusterfiltercfg, out, indentation + 2);
  }

  // member: filterstate_nofobjectfiltercfg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "filterstate_nofobjectfiltercfg:\n";
    to_block_style_yaml(msg.filterstate_nofobjectfiltercfg, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FilterStateHeader & msg, bool use_flow_style = false)
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
  const radar_conti_ars408_msgs::msg::FilterStateHeader & msg,
  std::ostream & out, size_t indentation = 0)
{
  radar_conti_ars408_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use radar_conti_ars408_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const radar_conti_ars408_msgs::msg::FilterStateHeader & msg)
{
  return radar_conti_ars408_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<radar_conti_ars408_msgs::msg::FilterStateHeader>()
{
  return "radar_conti_ars408_msgs::msg::FilterStateHeader";
}

template<>
inline const char * name<radar_conti_ars408_msgs::msg::FilterStateHeader>()
{
  return "radar_conti_ars408_msgs/msg/FilterStateHeader";
}

template<>
struct has_fixed_size<radar_conti_ars408_msgs::msg::FilterStateHeader>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value && has_fixed_size<std_msgs::msg::UInt8>::value> {};

template<>
struct has_bounded_size<radar_conti_ars408_msgs::msg::FilterStateHeader>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value && has_bounded_size<std_msgs::msg::UInt8>::value> {};

template<>
struct is_message<radar_conti_ars408_msgs::msg::FilterStateHeader>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__FILTER_STATE_HEADER__TRAITS_HPP_
