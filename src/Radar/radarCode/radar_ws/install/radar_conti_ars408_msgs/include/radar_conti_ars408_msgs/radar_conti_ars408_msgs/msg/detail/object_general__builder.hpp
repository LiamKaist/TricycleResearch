// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from radar_conti_ars408_msgs:msg/ObjectGeneral.idl
// generated code does not contain a copyright notice

#ifndef RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__OBJECT_GENERAL__BUILDER_HPP_
#define RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__OBJECT_GENERAL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "radar_conti_ars408_msgs/msg/detail/object_general__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace radar_conti_ars408_msgs
{

namespace msg
{

namespace builder
{

class Init_ObjectGeneral_obj_rcs
{
public:
  explicit Init_ObjectGeneral_obj_rcs(::radar_conti_ars408_msgs::msg::ObjectGeneral & msg)
  : msg_(msg)
  {}
  ::radar_conti_ars408_msgs::msg::ObjectGeneral obj_rcs(::radar_conti_ars408_msgs::msg::ObjectGeneral::_obj_rcs_type arg)
  {
    msg_.obj_rcs = std::move(arg);
    return std::move(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::ObjectGeneral msg_;
};

class Init_ObjectGeneral_obj_dynprop
{
public:
  explicit Init_ObjectGeneral_obj_dynprop(::radar_conti_ars408_msgs::msg::ObjectGeneral & msg)
  : msg_(msg)
  {}
  Init_ObjectGeneral_obj_rcs obj_dynprop(::radar_conti_ars408_msgs::msg::ObjectGeneral::_obj_dynprop_type arg)
  {
    msg_.obj_dynprop = std::move(arg);
    return Init_ObjectGeneral_obj_rcs(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::ObjectGeneral msg_;
};

class Init_ObjectGeneral_obj_vrellat
{
public:
  explicit Init_ObjectGeneral_obj_vrellat(::radar_conti_ars408_msgs::msg::ObjectGeneral & msg)
  : msg_(msg)
  {}
  Init_ObjectGeneral_obj_dynprop obj_vrellat(::radar_conti_ars408_msgs::msg::ObjectGeneral::_obj_vrellat_type arg)
  {
    msg_.obj_vrellat = std::move(arg);
    return Init_ObjectGeneral_obj_dynprop(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::ObjectGeneral msg_;
};

class Init_ObjectGeneral_obj_vrellong
{
public:
  explicit Init_ObjectGeneral_obj_vrellong(::radar_conti_ars408_msgs::msg::ObjectGeneral & msg)
  : msg_(msg)
  {}
  Init_ObjectGeneral_obj_vrellat obj_vrellong(::radar_conti_ars408_msgs::msg::ObjectGeneral::_obj_vrellong_type arg)
  {
    msg_.obj_vrellong = std::move(arg);
    return Init_ObjectGeneral_obj_vrellat(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::ObjectGeneral msg_;
};

class Init_ObjectGeneral_obj_distlat
{
public:
  explicit Init_ObjectGeneral_obj_distlat(::radar_conti_ars408_msgs::msg::ObjectGeneral & msg)
  : msg_(msg)
  {}
  Init_ObjectGeneral_obj_vrellong obj_distlat(::radar_conti_ars408_msgs::msg::ObjectGeneral::_obj_distlat_type arg)
  {
    msg_.obj_distlat = std::move(arg);
    return Init_ObjectGeneral_obj_vrellong(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::ObjectGeneral msg_;
};

class Init_ObjectGeneral_obj_distlong
{
public:
  Init_ObjectGeneral_obj_distlong()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObjectGeneral_obj_distlat obj_distlong(::radar_conti_ars408_msgs::msg::ObjectGeneral::_obj_distlong_type arg)
  {
    msg_.obj_distlong = std::move(arg);
    return Init_ObjectGeneral_obj_distlat(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::ObjectGeneral msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::radar_conti_ars408_msgs::msg::ObjectGeneral>()
{
  return radar_conti_ars408_msgs::msg::builder::Init_ObjectGeneral_obj_distlong();
}

}  // namespace radar_conti_ars408_msgs

#endif  // RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__OBJECT_GENERAL__BUILDER_HPP_
