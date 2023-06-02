// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from radar_conti_ars408_msgs:msg/ObjectQuality.idl
// generated code does not contain a copyright notice

#ifndef RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__OBJECT_QUALITY__BUILDER_HPP_
#define RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__OBJECT_QUALITY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "radar_conti_ars408_msgs/msg/detail/object_quality__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace radar_conti_ars408_msgs
{

namespace msg
{

namespace builder
{

class Init_ObjectQuality_obj_measstate
{
public:
  explicit Init_ObjectQuality_obj_measstate(::radar_conti_ars408_msgs::msg::ObjectQuality & msg)
  : msg_(msg)
  {}
  ::radar_conti_ars408_msgs::msg::ObjectQuality obj_measstate(::radar_conti_ars408_msgs::msg::ObjectQuality::_obj_measstate_type arg)
  {
    msg_.obj_measstate = std::move(arg);
    return std::move(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::ObjectQuality msg_;
};

class Init_ObjectQuality_obj_probofexist
{
public:
  explicit Init_ObjectQuality_obj_probofexist(::radar_conti_ars408_msgs::msg::ObjectQuality & msg)
  : msg_(msg)
  {}
  Init_ObjectQuality_obj_measstate obj_probofexist(::radar_conti_ars408_msgs::msg::ObjectQuality::_obj_probofexist_type arg)
  {
    msg_.obj_probofexist = std::move(arg);
    return Init_ObjectQuality_obj_measstate(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::ObjectQuality msg_;
};

class Init_ObjectQuality_obj_orientation_rms
{
public:
  explicit Init_ObjectQuality_obj_orientation_rms(::radar_conti_ars408_msgs::msg::ObjectQuality & msg)
  : msg_(msg)
  {}
  Init_ObjectQuality_obj_probofexist obj_orientation_rms(::radar_conti_ars408_msgs::msg::ObjectQuality::_obj_orientation_rms_type arg)
  {
    msg_.obj_orientation_rms = std::move(arg);
    return Init_ObjectQuality_obj_probofexist(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::ObjectQuality msg_;
};

class Init_ObjectQuality_obj_arellat_rms
{
public:
  explicit Init_ObjectQuality_obj_arellat_rms(::radar_conti_ars408_msgs::msg::ObjectQuality & msg)
  : msg_(msg)
  {}
  Init_ObjectQuality_obj_orientation_rms obj_arellat_rms(::radar_conti_ars408_msgs::msg::ObjectQuality::_obj_arellat_rms_type arg)
  {
    msg_.obj_arellat_rms = std::move(arg);
    return Init_ObjectQuality_obj_orientation_rms(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::ObjectQuality msg_;
};

class Init_ObjectQuality_obj_arellong_rms
{
public:
  explicit Init_ObjectQuality_obj_arellong_rms(::radar_conti_ars408_msgs::msg::ObjectQuality & msg)
  : msg_(msg)
  {}
  Init_ObjectQuality_obj_arellat_rms obj_arellong_rms(::radar_conti_ars408_msgs::msg::ObjectQuality::_obj_arellong_rms_type arg)
  {
    msg_.obj_arellong_rms = std::move(arg);
    return Init_ObjectQuality_obj_arellat_rms(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::ObjectQuality msg_;
};

class Init_ObjectQuality_obj_vrellat_rms
{
public:
  explicit Init_ObjectQuality_obj_vrellat_rms(::radar_conti_ars408_msgs::msg::ObjectQuality & msg)
  : msg_(msg)
  {}
  Init_ObjectQuality_obj_arellong_rms obj_vrellat_rms(::radar_conti_ars408_msgs::msg::ObjectQuality::_obj_vrellat_rms_type arg)
  {
    msg_.obj_vrellat_rms = std::move(arg);
    return Init_ObjectQuality_obj_arellong_rms(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::ObjectQuality msg_;
};

class Init_ObjectQuality_obj_vrellong_rms
{
public:
  explicit Init_ObjectQuality_obj_vrellong_rms(::radar_conti_ars408_msgs::msg::ObjectQuality & msg)
  : msg_(msg)
  {}
  Init_ObjectQuality_obj_vrellat_rms obj_vrellong_rms(::radar_conti_ars408_msgs::msg::ObjectQuality::_obj_vrellong_rms_type arg)
  {
    msg_.obj_vrellong_rms = std::move(arg);
    return Init_ObjectQuality_obj_vrellat_rms(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::ObjectQuality msg_;
};

class Init_ObjectQuality_obj_distlat_rms
{
public:
  explicit Init_ObjectQuality_obj_distlat_rms(::radar_conti_ars408_msgs::msg::ObjectQuality & msg)
  : msg_(msg)
  {}
  Init_ObjectQuality_obj_vrellong_rms obj_distlat_rms(::radar_conti_ars408_msgs::msg::ObjectQuality::_obj_distlat_rms_type arg)
  {
    msg_.obj_distlat_rms = std::move(arg);
    return Init_ObjectQuality_obj_vrellong_rms(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::ObjectQuality msg_;
};

class Init_ObjectQuality_obj_distlong_rms
{
public:
  Init_ObjectQuality_obj_distlong_rms()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObjectQuality_obj_distlat_rms obj_distlong_rms(::radar_conti_ars408_msgs::msg::ObjectQuality::_obj_distlong_rms_type arg)
  {
    msg_.obj_distlong_rms = std::move(arg);
    return Init_ObjectQuality_obj_distlat_rms(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::ObjectQuality msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::radar_conti_ars408_msgs::msg::ObjectQuality>()
{
  return radar_conti_ars408_msgs::msg::builder::Init_ObjectQuality_obj_distlong_rms();
}

}  // namespace radar_conti_ars408_msgs

#endif  // RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__OBJECT_QUALITY__BUILDER_HPP_
