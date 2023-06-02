// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from radar_conti_ars408_msgs:msg/ClusterStatus.idl
// generated code does not contain a copyright notice

#ifndef RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__CLUSTER_STATUS__STRUCT_HPP_
#define RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__CLUSTER_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'cluster_nofclustersnear'
// Member 'cluster_nofclustersfar'
// Member 'cluster_meascounter'
// Member 'cluster_interfaceversion'
#include "std_msgs/msg/detail/int32__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__radar_conti_ars408_msgs__msg__ClusterStatus __attribute__((deprecated))
#else
# define DEPRECATED__radar_conti_ars408_msgs__msg__ClusterStatus __declspec(deprecated)
#endif

namespace radar_conti_ars408_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ClusterStatus_
{
  using Type = ClusterStatus_<ContainerAllocator>;

  explicit ClusterStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : cluster_nofclustersnear(_init),
    cluster_nofclustersfar(_init),
    cluster_meascounter(_init),
    cluster_interfaceversion(_init)
  {
    (void)_init;
  }

  explicit ClusterStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : cluster_nofclustersnear(_alloc, _init),
    cluster_nofclustersfar(_alloc, _init),
    cluster_meascounter(_alloc, _init),
    cluster_interfaceversion(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _cluster_nofclustersnear_type =
    std_msgs::msg::Int32_<ContainerAllocator>;
  _cluster_nofclustersnear_type cluster_nofclustersnear;
  using _cluster_nofclustersfar_type =
    std_msgs::msg::Int32_<ContainerAllocator>;
  _cluster_nofclustersfar_type cluster_nofclustersfar;
  using _cluster_meascounter_type =
    std_msgs::msg::Int32_<ContainerAllocator>;
  _cluster_meascounter_type cluster_meascounter;
  using _cluster_interfaceversion_type =
    std_msgs::msg::Int32_<ContainerAllocator>;
  _cluster_interfaceversion_type cluster_interfaceversion;

  // setters for named parameter idiom
  Type & set__cluster_nofclustersnear(
    const std_msgs::msg::Int32_<ContainerAllocator> & _arg)
  {
    this->cluster_nofclustersnear = _arg;
    return *this;
  }
  Type & set__cluster_nofclustersfar(
    const std_msgs::msg::Int32_<ContainerAllocator> & _arg)
  {
    this->cluster_nofclustersfar = _arg;
    return *this;
  }
  Type & set__cluster_meascounter(
    const std_msgs::msg::Int32_<ContainerAllocator> & _arg)
  {
    this->cluster_meascounter = _arg;
    return *this;
  }
  Type & set__cluster_interfaceversion(
    const std_msgs::msg::Int32_<ContainerAllocator> & _arg)
  {
    this->cluster_interfaceversion = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    radar_conti_ars408_msgs::msg::ClusterStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const radar_conti_ars408_msgs::msg::ClusterStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<radar_conti_ars408_msgs::msg::ClusterStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<radar_conti_ars408_msgs::msg::ClusterStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      radar_conti_ars408_msgs::msg::ClusterStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<radar_conti_ars408_msgs::msg::ClusterStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      radar_conti_ars408_msgs::msg::ClusterStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<radar_conti_ars408_msgs::msg::ClusterStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<radar_conti_ars408_msgs::msg::ClusterStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<radar_conti_ars408_msgs::msg::ClusterStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__radar_conti_ars408_msgs__msg__ClusterStatus
    std::shared_ptr<radar_conti_ars408_msgs::msg::ClusterStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__radar_conti_ars408_msgs__msg__ClusterStatus
    std::shared_ptr<radar_conti_ars408_msgs::msg::ClusterStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ClusterStatus_ & other) const
  {
    if (this->cluster_nofclustersnear != other.cluster_nofclustersnear) {
      return false;
    }
    if (this->cluster_nofclustersfar != other.cluster_nofclustersfar) {
      return false;
    }
    if (this->cluster_meascounter != other.cluster_meascounter) {
      return false;
    }
    if (this->cluster_interfaceversion != other.cluster_interfaceversion) {
      return false;
    }
    return true;
  }
  bool operator!=(const ClusterStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ClusterStatus_

// alias to use template instance with default allocator
using ClusterStatus =
  radar_conti_ars408_msgs::msg::ClusterStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace radar_conti_ars408_msgs

#endif  // RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__CLUSTER_STATUS__STRUCT_HPP_
