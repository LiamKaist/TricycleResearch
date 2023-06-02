// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from radar_conti_ars408_msgs:msg/ClusterGeneral.idl
// generated code does not contain a copyright notice

#ifndef RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__CLUSTER_GENERAL__BUILDER_HPP_
#define RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__CLUSTER_GENERAL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "radar_conti_ars408_msgs/msg/detail/cluster_general__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace radar_conti_ars408_msgs
{

namespace msg
{

namespace builder
{

class Init_ClusterGeneral_cluster_rcs
{
public:
  explicit Init_ClusterGeneral_cluster_rcs(::radar_conti_ars408_msgs::msg::ClusterGeneral & msg)
  : msg_(msg)
  {}
  ::radar_conti_ars408_msgs::msg::ClusterGeneral cluster_rcs(::radar_conti_ars408_msgs::msg::ClusterGeneral::_cluster_rcs_type arg)
  {
    msg_.cluster_rcs = std::move(arg);
    return std::move(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::ClusterGeneral msg_;
};

class Init_ClusterGeneral_cluster_dynprop
{
public:
  explicit Init_ClusterGeneral_cluster_dynprop(::radar_conti_ars408_msgs::msg::ClusterGeneral & msg)
  : msg_(msg)
  {}
  Init_ClusterGeneral_cluster_rcs cluster_dynprop(::radar_conti_ars408_msgs::msg::ClusterGeneral::_cluster_dynprop_type arg)
  {
    msg_.cluster_dynprop = std::move(arg);
    return Init_ClusterGeneral_cluster_rcs(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::ClusterGeneral msg_;
};

class Init_ClusterGeneral_cluster_vrellat
{
public:
  explicit Init_ClusterGeneral_cluster_vrellat(::radar_conti_ars408_msgs::msg::ClusterGeneral & msg)
  : msg_(msg)
  {}
  Init_ClusterGeneral_cluster_dynprop cluster_vrellat(::radar_conti_ars408_msgs::msg::ClusterGeneral::_cluster_vrellat_type arg)
  {
    msg_.cluster_vrellat = std::move(arg);
    return Init_ClusterGeneral_cluster_dynprop(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::ClusterGeneral msg_;
};

class Init_ClusterGeneral_cluster_vrellong
{
public:
  explicit Init_ClusterGeneral_cluster_vrellong(::radar_conti_ars408_msgs::msg::ClusterGeneral & msg)
  : msg_(msg)
  {}
  Init_ClusterGeneral_cluster_vrellat cluster_vrellong(::radar_conti_ars408_msgs::msg::ClusterGeneral::_cluster_vrellong_type arg)
  {
    msg_.cluster_vrellong = std::move(arg);
    return Init_ClusterGeneral_cluster_vrellat(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::ClusterGeneral msg_;
};

class Init_ClusterGeneral_cluster_distlat
{
public:
  explicit Init_ClusterGeneral_cluster_distlat(::radar_conti_ars408_msgs::msg::ClusterGeneral & msg)
  : msg_(msg)
  {}
  Init_ClusterGeneral_cluster_vrellong cluster_distlat(::radar_conti_ars408_msgs::msg::ClusterGeneral::_cluster_distlat_type arg)
  {
    msg_.cluster_distlat = std::move(arg);
    return Init_ClusterGeneral_cluster_vrellong(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::ClusterGeneral msg_;
};

class Init_ClusterGeneral_cluster_distlong
{
public:
  Init_ClusterGeneral_cluster_distlong()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ClusterGeneral_cluster_distlat cluster_distlong(::radar_conti_ars408_msgs::msg::ClusterGeneral::_cluster_distlong_type arg)
  {
    msg_.cluster_distlong = std::move(arg);
    return Init_ClusterGeneral_cluster_distlat(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::ClusterGeneral msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::radar_conti_ars408_msgs::msg::ClusterGeneral>()
{
  return radar_conti_ars408_msgs::msg::builder::Init_ClusterGeneral_cluster_distlong();
}

}  // namespace radar_conti_ars408_msgs

#endif  // RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__CLUSTER_GENERAL__BUILDER_HPP_
