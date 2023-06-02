// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from radar_conti_ars408_msgs:msg/VersionID.idl
// generated code does not contain a copyright notice

#ifndef RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__VERSION_ID__BUILDER_HPP_
#define RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__VERSION_ID__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "radar_conti_ars408_msgs/msg/detail/version_id__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace radar_conti_ars408_msgs
{

namespace msg
{

namespace builder
{

class Init_VersionID_version_countrycode
{
public:
  explicit Init_VersionID_version_countrycode(::radar_conti_ars408_msgs::msg::VersionID & msg)
  : msg_(msg)
  {}
  ::radar_conti_ars408_msgs::msg::VersionID version_countrycode(::radar_conti_ars408_msgs::msg::VersionID::_version_countrycode_type arg)
  {
    msg_.version_countrycode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::VersionID msg_;
};

class Init_VersionID_version_extendedrange
{
public:
  explicit Init_VersionID_version_extendedrange(::radar_conti_ars408_msgs::msg::VersionID & msg)
  : msg_(msg)
  {}
  Init_VersionID_version_countrycode version_extendedrange(::radar_conti_ars408_msgs::msg::VersionID::_version_extendedrange_type arg)
  {
    msg_.version_extendedrange = std::move(arg);
    return Init_VersionID_version_countrycode(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::VersionID msg_;
};

class Init_VersionID_version_patchlevel
{
public:
  explicit Init_VersionID_version_patchlevel(::radar_conti_ars408_msgs::msg::VersionID & msg)
  : msg_(msg)
  {}
  Init_VersionID_version_extendedrange version_patchlevel(::radar_conti_ars408_msgs::msg::VersionID::_version_patchlevel_type arg)
  {
    msg_.version_patchlevel = std::move(arg);
    return Init_VersionID_version_extendedrange(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::VersionID msg_;
};

class Init_VersionID_version_minorrelease
{
public:
  explicit Init_VersionID_version_minorrelease(::radar_conti_ars408_msgs::msg::VersionID & msg)
  : msg_(msg)
  {}
  Init_VersionID_version_patchlevel version_minorrelease(::radar_conti_ars408_msgs::msg::VersionID::_version_minorrelease_type arg)
  {
    msg_.version_minorrelease = std::move(arg);
    return Init_VersionID_version_patchlevel(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::VersionID msg_;
};

class Init_VersionID_version_majorrelease
{
public:
  explicit Init_VersionID_version_majorrelease(::radar_conti_ars408_msgs::msg::VersionID & msg)
  : msg_(msg)
  {}
  Init_VersionID_version_minorrelease version_majorrelease(::radar_conti_ars408_msgs::msg::VersionID::_version_majorrelease_type arg)
  {
    msg_.version_majorrelease = std::move(arg);
    return Init_VersionID_version_minorrelease(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::VersionID msg_;
};

class Init_VersionID_header
{
public:
  Init_VersionID_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VersionID_version_majorrelease header(::radar_conti_ars408_msgs::msg::VersionID::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_VersionID_version_majorrelease(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::VersionID msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::radar_conti_ars408_msgs::msg::VersionID>()
{
  return radar_conti_ars408_msgs::msg::builder::Init_VersionID_header();
}

}  // namespace radar_conti_ars408_msgs

#endif  // RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__VERSION_ID__BUILDER_HPP_
