// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from radar_conti_ars408_msgs:msg/ClusterQuality.idl
// generated code does not contain a copyright notice

#ifndef RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__CLUSTER_QUALITY__STRUCT_HPP_
#define RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__CLUSTER_QUALITY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'cluster_distlong_rms'
// Member 'cluster_distlat_rms'
// Member 'cluster_vrellong_rms'
// Member 'cluster_vrellat_rms'
#include "std_msgs/msg/detail/float64__struct.hpp"
// Member 'cluster_pdh0'
// Member 'cluster_invalidstate'
// Member 'cluster_ambigstate'
#include "std_msgs/msg/detail/string__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__radar_conti_ars408_msgs__msg__ClusterQuality __attribute__((deprecated))
#else
# define DEPRECATED__radar_conti_ars408_msgs__msg__ClusterQuality __declspec(deprecated)
#endif

namespace radar_conti_ars408_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ClusterQuality_
{
  using Type = ClusterQuality_<ContainerAllocator>;

  explicit ClusterQuality_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : cluster_distlong_rms(_init),
    cluster_distlat_rms(_init),
    cluster_vrellong_rms(_init),
    cluster_vrellat_rms(_init),
    cluster_pdh0(_init),
    cluster_invalidstate(_init),
    cluster_ambigstate(_init)
  {
    (void)_init;
  }

  explicit ClusterQuality_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : cluster_distlong_rms(_alloc, _init),
    cluster_distlat_rms(_alloc, _init),
    cluster_vrellong_rms(_alloc, _init),
    cluster_vrellat_rms(_alloc, _init),
    cluster_pdh0(_alloc, _init),
    cluster_invalidstate(_alloc, _init),
    cluster_ambigstate(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _cluster_distlong_rms_type =
    std_msgs::msg::Float64_<ContainerAllocator>;
  _cluster_distlong_rms_type cluster_distlong_rms;
  using _cluster_distlat_rms_type =
    std_msgs::msg::Float64_<ContainerAllocator>;
  _cluster_distlat_rms_type cluster_distlat_rms;
  using _cluster_vrellong_rms_type =
    std_msgs::msg::Float64_<ContainerAllocator>;
  _cluster_vrellong_rms_type cluster_vrellong_rms;
  using _cluster_vrellat_rms_type =
    std_msgs::msg::Float64_<ContainerAllocator>;
  _cluster_vrellat_rms_type cluster_vrellat_rms;
  using _cluster_pdh0_type =
    std_msgs::msg::String_<ContainerAllocator>;
  _cluster_pdh0_type cluster_pdh0;
  using _cluster_invalidstate_type =
    std_msgs::msg::String_<ContainerAllocator>;
  _cluster_invalidstate_type cluster_invalidstate;
  using _cluster_ambigstate_type =
    std_msgs::msg::String_<ContainerAllocator>;
  _cluster_ambigstate_type cluster_ambigstate;

  // setters for named parameter idiom
  Type & set__cluster_distlong_rms(
    const std_msgs::msg::Float64_<ContainerAllocator> & _arg)
  {
    this->cluster_distlong_rms = _arg;
    return *this;
  }
  Type & set__cluster_distlat_rms(
    const std_msgs::msg::Float64_<ContainerAllocator> & _arg)
  {
    this->cluster_distlat_rms = _arg;
    return *this;
  }
  Type & set__cluster_vrellong_rms(
    const std_msgs::msg::Float64_<ContainerAllocator> & _arg)
  {
    this->cluster_vrellong_rms = _arg;
    return *this;
  }
  Type & set__cluster_vrellat_rms(
    const std_msgs::msg::Float64_<ContainerAllocator> & _arg)
  {
    this->cluster_vrellat_rms = _arg;
    return *this;
  }
  Type & set__cluster_pdh0(
    const std_msgs::msg::String_<ContainerAllocator> & _arg)
  {
    this->cluster_pdh0 = _arg;
    return *this;
  }
  Type & set__cluster_invalidstate(
    const std_msgs::msg::String_<ContainerAllocator> & _arg)
  {
    this->cluster_invalidstate = _arg;
    return *this;
  }
  Type & set__cluster_ambigstate(
    const std_msgs::msg::String_<ContainerAllocator> & _arg)
  {
    this->cluster_ambigstate = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    radar_conti_ars408_msgs::msg::ClusterQuality_<ContainerAllocator> *;
  using ConstRawPtr =
    const radar_conti_ars408_msgs::msg::ClusterQuality_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<radar_conti_ars408_msgs::msg::ClusterQuality_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<radar_conti_ars408_msgs::msg::ClusterQuality_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      radar_conti_ars408_msgs::msg::ClusterQuality_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<radar_conti_ars408_msgs::msg::ClusterQuality_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      radar_conti_ars408_msgs::msg::ClusterQuality_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<radar_conti_ars408_msgs::msg::ClusterQuality_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<radar_conti_ars408_msgs::msg::ClusterQuality_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<radar_conti_ars408_msgs::msg::ClusterQuality_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__radar_conti_ars408_msgs__msg__ClusterQuality
    std::shared_ptr<radar_conti_ars408_msgs::msg::ClusterQuality_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__radar_conti_ars408_msgs__msg__ClusterQuality
    std::shared_ptr<radar_conti_ars408_msgs::msg::ClusterQuality_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ClusterQuality_ & other) const
  {
    if (this->cluster_distlong_rms != other.cluster_distlong_rms) {
      return false;
    }
    if (this->cluster_distlat_rms != other.cluster_distlat_rms) {
      return false;
    }
    if (this->cluster_vrellong_rms != other.cluster_vrellong_rms) {
      return false;
    }
    if (this->cluster_vrellat_rms != other.cluster_vrellat_rms) {
      return false;
    }
    if (this->cluster_pdh0 != other.cluster_pdh0) {
      return false;
    }
    if (this->cluster_invalidstate != other.cluster_invalidstate) {
      return false;
    }
    if (this->cluster_ambigstate != other.cluster_ambigstate) {
      return false;
    }
    return true;
  }
  bool operator!=(const ClusterQuality_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ClusterQuality_

// alias to use template instance with default allocator
using ClusterQuality =
  radar_conti_ars408_msgs::msg::ClusterQuality_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace radar_conti_ars408_msgs

#endif  // RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__CLUSTER_QUALITY__STRUCT_HPP_
