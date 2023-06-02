// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from radar_conti_ars408_msgs:msg/ObjectList.idl
// generated code does not contain a copyright notice

#ifndef RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__OBJECT_LIST__BUILDER_HPP_
#define RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__OBJECT_LIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "radar_conti_ars408_msgs/msg/detail/object_list__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace radar_conti_ars408_msgs
{

namespace msg
{

namespace builder
{

class Init_ObjectList_objects
{
public:
  explicit Init_ObjectList_objects(::radar_conti_ars408_msgs::msg::ObjectList & msg)
  : msg_(msg)
  {}
  ::radar_conti_ars408_msgs::msg::ObjectList objects(::radar_conti_ars408_msgs::msg::ObjectList::_objects_type arg)
  {
    msg_.objects = std::move(arg);
    return std::move(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::ObjectList msg_;
};

class Init_ObjectList_object_count
{
public:
  explicit Init_ObjectList_object_count(::radar_conti_ars408_msgs::msg::ObjectList & msg)
  : msg_(msg)
  {}
  Init_ObjectList_objects object_count(::radar_conti_ars408_msgs::msg::ObjectList::_object_count_type arg)
  {
    msg_.object_count = std::move(arg);
    return Init_ObjectList_objects(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::ObjectList msg_;
};

class Init_ObjectList_header
{
public:
  Init_ObjectList_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObjectList_object_count header(::radar_conti_ars408_msgs::msg::ObjectList::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ObjectList_object_count(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::ObjectList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::radar_conti_ars408_msgs::msg::ObjectList>()
{
  return radar_conti_ars408_msgs::msg::builder::Init_ObjectList_header();
}

}  // namespace radar_conti_ars408_msgs

#endif  // RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__OBJECT_LIST__BUILDER_HPP_
