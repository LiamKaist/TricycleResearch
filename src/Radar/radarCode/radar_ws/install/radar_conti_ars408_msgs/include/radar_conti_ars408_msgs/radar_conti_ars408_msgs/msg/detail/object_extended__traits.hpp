// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from radar_conti_ars408_msgs:msg/ObjectExtended.idl
// generated code does not contain a copyright notice

#ifndef RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__OBJECT_EXTENDED__TRAITS_HPP_
#define RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__OBJECT_EXTENDED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "radar_conti_ars408_msgs/msg/detail/object_extended__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'obj_arellong'
// Member 'obj_arellat'
// Member 'obj_orientationangle'
// Member 'obj_length'
// Member 'obj_width'
#include "std_msgs/msg/detail/float64__traits.hpp"
// Member 'obj_class'
#include "std_msgs/msg/detail/string__traits.hpp"

namespace radar_conti_ars408_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ObjectExtended & msg,
  std::ostream & out)
{
  out << "{";
  // member: obj_arellong
  {
    out << "obj_arellong: ";
    to_flow_style_yaml(msg.obj_arellong, out);
    out << ", ";
  }

  // member: obj_arellat
  {
    out << "obj_arellat: ";
    to_flow_style_yaml(msg.obj_arellat, out);
    out << ", ";
  }

  // member: obj_class
  {
    out << "obj_class: ";
    to_flow_style_yaml(msg.obj_class, out);
    out << ", ";
  }

  // member: obj_orientationangle
  {
    out << "obj_orientationangle: ";
    to_flow_style_yaml(msg.obj_orientationangle, out);
    out << ", ";
  }

  // member: obj_length
  {
    out << "obj_length: ";
    to_flow_style_yaml(msg.obj_length, out);
    out << ", ";
  }

  // member: obj_width
  {
    out << "obj_width: ";
    to_flow_style_yaml(msg.obj_width, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ObjectExtended & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: obj_arellong
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obj_arellong:\n";
    to_block_style_yaml(msg.obj_arellong, out, indentation + 2);
  }

  // member: obj_arellat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obj_arellat:\n";
    to_block_style_yaml(msg.obj_arellat, out, indentation + 2);
  }

  // member: obj_class
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obj_class:\n";
    to_block_style_yaml(msg.obj_class, out, indentation + 2);
  }

  // member: obj_orientationangle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obj_orientationangle:\n";
    to_block_style_yaml(msg.obj_orientationangle, out, indentation + 2);
  }

  // member: obj_length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obj_length:\n";
    to_block_style_yaml(msg.obj_length, out, indentation + 2);
  }

  // member: obj_width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obj_width:\n";
    to_block_style_yaml(msg.obj_width, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ObjectExtended & msg, bool use_flow_style = false)
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
  const radar_conti_ars408_msgs::msg::ObjectExtended & msg,
  std::ostream & out, size_t indentation = 0)
{
  radar_conti_ars408_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use radar_conti_ars408_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const radar_conti_ars408_msgs::msg::ObjectExtended & msg)
{
  return radar_conti_ars408_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<radar_conti_ars408_msgs::msg::ObjectExtended>()
{
  return "radar_conti_ars408_msgs::msg::ObjectExtended";
}

template<>
inline const char * name<radar_conti_ars408_msgs::msg::ObjectExtended>()
{
  return "radar_conti_ars408_msgs/msg/ObjectExtended";
}

template<>
struct has_fixed_size<radar_conti_ars408_msgs::msg::ObjectExtended>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Float64>::value && has_fixed_size<std_msgs::msg::String>::value> {};

template<>
struct has_bounded_size<radar_conti_ars408_msgs::msg::ObjectExtended>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Float64>::value && has_bounded_size<std_msgs::msg::String>::value> {};

template<>
struct is_message<radar_conti_ars408_msgs::msg::ObjectExtended>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__OBJECT_EXTENDED__TRAITS_HPP_
