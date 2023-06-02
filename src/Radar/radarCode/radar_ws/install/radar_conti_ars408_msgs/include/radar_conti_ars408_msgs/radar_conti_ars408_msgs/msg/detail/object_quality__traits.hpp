// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from radar_conti_ars408_msgs:msg/ObjectQuality.idl
// generated code does not contain a copyright notice

#ifndef RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__OBJECT_QUALITY__TRAITS_HPP_
#define RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__OBJECT_QUALITY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "radar_conti_ars408_msgs/msg/detail/object_quality__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'obj_distlong_rms'
// Member 'obj_distlat_rms'
// Member 'obj_vrellong_rms'
// Member 'obj_vrellat_rms'
// Member 'obj_arellong_rms'
// Member 'obj_arellat_rms'
// Member 'obj_orientation_rms'
// Member 'obj_probofexist'
#include "std_msgs/msg/detail/float64__traits.hpp"
// Member 'obj_measstate'
#include "std_msgs/msg/detail/string__traits.hpp"

namespace radar_conti_ars408_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ObjectQuality & msg,
  std::ostream & out)
{
  out << "{";
  // member: obj_distlong_rms
  {
    out << "obj_distlong_rms: ";
    to_flow_style_yaml(msg.obj_distlong_rms, out);
    out << ", ";
  }

  // member: obj_distlat_rms
  {
    out << "obj_distlat_rms: ";
    to_flow_style_yaml(msg.obj_distlat_rms, out);
    out << ", ";
  }

  // member: obj_vrellong_rms
  {
    out << "obj_vrellong_rms: ";
    to_flow_style_yaml(msg.obj_vrellong_rms, out);
    out << ", ";
  }

  // member: obj_vrellat_rms
  {
    out << "obj_vrellat_rms: ";
    to_flow_style_yaml(msg.obj_vrellat_rms, out);
    out << ", ";
  }

  // member: obj_arellong_rms
  {
    out << "obj_arellong_rms: ";
    to_flow_style_yaml(msg.obj_arellong_rms, out);
    out << ", ";
  }

  // member: obj_arellat_rms
  {
    out << "obj_arellat_rms: ";
    to_flow_style_yaml(msg.obj_arellat_rms, out);
    out << ", ";
  }

  // member: obj_orientation_rms
  {
    out << "obj_orientation_rms: ";
    to_flow_style_yaml(msg.obj_orientation_rms, out);
    out << ", ";
  }

  // member: obj_probofexist
  {
    out << "obj_probofexist: ";
    to_flow_style_yaml(msg.obj_probofexist, out);
    out << ", ";
  }

  // member: obj_measstate
  {
    out << "obj_measstate: ";
    to_flow_style_yaml(msg.obj_measstate, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ObjectQuality & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: obj_distlong_rms
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obj_distlong_rms:\n";
    to_block_style_yaml(msg.obj_distlong_rms, out, indentation + 2);
  }

  // member: obj_distlat_rms
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obj_distlat_rms:\n";
    to_block_style_yaml(msg.obj_distlat_rms, out, indentation + 2);
  }

  // member: obj_vrellong_rms
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obj_vrellong_rms:\n";
    to_block_style_yaml(msg.obj_vrellong_rms, out, indentation + 2);
  }

  // member: obj_vrellat_rms
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obj_vrellat_rms:\n";
    to_block_style_yaml(msg.obj_vrellat_rms, out, indentation + 2);
  }

  // member: obj_arellong_rms
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obj_arellong_rms:\n";
    to_block_style_yaml(msg.obj_arellong_rms, out, indentation + 2);
  }

  // member: obj_arellat_rms
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obj_arellat_rms:\n";
    to_block_style_yaml(msg.obj_arellat_rms, out, indentation + 2);
  }

  // member: obj_orientation_rms
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obj_orientation_rms:\n";
    to_block_style_yaml(msg.obj_orientation_rms, out, indentation + 2);
  }

  // member: obj_probofexist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obj_probofexist:\n";
    to_block_style_yaml(msg.obj_probofexist, out, indentation + 2);
  }

  // member: obj_measstate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obj_measstate:\n";
    to_block_style_yaml(msg.obj_measstate, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ObjectQuality & msg, bool use_flow_style = false)
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
  const radar_conti_ars408_msgs::msg::ObjectQuality & msg,
  std::ostream & out, size_t indentation = 0)
{
  radar_conti_ars408_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use radar_conti_ars408_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const radar_conti_ars408_msgs::msg::ObjectQuality & msg)
{
  return radar_conti_ars408_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<radar_conti_ars408_msgs::msg::ObjectQuality>()
{
  return "radar_conti_ars408_msgs::msg::ObjectQuality";
}

template<>
inline const char * name<radar_conti_ars408_msgs::msg::ObjectQuality>()
{
  return "radar_conti_ars408_msgs/msg/ObjectQuality";
}

template<>
struct has_fixed_size<radar_conti_ars408_msgs::msg::ObjectQuality>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Float64>::value && has_fixed_size<std_msgs::msg::String>::value> {};

template<>
struct has_bounded_size<radar_conti_ars408_msgs::msg::ObjectQuality>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Float64>::value && has_bounded_size<std_msgs::msg::String>::value> {};

template<>
struct is_message<radar_conti_ars408_msgs::msg::ObjectQuality>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__OBJECT_QUALITY__TRAITS_HPP_
