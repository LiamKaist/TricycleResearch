// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from radar_conti_ars408_msgs:msg/ClusterGeneral.idl
// generated code does not contain a copyright notice

#ifndef RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__CLUSTER_GENERAL__TRAITS_HPP_
#define RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__CLUSTER_GENERAL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "radar_conti_ars408_msgs/msg/detail/cluster_general__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'cluster_distlong'
// Member 'cluster_distlat'
// Member 'cluster_vrellong'
// Member 'cluster_vrellat'
// Member 'cluster_rcs'
#include "std_msgs/msg/detail/float64__traits.hpp"
// Member 'cluster_dynprop'
#include "std_msgs/msg/detail/int32__traits.hpp"

namespace radar_conti_ars408_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ClusterGeneral & msg,
  std::ostream & out)
{
  out << "{";
  // member: cluster_distlong
  {
    out << "cluster_distlong: ";
    to_flow_style_yaml(msg.cluster_distlong, out);
    out << ", ";
  }

  // member: cluster_distlat
  {
    out << "cluster_distlat: ";
    to_flow_style_yaml(msg.cluster_distlat, out);
    out << ", ";
  }

  // member: cluster_vrellong
  {
    out << "cluster_vrellong: ";
    to_flow_style_yaml(msg.cluster_vrellong, out);
    out << ", ";
  }

  // member: cluster_vrellat
  {
    out << "cluster_vrellat: ";
    to_flow_style_yaml(msg.cluster_vrellat, out);
    out << ", ";
  }

  // member: cluster_dynprop
  {
    out << "cluster_dynprop: ";
    to_flow_style_yaml(msg.cluster_dynprop, out);
    out << ", ";
  }

  // member: cluster_rcs
  {
    out << "cluster_rcs: ";
    to_flow_style_yaml(msg.cluster_rcs, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ClusterGeneral & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: cluster_distlong
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cluster_distlong:\n";
    to_block_style_yaml(msg.cluster_distlong, out, indentation + 2);
  }

  // member: cluster_distlat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cluster_distlat:\n";
    to_block_style_yaml(msg.cluster_distlat, out, indentation + 2);
  }

  // member: cluster_vrellong
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cluster_vrellong:\n";
    to_block_style_yaml(msg.cluster_vrellong, out, indentation + 2);
  }

  // member: cluster_vrellat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cluster_vrellat:\n";
    to_block_style_yaml(msg.cluster_vrellat, out, indentation + 2);
  }

  // member: cluster_dynprop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cluster_dynprop:\n";
    to_block_style_yaml(msg.cluster_dynprop, out, indentation + 2);
  }

  // member: cluster_rcs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cluster_rcs:\n";
    to_block_style_yaml(msg.cluster_rcs, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ClusterGeneral & msg, bool use_flow_style = false)
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
  const radar_conti_ars408_msgs::msg::ClusterGeneral & msg,
  std::ostream & out, size_t indentation = 0)
{
  radar_conti_ars408_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use radar_conti_ars408_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const radar_conti_ars408_msgs::msg::ClusterGeneral & msg)
{
  return radar_conti_ars408_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<radar_conti_ars408_msgs::msg::ClusterGeneral>()
{
  return "radar_conti_ars408_msgs::msg::ClusterGeneral";
}

template<>
inline const char * name<radar_conti_ars408_msgs::msg::ClusterGeneral>()
{
  return "radar_conti_ars408_msgs/msg/ClusterGeneral";
}

template<>
struct has_fixed_size<radar_conti_ars408_msgs::msg::ClusterGeneral>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Float64>::value && has_fixed_size<std_msgs::msg::Int32>::value> {};

template<>
struct has_bounded_size<radar_conti_ars408_msgs::msg::ClusterGeneral>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Float64>::value && has_bounded_size<std_msgs::msg::Int32>::value> {};

template<>
struct is_message<radar_conti_ars408_msgs::msg::ClusterGeneral>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__CLUSTER_GENERAL__TRAITS_HPP_
