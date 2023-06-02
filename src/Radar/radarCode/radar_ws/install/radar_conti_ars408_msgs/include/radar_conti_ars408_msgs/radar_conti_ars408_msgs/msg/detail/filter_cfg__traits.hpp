// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from radar_conti_ars408_msgs:msg/FilterCfg.idl
// generated code does not contain a copyright notice

#ifndef RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__FILTER_CFG__TRAITS_HPP_
#define RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__FILTER_CFG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "radar_conti_ars408_msgs/msg/detail/filter_cfg__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'filtercfg_valid'
// Member 'filtercfg_active'
// Member 'filtercfg_index'
// Member 'filtercfg_type'
// Member 'filtercfg_min_nofobj'
// Member 'filtercfg_min_distance'
// Member 'filtercfg_min_azimuth'
// Member 'filtercfg_min_vreloncome'
// Member 'filtercfg_min_vreldepart'
// Member 'filtercfg_min_rcs'
// Member 'filtercfg_min_lifetime'
// Member 'filtercfg_min_size'
// Member 'filtercfg_min_probexists'
// Member 'filtercfg_min_y'
// Member 'filtercfg_min_x'
// Member 'filtercfg_min_vyrightleft'
// Member 'filtercfg_min_vxoncome'
// Member 'filtercfg_min_vyleftright'
// Member 'filtercfg_min_vxdepart'
// Member 'filtercfg_min_object_class'
// Member 'filtercfg_max_nofobj'
// Member 'filtercfg_max_distance'
// Member 'filtercfg_max_azimuth'
// Member 'filtercfg_max_vreloncome'
// Member 'filtercfg_max_vreldepart'
// Member 'filtercfg_max_rcs'
// Member 'filtercfg_max_lifetime'
// Member 'filtercfg_max_size'
// Member 'filtercfg_max_probexists'
// Member 'filtercfg_max_y'
// Member 'filtercfg_max_x'
// Member 'filtercfg_max_vyrightleft'
// Member 'filtercfg_max_vxoncome'
// Member 'filtercfg_max_vyleftright'
// Member 'filtercfg_max_vxdepart'
// Member 'filtercfg_max_object_class'
#include "std_msgs/msg/detail/u_int8__traits.hpp"

namespace radar_conti_ars408_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const FilterCfg & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: filtercfg_valid
  {
    out << "filtercfg_valid: ";
    to_flow_style_yaml(msg.filtercfg_valid, out);
    out << ", ";
  }

  // member: filtercfg_active
  {
    out << "filtercfg_active: ";
    to_flow_style_yaml(msg.filtercfg_active, out);
    out << ", ";
  }

  // member: filtercfg_index
  {
    out << "filtercfg_index: ";
    to_flow_style_yaml(msg.filtercfg_index, out);
    out << ", ";
  }

  // member: filtercfg_type
  {
    out << "filtercfg_type: ";
    to_flow_style_yaml(msg.filtercfg_type, out);
    out << ", ";
  }

  // member: filtercfg_min_nofobj
  {
    out << "filtercfg_min_nofobj: ";
    to_flow_style_yaml(msg.filtercfg_min_nofobj, out);
    out << ", ";
  }

  // member: filtercfg_min_distance
  {
    out << "filtercfg_min_distance: ";
    to_flow_style_yaml(msg.filtercfg_min_distance, out);
    out << ", ";
  }

  // member: filtercfg_min_azimuth
  {
    out << "filtercfg_min_azimuth: ";
    to_flow_style_yaml(msg.filtercfg_min_azimuth, out);
    out << ", ";
  }

  // member: filtercfg_min_vreloncome
  {
    out << "filtercfg_min_vreloncome: ";
    to_flow_style_yaml(msg.filtercfg_min_vreloncome, out);
    out << ", ";
  }

  // member: filtercfg_min_vreldepart
  {
    out << "filtercfg_min_vreldepart: ";
    to_flow_style_yaml(msg.filtercfg_min_vreldepart, out);
    out << ", ";
  }

  // member: filtercfg_min_rcs
  {
    out << "filtercfg_min_rcs: ";
    to_flow_style_yaml(msg.filtercfg_min_rcs, out);
    out << ", ";
  }

  // member: filtercfg_min_lifetime
  {
    out << "filtercfg_min_lifetime: ";
    to_flow_style_yaml(msg.filtercfg_min_lifetime, out);
    out << ", ";
  }

  // member: filtercfg_min_size
  {
    out << "filtercfg_min_size: ";
    to_flow_style_yaml(msg.filtercfg_min_size, out);
    out << ", ";
  }

  // member: filtercfg_min_probexists
  {
    out << "filtercfg_min_probexists: ";
    to_flow_style_yaml(msg.filtercfg_min_probexists, out);
    out << ", ";
  }

  // member: filtercfg_min_y
  {
    out << "filtercfg_min_y: ";
    to_flow_style_yaml(msg.filtercfg_min_y, out);
    out << ", ";
  }

  // member: filtercfg_min_x
  {
    out << "filtercfg_min_x: ";
    to_flow_style_yaml(msg.filtercfg_min_x, out);
    out << ", ";
  }

  // member: filtercfg_min_vyrightleft
  {
    out << "filtercfg_min_vyrightleft: ";
    to_flow_style_yaml(msg.filtercfg_min_vyrightleft, out);
    out << ", ";
  }

  // member: filtercfg_min_vxoncome
  {
    out << "filtercfg_min_vxoncome: ";
    to_flow_style_yaml(msg.filtercfg_min_vxoncome, out);
    out << ", ";
  }

  // member: filtercfg_min_vyleftright
  {
    out << "filtercfg_min_vyleftright: ";
    to_flow_style_yaml(msg.filtercfg_min_vyleftright, out);
    out << ", ";
  }

  // member: filtercfg_min_vxdepart
  {
    out << "filtercfg_min_vxdepart: ";
    to_flow_style_yaml(msg.filtercfg_min_vxdepart, out);
    out << ", ";
  }

  // member: filtercfg_min_object_class
  {
    out << "filtercfg_min_object_class: ";
    to_flow_style_yaml(msg.filtercfg_min_object_class, out);
    out << ", ";
  }

  // member: filtercfg_max_nofobj
  {
    out << "filtercfg_max_nofobj: ";
    to_flow_style_yaml(msg.filtercfg_max_nofobj, out);
    out << ", ";
  }

  // member: filtercfg_max_distance
  {
    out << "filtercfg_max_distance: ";
    to_flow_style_yaml(msg.filtercfg_max_distance, out);
    out << ", ";
  }

  // member: filtercfg_max_azimuth
  {
    out << "filtercfg_max_azimuth: ";
    to_flow_style_yaml(msg.filtercfg_max_azimuth, out);
    out << ", ";
  }

  // member: filtercfg_max_vreloncome
  {
    out << "filtercfg_max_vreloncome: ";
    to_flow_style_yaml(msg.filtercfg_max_vreloncome, out);
    out << ", ";
  }

  // member: filtercfg_max_vreldepart
  {
    out << "filtercfg_max_vreldepart: ";
    to_flow_style_yaml(msg.filtercfg_max_vreldepart, out);
    out << ", ";
  }

  // member: filtercfg_max_rcs
  {
    out << "filtercfg_max_rcs: ";
    to_flow_style_yaml(msg.filtercfg_max_rcs, out);
    out << ", ";
  }

  // member: filtercfg_max_lifetime
  {
    out << "filtercfg_max_lifetime: ";
    to_flow_style_yaml(msg.filtercfg_max_lifetime, out);
    out << ", ";
  }

  // member: filtercfg_max_size
  {
    out << "filtercfg_max_size: ";
    to_flow_style_yaml(msg.filtercfg_max_size, out);
    out << ", ";
  }

  // member: filtercfg_max_probexists
  {
    out << "filtercfg_max_probexists: ";
    to_flow_style_yaml(msg.filtercfg_max_probexists, out);
    out << ", ";
  }

  // member: filtercfg_max_y
  {
    out << "filtercfg_max_y: ";
    to_flow_style_yaml(msg.filtercfg_max_y, out);
    out << ", ";
  }

  // member: filtercfg_max_x
  {
    out << "filtercfg_max_x: ";
    to_flow_style_yaml(msg.filtercfg_max_x, out);
    out << ", ";
  }

  // member: filtercfg_max_vyrightleft
  {
    out << "filtercfg_max_vyrightleft: ";
    to_flow_style_yaml(msg.filtercfg_max_vyrightleft, out);
    out << ", ";
  }

  // member: filtercfg_max_vxoncome
  {
    out << "filtercfg_max_vxoncome: ";
    to_flow_style_yaml(msg.filtercfg_max_vxoncome, out);
    out << ", ";
  }

  // member: filtercfg_max_vyleftright
  {
    out << "filtercfg_max_vyleftright: ";
    to_flow_style_yaml(msg.filtercfg_max_vyleftright, out);
    out << ", ";
  }

  // member: filtercfg_max_vxdepart
  {
    out << "filtercfg_max_vxdepart: ";
    to_flow_style_yaml(msg.filtercfg_max_vxdepart, out);
    out << ", ";
  }

  // member: filtercfg_max_object_class
  {
    out << "filtercfg_max_object_class: ";
    to_flow_style_yaml(msg.filtercfg_max_object_class, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FilterCfg & msg,
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

  // member: filtercfg_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "filtercfg_valid:\n";
    to_block_style_yaml(msg.filtercfg_valid, out, indentation + 2);
  }

  // member: filtercfg_active
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "filtercfg_active:\n";
    to_block_style_yaml(msg.filtercfg_active, out, indentation + 2);
  }

  // member: filtercfg_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "filtercfg_index:\n";
    to_block_style_yaml(msg.filtercfg_index, out, indentation + 2);
  }

  // member: filtercfg_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "filtercfg_type:\n";
    to_block_style_yaml(msg.filtercfg_type, out, indentation + 2);
  }

  // member: filtercfg_min_nofobj
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "filtercfg_min_nofobj:\n";
    to_block_style_yaml(msg.filtercfg_min_nofobj, out, indentation + 2);
  }

  // member: filtercfg_min_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "filtercfg_min_distance:\n";
    to_block_style_yaml(msg.filtercfg_min_distance, out, indentation + 2);
  }

  // member: filtercfg_min_azimuth
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "filtercfg_min_azimuth:\n";
    to_block_style_yaml(msg.filtercfg_min_azimuth, out, indentation + 2);
  }

  // member: filtercfg_min_vreloncome
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "filtercfg_min_vreloncome:\n";
    to_block_style_yaml(msg.filtercfg_min_vreloncome, out, indentation + 2);
  }

  // member: filtercfg_min_vreldepart
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "filtercfg_min_vreldepart:\n";
    to_block_style_yaml(msg.filtercfg_min_vreldepart, out, indentation + 2);
  }

  // member: filtercfg_min_rcs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "filtercfg_min_rcs:\n";
    to_block_style_yaml(msg.filtercfg_min_rcs, out, indentation + 2);
  }

  // member: filtercfg_min_lifetime
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "filtercfg_min_lifetime:\n";
    to_block_style_yaml(msg.filtercfg_min_lifetime, out, indentation + 2);
  }

  // member: filtercfg_min_size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "filtercfg_min_size:\n";
    to_block_style_yaml(msg.filtercfg_min_size, out, indentation + 2);
  }

  // member: filtercfg_min_probexists
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "filtercfg_min_probexists:\n";
    to_block_style_yaml(msg.filtercfg_min_probexists, out, indentation + 2);
  }

  // member: filtercfg_min_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "filtercfg_min_y:\n";
    to_block_style_yaml(msg.filtercfg_min_y, out, indentation + 2);
  }

  // member: filtercfg_min_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "filtercfg_min_x:\n";
    to_block_style_yaml(msg.filtercfg_min_x, out, indentation + 2);
  }

  // member: filtercfg_min_vyrightleft
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "filtercfg_min_vyrightleft:\n";
    to_block_style_yaml(msg.filtercfg_min_vyrightleft, out, indentation + 2);
  }

  // member: filtercfg_min_vxoncome
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "filtercfg_min_vxoncome:\n";
    to_block_style_yaml(msg.filtercfg_min_vxoncome, out, indentation + 2);
  }

  // member: filtercfg_min_vyleftright
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "filtercfg_min_vyleftright:\n";
    to_block_style_yaml(msg.filtercfg_min_vyleftright, out, indentation + 2);
  }

  // member: filtercfg_min_vxdepart
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "filtercfg_min_vxdepart:\n";
    to_block_style_yaml(msg.filtercfg_min_vxdepart, out, indentation + 2);
  }

  // member: filtercfg_min_object_class
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "filtercfg_min_object_class:\n";
    to_block_style_yaml(msg.filtercfg_min_object_class, out, indentation + 2);
  }

  // member: filtercfg_max_nofobj
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "filtercfg_max_nofobj:\n";
    to_block_style_yaml(msg.filtercfg_max_nofobj, out, indentation + 2);
  }

  // member: filtercfg_max_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "filtercfg_max_distance:\n";
    to_block_style_yaml(msg.filtercfg_max_distance, out, indentation + 2);
  }

  // member: filtercfg_max_azimuth
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "filtercfg_max_azimuth:\n";
    to_block_style_yaml(msg.filtercfg_max_azimuth, out, indentation + 2);
  }

  // member: filtercfg_max_vreloncome
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "filtercfg_max_vreloncome:\n";
    to_block_style_yaml(msg.filtercfg_max_vreloncome, out, indentation + 2);
  }

  // member: filtercfg_max_vreldepart
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "filtercfg_max_vreldepart:\n";
    to_block_style_yaml(msg.filtercfg_max_vreldepart, out, indentation + 2);
  }

  // member: filtercfg_max_rcs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "filtercfg_max_rcs:\n";
    to_block_style_yaml(msg.filtercfg_max_rcs, out, indentation + 2);
  }

  // member: filtercfg_max_lifetime
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "filtercfg_max_lifetime:\n";
    to_block_style_yaml(msg.filtercfg_max_lifetime, out, indentation + 2);
  }

  // member: filtercfg_max_size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "filtercfg_max_size:\n";
    to_block_style_yaml(msg.filtercfg_max_size, out, indentation + 2);
  }

  // member: filtercfg_max_probexists
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "filtercfg_max_probexists:\n";
    to_block_style_yaml(msg.filtercfg_max_probexists, out, indentation + 2);
  }

  // member: filtercfg_max_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "filtercfg_max_y:\n";
    to_block_style_yaml(msg.filtercfg_max_y, out, indentation + 2);
  }

  // member: filtercfg_max_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "filtercfg_max_x:\n";
    to_block_style_yaml(msg.filtercfg_max_x, out, indentation + 2);
  }

  // member: filtercfg_max_vyrightleft
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "filtercfg_max_vyrightleft:\n";
    to_block_style_yaml(msg.filtercfg_max_vyrightleft, out, indentation + 2);
  }

  // member: filtercfg_max_vxoncome
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "filtercfg_max_vxoncome:\n";
    to_block_style_yaml(msg.filtercfg_max_vxoncome, out, indentation + 2);
  }

  // member: filtercfg_max_vyleftright
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "filtercfg_max_vyleftright:\n";
    to_block_style_yaml(msg.filtercfg_max_vyleftright, out, indentation + 2);
  }

  // member: filtercfg_max_vxdepart
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "filtercfg_max_vxdepart:\n";
    to_block_style_yaml(msg.filtercfg_max_vxdepart, out, indentation + 2);
  }

  // member: filtercfg_max_object_class
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "filtercfg_max_object_class:\n";
    to_block_style_yaml(msg.filtercfg_max_object_class, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FilterCfg & msg, bool use_flow_style = false)
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
  const radar_conti_ars408_msgs::msg::FilterCfg & msg,
  std::ostream & out, size_t indentation = 0)
{
  radar_conti_ars408_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use radar_conti_ars408_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const radar_conti_ars408_msgs::msg::FilterCfg & msg)
{
  return radar_conti_ars408_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<radar_conti_ars408_msgs::msg::FilterCfg>()
{
  return "radar_conti_ars408_msgs::msg::FilterCfg";
}

template<>
inline const char * name<radar_conti_ars408_msgs::msg::FilterCfg>()
{
  return "radar_conti_ars408_msgs/msg/FilterCfg";
}

template<>
struct has_fixed_size<radar_conti_ars408_msgs::msg::FilterCfg>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value && has_fixed_size<std_msgs::msg::UInt8>::value> {};

template<>
struct has_bounded_size<radar_conti_ars408_msgs::msg::FilterCfg>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value && has_bounded_size<std_msgs::msg::UInt8>::value> {};

template<>
struct is_message<radar_conti_ars408_msgs::msg::FilterCfg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__FILTER_CFG__TRAITS_HPP_
