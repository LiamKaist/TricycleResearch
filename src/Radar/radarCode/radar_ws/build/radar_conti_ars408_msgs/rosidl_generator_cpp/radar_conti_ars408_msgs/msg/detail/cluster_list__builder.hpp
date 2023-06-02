// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from radar_conti_ars408_msgs:msg/ClusterList.idl
// generated code does not contain a copyright notice

#ifndef RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__CLUSTER_LIST__BUILDER_HPP_
#define RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__CLUSTER_LIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "radar_conti_ars408_msgs/msg/detail/cluster_list__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace radar_conti_ars408_msgs
{

namespace msg
{

namespace builder
{

class Init_ClusterList_clusters
{
public:
  explicit Init_ClusterList_clusters(::radar_conti_ars408_msgs::msg::ClusterList & msg)
  : msg_(msg)
  {}
  ::radar_conti_ars408_msgs::msg::ClusterList clusters(::radar_conti_ars408_msgs::msg::ClusterList::_clusters_type arg)
  {
    msg_.clusters = std::move(arg);
    return std::move(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::ClusterList msg_;
};

class Init_ClusterList_cluster_count
{
public:
  explicit Init_ClusterList_cluster_count(::radar_conti_ars408_msgs::msg::ClusterList & msg)
  : msg_(msg)
  {}
  Init_ClusterList_clusters cluster_count(::radar_conti_ars408_msgs::msg::ClusterList::_cluster_count_type arg)
  {
    msg_.cluster_count = std::move(arg);
    return Init_ClusterList_clusters(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::ClusterList msg_;
};

class Init_ClusterList_header
{
public:
  Init_ClusterList_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ClusterList_cluster_count header(::radar_conti_ars408_msgs::msg::ClusterList::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ClusterList_cluster_count(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::ClusterList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::radar_conti_ars408_msgs::msg::ClusterList>()
{
  return radar_conti_ars408_msgs::msg::builder::Init_ClusterList_header();
}

}  // namespace radar_conti_ars408_msgs

#endif  // RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__CLUSTER_LIST__BUILDER_HPP_
