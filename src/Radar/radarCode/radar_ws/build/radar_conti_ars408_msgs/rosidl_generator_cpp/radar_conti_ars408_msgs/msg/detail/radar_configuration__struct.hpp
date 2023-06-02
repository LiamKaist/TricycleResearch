// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from radar_conti_ars408_msgs:msg/RadarConfiguration.idl
// generated code does not contain a copyright notice

#ifndef RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__RADAR_CONFIGURATION__STRUCT_HPP_
#define RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__RADAR_CONFIGURATION__STRUCT_HPP_

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
// Member 'radarcfg_storeinnvm_valid'
// Member 'radarcfg_sortindex_valid'
// Member 'radarcfg_sendextinfo_valid'
// Member 'radarcfg_sendquality_valid'
// Member 'radarcfg_outputtype_valid'
// Member 'radarcfg_radarpower_valid'
// Member 'radarcfg_sensorid_valid'
// Member 'radarcfg_maxdistance_valid'
// Member 'radarcfg_maxdistance'
// Member 'radarcfg_radarpower'
// Member 'radarcfg_outputtype'
// Member 'radarcfg_sensorid'
// Member 'radarcfg_storeinnvm'
// Member 'radarcfg_sortindex'
// Member 'radarcfg_sendextinfo'
// Member 'radarcfg_sendquality'
// Member 'radarcfg_ctrlrelay'
// Member 'radarcfg_ctrlrelay_valid'
// Member 'radarcfg_rcs_threshold'
// Member 'radarcfg_rcs_threshold_valid'
#include "std_msgs/msg/detail/u_int8__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__radar_conti_ars408_msgs__msg__RadarConfiguration __attribute__((deprecated))
#else
# define DEPRECATED__radar_conti_ars408_msgs__msg__RadarConfiguration __declspec(deprecated)
#endif

namespace radar_conti_ars408_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RadarConfiguration_
{
  using Type = RadarConfiguration_<ContainerAllocator>;

  explicit RadarConfiguration_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    radarcfg_storeinnvm_valid(_init),
    radarcfg_sortindex_valid(_init),
    radarcfg_sendextinfo_valid(_init),
    radarcfg_sendquality_valid(_init),
    radarcfg_outputtype_valid(_init),
    radarcfg_radarpower_valid(_init),
    radarcfg_sensorid_valid(_init),
    radarcfg_maxdistance_valid(_init),
    radarcfg_maxdistance(_init),
    radarcfg_radarpower(_init),
    radarcfg_outputtype(_init),
    radarcfg_sensorid(_init),
    radarcfg_storeinnvm(_init),
    radarcfg_sortindex(_init),
    radarcfg_sendextinfo(_init),
    radarcfg_sendquality(_init),
    radarcfg_ctrlrelay(_init),
    radarcfg_ctrlrelay_valid(_init),
    radarcfg_rcs_threshold(_init),
    radarcfg_rcs_threshold_valid(_init)
  {
    (void)_init;
  }

  explicit RadarConfiguration_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    radarcfg_storeinnvm_valid(_alloc, _init),
    radarcfg_sortindex_valid(_alloc, _init),
    radarcfg_sendextinfo_valid(_alloc, _init),
    radarcfg_sendquality_valid(_alloc, _init),
    radarcfg_outputtype_valid(_alloc, _init),
    radarcfg_radarpower_valid(_alloc, _init),
    radarcfg_sensorid_valid(_alloc, _init),
    radarcfg_maxdistance_valid(_alloc, _init),
    radarcfg_maxdistance(_alloc, _init),
    radarcfg_radarpower(_alloc, _init),
    radarcfg_outputtype(_alloc, _init),
    radarcfg_sensorid(_alloc, _init),
    radarcfg_storeinnvm(_alloc, _init),
    radarcfg_sortindex(_alloc, _init),
    radarcfg_sendextinfo(_alloc, _init),
    radarcfg_sendquality(_alloc, _init),
    radarcfg_ctrlrelay(_alloc, _init),
    radarcfg_ctrlrelay_valid(_alloc, _init),
    radarcfg_rcs_threshold(_alloc, _init),
    radarcfg_rcs_threshold_valid(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _radarcfg_storeinnvm_valid_type =
    std_msgs::msg::UInt8_<ContainerAllocator>;
  _radarcfg_storeinnvm_valid_type radarcfg_storeinnvm_valid;
  using _radarcfg_sortindex_valid_type =
    std_msgs::msg::UInt8_<ContainerAllocator>;
  _radarcfg_sortindex_valid_type radarcfg_sortindex_valid;
  using _radarcfg_sendextinfo_valid_type =
    std_msgs::msg::UInt8_<ContainerAllocator>;
  _radarcfg_sendextinfo_valid_type radarcfg_sendextinfo_valid;
  using _radarcfg_sendquality_valid_type =
    std_msgs::msg::UInt8_<ContainerAllocator>;
  _radarcfg_sendquality_valid_type radarcfg_sendquality_valid;
  using _radarcfg_outputtype_valid_type =
    std_msgs::msg::UInt8_<ContainerAllocator>;
  _radarcfg_outputtype_valid_type radarcfg_outputtype_valid;
  using _radarcfg_radarpower_valid_type =
    std_msgs::msg::UInt8_<ContainerAllocator>;
  _radarcfg_radarpower_valid_type radarcfg_radarpower_valid;
  using _radarcfg_sensorid_valid_type =
    std_msgs::msg::UInt8_<ContainerAllocator>;
  _radarcfg_sensorid_valid_type radarcfg_sensorid_valid;
  using _radarcfg_maxdistance_valid_type =
    std_msgs::msg::UInt8_<ContainerAllocator>;
  _radarcfg_maxdistance_valid_type radarcfg_maxdistance_valid;
  using _radarcfg_maxdistance_type =
    std_msgs::msg::UInt8_<ContainerAllocator>;
  _radarcfg_maxdistance_type radarcfg_maxdistance;
  using _radarcfg_radarpower_type =
    std_msgs::msg::UInt8_<ContainerAllocator>;
  _radarcfg_radarpower_type radarcfg_radarpower;
  using _radarcfg_outputtype_type =
    std_msgs::msg::UInt8_<ContainerAllocator>;
  _radarcfg_outputtype_type radarcfg_outputtype;
  using _radarcfg_sensorid_type =
    std_msgs::msg::UInt8_<ContainerAllocator>;
  _radarcfg_sensorid_type radarcfg_sensorid;
  using _radarcfg_storeinnvm_type =
    std_msgs::msg::UInt8_<ContainerAllocator>;
  _radarcfg_storeinnvm_type radarcfg_storeinnvm;
  using _radarcfg_sortindex_type =
    std_msgs::msg::UInt8_<ContainerAllocator>;
  _radarcfg_sortindex_type radarcfg_sortindex;
  using _radarcfg_sendextinfo_type =
    std_msgs::msg::UInt8_<ContainerAllocator>;
  _radarcfg_sendextinfo_type radarcfg_sendextinfo;
  using _radarcfg_sendquality_type =
    std_msgs::msg::UInt8_<ContainerAllocator>;
  _radarcfg_sendquality_type radarcfg_sendquality;
  using _radarcfg_ctrlrelay_type =
    std_msgs::msg::UInt8_<ContainerAllocator>;
  _radarcfg_ctrlrelay_type radarcfg_ctrlrelay;
  using _radarcfg_ctrlrelay_valid_type =
    std_msgs::msg::UInt8_<ContainerAllocator>;
  _radarcfg_ctrlrelay_valid_type radarcfg_ctrlrelay_valid;
  using _radarcfg_rcs_threshold_type =
    std_msgs::msg::UInt8_<ContainerAllocator>;
  _radarcfg_rcs_threshold_type radarcfg_rcs_threshold;
  using _radarcfg_rcs_threshold_valid_type =
    std_msgs::msg::UInt8_<ContainerAllocator>;
  _radarcfg_rcs_threshold_valid_type radarcfg_rcs_threshold_valid;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__radarcfg_storeinnvm_valid(
    const std_msgs::msg::UInt8_<ContainerAllocator> & _arg)
  {
    this->radarcfg_storeinnvm_valid = _arg;
    return *this;
  }
  Type & set__radarcfg_sortindex_valid(
    const std_msgs::msg::UInt8_<ContainerAllocator> & _arg)
  {
    this->radarcfg_sortindex_valid = _arg;
    return *this;
  }
  Type & set__radarcfg_sendextinfo_valid(
    const std_msgs::msg::UInt8_<ContainerAllocator> & _arg)
  {
    this->radarcfg_sendextinfo_valid = _arg;
    return *this;
  }
  Type & set__radarcfg_sendquality_valid(
    const std_msgs::msg::UInt8_<ContainerAllocator> & _arg)
  {
    this->radarcfg_sendquality_valid = _arg;
    return *this;
  }
  Type & set__radarcfg_outputtype_valid(
    const std_msgs::msg::UInt8_<ContainerAllocator> & _arg)
  {
    this->radarcfg_outputtype_valid = _arg;
    return *this;
  }
  Type & set__radarcfg_radarpower_valid(
    const std_msgs::msg::UInt8_<ContainerAllocator> & _arg)
  {
    this->radarcfg_radarpower_valid = _arg;
    return *this;
  }
  Type & set__radarcfg_sensorid_valid(
    const std_msgs::msg::UInt8_<ContainerAllocator> & _arg)
  {
    this->radarcfg_sensorid_valid = _arg;
    return *this;
  }
  Type & set__radarcfg_maxdistance_valid(
    const std_msgs::msg::UInt8_<ContainerAllocator> & _arg)
  {
    this->radarcfg_maxdistance_valid = _arg;
    return *this;
  }
  Type & set__radarcfg_maxdistance(
    const std_msgs::msg::UInt8_<ContainerAllocator> & _arg)
  {
    this->radarcfg_maxdistance = _arg;
    return *this;
  }
  Type & set__radarcfg_radarpower(
    const std_msgs::msg::UInt8_<ContainerAllocator> & _arg)
  {
    this->radarcfg_radarpower = _arg;
    return *this;
  }
  Type & set__radarcfg_outputtype(
    const std_msgs::msg::UInt8_<ContainerAllocator> & _arg)
  {
    this->radarcfg_outputtype = _arg;
    return *this;
  }
  Type & set__radarcfg_sensorid(
    const std_msgs::msg::UInt8_<ContainerAllocator> & _arg)
  {
    this->radarcfg_sensorid = _arg;
    return *this;
  }
  Type & set__radarcfg_storeinnvm(
    const std_msgs::msg::UInt8_<ContainerAllocator> & _arg)
  {
    this->radarcfg_storeinnvm = _arg;
    return *this;
  }
  Type & set__radarcfg_sortindex(
    const std_msgs::msg::UInt8_<ContainerAllocator> & _arg)
  {
    this->radarcfg_sortindex = _arg;
    return *this;
  }
  Type & set__radarcfg_sendextinfo(
    const std_msgs::msg::UInt8_<ContainerAllocator> & _arg)
  {
    this->radarcfg_sendextinfo = _arg;
    return *this;
  }
  Type & set__radarcfg_sendquality(
    const std_msgs::msg::UInt8_<ContainerAllocator> & _arg)
  {
    this->radarcfg_sendquality = _arg;
    return *this;
  }
  Type & set__radarcfg_ctrlrelay(
    const std_msgs::msg::UInt8_<ContainerAllocator> & _arg)
  {
    this->radarcfg_ctrlrelay = _arg;
    return *this;
  }
  Type & set__radarcfg_ctrlrelay_valid(
    const std_msgs::msg::UInt8_<ContainerAllocator> & _arg)
  {
    this->radarcfg_ctrlrelay_valid = _arg;
    return *this;
  }
  Type & set__radarcfg_rcs_threshold(
    const std_msgs::msg::UInt8_<ContainerAllocator> & _arg)
  {
    this->radarcfg_rcs_threshold = _arg;
    return *this;
  }
  Type & set__radarcfg_rcs_threshold_valid(
    const std_msgs::msg::UInt8_<ContainerAllocator> & _arg)
  {
    this->radarcfg_rcs_threshold_valid = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    radar_conti_ars408_msgs::msg::RadarConfiguration_<ContainerAllocator> *;
  using ConstRawPtr =
    const radar_conti_ars408_msgs::msg::RadarConfiguration_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<radar_conti_ars408_msgs::msg::RadarConfiguration_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<radar_conti_ars408_msgs::msg::RadarConfiguration_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      radar_conti_ars408_msgs::msg::RadarConfiguration_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<radar_conti_ars408_msgs::msg::RadarConfiguration_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      radar_conti_ars408_msgs::msg::RadarConfiguration_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<radar_conti_ars408_msgs::msg::RadarConfiguration_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<radar_conti_ars408_msgs::msg::RadarConfiguration_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<radar_conti_ars408_msgs::msg::RadarConfiguration_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__radar_conti_ars408_msgs__msg__RadarConfiguration
    std::shared_ptr<radar_conti_ars408_msgs::msg::RadarConfiguration_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__radar_conti_ars408_msgs__msg__RadarConfiguration
    std::shared_ptr<radar_conti_ars408_msgs::msg::RadarConfiguration_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RadarConfiguration_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->radarcfg_storeinnvm_valid != other.radarcfg_storeinnvm_valid) {
      return false;
    }
    if (this->radarcfg_sortindex_valid != other.radarcfg_sortindex_valid) {
      return false;
    }
    if (this->radarcfg_sendextinfo_valid != other.radarcfg_sendextinfo_valid) {
      return false;
    }
    if (this->radarcfg_sendquality_valid != other.radarcfg_sendquality_valid) {
      return false;
    }
    if (this->radarcfg_outputtype_valid != other.radarcfg_outputtype_valid) {
      return false;
    }
    if (this->radarcfg_radarpower_valid != other.radarcfg_radarpower_valid) {
      return false;
    }
    if (this->radarcfg_sensorid_valid != other.radarcfg_sensorid_valid) {
      return false;
    }
    if (this->radarcfg_maxdistance_valid != other.radarcfg_maxdistance_valid) {
      return false;
    }
    if (this->radarcfg_maxdistance != other.radarcfg_maxdistance) {
      return false;
    }
    if (this->radarcfg_radarpower != other.radarcfg_radarpower) {
      return false;
    }
    if (this->radarcfg_outputtype != other.radarcfg_outputtype) {
      return false;
    }
    if (this->radarcfg_sensorid != other.radarcfg_sensorid) {
      return false;
    }
    if (this->radarcfg_storeinnvm != other.radarcfg_storeinnvm) {
      return false;
    }
    if (this->radarcfg_sortindex != other.radarcfg_sortindex) {
      return false;
    }
    if (this->radarcfg_sendextinfo != other.radarcfg_sendextinfo) {
      return false;
    }
    if (this->radarcfg_sendquality != other.radarcfg_sendquality) {
      return false;
    }
    if (this->radarcfg_ctrlrelay != other.radarcfg_ctrlrelay) {
      return false;
    }
    if (this->radarcfg_ctrlrelay_valid != other.radarcfg_ctrlrelay_valid) {
      return false;
    }
    if (this->radarcfg_rcs_threshold != other.radarcfg_rcs_threshold) {
      return false;
    }
    if (this->radarcfg_rcs_threshold_valid != other.radarcfg_rcs_threshold_valid) {
      return false;
    }
    return true;
  }
  bool operator!=(const RadarConfiguration_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RadarConfiguration_

// alias to use template instance with default allocator
using RadarConfiguration =
  radar_conti_ars408_msgs::msg::RadarConfiguration_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace radar_conti_ars408_msgs

#endif  // RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__RADAR_CONFIGURATION__STRUCT_HPP_
