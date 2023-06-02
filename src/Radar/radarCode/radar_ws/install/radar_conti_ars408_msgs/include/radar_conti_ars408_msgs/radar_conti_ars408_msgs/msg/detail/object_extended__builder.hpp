// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from radar_conti_ars408_msgs:msg/ObjectExtended.idl
// generated code does not contain a copyright notice

#ifndef RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__OBJECT_EXTENDED__BUILDER_HPP_
#define RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__OBJECT_EXTENDED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "radar_conti_ars408_msgs/msg/detail/object_extended__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace radar_conti_ars408_msgs
{

namespace msg
{

namespace builder
{

class Init_ObjectExtended_obj_width
{
public:
  explicit Init_ObjectExtended_obj_width(::radar_conti_ars408_msgs::msg::ObjectExtended & msg)
  : msg_(msg)
  {}
  ::radar_conti_ars408_msgs::msg::ObjectExtended obj_width(::radar_conti_ars408_msgs::msg::ObjectExtended::_obj_width_type arg)
  {
    msg_.obj_width = std::move(arg);
    return std::move(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::ObjectExtended msg_;
};

class Init_ObjectExtended_obj_length
{
public:
  explicit Init_ObjectExtended_obj_length(::radar_conti_ars408_msgs::msg::ObjectExtended & msg)
  : msg_(msg)
  {}
  Init_ObjectExtended_obj_width obj_length(::radar_conti_ars408_msgs::msg::ObjectExtended::_obj_length_type arg)
  {
    msg_.obj_length = std::move(arg);
    return Init_ObjectExtended_obj_width(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::ObjectExtended msg_;
};

class Init_ObjectExtended_obj_orientationangle
{
public:
  explicit Init_ObjectExtended_obj_orientationangle(::radar_conti_ars408_msgs::msg::ObjectExtended & msg)
  : msg_(msg)
  {}
  Init_ObjectExtended_obj_length obj_orientationangle(::radar_conti_ars408_msgs::msg::ObjectExtended::_obj_orientationangle_type arg)
  {
    msg_.obj_orientationangle = std::move(arg);
    return Init_ObjectExtended_obj_length(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::ObjectExtended msg_;
};

class Init_ObjectExtended_obj_class
{
public:
  explicit Init_ObjectExtended_obj_class(::radar_conti_ars408_msgs::msg::ObjectExtended & msg)
  : msg_(msg)
  {}
  Init_ObjectExtended_obj_orientationangle obj_class(::radar_conti_ars408_msgs::msg::ObjectExtended::_obj_class_type arg)
  {
    msg_.obj_class = std::move(arg);
    return Init_ObjectExtended_obj_orientationangle(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::ObjectExtended msg_;
};

class Init_ObjectExtended_obj_arellat
{
public:
  explicit Init_ObjectExtended_obj_arellat(::radar_conti_ars408_msgs::msg::ObjectExtended & msg)
  : msg_(msg)
  {}
  Init_ObjectExtended_obj_class obj_arellat(::radar_conti_ars408_msgs::msg::ObjectExtended::_obj_arellat_type arg)
  {
    msg_.obj_arellat = std::move(arg);
    return Init_ObjectExtended_obj_class(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::ObjectExtended msg_;
};

class Init_ObjectExtended_obj_arellong
{
public:
  Init_ObjectExtended_obj_arellong()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObjectExtended_obj_arellat obj_arellong(::radar_conti_ars408_msgs::msg::ObjectExtended::_obj_arellong_type arg)
  {
    msg_.obj_arellong = std::move(arg);
    return Init_ObjectExtended_obj_arellat(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::ObjectExtended msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::radar_conti_ars408_msgs::msg::ObjectExtended>()
{
  return radar_conti_ars408_msgs::msg::builder::Init_ObjectExtended_obj_arellong();
}

}  // namespace radar_conti_ars408_msgs

#endif  // RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__OBJECT_EXTENDED__BUILDER_HPP_
