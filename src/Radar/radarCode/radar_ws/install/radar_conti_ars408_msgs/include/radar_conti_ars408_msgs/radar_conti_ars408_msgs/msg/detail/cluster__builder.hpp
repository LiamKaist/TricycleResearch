// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from radar_conti_ars408_msgs:msg/Cluster.idl
// generated code does not contain a copyright notice

#ifndef RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__CLUSTER__BUILDER_HPP_
#define RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__CLUSTER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "radar_conti_ars408_msgs/msg/detail/cluster__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace radar_conti_ars408_msgs
{

namespace msg
{

namespace builder
{

class Init_Cluster_cluster_quality
{
public:
  explicit Init_Cluster_cluster_quality(::radar_conti_ars408_msgs::msg::Cluster & msg)
  : msg_(msg)
  {}
  ::radar_conti_ars408_msgs::msg::Cluster cluster_quality(::radar_conti_ars408_msgs::msg::Cluster::_cluster_quality_type arg)
  {
    msg_.cluster_quality = std::move(arg);
    return std::move(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::Cluster msg_;
};

class Init_Cluster_cluster_general
{
public:
  explicit Init_Cluster_cluster_general(::radar_conti_ars408_msgs::msg::Cluster & msg)
  : msg_(msg)
  {}
  Init_Cluster_cluster_quality cluster_general(::radar_conti_ars408_msgs::msg::Cluster::_cluster_general_type arg)
  {
    msg_.cluster_general = std::move(arg);
    return Init_Cluster_cluster_quality(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::Cluster msg_;
};

class Init_Cluster_cluster_id
{
public:
  Init_Cluster_cluster_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Cluster_cluster_general cluster_id(::radar_conti_ars408_msgs::msg::Cluster::_cluster_id_type arg)
  {
    msg_.cluster_id = std::move(arg);
    return Init_Cluster_cluster_general(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::Cluster msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::radar_conti_ars408_msgs::msg::Cluster>()
{
  return radar_conti_ars408_msgs::msg::builder::Init_Cluster_cluster_id();
}

}  // namespace radar_conti_ars408_msgs

#endif  // RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__CLUSTER__BUILDER_HPP_
