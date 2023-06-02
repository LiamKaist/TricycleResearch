// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from radar_conti_ars408_msgs:msg/ClusterGeneral.idl
// generated code does not contain a copyright notice

#ifndef RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__CLUSTER_GENERAL__STRUCT_HPP_
#define RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__CLUSTER_GENERAL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'cluster_distlong'
// Member 'cluster_distlat'
// Member 'cluster_vrellong'
// Member 'cluster_vrellat'
// Member 'cluster_rcs'
#include "std_msgs/msg/detail/float64__struct.hpp"
// Member 'cluster_dynprop'
#include "std_msgs/msg/detail/int32__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__radar_conti_ars408_msgs__msg__ClusterGeneral __attribute__((deprecated))
#else
# define DEPRECATED__radar_conti_ars408_msgs__msg__ClusterGeneral __declspec(deprecated)
#endif

namespace radar_conti_ars408_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ClusterGeneral_
{
  using Type = ClusterGeneral_<ContainerAllocator>;

  explicit ClusterGeneral_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : cluster_distlong(_init),
    cluster_distlat(_init),
    cluster_vrellong(_init),
    cluster_vrellat(_init),
    cluster_dynprop(_init),
    cluster_rcs(_init)
  {
    (void)_init;
  }

  explicit ClusterGeneral_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : cluster_distlong(_alloc, _init),
    cluster_distlat(_alloc, _init),
    cluster_vrellong(_alloc, _init),
    cluster_vrellat(_alloc, _init),
    cluster_dynprop(_alloc, _init),
    cluster_rcs(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _cluster_distlong_type =
    std_msgs::msg::Float64_<ContainerAllocator>;
  _cluster_distlong_type cluster_distlong;
  using _cluster_distlat_type =
    std_msgs::msg::Float64_<ContainerAllocator>;
  _cluster_distlat_type cluster_distlat;
  using _cluster_vrellong_type =
    std_msgs::msg::Float64_<ContainerAllocator>;
  _cluster_vrellong_type cluster_vrellong;
  using _cluster_vrellat_type =
    std_msgs::msg::Float64_<ContainerAllocator>;
  _cluster_vrellat_type cluster_vrellat;
  using _cluster_dynprop_type =
    std_msgs::msg::Int32_<ContainerAllocator>;
  _cluster_dynprop_type cluster_dynprop;
  using _cluster_rcs_type =
    std_msgs::msg::Float64_<ContainerAllocator>;
  _cluster_rcs_type cluster_rcs;

  // setters for named parameter idiom
  Type & set__cluster_distlong(
    const std_msgs::msg::Float64_<ContainerAllocator> & _arg)
  {
    this->cluster_distlong = _arg;
    return *this;
  }
  Type & set__cluster_distlat(
    const std_msgs::msg::Float64_<ContainerAllocator> & _arg)
  {
    this->cluster_distlat = _arg;
    return *this;
  }
  Type & set__cluster_vrellong(
    const std_msgs::msg::Float64_<ContainerAllocator> & _arg)
  {
    this->cluster_vrellong = _arg;
    return *this;
  }
  Type & set__cluster_vrellat(
    const std_msgs::msg::Float64_<ContainerAllocator> & _arg)
  {
    this->cluster_vrellat = _arg;
    return *this;
  }
  Type & set__cluster_dynprop(
    const std_msgs::msg::Int32_<ContainerAllocator> & _arg)
  {
    this->cluster_dynprop = _arg;
    return *this;
  }
  Type & set__cluster_rcs(
    const std_msgs::msg::Float64_<ContainerAllocator> & _arg)
  {
    this->cluster_rcs = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    radar_conti_ars408_msgs::msg::ClusterGeneral_<ContainerAllocator> *;
  using ConstRawPtr =
    const radar_conti_ars408_msgs::msg::ClusterGeneral_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<radar_conti_ars408_msgs::msg::ClusterGeneral_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<radar_conti_ars408_msgs::msg::ClusterGeneral_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      radar_conti_ars408_msgs::msg::ClusterGeneral_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<radar_conti_ars408_msgs::msg::ClusterGeneral_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      radar_conti_ars408_msgs::msg::ClusterGeneral_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<radar_conti_ars408_msgs::msg::ClusterGeneral_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<radar_conti_ars408_msgs::msg::ClusterGeneral_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<radar_conti_ars408_msgs::msg::ClusterGeneral_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__radar_conti_ars408_msgs__msg__ClusterGeneral
    std::shared_ptr<radar_conti_ars408_msgs::msg::ClusterGeneral_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__radar_conti_ars408_msgs__msg__ClusterGeneral
    std::shared_ptr<radar_conti_ars408_msgs::msg::ClusterGeneral_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ClusterGeneral_ & other) const
  {
    if (this->cluster_distlong != other.cluster_distlong) {
      return false;
    }
    if (this->cluster_distlat != other.cluster_distlat) {
      return false;
    }
    if (this->cluster_vrellong != other.cluster_vrellong) {
      return false;
    }
    if (this->cluster_vrellat != other.cluster_vrellat) {
      return false;
    }
    if (this->cluster_dynprop != other.cluster_dynprop) {
      return false;
    }
    if (this->cluster_rcs != other.cluster_rcs) {
      return false;
    }
    return true;
  }
  bool operator!=(const ClusterGeneral_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ClusterGeneral_

// alias to use template instance with default allocator
using ClusterGeneral =
  radar_conti_ars408_msgs::msg::ClusterGeneral_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace radar_conti_ars408_msgs

#endif  // RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__CLUSTER_GENERAL__STRUCT_HPP_
