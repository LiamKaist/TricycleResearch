// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from radar_conti_ars408_msgs:msg/ClusterQuality.idl
// generated code does not contain a copyright notice

#ifndef RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__CLUSTER_QUALITY__TRAITS_HPP_
#define RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__CLUSTER_QUALITY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "radar_conti_ars408_msgs/msg/detail/cluster_quality__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'cluster_distlong_rms'
// Member 'cluster_distlat_rms'
// Member 'cluster_vrellong_rms'
// Member 'cluster_vrellat_rms'
#include "std_msgs/msg/detail/float64__traits.hpp"
// Member 'cluster_pdh0'
// Member 'cluster_invalidstate'
// Member 'cluster_ambigstate'
#include "std_msgs/msg/detail/string__traits.hpp"

namespace radar_conti_ars408_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ClusterQuality & msg,
  std::ostream & out)
{
  out << "{";
  // member: cluster_distlong_rms
  {
    out << "cluster_distlong_rms: ";
    to_flow_style_yaml(msg.cluster_distlong_rms, out);
    out << ", ";
  }

  // member: cluster_distlat_rms
  {
    out << "cluster_distlat_rms: ";
    to_flow_style_yaml(msg.cluster_distlat_rms, out);
    out << ", ";
  }

  // member: cluster_vrellong_rms
  {
    out << "cluster_vrellong_rms: ";
    to_flow_style_yaml(msg.cluster_vrellong_rms, out);
    out << ", ";
  }

  // member: cluster_vrellat_rms
  {
    out << "cluster_vrellat_rms: ";
    to_flow_style_yaml(msg.cluster_vrellat_rms, out);
    out << ", ";
  }

  // member: cluster_pdh0
  {
    out << "cluster_pdh0: ";
    to_flow_style_yaml(msg.cluster_pdh0, out);
    out << ", ";
  }

  // member: cluster_invalidstate
  {
    out << "cluster_invalidstate: ";
    to_flow_style_yaml(msg.cluster_invalidstate, out);
    out << ", ";
  }

  // member: cluster_ambigstate
  {
    out << "cluster_ambigstate: ";
    to_flow_style_yaml(msg.cluster_ambigstate, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ClusterQuality & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: cluster_distlong_rms
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cluster_distlong_rms:\n";
    to_block_style_yaml(msg.cluster_distlong_rms, out, indentation + 2);
  }

  // member: cluster_distlat_rms
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cluster_distlat_rms:\n";
    to_block_style_yaml(msg.cluster_distlat_rms, out, indentation + 2);
  }

  // member: cluster_vrellong_rms
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cluster_vrellong_rms:\n";
    to_block_style_yaml(msg.cluster_vrellong_rms, out, indentation + 2);
  }

  // member: cluster_vrellat_rms
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cluster_vrellat_rms:\n";
    to_block_style_yaml(msg.cluster_vrellat_rms, out, indentation + 2);
  }

  // member: cluster_pdh0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cluster_pdh0:\n";
    to_block_style_yaml(msg.cluster_pdh0, out, indentation + 2);
  }

  // member: cluster_invalidstate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cluster_invalidstate:\n";
    to_block_style_yaml(msg.cluster_invalidstate, out, indentation + 2);
  }

  // member: cluster_ambigstate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cluster_ambigstate:\n";
    to_block_style_yaml(msg.cluster_ambigstate, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ClusterQuality & msg, bool use_flow_style = false)
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
  const radar_conti_ars408_msgs::msg::ClusterQuality & msg,
  std::ostream & out, size_t indentation = 0)
{
  radar_conti_ars408_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use radar_conti_ars408_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const radar_conti_ars408_msgs::msg::ClusterQuality & msg)
{
  return radar_conti_ars408_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<radar_conti_ars408_msgs::msg::ClusterQuality>()
{
  return "radar_conti_ars408_msgs::msg::ClusterQuality";
}

template<>
inline const char * name<radar_conti_ars408_msgs::msg::ClusterQuality>()
{
  return "radar_conti_ars408_msgs/msg/ClusterQuality";
}

template<>
struct has_fixed_size<radar_conti_ars408_msgs::msg::ClusterQuality>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Float64>::value && has_fixed_size<std_msgs::msg::String>::value> {};

template<>
struct has_bounded_size<radar_conti_ars408_msgs::msg::ClusterQuality>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Float64>::value && has_bounded_size<std_msgs::msg::String>::value> {};

template<>
struct is_message<radar_conti_ars408_msgs::msg::ClusterQuality>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__CLUSTER_QUALITY__TRAITS_HPP_
