// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from radar_conti_ars408_msgs:msg/ClusterQuality.idl
// generated code does not contain a copyright notice

#ifndef RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__CLUSTER_QUALITY__BUILDER_HPP_
#define RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__CLUSTER_QUALITY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "radar_conti_ars408_msgs/msg/detail/cluster_quality__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace radar_conti_ars408_msgs
{

namespace msg
{

namespace builder
{

class Init_ClusterQuality_cluster_ambigstate
{
public:
  explicit Init_ClusterQuality_cluster_ambigstate(::radar_conti_ars408_msgs::msg::ClusterQuality & msg)
  : msg_(msg)
  {}
  ::radar_conti_ars408_msgs::msg::ClusterQuality cluster_ambigstate(::radar_conti_ars408_msgs::msg::ClusterQuality::_cluster_ambigstate_type arg)
  {
    msg_.cluster_ambigstate = std::move(arg);
    return std::move(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::ClusterQuality msg_;
};

class Init_ClusterQuality_cluster_invalidstate
{
public:
  explicit Init_ClusterQuality_cluster_invalidstate(::radar_conti_ars408_msgs::msg::ClusterQuality & msg)
  : msg_(msg)
  {}
  Init_ClusterQuality_cluster_ambigstate cluster_invalidstate(::radar_conti_ars408_msgs::msg::ClusterQuality::_cluster_invalidstate_type arg)
  {
    msg_.cluster_invalidstate = std::move(arg);
    return Init_ClusterQuality_cluster_ambigstate(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::ClusterQuality msg_;
};

class Init_ClusterQuality_cluster_pdh0
{
public:
  explicit Init_ClusterQuality_cluster_pdh0(::radar_conti_ars408_msgs::msg::ClusterQuality & msg)
  : msg_(msg)
  {}
  Init_ClusterQuality_cluster_invalidstate cluster_pdh0(::radar_conti_ars408_msgs::msg::ClusterQuality::_cluster_pdh0_type arg)
  {
    msg_.cluster_pdh0 = std::move(arg);
    return Init_ClusterQuality_cluster_invalidstate(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::ClusterQuality msg_;
};

class Init_ClusterQuality_cluster_vrellat_rms
{
public:
  explicit Init_ClusterQuality_cluster_vrellat_rms(::radar_conti_ars408_msgs::msg::ClusterQuality & msg)
  : msg_(msg)
  {}
  Init_ClusterQuality_cluster_pdh0 cluster_vrellat_rms(::radar_conti_ars408_msgs::msg::ClusterQuality::_cluster_vrellat_rms_type arg)
  {
    msg_.cluster_vrellat_rms = std::move(arg);
    return Init_ClusterQuality_cluster_pdh0(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::ClusterQuality msg_;
};

class Init_ClusterQuality_cluster_vrellong_rms
{
public:
  explicit Init_ClusterQuality_cluster_vrellong_rms(::radar_conti_ars408_msgs::msg::ClusterQuality & msg)
  : msg_(msg)
  {}
  Init_ClusterQuality_cluster_vrellat_rms cluster_vrellong_rms(::radar_conti_ars408_msgs::msg::ClusterQuality::_cluster_vrellong_rms_type arg)
  {
    msg_.cluster_vrellong_rms = std::move(arg);
    return Init_ClusterQuality_cluster_vrellat_rms(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::ClusterQuality msg_;
};

class Init_ClusterQuality_cluster_distlat_rms
{
public:
  explicit Init_ClusterQuality_cluster_distlat_rms(::radar_conti_ars408_msgs::msg::ClusterQuality & msg)
  : msg_(msg)
  {}
  Init_ClusterQuality_cluster_vrellong_rms cluster_distlat_rms(::radar_conti_ars408_msgs::msg::ClusterQuality::_cluster_distlat_rms_type arg)
  {
    msg_.cluster_distlat_rms = std::move(arg);
    return Init_ClusterQuality_cluster_vrellong_rms(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::ClusterQuality msg_;
};

class Init_ClusterQuality_cluster_distlong_rms
{
public:
  Init_ClusterQuality_cluster_distlong_rms()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ClusterQuality_cluster_distlat_rms cluster_distlong_rms(::radar_conti_ars408_msgs::msg::ClusterQuality::_cluster_distlong_rms_type arg)
  {
    msg_.cluster_distlong_rms = std::move(arg);
    return Init_ClusterQuality_cluster_distlat_rms(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::ClusterQuality msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::radar_conti_ars408_msgs::msg::ClusterQuality>()
{
  return radar_conti_ars408_msgs::msg::builder::Init_ClusterQuality_cluster_distlong_rms();
}

}  // namespace radar_conti_ars408_msgs

#endif  // RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__CLUSTER_QUALITY__BUILDER_HPP_
