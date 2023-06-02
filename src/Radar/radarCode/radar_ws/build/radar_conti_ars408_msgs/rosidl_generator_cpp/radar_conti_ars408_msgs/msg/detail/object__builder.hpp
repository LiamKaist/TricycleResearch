// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from radar_conti_ars408_msgs:msg/Object.idl
// generated code does not contain a copyright notice

#ifndef RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__OBJECT__BUILDER_HPP_
#define RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__OBJECT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "radar_conti_ars408_msgs/msg/detail/object__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace radar_conti_ars408_msgs
{

namespace msg
{

namespace builder
{

class Init_Object_object_quality
{
public:
  explicit Init_Object_object_quality(::radar_conti_ars408_msgs::msg::Object & msg)
  : msg_(msg)
  {}
  ::radar_conti_ars408_msgs::msg::Object object_quality(::radar_conti_ars408_msgs::msg::Object::_object_quality_type arg)
  {
    msg_.object_quality = std::move(arg);
    return std::move(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::Object msg_;
};

class Init_Object_object_extended
{
public:
  explicit Init_Object_object_extended(::radar_conti_ars408_msgs::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_object_quality object_extended(::radar_conti_ars408_msgs::msg::Object::_object_extended_type arg)
  {
    msg_.object_extended = std::move(arg);
    return Init_Object_object_quality(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::Object msg_;
};

class Init_Object_object_general
{
public:
  explicit Init_Object_object_general(::radar_conti_ars408_msgs::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_object_extended object_general(::radar_conti_ars408_msgs::msg::Object::_object_general_type arg)
  {
    msg_.object_general = std::move(arg);
    return Init_Object_object_extended(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::Object msg_;
};

class Init_Object_obj_id
{
public:
  Init_Object_obj_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Object_object_general obj_id(::radar_conti_ars408_msgs::msg::Object::_obj_id_type arg)
  {
    msg_.obj_id = std::move(arg);
    return Init_Object_object_general(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::Object msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::radar_conti_ars408_msgs::msg::Object>()
{
  return radar_conti_ars408_msgs::msg::builder::Init_Object_obj_id();
}

}  // namespace radar_conti_ars408_msgs

#endif  // RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__OBJECT__BUILDER_HPP_
