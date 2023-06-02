// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from radar_conti_ars408_msgs:msg/RadarConfiguration.idl
// generated code does not contain a copyright notice

#ifndef RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__RADAR_CONFIGURATION__BUILDER_HPP_
#define RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__RADAR_CONFIGURATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "radar_conti_ars408_msgs/msg/detail/radar_configuration__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace radar_conti_ars408_msgs
{

namespace msg
{

namespace builder
{

class Init_RadarConfiguration_radarcfg_rcs_threshold_valid
{
public:
  explicit Init_RadarConfiguration_radarcfg_rcs_threshold_valid(::radar_conti_ars408_msgs::msg::RadarConfiguration & msg)
  : msg_(msg)
  {}
  ::radar_conti_ars408_msgs::msg::RadarConfiguration radarcfg_rcs_threshold_valid(::radar_conti_ars408_msgs::msg::RadarConfiguration::_radarcfg_rcs_threshold_valid_type arg)
  {
    msg_.radarcfg_rcs_threshold_valid = std::move(arg);
    return std::move(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::RadarConfiguration msg_;
};

class Init_RadarConfiguration_radarcfg_rcs_threshold
{
public:
  explicit Init_RadarConfiguration_radarcfg_rcs_threshold(::radar_conti_ars408_msgs::msg::RadarConfiguration & msg)
  : msg_(msg)
  {}
  Init_RadarConfiguration_radarcfg_rcs_threshold_valid radarcfg_rcs_threshold(::radar_conti_ars408_msgs::msg::RadarConfiguration::_radarcfg_rcs_threshold_type arg)
  {
    msg_.radarcfg_rcs_threshold = std::move(arg);
    return Init_RadarConfiguration_radarcfg_rcs_threshold_valid(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::RadarConfiguration msg_;
};

class Init_RadarConfiguration_radarcfg_ctrlrelay_valid
{
public:
  explicit Init_RadarConfiguration_radarcfg_ctrlrelay_valid(::radar_conti_ars408_msgs::msg::RadarConfiguration & msg)
  : msg_(msg)
  {}
  Init_RadarConfiguration_radarcfg_rcs_threshold radarcfg_ctrlrelay_valid(::radar_conti_ars408_msgs::msg::RadarConfiguration::_radarcfg_ctrlrelay_valid_type arg)
  {
    msg_.radarcfg_ctrlrelay_valid = std::move(arg);
    return Init_RadarConfiguration_radarcfg_rcs_threshold(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::RadarConfiguration msg_;
};

class Init_RadarConfiguration_radarcfg_ctrlrelay
{
public:
  explicit Init_RadarConfiguration_radarcfg_ctrlrelay(::radar_conti_ars408_msgs::msg::RadarConfiguration & msg)
  : msg_(msg)
  {}
  Init_RadarConfiguration_radarcfg_ctrlrelay_valid radarcfg_ctrlrelay(::radar_conti_ars408_msgs::msg::RadarConfiguration::_radarcfg_ctrlrelay_type arg)
  {
    msg_.radarcfg_ctrlrelay = std::move(arg);
    return Init_RadarConfiguration_radarcfg_ctrlrelay_valid(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::RadarConfiguration msg_;
};

class Init_RadarConfiguration_radarcfg_sendquality
{
public:
  explicit Init_RadarConfiguration_radarcfg_sendquality(::radar_conti_ars408_msgs::msg::RadarConfiguration & msg)
  : msg_(msg)
  {}
  Init_RadarConfiguration_radarcfg_ctrlrelay radarcfg_sendquality(::radar_conti_ars408_msgs::msg::RadarConfiguration::_radarcfg_sendquality_type arg)
  {
    msg_.radarcfg_sendquality = std::move(arg);
    return Init_RadarConfiguration_radarcfg_ctrlrelay(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::RadarConfiguration msg_;
};

class Init_RadarConfiguration_radarcfg_sendextinfo
{
public:
  explicit Init_RadarConfiguration_radarcfg_sendextinfo(::radar_conti_ars408_msgs::msg::RadarConfiguration & msg)
  : msg_(msg)
  {}
  Init_RadarConfiguration_radarcfg_sendquality radarcfg_sendextinfo(::radar_conti_ars408_msgs::msg::RadarConfiguration::_radarcfg_sendextinfo_type arg)
  {
    msg_.radarcfg_sendextinfo = std::move(arg);
    return Init_RadarConfiguration_radarcfg_sendquality(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::RadarConfiguration msg_;
};

class Init_RadarConfiguration_radarcfg_sortindex
{
public:
  explicit Init_RadarConfiguration_radarcfg_sortindex(::radar_conti_ars408_msgs::msg::RadarConfiguration & msg)
  : msg_(msg)
  {}
  Init_RadarConfiguration_radarcfg_sendextinfo radarcfg_sortindex(::radar_conti_ars408_msgs::msg::RadarConfiguration::_radarcfg_sortindex_type arg)
  {
    msg_.radarcfg_sortindex = std::move(arg);
    return Init_RadarConfiguration_radarcfg_sendextinfo(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::RadarConfiguration msg_;
};

class Init_RadarConfiguration_radarcfg_storeinnvm
{
public:
  explicit Init_RadarConfiguration_radarcfg_storeinnvm(::radar_conti_ars408_msgs::msg::RadarConfiguration & msg)
  : msg_(msg)
  {}
  Init_RadarConfiguration_radarcfg_sortindex radarcfg_storeinnvm(::radar_conti_ars408_msgs::msg::RadarConfiguration::_radarcfg_storeinnvm_type arg)
  {
    msg_.radarcfg_storeinnvm = std::move(arg);
    return Init_RadarConfiguration_radarcfg_sortindex(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::RadarConfiguration msg_;
};

class Init_RadarConfiguration_radarcfg_sensorid
{
public:
  explicit Init_RadarConfiguration_radarcfg_sensorid(::radar_conti_ars408_msgs::msg::RadarConfiguration & msg)
  : msg_(msg)
  {}
  Init_RadarConfiguration_radarcfg_storeinnvm radarcfg_sensorid(::radar_conti_ars408_msgs::msg::RadarConfiguration::_radarcfg_sensorid_type arg)
  {
    msg_.radarcfg_sensorid = std::move(arg);
    return Init_RadarConfiguration_radarcfg_storeinnvm(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::RadarConfiguration msg_;
};

class Init_RadarConfiguration_radarcfg_outputtype
{
public:
  explicit Init_RadarConfiguration_radarcfg_outputtype(::radar_conti_ars408_msgs::msg::RadarConfiguration & msg)
  : msg_(msg)
  {}
  Init_RadarConfiguration_radarcfg_sensorid radarcfg_outputtype(::radar_conti_ars408_msgs::msg::RadarConfiguration::_radarcfg_outputtype_type arg)
  {
    msg_.radarcfg_outputtype = std::move(arg);
    return Init_RadarConfiguration_radarcfg_sensorid(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::RadarConfiguration msg_;
};

class Init_RadarConfiguration_radarcfg_radarpower
{
public:
  explicit Init_RadarConfiguration_radarcfg_radarpower(::radar_conti_ars408_msgs::msg::RadarConfiguration & msg)
  : msg_(msg)
  {}
  Init_RadarConfiguration_radarcfg_outputtype radarcfg_radarpower(::radar_conti_ars408_msgs::msg::RadarConfiguration::_radarcfg_radarpower_type arg)
  {
    msg_.radarcfg_radarpower = std::move(arg);
    return Init_RadarConfiguration_radarcfg_outputtype(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::RadarConfiguration msg_;
};

class Init_RadarConfiguration_radarcfg_maxdistance
{
public:
  explicit Init_RadarConfiguration_radarcfg_maxdistance(::radar_conti_ars408_msgs::msg::RadarConfiguration & msg)
  : msg_(msg)
  {}
  Init_RadarConfiguration_radarcfg_radarpower radarcfg_maxdistance(::radar_conti_ars408_msgs::msg::RadarConfiguration::_radarcfg_maxdistance_type arg)
  {
    msg_.radarcfg_maxdistance = std::move(arg);
    return Init_RadarConfiguration_radarcfg_radarpower(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::RadarConfiguration msg_;
};

class Init_RadarConfiguration_radarcfg_maxdistance_valid
{
public:
  explicit Init_RadarConfiguration_radarcfg_maxdistance_valid(::radar_conti_ars408_msgs::msg::RadarConfiguration & msg)
  : msg_(msg)
  {}
  Init_RadarConfiguration_radarcfg_maxdistance radarcfg_maxdistance_valid(::radar_conti_ars408_msgs::msg::RadarConfiguration::_radarcfg_maxdistance_valid_type arg)
  {
    msg_.radarcfg_maxdistance_valid = std::move(arg);
    return Init_RadarConfiguration_radarcfg_maxdistance(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::RadarConfiguration msg_;
};

class Init_RadarConfiguration_radarcfg_sensorid_valid
{
public:
  explicit Init_RadarConfiguration_radarcfg_sensorid_valid(::radar_conti_ars408_msgs::msg::RadarConfiguration & msg)
  : msg_(msg)
  {}
  Init_RadarConfiguration_radarcfg_maxdistance_valid radarcfg_sensorid_valid(::radar_conti_ars408_msgs::msg::RadarConfiguration::_radarcfg_sensorid_valid_type arg)
  {
    msg_.radarcfg_sensorid_valid = std::move(arg);
    return Init_RadarConfiguration_radarcfg_maxdistance_valid(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::RadarConfiguration msg_;
};

class Init_RadarConfiguration_radarcfg_radarpower_valid
{
public:
  explicit Init_RadarConfiguration_radarcfg_radarpower_valid(::radar_conti_ars408_msgs::msg::RadarConfiguration & msg)
  : msg_(msg)
  {}
  Init_RadarConfiguration_radarcfg_sensorid_valid radarcfg_radarpower_valid(::radar_conti_ars408_msgs::msg::RadarConfiguration::_radarcfg_radarpower_valid_type arg)
  {
    msg_.radarcfg_radarpower_valid = std::move(arg);
    return Init_RadarConfiguration_radarcfg_sensorid_valid(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::RadarConfiguration msg_;
};

class Init_RadarConfiguration_radarcfg_outputtype_valid
{
public:
  explicit Init_RadarConfiguration_radarcfg_outputtype_valid(::radar_conti_ars408_msgs::msg::RadarConfiguration & msg)
  : msg_(msg)
  {}
  Init_RadarConfiguration_radarcfg_radarpower_valid radarcfg_outputtype_valid(::radar_conti_ars408_msgs::msg::RadarConfiguration::_radarcfg_outputtype_valid_type arg)
  {
    msg_.radarcfg_outputtype_valid = std::move(arg);
    return Init_RadarConfiguration_radarcfg_radarpower_valid(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::RadarConfiguration msg_;
};

class Init_RadarConfiguration_radarcfg_sendquality_valid
{
public:
  explicit Init_RadarConfiguration_radarcfg_sendquality_valid(::radar_conti_ars408_msgs::msg::RadarConfiguration & msg)
  : msg_(msg)
  {}
  Init_RadarConfiguration_radarcfg_outputtype_valid radarcfg_sendquality_valid(::radar_conti_ars408_msgs::msg::RadarConfiguration::_radarcfg_sendquality_valid_type arg)
  {
    msg_.radarcfg_sendquality_valid = std::move(arg);
    return Init_RadarConfiguration_radarcfg_outputtype_valid(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::RadarConfiguration msg_;
};

class Init_RadarConfiguration_radarcfg_sendextinfo_valid
{
public:
  explicit Init_RadarConfiguration_radarcfg_sendextinfo_valid(::radar_conti_ars408_msgs::msg::RadarConfiguration & msg)
  : msg_(msg)
  {}
  Init_RadarConfiguration_radarcfg_sendquality_valid radarcfg_sendextinfo_valid(::radar_conti_ars408_msgs::msg::RadarConfiguration::_radarcfg_sendextinfo_valid_type arg)
  {
    msg_.radarcfg_sendextinfo_valid = std::move(arg);
    return Init_RadarConfiguration_radarcfg_sendquality_valid(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::RadarConfiguration msg_;
};

class Init_RadarConfiguration_radarcfg_sortindex_valid
{
public:
  explicit Init_RadarConfiguration_radarcfg_sortindex_valid(::radar_conti_ars408_msgs::msg::RadarConfiguration & msg)
  : msg_(msg)
  {}
  Init_RadarConfiguration_radarcfg_sendextinfo_valid radarcfg_sortindex_valid(::radar_conti_ars408_msgs::msg::RadarConfiguration::_radarcfg_sortindex_valid_type arg)
  {
    msg_.radarcfg_sortindex_valid = std::move(arg);
    return Init_RadarConfiguration_radarcfg_sendextinfo_valid(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::RadarConfiguration msg_;
};

class Init_RadarConfiguration_radarcfg_storeinnvm_valid
{
public:
  explicit Init_RadarConfiguration_radarcfg_storeinnvm_valid(::radar_conti_ars408_msgs::msg::RadarConfiguration & msg)
  : msg_(msg)
  {}
  Init_RadarConfiguration_radarcfg_sortindex_valid radarcfg_storeinnvm_valid(::radar_conti_ars408_msgs::msg::RadarConfiguration::_radarcfg_storeinnvm_valid_type arg)
  {
    msg_.radarcfg_storeinnvm_valid = std::move(arg);
    return Init_RadarConfiguration_radarcfg_sortindex_valid(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::RadarConfiguration msg_;
};

class Init_RadarConfiguration_header
{
public:
  Init_RadarConfiguration_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RadarConfiguration_radarcfg_storeinnvm_valid header(::radar_conti_ars408_msgs::msg::RadarConfiguration::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RadarConfiguration_radarcfg_storeinnvm_valid(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::RadarConfiguration msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::radar_conti_ars408_msgs::msg::RadarConfiguration>()
{
  return radar_conti_ars408_msgs::msg::builder::Init_RadarConfiguration_header();
}

}  // namespace radar_conti_ars408_msgs

#endif  // RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__RADAR_CONFIGURATION__BUILDER_HPP_
