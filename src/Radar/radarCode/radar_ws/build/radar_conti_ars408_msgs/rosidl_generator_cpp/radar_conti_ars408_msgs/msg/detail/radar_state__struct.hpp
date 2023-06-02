// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from radar_conti_ars408_msgs:msg/RadarState.idl
// generated code does not contain a copyright notice

#ifndef RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__RADAR_STATE__STRUCT_HPP_
#define RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__RADAR_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'radarstate_nvmwritestatus'
// Member 'radarstate_nvmreadstatus'
// Member 'radarstate_maxdistancecfg'
// Member 'radarstate_persistent_error'
// Member 'radarstate_interference'
// Member 'radarstate_temperature_error'
// Member 'radarstate_temporary_error'
// Member 'radarstate_voltage_error'
// Member 'radarstate_radarpowercfg'
// Member 'radarstate_sortindex'
// Member 'radarstate_sensorid'
// Member 'radarstate_motionrxstate'
// Member 'radarstate_sendextinfocfg'
// Member 'radarstate_sendqualitycfg'
// Member 'radarstate_outputtypecfg'
// Member 'radarstate_ctrlrelaycfg'
// Member 'radarstate_rcs_threshold'
#include "std_msgs/msg/detail/u_int8__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__radar_conti_ars408_msgs__msg__RadarState __attribute__((deprecated))
#else
# define DEPRECATED__radar_conti_ars408_msgs__msg__RadarState __declspec(deprecated)
#endif

namespace radar_conti_ars408_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RadarState_
{
  using Type = RadarState_<ContainerAllocator>;

  explicit RadarState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    radarstate_nvmwritestatus(_init),
    radarstate_nvmreadstatus(_init),
    radarstate_maxdistancecfg(_init),
    radarstate_persistent_error(_init),
    radarstate_interference(_init),
    radarstate_temperature_error(_init),
    radarstate_temporary_error(_init),
    radarstate_voltage_error(_init),
    radarstate_radarpowercfg(_init),
    radarstate_sortindex(_init),
    radarstate_sensorid(_init),
    radarstate_motionrxstate(_init),
    radarstate_sendextinfocfg(_init),
    radarstate_sendqualitycfg(_init),
    radarstate_outputtypecfg(_init),
    radarstate_ctrlrelaycfg(_init),
    radarstate_rcs_threshold(_init)
  {
    (void)_init;
  }

  explicit RadarState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    radarstate_nvmwritestatus(_alloc, _init),
    radarstate_nvmreadstatus(_alloc, _init),
    radarstate_maxdistancecfg(_alloc, _init),
    radarstate_persistent_error(_alloc, _init),
    radarstate_interference(_alloc, _init),
    radarstate_temperature_error(_alloc, _init),
    radarstate_temporary_error(_alloc, _init),
    radarstate_voltage_error(_alloc, _init),
    radarstate_radarpowercfg(_alloc, _init),
    radarstate_sortindex(_alloc, _init),
    radarstate_sensorid(_alloc, _init),
    radarstate_motionrxstate(_alloc, _init),
    radarstate_sendextinfocfg(_alloc, _init),
    radarstate_sendqualitycfg(_alloc, _init),
    radarstate_outputtypecfg(_alloc, _init),
    radarstate_ctrlrelaycfg(_alloc, _init),
    radarstate_rcs_threshold(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _radarstate_nvmwritestatus_type =
    std_msgs::msg::UInt8_<ContainerAllocator>;
  _radarstate_nvmwritestatus_type radarstate_nvmwritestatus;
  using _radarstate_nvmreadstatus_type =
    std_msgs::msg::UInt8_<ContainerAllocator>;
  _radarstate_nvmreadstatus_type radarstate_nvmreadstatus;
  using _radarstate_maxdistancecfg_type =
    std_msgs::msg::UInt8_<ContainerAllocator>;
  _radarstate_maxdistancecfg_type radarstate_maxdistancecfg;
  using _radarstate_persistent_error_type =
    std_msgs::msg::UInt8_<ContainerAllocator>;
  _radarstate_persistent_error_type radarstate_persistent_error;
  using _radarstate_interference_type =
    std_msgs::msg::UInt8_<ContainerAllocator>;
  _radarstate_interference_type radarstate_interference;
  using _radarstate_temperature_error_type =
    std_msgs::msg::UInt8_<ContainerAllocator>;
  _radarstate_temperature_error_type radarstate_temperature_error;
  using _radarstate_temporary_error_type =
    std_msgs::msg::UInt8_<ContainerAllocator>;
  _radarstate_temporary_error_type radarstate_temporary_error;
  using _radarstate_voltage_error_type =
    std_msgs::msg::UInt8_<ContainerAllocator>;
  _radarstate_voltage_error_type radarstate_voltage_error;
  using _radarstate_radarpowercfg_type =
    std_msgs::msg::UInt8_<ContainerAllocator>;
  _radarstate_radarpowercfg_type radarstate_radarpowercfg;
  using _radarstate_sortindex_type =
    std_msgs::msg::UInt8_<ContainerAllocator>;
  _radarstate_sortindex_type radarstate_sortindex;
  using _radarstate_sensorid_type =
    std_msgs::msg::UInt8_<ContainerAllocator>;
  _radarstate_sensorid_type radarstate_sensorid;
  using _radarstate_motionrxstate_type =
    std_msgs::msg::UInt8_<ContainerAllocator>;
  _radarstate_motionrxstate_type radarstate_motionrxstate;
  using _radarstate_sendextinfocfg_type =
    std_msgs::msg::UInt8_<ContainerAllocator>;
  _radarstate_sendextinfocfg_type radarstate_sendextinfocfg;
  using _radarstate_sendqualitycfg_type =
    std_msgs::msg::UInt8_<ContainerAllocator>;
  _radarstate_sendqualitycfg_type radarstate_sendqualitycfg;
  using _radarstate_outputtypecfg_type =
    std_msgs::msg::UInt8_<ContainerAllocator>;
  _radarstate_outputtypecfg_type radarstate_outputtypecfg;
  using _radarstate_ctrlrelaycfg_type =
    std_msgs::msg::UInt8_<ContainerAllocator>;
  _radarstate_ctrlrelaycfg_type radarstate_ctrlrelaycfg;
  using _radarstate_rcs_threshold_type =
    std_msgs::msg::UInt8_<ContainerAllocator>;
  _radarstate_rcs_threshold_type radarstate_rcs_threshold;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__radarstate_nvmwritestatus(
    const std_msgs::msg::UInt8_<ContainerAllocator> & _arg)
  {
    this->radarstate_nvmwritestatus = _arg;
    return *this;
  }
  Type & set__radarstate_nvmreadstatus(
    const std_msgs::msg::UInt8_<ContainerAllocator> & _arg)
  {
    this->radarstate_nvmreadstatus = _arg;
    return *this;
  }
  Type & set__radarstate_maxdistancecfg(
    const std_msgs::msg::UInt8_<ContainerAllocator> & _arg)
  {
    this->radarstate_maxdistancecfg = _arg;
    return *this;
  }
  Type & set__radarstate_persistent_error(
    const std_msgs::msg::UInt8_<ContainerAllocator> & _arg)
  {
    this->radarstate_persistent_error = _arg;
    return *this;
  }
  Type & set__radarstate_interference(
    const std_msgs::msg::UInt8_<ContainerAllocator> & _arg)
  {
    this->radarstate_interference = _arg;
    return *this;
  }
  Type & set__radarstate_temperature_error(
    const std_msgs::msg::UInt8_<ContainerAllocator> & _arg)
  {
    this->radarstate_temperature_error = _arg;
    return *this;
  }
  Type & set__radarstate_temporary_error(
    const std_msgs::msg::UInt8_<ContainerAllocator> & _arg)
  {
    this->radarstate_temporary_error = _arg;
    return *this;
  }
  Type & set__radarstate_voltage_error(
    const std_msgs::msg::UInt8_<ContainerAllocator> & _arg)
  {
    this->radarstate_voltage_error = _arg;
    return *this;
  }
  Type & set__radarstate_radarpowercfg(
    const std_msgs::msg::UInt8_<ContainerAllocator> & _arg)
  {
    this->radarstate_radarpowercfg = _arg;
    return *this;
  }
  Type & set__radarstate_sortindex(
    const std_msgs::msg::UInt8_<ContainerAllocator> & _arg)
  {
    this->radarstate_sortindex = _arg;
    return *this;
  }
  Type & set__radarstate_sensorid(
    const std_msgs::msg::UInt8_<ContainerAllocator> & _arg)
  {
    this->radarstate_sensorid = _arg;
    return *this;
  }
  Type & set__radarstate_motionrxstate(
    const std_msgs::msg::UInt8_<ContainerAllocator> & _arg)
  {
    this->radarstate_motionrxstate = _arg;
    return *this;
  }
  Type & set__radarstate_sendextinfocfg(
    const std_msgs::msg::UInt8_<ContainerAllocator> & _arg)
  {
    this->radarstate_sendextinfocfg = _arg;
    return *this;
  }
  Type & set__radarstate_sendqualitycfg(
    const std_msgs::msg::UInt8_<ContainerAllocator> & _arg)
  {
    this->radarstate_sendqualitycfg = _arg;
    return *this;
  }
  Type & set__radarstate_outputtypecfg(
    const std_msgs::msg::UInt8_<ContainerAllocator> & _arg)
  {
    this->radarstate_outputtypecfg = _arg;
    return *this;
  }
  Type & set__radarstate_ctrlrelaycfg(
    const std_msgs::msg::UInt8_<ContainerAllocator> & _arg)
  {
    this->radarstate_ctrlrelaycfg = _arg;
    return *this;
  }
  Type & set__radarstate_rcs_threshold(
    const std_msgs::msg::UInt8_<ContainerAllocator> & _arg)
  {
    this->radarstate_rcs_threshold = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    radar_conti_ars408_msgs::msg::RadarState_<ContainerAllocator> *;
  using ConstRawPtr =
    const radar_conti_ars408_msgs::msg::RadarState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<radar_conti_ars408_msgs::msg::RadarState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<radar_conti_ars408_msgs::msg::RadarState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      radar_conti_ars408_msgs::msg::RadarState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<radar_conti_ars408_msgs::msg::RadarState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      radar_conti_ars408_msgs::msg::RadarState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<radar_conti_ars408_msgs::msg::RadarState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<radar_conti_ars408_msgs::msg::RadarState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<radar_conti_ars408_msgs::msg::RadarState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__radar_conti_ars408_msgs__msg__RadarState
    std::shared_ptr<radar_conti_ars408_msgs::msg::RadarState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__radar_conti_ars408_msgs__msg__RadarState
    std::shared_ptr<radar_conti_ars408_msgs::msg::RadarState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RadarState_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->radarstate_nvmwritestatus != other.radarstate_nvmwritestatus) {
      return false;
    }
    if (this->radarstate_nvmreadstatus != other.radarstate_nvmreadstatus) {
      return false;
    }
    if (this->radarstate_maxdistancecfg != other.radarstate_maxdistancecfg) {
      return false;
    }
    if (this->radarstate_persistent_error != other.radarstate_persistent_error) {
      return false;
    }
    if (this->radarstate_interference != other.radarstate_interference) {
      return false;
    }
    if (this->radarstate_temperature_error != other.radarstate_temperature_error) {
      return false;
    }
    if (this->radarstate_temporary_error != other.radarstate_temporary_error) {
      return false;
    }
    if (this->radarstate_voltage_error != other.radarstate_voltage_error) {
      return false;
    }
    if (this->radarstate_radarpowercfg != other.radarstate_radarpowercfg) {
      return false;
    }
    if (this->radarstate_sortindex != other.radarstate_sortindex) {
      return false;
    }
    if (this->radarstate_sensorid != other.radarstate_sensorid) {
      return false;
    }
    if (this->radarstate_motionrxstate != other.radarstate_motionrxstate) {
      return false;
    }
    if (this->radarstate_sendextinfocfg != other.radarstate_sendextinfocfg) {
      return false;
    }
    if (this->radarstate_sendqualitycfg != other.radarstate_sendqualitycfg) {
      return false;
    }
    if (this->radarstate_outputtypecfg != other.radarstate_outputtypecfg) {
      return false;
    }
    if (this->radarstate_ctrlrelaycfg != other.radarstate_ctrlrelaycfg) {
      return false;
    }
    if (this->radarstate_rcs_threshold != other.radarstate_rcs_threshold) {
      return false;
    }
    return true;
  }
  bool operator!=(const RadarState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RadarState_

// alias to use template instance with default allocator
using RadarState =
  radar_conti_ars408_msgs::msg::RadarState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace radar_conti_ars408_msgs

#endif  // RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__RADAR_STATE__STRUCT_HPP_
