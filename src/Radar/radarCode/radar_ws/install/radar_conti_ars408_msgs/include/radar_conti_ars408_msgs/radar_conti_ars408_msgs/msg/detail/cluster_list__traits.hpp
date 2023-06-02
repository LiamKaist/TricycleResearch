// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from radar_conti_ars408_msgs:msg/ClusterList.idl
// generated code does not contain a copyright notice

#ifndef RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__CLUSTER_LIST__TRAITS_HPP_
#define RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__CLUSTER_LIST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "radar_conti_ars408_msgs/msg/detail/cluster_list__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'cluster_count'
#include "std_msgs/msg/detail/int32__traits.hpp"
// Member 'clusters'
#include "radar_conti_ars408_msgs/msg/detail/cluster__traits.hpp"

namespace radar_conti_ars408_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ClusterList & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: cluster_count
  {
    out << "cluster_count: ";
    to_flow_style_yaml(msg.cluster_count, out);
    out << ", ";
  }

  // member: clusters
  {
    if (msg.clusters.size() == 0) {
      out << "clusters: []";
    } else {
      out << "clusters: [";
      size_t pending_items = msg.clusters.size();
      for (auto item : msg.clusters) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ClusterList & msg,
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

  // member: cluster_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cluster_count:\n";
    to_block_style_yaml(msg.cluster_count, out, indentation + 2);
  }

  // member: clusters
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.clusters.size() == 0) {
      out << "clusters: []\n";
    } else {
      out << "clusters:\n";
      for (auto item : msg.clusters) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ClusterList & msg, bool use_flow_style = false)
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
  const radar_conti_ars408_msgs::msg::ClusterList & msg,
  std::ostream & out, size_t indentation = 0)
{
  radar_conti_ars408_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use radar_conti_ars408_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const radar_conti_ars408_msgs::msg::ClusterList & msg)
{
  return radar_conti_ars408_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<radar_conti_ars408_msgs::msg::ClusterList>()
{
  return "radar_conti_ars408_msgs::msg::ClusterList";
}

template<>
inline const char * name<radar_conti_ars408_msgs::msg::ClusterList>()
{
  return "radar_conti_ars408_msgs/msg/ClusterList";
}

template<>
struct has_fixed_size<radar_conti_ars408_msgs::msg::ClusterList>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<radar_conti_ars408_msgs::msg::ClusterList>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<radar_conti_ars408_msgs::msg::ClusterList>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__CLUSTER_LIST__TRAITS_HPP_
