// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from radar_conti_ars408_msgs:msg/ObjectGeneral.idl
// generated code does not contain a copyright notice

#ifndef RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__OBJECT_GENERAL__TRAITS_HPP_
#define RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__OBJECT_GENERAL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "radar_conti_ars408_msgs/msg/detail/object_general__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'obj_distlong'
// Member 'obj_distlat'
// Member 'obj_vrellong'
// Member 'obj_vrellat'
// Member 'obj_rcs'
#include "std_msgs/msg/detail/float64__traits.hpp"
// Member 'obj_dynprop'
#include "std_msgs/msg/detail/string__traits.hpp"

namespace radar_conti_ars408_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ObjectGeneral & msg,
  std::ostream & out)
{
  out << "{";
  // member: obj_distlong
  {
    out << "obj_distlong: ";
    to_flow_style_yaml(msg.obj_distlong, out);
    out << ", ";
  }

  // member: obj_distlat
  {
    out << "obj_distlat: ";
    to_flow_style_yaml(msg.obj_distlat, out);
    out << ", ";
  }

  // member: obj_vrellong
  {
    out << "obj_vrellong: ";
    to_flow_style_yaml(msg.obj_vrellong, out);
    out << ", ";
  }

  // member: obj_vrellat
  {
    out << "obj_vrellat: ";
    to_flow_style_yaml(msg.obj_vrellat, out);
    out << ", ";
  }

  // member: obj_dynprop
  {
    out << "obj_dynprop: ";
    to_flow_style_yaml(msg.obj_dynprop, out);
    out << ", ";
  }

  // member: obj_rcs
  {
    out << "obj_rcs: ";
    to_flow_style_yaml(msg.obj_rcs, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ObjectGeneral & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: obj_distlong
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obj_distlong:\n";
    to_block_style_yaml(msg.obj_distlong, out, indentation + 2);
  }

  // member: obj_distlat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obj_distlat:\n";
    to_block_style_yaml(msg.obj_distlat, out, indentation + 2);
  }

  // member: obj_vrellong
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obj_vrellong:\n";
    to_block_style_yaml(msg.obj_vrellong, out, indentation + 2);
  }

  // member: obj_vrellat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obj_vrellat:\n";
    to_block_style_yaml(msg.obj_vrellat, out, indentation + 2);
  }

  // member: obj_dynprop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obj_dynprop:\n";
    to_block_style_yaml(msg.obj_dynprop, out, indentation + 2);
  }

  // member: obj_rcs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obj_rcs:\n";
    to_block_style_yaml(msg.obj_rcs, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ObjectGeneral & msg, bool use_flow_style = false)
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
  const radar_conti_ars408_msgs::msg::ObjectGeneral & msg,
  std::ostream & out, size_t indentation = 0)
{
  radar_conti_ars408_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use radar_conti_ars408_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const radar_conti_ars408_msgs::msg::ObjectGeneral & msg)
{
  return radar_conti_ars408_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<radar_conti_ars408_msgs::msg::ObjectGeneral>()
{
  return "radar_conti_ars408_msgs::msg::ObjectGeneral";
}

template<>
inline const char * name<radar_conti_ars408_msgs::msg::ObjectGeneral>()
{
  return "radar_conti_ars408_msgs/msg/ObjectGeneral";
}

template<>
struct has_fixed_size<radar_conti_ars408_msgs::msg::ObjectGeneral>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Float64>::value && has_fixed_size<std_msgs::msg::String>::value> {};

template<>
struct has_bounded_size<radar_conti_ars408_msgs::msg::ObjectGeneral>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Float64>::value && has_bounded_size<std_msgs::msg::String>::value> {};

template<>
struct is_message<radar_conti_ars408_msgs::msg::ObjectGeneral>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__OBJECT_GENERAL__TRAITS_HPP_
