// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from radar_conti_ars408_msgs:msg/ObjectStatus.idl
// generated code does not contain a copyright notice

#ifndef RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__OBJECT_STATUS__TRAITS_HPP_
#define RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__OBJECT_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "radar_conti_ars408_msgs/msg/detail/object_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'obj_nofobjects'
// Member 'obj_meascounter'
// Member 'obj_interfaceversion'
#include "std_msgs/msg/detail/int32__traits.hpp"

namespace radar_conti_ars408_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ObjectStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: obj_nofobjects
  {
    out << "obj_nofobjects: ";
    to_flow_style_yaml(msg.obj_nofobjects, out);
    out << ", ";
  }

  // member: obj_meascounter
  {
    out << "obj_meascounter: ";
    to_flow_style_yaml(msg.obj_meascounter, out);
    out << ", ";
  }

  // member: obj_interfaceversion
  {
    out << "obj_interfaceversion: ";
    to_flow_style_yaml(msg.obj_interfaceversion, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ObjectStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: obj_nofobjects
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obj_nofobjects:\n";
    to_block_style_yaml(msg.obj_nofobjects, out, indentation + 2);
  }

  // member: obj_meascounter
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obj_meascounter:\n";
    to_block_style_yaml(msg.obj_meascounter, out, indentation + 2);
  }

  // member: obj_interfaceversion
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obj_interfaceversion:\n";
    to_block_style_yaml(msg.obj_interfaceversion, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ObjectStatus & msg, bool use_flow_style = false)
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
  const radar_conti_ars408_msgs::msg::ObjectStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  radar_conti_ars408_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use radar_conti_ars408_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const radar_conti_ars408_msgs::msg::ObjectStatus & msg)
{
  return radar_conti_ars408_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<radar_conti_ars408_msgs::msg::ObjectStatus>()
{
  return "radar_conti_ars408_msgs::msg::ObjectStatus";
}

template<>
inline const char * name<radar_conti_ars408_msgs::msg::ObjectStatus>()
{
  return "radar_conti_ars408_msgs/msg/ObjectStatus";
}

template<>
struct has_fixed_size<radar_conti_ars408_msgs::msg::ObjectStatus>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Int32>::value> {};

template<>
struct has_bounded_size<radar_conti_ars408_msgs::msg::ObjectStatus>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Int32>::value> {};

template<>
struct is_message<radar_conti_ars408_msgs::msg::ObjectStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__OBJECT_STATUS__TRAITS_HPP_
