// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from radar_conti_ars408_msgs:msg/Object.idl
// generated code does not contain a copyright notice

#ifndef RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__OBJECT__TRAITS_HPP_
#define RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__OBJECT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "radar_conti_ars408_msgs/msg/detail/object__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'obj_id'
#include "std_msgs/msg/detail/int32__traits.hpp"
// Member 'object_general'
#include "radar_conti_ars408_msgs/msg/detail/object_general__traits.hpp"
// Member 'object_extended'
#include "radar_conti_ars408_msgs/msg/detail/object_extended__traits.hpp"
// Member 'object_quality'
#include "radar_conti_ars408_msgs/msg/detail/object_quality__traits.hpp"

namespace radar_conti_ars408_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Object & msg,
  std::ostream & out)
{
  out << "{";
  // member: obj_id
  {
    out << "obj_id: ";
    to_flow_style_yaml(msg.obj_id, out);
    out << ", ";
  }

  // member: object_general
  {
    out << "object_general: ";
    to_flow_style_yaml(msg.object_general, out);
    out << ", ";
  }

  // member: object_extended
  {
    out << "object_extended: ";
    to_flow_style_yaml(msg.object_extended, out);
    out << ", ";
  }

  // member: object_quality
  {
    out << "object_quality: ";
    to_flow_style_yaml(msg.object_quality, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Object & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: obj_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obj_id:\n";
    to_block_style_yaml(msg.obj_id, out, indentation + 2);
  }

  // member: object_general
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_general:\n";
    to_block_style_yaml(msg.object_general, out, indentation + 2);
  }

  // member: object_extended
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_extended:\n";
    to_block_style_yaml(msg.object_extended, out, indentation + 2);
  }

  // member: object_quality
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_quality:\n";
    to_block_style_yaml(msg.object_quality, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Object & msg, bool use_flow_style = false)
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
  const radar_conti_ars408_msgs::msg::Object & msg,
  std::ostream & out, size_t indentation = 0)
{
  radar_conti_ars408_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use radar_conti_ars408_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const radar_conti_ars408_msgs::msg::Object & msg)
{
  return radar_conti_ars408_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<radar_conti_ars408_msgs::msg::Object>()
{
  return "radar_conti_ars408_msgs::msg::Object";
}

template<>
inline const char * name<radar_conti_ars408_msgs::msg::Object>()
{
  return "radar_conti_ars408_msgs/msg/Object";
}

template<>
struct has_fixed_size<radar_conti_ars408_msgs::msg::Object>
  : std::integral_constant<bool, has_fixed_size<radar_conti_ars408_msgs::msg::ObjectExtended>::value && has_fixed_size<radar_conti_ars408_msgs::msg::ObjectGeneral>::value && has_fixed_size<radar_conti_ars408_msgs::msg::ObjectQuality>::value && has_fixed_size<std_msgs::msg::Int32>::value> {};

template<>
struct has_bounded_size<radar_conti_ars408_msgs::msg::Object>
  : std::integral_constant<bool, has_bounded_size<radar_conti_ars408_msgs::msg::ObjectExtended>::value && has_bounded_size<radar_conti_ars408_msgs::msg::ObjectGeneral>::value && has_bounded_size<radar_conti_ars408_msgs::msg::ObjectQuality>::value && has_bounded_size<std_msgs::msg::Int32>::value> {};

template<>
struct is_message<radar_conti_ars408_msgs::msg::Object>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__OBJECT__TRAITS_HPP_
