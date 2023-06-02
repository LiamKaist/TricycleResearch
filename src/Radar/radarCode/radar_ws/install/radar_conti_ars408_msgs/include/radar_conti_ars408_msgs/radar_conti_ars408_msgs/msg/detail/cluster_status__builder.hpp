// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from radar_conti_ars408_msgs:msg/ClusterStatus.idl
// generated code does not contain a copyright notice

#ifndef RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__CLUSTER_STATUS__BUILDER_HPP_
#define RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__CLUSTER_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "radar_conti_ars408_msgs/msg/detail/cluster_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace radar_conti_ars408_msgs
{

namespace msg
{

namespace builder
{

class Init_ClusterStatus_cluster_interfaceversion
{
public:
  explicit Init_ClusterStatus_cluster_interfaceversion(::radar_conti_ars408_msgs::msg::ClusterStatus & msg)
  : msg_(msg)
  {}
  ::radar_conti_ars408_msgs::msg::ClusterStatus cluster_interfaceversion(::radar_conti_ars408_msgs::msg::ClusterStatus::_cluster_interfaceversion_type arg)
  {
    msg_.cluster_interfaceversion = std::move(arg);
    return std::move(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::ClusterStatus msg_;
};

class Init_ClusterStatus_cluster_meascounter
{
public:
  explicit Init_ClusterStatus_cluster_meascounter(::radar_conti_ars408_msgs::msg::ClusterStatus & msg)
  : msg_(msg)
  {}
  Init_ClusterStatus_cluster_interfaceversion cluster_meascounter(::radar_conti_ars408_msgs::msg::ClusterStatus::_cluster_meascounter_type arg)
  {
    msg_.cluster_meascounter = std::move(arg);
    return Init_ClusterStatus_cluster_interfaceversion(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::ClusterStatus msg_;
};

class Init_ClusterStatus_cluster_nofclustersfar
{
public:
  explicit Init_ClusterStatus_cluster_nofclustersfar(::radar_conti_ars408_msgs::msg::ClusterStatus & msg)
  : msg_(msg)
  {}
  Init_ClusterStatus_cluster_meascounter cluster_nofclustersfar(::radar_conti_ars408_msgs::msg::ClusterStatus::_cluster_nofclustersfar_type arg)
  {
    msg_.cluster_nofclustersfar = std::move(arg);
    return Init_ClusterStatus_cluster_meascounter(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::ClusterStatus msg_;
};

class Init_ClusterStatus_cluster_nofclustersnear
{
public:
  Init_ClusterStatus_cluster_nofclustersnear()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ClusterStatus_cluster_nofclustersfar cluster_nofclustersnear(::radar_conti_ars408_msgs::msg::ClusterStatus::_cluster_nofclustersnear_type arg)
  {
    msg_.cluster_nofclustersnear = std::move(arg);
    return Init_ClusterStatus_cluster_nofclustersfar(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::ClusterStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::radar_conti_ars408_msgs::msg::ClusterStatus>()
{
  return radar_conti_ars408_msgs::msg::builder::Init_ClusterStatus_cluster_nofclustersnear();
}

}  // namespace radar_conti_ars408_msgs

#endif  // RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__CLUSTER_STATUS__BUILDER_HPP_
