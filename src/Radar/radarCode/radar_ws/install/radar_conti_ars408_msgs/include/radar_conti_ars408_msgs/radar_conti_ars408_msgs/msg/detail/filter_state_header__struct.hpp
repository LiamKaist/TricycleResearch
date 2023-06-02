// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from radar_conti_ars408_msgs:msg/FilterStateHeader.idl
// generated code does not contain a copyright notice

#ifndef RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__FILTER_STATE_HEADER__STRUCT_HPP_
#define RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__FILTER_STATE_HEADER__STRUCT_HPP_

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
// Member 'filterstate_nofclusterfiltercfg'
// Member 'filterstate_nofobjectfiltercfg'
#include "std_msgs/msg/detail/u_int8__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__radar_conti_ars408_msgs__msg__FilterStateHeader __attribute__((deprecated))
#else
# define DEPRECATED__radar_conti_ars408_msgs__msg__FilterStateHeader __declspec(deprecated)
#endif

namespace radar_conti_ars408_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FilterStateHeader_
{
  using Type = FilterStateHeader_<ContainerAllocator>;

  explicit FilterStateHeader_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    filterstate_nofclusterfiltercfg(_init),
    filterstate_nofobjectfiltercfg(_init)
  {
    (void)_init;
  }

  explicit FilterStateHeader_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    filterstate_nofclusterfiltercfg(_alloc, _init),
    filterstate_nofobjectfiltercfg(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _filterstate_nofclusterfiltercfg_type =
    std_msgs::msg::UInt8_<ContainerAllocator>;
  _filterstate_nofclusterfiltercfg_type filterstate_nofclusterfiltercfg;
  using _filterstate_nofobjectfiltercfg_type =
    std_msgs::msg::UInt8_<ContainerAllocator>;
  _filterstate_nofobjectfiltercfg_type filterstate_nofobjectfiltercfg;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__filterstate_nofclusterfiltercfg(
    const std_msgs::msg::UInt8_<ContainerAllocator> & _arg)
  {
    this->filterstate_nofclusterfiltercfg = _arg;
    return *this;
  }
  Type & set__filterstate_nofobjectfiltercfg(
    const std_msgs::msg::UInt8_<ContainerAllocator> & _arg)
  {
    this->filterstate_nofobjectfiltercfg = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    radar_conti_ars408_msgs::msg::FilterStateHeader_<ContainerAllocator> *;
  using ConstRawPtr =
    const radar_conti_ars408_msgs::msg::FilterStateHeader_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<radar_conti_ars408_msgs::msg::FilterStateHeader_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<radar_conti_ars408_msgs::msg::FilterStateHeader_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      radar_conti_ars408_msgs::msg::FilterStateHeader_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<radar_conti_ars408_msgs::msg::FilterStateHeader_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      radar_conti_ars408_msgs::msg::FilterStateHeader_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<radar_conti_ars408_msgs::msg::FilterStateHeader_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<radar_conti_ars408_msgs::msg::FilterStateHeader_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<radar_conti_ars408_msgs::msg::FilterStateHeader_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__radar_conti_ars408_msgs__msg__FilterStateHeader
    std::shared_ptr<radar_conti_ars408_msgs::msg::FilterStateHeader_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__radar_conti_ars408_msgs__msg__FilterStateHeader
    std::shared_ptr<radar_conti_ars408_msgs::msg::FilterStateHeader_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FilterStateHeader_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->filterstate_nofclusterfiltercfg != other.filterstate_nofclusterfiltercfg) {
      return false;
    }
    if (this->filterstate_nofobjectfiltercfg != other.filterstate_nofobjectfiltercfg) {
      return false;
    }
    return true;
  }
  bool operator!=(const FilterStateHeader_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FilterStateHeader_

// alias to use template instance with default allocator
using FilterStateHeader =
  radar_conti_ars408_msgs::msg::FilterStateHeader_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace radar_conti_ars408_msgs

#endif  // RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__FILTER_STATE_HEADER__STRUCT_HPP_
