// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from radar_conti_ars408_msgs:msg/ClusterList.idl
// generated code does not contain a copyright notice

#ifndef RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__CLUSTER_LIST__STRUCT_HPP_
#define RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__CLUSTER_LIST__STRUCT_HPP_

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
// Member 'cluster_count'
#include "std_msgs/msg/detail/int32__struct.hpp"
// Member 'clusters'
#include "radar_conti_ars408_msgs/msg/detail/cluster__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__radar_conti_ars408_msgs__msg__ClusterList __attribute__((deprecated))
#else
# define DEPRECATED__radar_conti_ars408_msgs__msg__ClusterList __declspec(deprecated)
#endif

namespace radar_conti_ars408_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ClusterList_
{
  using Type = ClusterList_<ContainerAllocator>;

  explicit ClusterList_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    cluster_count(_init)
  {
    (void)_init;
  }

  explicit ClusterList_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    cluster_count(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _cluster_count_type =
    std_msgs::msg::Int32_<ContainerAllocator>;
  _cluster_count_type cluster_count;
  using _clusters_type =
    std::vector<radar_conti_ars408_msgs::msg::Cluster_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<radar_conti_ars408_msgs::msg::Cluster_<ContainerAllocator>>>;
  _clusters_type clusters;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__cluster_count(
    const std_msgs::msg::Int32_<ContainerAllocator> & _arg)
  {
    this->cluster_count = _arg;
    return *this;
  }
  Type & set__clusters(
    const std::vector<radar_conti_ars408_msgs::msg::Cluster_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<radar_conti_ars408_msgs::msg::Cluster_<ContainerAllocator>>> & _arg)
  {
    this->clusters = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    radar_conti_ars408_msgs::msg::ClusterList_<ContainerAllocator> *;
  using ConstRawPtr =
    const radar_conti_ars408_msgs::msg::ClusterList_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<radar_conti_ars408_msgs::msg::ClusterList_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<radar_conti_ars408_msgs::msg::ClusterList_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      radar_conti_ars408_msgs::msg::ClusterList_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<radar_conti_ars408_msgs::msg::ClusterList_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      radar_conti_ars408_msgs::msg::ClusterList_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<radar_conti_ars408_msgs::msg::ClusterList_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<radar_conti_ars408_msgs::msg::ClusterList_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<radar_conti_ars408_msgs::msg::ClusterList_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__radar_conti_ars408_msgs__msg__ClusterList
    std::shared_ptr<radar_conti_ars408_msgs::msg::ClusterList_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__radar_conti_ars408_msgs__msg__ClusterList
    std::shared_ptr<radar_conti_ars408_msgs::msg::ClusterList_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ClusterList_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->cluster_count != other.cluster_count) {
      return false;
    }
    if (this->clusters != other.clusters) {
      return false;
    }
    return true;
  }
  bool operator!=(const ClusterList_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ClusterList_

// alias to use template instance with default allocator
using ClusterList =
  radar_conti_ars408_msgs::msg::ClusterList_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace radar_conti_ars408_msgs

#endif  // RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__CLUSTER_LIST__STRUCT_HPP_
