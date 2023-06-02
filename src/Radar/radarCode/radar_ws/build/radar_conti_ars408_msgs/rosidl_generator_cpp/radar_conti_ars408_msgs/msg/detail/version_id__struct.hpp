// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from radar_conti_ars408_msgs:msg/VersionID.idl
// generated code does not contain a copyright notice

#ifndef RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__VERSION_ID__STRUCT_HPP_
#define RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__VERSION_ID__STRUCT_HPP_

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
// Member 'version_majorrelease'
// Member 'version_minorrelease'
// Member 'version_patchlevel'
#include "std_msgs/msg/detail/int32__struct.hpp"
// Member 'version_extendedrange'
// Member 'version_countrycode'
#include "std_msgs/msg/detail/string__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__radar_conti_ars408_msgs__msg__VersionID __attribute__((deprecated))
#else
# define DEPRECATED__radar_conti_ars408_msgs__msg__VersionID __declspec(deprecated)
#endif

namespace radar_conti_ars408_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VersionID_
{
  using Type = VersionID_<ContainerAllocator>;

  explicit VersionID_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    version_majorrelease(_init),
    version_minorrelease(_init),
    version_patchlevel(_init),
    version_extendedrange(_init),
    version_countrycode(_init)
  {
    (void)_init;
  }

  explicit VersionID_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    version_majorrelease(_alloc, _init),
    version_minorrelease(_alloc, _init),
    version_patchlevel(_alloc, _init),
    version_extendedrange(_alloc, _init),
    version_countrycode(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _version_majorrelease_type =
    std_msgs::msg::Int32_<ContainerAllocator>;
  _version_majorrelease_type version_majorrelease;
  using _version_minorrelease_type =
    std_msgs::msg::Int32_<ContainerAllocator>;
  _version_minorrelease_type version_minorrelease;
  using _version_patchlevel_type =
    std_msgs::msg::Int32_<ContainerAllocator>;
  _version_patchlevel_type version_patchlevel;
  using _version_extendedrange_type =
    std_msgs::msg::String_<ContainerAllocator>;
  _version_extendedrange_type version_extendedrange;
  using _version_countrycode_type =
    std_msgs::msg::String_<ContainerAllocator>;
  _version_countrycode_type version_countrycode;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__version_majorrelease(
    const std_msgs::msg::Int32_<ContainerAllocator> & _arg)
  {
    this->version_majorrelease = _arg;
    return *this;
  }
  Type & set__version_minorrelease(
    const std_msgs::msg::Int32_<ContainerAllocator> & _arg)
  {
    this->version_minorrelease = _arg;
    return *this;
  }
  Type & set__version_patchlevel(
    const std_msgs::msg::Int32_<ContainerAllocator> & _arg)
  {
    this->version_patchlevel = _arg;
    return *this;
  }
  Type & set__version_extendedrange(
    const std_msgs::msg::String_<ContainerAllocator> & _arg)
  {
    this->version_extendedrange = _arg;
    return *this;
  }
  Type & set__version_countrycode(
    const std_msgs::msg::String_<ContainerAllocator> & _arg)
  {
    this->version_countrycode = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    radar_conti_ars408_msgs::msg::VersionID_<ContainerAllocator> *;
  using ConstRawPtr =
    const radar_conti_ars408_msgs::msg::VersionID_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<radar_conti_ars408_msgs::msg::VersionID_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<radar_conti_ars408_msgs::msg::VersionID_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      radar_conti_ars408_msgs::msg::VersionID_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<radar_conti_ars408_msgs::msg::VersionID_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      radar_conti_ars408_msgs::msg::VersionID_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<radar_conti_ars408_msgs::msg::VersionID_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<radar_conti_ars408_msgs::msg::VersionID_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<radar_conti_ars408_msgs::msg::VersionID_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__radar_conti_ars408_msgs__msg__VersionID
    std::shared_ptr<radar_conti_ars408_msgs::msg::VersionID_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__radar_conti_ars408_msgs__msg__VersionID
    std::shared_ptr<radar_conti_ars408_msgs::msg::VersionID_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VersionID_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->version_majorrelease != other.version_majorrelease) {
      return false;
    }
    if (this->version_minorrelease != other.version_minorrelease) {
      return false;
    }
    if (this->version_patchlevel != other.version_patchlevel) {
      return false;
    }
    if (this->version_extendedrange != other.version_extendedrange) {
      return false;
    }
    if (this->version_countrycode != other.version_countrycode) {
      return false;
    }
    return true;
  }
  bool operator!=(const VersionID_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VersionID_

// alias to use template instance with default allocator
using VersionID =
  radar_conti_ars408_msgs::msg::VersionID_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace radar_conti_ars408_msgs

#endif  // RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__VERSION_ID__STRUCT_HPP_
