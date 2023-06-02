// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from radar_conti_ars408_msgs:msg/RadarState.idl
// generated code does not contain a copyright notice

#ifndef RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__RADAR_STATE__BUILDER_HPP_
#define RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__RADAR_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "radar_conti_ars408_msgs/msg/detail/radar_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace radar_conti_ars408_msgs
{

namespace msg
{

namespace builder
{

class Init_RadarState_radarstate_rcs_threshold
{
public:
  explicit Init_RadarState_radarstate_rcs_threshold(::radar_conti_ars408_msgs::msg::RadarState & msg)
  : msg_(msg)
  {}
  ::radar_conti_ars408_msgs::msg::RadarState radarstate_rcs_threshold(::radar_conti_ars408_msgs::msg::RadarState::_radarstate_rcs_threshold_type arg)
  {
    msg_.radarstate_rcs_threshold = std::move(arg);
    return std::move(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::RadarState msg_;
};

class Init_RadarState_radarstate_ctrlrelaycfg
{
public:
  explicit Init_RadarState_radarstate_ctrlrelaycfg(::radar_conti_ars408_msgs::msg::RadarState & msg)
  : msg_(msg)
  {}
  Init_RadarState_radarstate_rcs_threshold radarstate_ctrlrelaycfg(::radar_conti_ars408_msgs::msg::RadarState::_radarstate_ctrlrelaycfg_type arg)
  {
    msg_.radarstate_ctrlrelaycfg = std::move(arg);
    return Init_RadarState_radarstate_rcs_threshold(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::RadarState msg_;
};

class Init_RadarState_radarstate_outputtypecfg
{
public:
  explicit Init_RadarState_radarstate_outputtypecfg(::radar_conti_ars408_msgs::msg::RadarState & msg)
  : msg_(msg)
  {}
  Init_RadarState_radarstate_ctrlrelaycfg radarstate_outputtypecfg(::radar_conti_ars408_msgs::msg::RadarState::_radarstate_outputtypecfg_type arg)
  {
    msg_.radarstate_outputtypecfg = std::move(arg);
    return Init_RadarState_radarstate_ctrlrelaycfg(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::RadarState msg_;
};

class Init_RadarState_radarstate_sendqualitycfg
{
public:
  explicit Init_RadarState_radarstate_sendqualitycfg(::radar_conti_ars408_msgs::msg::RadarState & msg)
  : msg_(msg)
  {}
  Init_RadarState_radarstate_outputtypecfg radarstate_sendqualitycfg(::radar_conti_ars408_msgs::msg::RadarState::_radarstate_sendqualitycfg_type arg)
  {
    msg_.radarstate_sendqualitycfg = std::move(arg);
    return Init_RadarState_radarstate_outputtypecfg(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::RadarState msg_;
};

class Init_RadarState_radarstate_sendextinfocfg
{
public:
  explicit Init_RadarState_radarstate_sendextinfocfg(::radar_conti_ars408_msgs::msg::RadarState & msg)
  : msg_(msg)
  {}
  Init_RadarState_radarstate_sendqualitycfg radarstate_sendextinfocfg(::radar_conti_ars408_msgs::msg::RadarState::_radarstate_sendextinfocfg_type arg)
  {
    msg_.radarstate_sendextinfocfg = std::move(arg);
    return Init_RadarState_radarstate_sendqualitycfg(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::RadarState msg_;
};

class Init_RadarState_radarstate_motionrxstate
{
public:
  explicit Init_RadarState_radarstate_motionrxstate(::radar_conti_ars408_msgs::msg::RadarState & msg)
  : msg_(msg)
  {}
  Init_RadarState_radarstate_sendextinfocfg radarstate_motionrxstate(::radar_conti_ars408_msgs::msg::RadarState::_radarstate_motionrxstate_type arg)
  {
    msg_.radarstate_motionrxstate = std::move(arg);
    return Init_RadarState_radarstate_sendextinfocfg(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::RadarState msg_;
};

class Init_RadarState_radarstate_sensorid
{
public:
  explicit Init_RadarState_radarstate_sensorid(::radar_conti_ars408_msgs::msg::RadarState & msg)
  : msg_(msg)
  {}
  Init_RadarState_radarstate_motionrxstate radarstate_sensorid(::radar_conti_ars408_msgs::msg::RadarState::_radarstate_sensorid_type arg)
  {
    msg_.radarstate_sensorid = std::move(arg);
    return Init_RadarState_radarstate_motionrxstate(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::RadarState msg_;
};

class Init_RadarState_radarstate_sortindex
{
public:
  explicit Init_RadarState_radarstate_sortindex(::radar_conti_ars408_msgs::msg::RadarState & msg)
  : msg_(msg)
  {}
  Init_RadarState_radarstate_sensorid radarstate_sortindex(::radar_conti_ars408_msgs::msg::RadarState::_radarstate_sortindex_type arg)
  {
    msg_.radarstate_sortindex = std::move(arg);
    return Init_RadarState_radarstate_sensorid(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::RadarState msg_;
};

class Init_RadarState_radarstate_radarpowercfg
{
public:
  explicit Init_RadarState_radarstate_radarpowercfg(::radar_conti_ars408_msgs::msg::RadarState & msg)
  : msg_(msg)
  {}
  Init_RadarState_radarstate_sortindex radarstate_radarpowercfg(::radar_conti_ars408_msgs::msg::RadarState::_radarstate_radarpowercfg_type arg)
  {
    msg_.radarstate_radarpowercfg = std::move(arg);
    return Init_RadarState_radarstate_sortindex(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::RadarState msg_;
};

class Init_RadarState_radarstate_voltage_error
{
public:
  explicit Init_RadarState_radarstate_voltage_error(::radar_conti_ars408_msgs::msg::RadarState & msg)
  : msg_(msg)
  {}
  Init_RadarState_radarstate_radarpowercfg radarstate_voltage_error(::radar_conti_ars408_msgs::msg::RadarState::_radarstate_voltage_error_type arg)
  {
    msg_.radarstate_voltage_error = std::move(arg);
    return Init_RadarState_radarstate_radarpowercfg(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::RadarState msg_;
};

class Init_RadarState_radarstate_temporary_error
{
public:
  explicit Init_RadarState_radarstate_temporary_error(::radar_conti_ars408_msgs::msg::RadarState & msg)
  : msg_(msg)
  {}
  Init_RadarState_radarstate_voltage_error radarstate_temporary_error(::radar_conti_ars408_msgs::msg::RadarState::_radarstate_temporary_error_type arg)
  {
    msg_.radarstate_temporary_error = std::move(arg);
    return Init_RadarState_radarstate_voltage_error(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::RadarState msg_;
};

class Init_RadarState_radarstate_temperature_error
{
public:
  explicit Init_RadarState_radarstate_temperature_error(::radar_conti_ars408_msgs::msg::RadarState & msg)
  : msg_(msg)
  {}
  Init_RadarState_radarstate_temporary_error radarstate_temperature_error(::radar_conti_ars408_msgs::msg::RadarState::_radarstate_temperature_error_type arg)
  {
    msg_.radarstate_temperature_error = std::move(arg);
    return Init_RadarState_radarstate_temporary_error(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::RadarState msg_;
};

class Init_RadarState_radarstate_interference
{
public:
  explicit Init_RadarState_radarstate_interference(::radar_conti_ars408_msgs::msg::RadarState & msg)
  : msg_(msg)
  {}
  Init_RadarState_radarstate_temperature_error radarstate_interference(::radar_conti_ars408_msgs::msg::RadarState::_radarstate_interference_type arg)
  {
    msg_.radarstate_interference = std::move(arg);
    return Init_RadarState_radarstate_temperature_error(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::RadarState msg_;
};

class Init_RadarState_radarstate_persistent_error
{
public:
  explicit Init_RadarState_radarstate_persistent_error(::radar_conti_ars408_msgs::msg::RadarState & msg)
  : msg_(msg)
  {}
  Init_RadarState_radarstate_interference radarstate_persistent_error(::radar_conti_ars408_msgs::msg::RadarState::_radarstate_persistent_error_type arg)
  {
    msg_.radarstate_persistent_error = std::move(arg);
    return Init_RadarState_radarstate_interference(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::RadarState msg_;
};

class Init_RadarState_radarstate_maxdistancecfg
{
public:
  explicit Init_RadarState_radarstate_maxdistancecfg(::radar_conti_ars408_msgs::msg::RadarState & msg)
  : msg_(msg)
  {}
  Init_RadarState_radarstate_persistent_error radarstate_maxdistancecfg(::radar_conti_ars408_msgs::msg::RadarState::_radarstate_maxdistancecfg_type arg)
  {
    msg_.radarstate_maxdistancecfg = std::move(arg);
    return Init_RadarState_radarstate_persistent_error(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::RadarState msg_;
};

class Init_RadarState_radarstate_nvmreadstatus
{
public:
  explicit Init_RadarState_radarstate_nvmreadstatus(::radar_conti_ars408_msgs::msg::RadarState & msg)
  : msg_(msg)
  {}
  Init_RadarState_radarstate_maxdistancecfg radarstate_nvmreadstatus(::radar_conti_ars408_msgs::msg::RadarState::_radarstate_nvmreadstatus_type arg)
  {
    msg_.radarstate_nvmreadstatus = std::move(arg);
    return Init_RadarState_radarstate_maxdistancecfg(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::RadarState msg_;
};

class Init_RadarState_radarstate_nvmwritestatus
{
public:
  explicit Init_RadarState_radarstate_nvmwritestatus(::radar_conti_ars408_msgs::msg::RadarState & msg)
  : msg_(msg)
  {}
  Init_RadarState_radarstate_nvmreadstatus radarstate_nvmwritestatus(::radar_conti_ars408_msgs::msg::RadarState::_radarstate_nvmwritestatus_type arg)
  {
    msg_.radarstate_nvmwritestatus = std::move(arg);
    return Init_RadarState_radarstate_nvmreadstatus(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::RadarState msg_;
};

class Init_RadarState_header
{
public:
  Init_RadarState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RadarState_radarstate_nvmwritestatus header(::radar_conti_ars408_msgs::msg::RadarState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RadarState_radarstate_nvmwritestatus(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::RadarState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::radar_conti_ars408_msgs::msg::RadarState>()
{
  return radar_conti_ars408_msgs::msg::builder::Init_RadarState_header();
}

}  // namespace radar_conti_ars408_msgs

#endif  // RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__RADAR_STATE__BUILDER_HPP_
