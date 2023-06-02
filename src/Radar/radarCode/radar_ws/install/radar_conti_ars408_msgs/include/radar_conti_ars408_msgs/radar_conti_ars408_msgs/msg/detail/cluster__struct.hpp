// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from radar_conti_ars408_msgs:msg/Cluster.idl
// generated code does not contain a copyright notice

#ifndef RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__CLUSTER__STRUCT_HPP_
#define RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__CLUSTER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'cluster_id'
#include "std_msgs/msg/detail/int32__struct.hpp"
// Member 'cluster_general'
#include "radar_conti_ars408_msgs/msg/detail/cluster_general__struct.hpp"
// Member 'cluster_quality'
#include "radar_conti_ars408_msgs/msg/detail/cluster_quality__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__radar_conti_ars408_msgs__msg__Cluster __attribute__((deprecated))
#else
# define DEPRECATED__radar_conti_ars408_msgs__msg__Cluster __declspec(deprecated)
#endif

namespace radar_conti_ars408_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Cluster_
{
  using Type = Cluster_<ContainerAllocator>;

  explicit Cluster_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : cluster_id(_init),
    cluster_general(_init),
    cluster_quality(_init)
  {
    (void)_init;
  }

  explicit Cluster_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : cluster_id(_alloc, _init),
    cluster_general(_alloc, _init),
    cluster_quality(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _cluster_id_type =
    std_msgs::msg::Int32_<ContainerAllocator>;
  _cluster_id_type cluster_id;
  using _cluster_general_type =
    radar_conti_ars408_msgs::msg::ClusterGeneral_<ContainerAllocator>;
  _cluster_general_type cluster_general;
  using _cluster_quality_type =
    radar_conti_ars408_msgs::msg::ClusterQuality_<ContainerAllocator>;
  _cluster_quality_type cluster_quality;

  // setters for named parameter idiom
  Type & set__cluster_id(
    const std_msgs::msg::Int32_<ContainerAllocator> & _arg)
  {
    this->cluster_id = _arg;
    return *this;
  }
  Type & set__cluster_general(
    const radar_conti_ars408_msgs::msg::ClusterGeneral_<ContainerAllocator> & _arg)
  {
    this->cluster_general = _arg;
    return *this;
  }
  Type & set__cluster_quality(
    const radar_conti_ars408_msgs::msg::ClusterQuality_<ContainerAllocator> & _arg)
  {
    this->cluster_quality = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    radar_conti_ars408_msgs::msg::Cluster_<ContainerAllocator> *;
  using ConstRawPtr =
    const radar_conti_ars408_msgs::msg::Cluster_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<radar_conti_ars408_msgs::msg::Cluster_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<radar_conti_ars408_msgs::msg::Cluster_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      radar_conti_ars408_msgs::msg::Cluster_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<radar_conti_ars408_msgs::msg::Cluster_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      radar_conti_ars408_msgs::msg::Cluster_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<radar_conti_ars408_msgs::msg::Cluster_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<radar_conti_ars408_msgs::msg::Cluster_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<radar_conti_ars408_msgs::msg::Cluster_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__radar_conti_ars408_msgs__msg__Cluster
    std::shared_ptr<radar_conti_ars408_msgs::msg::Cluster_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__radar_conti_ars408_msgs__msg__Cluster
    std::shared_ptr<radar_conti_ars408_msgs::msg::Cluster_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Cluster_ & other) const
  {
    if (this->cluster_id != other.cluster_id) {
      return false;
    }
    if (this->cluster_general != other.cluster_general) {
      return false;
    }
    if (this->cluster_quality != other.cluster_quality) {
      return false;
    }
    return true;
  }
  bool operator!=(const Cluster_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Cluster_

// alias to use template instance with default allocator
using Cluster =
  radar_conti_ars408_msgs::msg::Cluster_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace radar_conti_ars408_msgs

#endif  // RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__CLUSTER__STRUCT_HPP_
