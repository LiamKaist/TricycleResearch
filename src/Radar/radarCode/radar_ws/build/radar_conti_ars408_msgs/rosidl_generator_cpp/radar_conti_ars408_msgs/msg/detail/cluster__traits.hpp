// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from radar_conti_ars408_msgs:msg/Cluster.idl
// generated code does not contain a copyright notice

#ifndef RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__CLUSTER__TRAITS_HPP_
#define RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__CLUSTER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "radar_conti_ars408_msgs/msg/detail/cluster__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'cluster_id'
#include "std_msgs/msg/detail/int32__traits.hpp"
// Member 'cluster_general'
#include "radar_conti_ars408_msgs/msg/detail/cluster_general__traits.hpp"
// Member 'cluster_quality'
#include "radar_conti_ars408_msgs/msg/detail/cluster_quality__traits.hpp"

namespace radar_conti_ars408_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Cluster & msg,
  std::ostream & out)
{
  out << "{";
  // member: cluster_id
  {
    out << "cluster_id: ";
    to_flow_style_yaml(msg.cluster_id, out);
    out << ", ";
  }

  // member: cluster_general
  {
    out << "cluster_general: ";
    to_flow_style_yaml(msg.cluster_general, out);
    out << ", ";
  }

  // member: cluster_quality
  {
    out << "cluster_quality: ";
    to_flow_style_yaml(msg.cluster_quality, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Cluster & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: cluster_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cluster_id:\n";
    to_block_style_yaml(msg.cluster_id, out, indentation + 2);
  }

  // member: cluster_general
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cluster_general:\n";
    to_block_style_yaml(msg.cluster_general, out, indentation + 2);
  }

  // member: cluster_quality
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cluster_quality:\n";
    to_block_style_yaml(msg.cluster_quality, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Cluster & msg, bool use_flow_style = false)
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
  const radar_conti_ars408_msgs::msg::Cluster & msg,
  std::ostream & out, size_t indentation = 0)
{
  radar_conti_ars408_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use radar_conti_ars408_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const radar_conti_ars408_msgs::msg::Cluster & msg)
{
  return radar_conti_ars408_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<radar_conti_ars408_msgs::msg::Cluster>()
{
  return "radar_conti_ars408_msgs::msg::Cluster";
}

template<>
inline const char * name<radar_conti_ars408_msgs::msg::Cluster>()
{
  return "radar_conti_ars408_msgs/msg/Cluster";
}

template<>
struct has_fixed_size<radar_conti_ars408_msgs::msg::Cluster>
  : std::integral_constant<bool, has_fixed_size<radar_conti_ars408_msgs::msg::ClusterGeneral>::value && has_fixed_size<radar_conti_ars408_msgs::msg::ClusterQuality>::value && has_fixed_size<std_msgs::msg::Int32>::value> {};

template<>
struct has_bounded_size<radar_conti_ars408_msgs::msg::Cluster>
  : std::integral_constant<bool, has_bounded_size<radar_conti_ars408_msgs::msg::ClusterGeneral>::value && has_bounded_size<radar_conti_ars408_msgs::msg::ClusterQuality>::value && has_bounded_size<std_msgs::msg::Int32>::value> {};

template<>
struct is_message<radar_conti_ars408_msgs::msg::Cluster>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__CLUSTER__TRAITS_HPP_
