// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from radar_conti_ars408_msgs:msg/ObjectStatus.idl
// generated code does not contain a copyright notice

#ifndef RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__OBJECT_STATUS__BUILDER_HPP_
#define RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__OBJECT_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "radar_conti_ars408_msgs/msg/detail/object_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace radar_conti_ars408_msgs
{

namespace msg
{

namespace builder
{

class Init_ObjectStatus_obj_interfaceversion
{
public:
  explicit Init_ObjectStatus_obj_interfaceversion(::radar_conti_ars408_msgs::msg::ObjectStatus & msg)
  : msg_(msg)
  {}
  ::radar_conti_ars408_msgs::msg::ObjectStatus obj_interfaceversion(::radar_conti_ars408_msgs::msg::ObjectStatus::_obj_interfaceversion_type arg)
  {
    msg_.obj_interfaceversion = std::move(arg);
    return std::move(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::ObjectStatus msg_;
};

class Init_ObjectStatus_obj_meascounter
{
public:
  explicit Init_ObjectStatus_obj_meascounter(::radar_conti_ars408_msgs::msg::ObjectStatus & msg)
  : msg_(msg)
  {}
  Init_ObjectStatus_obj_interfaceversion obj_meascounter(::radar_conti_ars408_msgs::msg::ObjectStatus::_obj_meascounter_type arg)
  {
    msg_.obj_meascounter = std::move(arg);
    return Init_ObjectStatus_obj_interfaceversion(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::ObjectStatus msg_;
};

class Init_ObjectStatus_obj_nofobjects
{
public:
  Init_ObjectStatus_obj_nofobjects()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObjectStatus_obj_meascounter obj_nofobjects(::radar_conti_ars408_msgs::msg::ObjectStatus::_obj_nofobjects_type arg)
  {
    msg_.obj_nofobjects = std::move(arg);
    return Init_ObjectStatus_obj_meascounter(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::ObjectStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::radar_conti_ars408_msgs::msg::ObjectStatus>()
{
  return radar_conti_ars408_msgs::msg::builder::Init_ObjectStatus_obj_nofobjects();
}

}  // namespace radar_conti_ars408_msgs

#endif  // RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__OBJECT_STATUS__BUILDER_HPP_
