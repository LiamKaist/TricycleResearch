// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from radar_conti_ars408_msgs:msg/FilterStateHeader.idl
// generated code does not contain a copyright notice

#ifndef RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__FILTER_STATE_HEADER__BUILDER_HPP_
#define RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__FILTER_STATE_HEADER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "radar_conti_ars408_msgs/msg/detail/filter_state_header__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace radar_conti_ars408_msgs
{

namespace msg
{

namespace builder
{

class Init_FilterStateHeader_filterstate_nofobjectfiltercfg
{
public:
  explicit Init_FilterStateHeader_filterstate_nofobjectfiltercfg(::radar_conti_ars408_msgs::msg::FilterStateHeader & msg)
  : msg_(msg)
  {}
  ::radar_conti_ars408_msgs::msg::FilterStateHeader filterstate_nofobjectfiltercfg(::radar_conti_ars408_msgs::msg::FilterStateHeader::_filterstate_nofobjectfiltercfg_type arg)
  {
    msg_.filterstate_nofobjectfiltercfg = std::move(arg);
    return std::move(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::FilterStateHeader msg_;
};

class Init_FilterStateHeader_filterstate_nofclusterfiltercfg
{
public:
  explicit Init_FilterStateHeader_filterstate_nofclusterfiltercfg(::radar_conti_ars408_msgs::msg::FilterStateHeader & msg)
  : msg_(msg)
  {}
  Init_FilterStateHeader_filterstate_nofobjectfiltercfg filterstate_nofclusterfiltercfg(::radar_conti_ars408_msgs::msg::FilterStateHeader::_filterstate_nofclusterfiltercfg_type arg)
  {
    msg_.filterstate_nofclusterfiltercfg = std::move(arg);
    return Init_FilterStateHeader_filterstate_nofobjectfiltercfg(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::FilterStateHeader msg_;
};

class Init_FilterStateHeader_header
{
public:
  Init_FilterStateHeader_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FilterStateHeader_filterstate_nofclusterfiltercfg header(::radar_conti_ars408_msgs::msg::FilterStateHeader::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_FilterStateHeader_filterstate_nofclusterfiltercfg(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::FilterStateHeader msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::radar_conti_ars408_msgs::msg::FilterStateHeader>()
{
  return radar_conti_ars408_msgs::msg::builder::Init_FilterStateHeader_header();
}

}  // namespace radar_conti_ars408_msgs

#endif  // RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__FILTER_STATE_HEADER__BUILDER_HPP_
