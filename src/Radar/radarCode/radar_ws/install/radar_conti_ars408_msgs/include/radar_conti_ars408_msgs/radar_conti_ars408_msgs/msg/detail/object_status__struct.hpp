// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from radar_conti_ars408_msgs:msg/ObjectStatus.idl
// generated code does not contain a copyright notice

#ifndef RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__OBJECT_STATUS__STRUCT_HPP_
#define RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__OBJECT_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'obj_nofobjects'
// Member 'obj_meascounter'
// Member 'obj_interfaceversion'
#include "std_msgs/msg/detail/int32__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__radar_conti_ars408_msgs__msg__ObjectStatus __attribute__((deprecated))
#else
# define DEPRECATED__radar_conti_ars408_msgs__msg__ObjectStatus __declspec(deprecated)
#endif

namespace radar_conti_ars408_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ObjectStatus_
{
  using Type = ObjectStatus_<ContainerAllocator>;

  explicit ObjectStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : obj_nofobjects(_init),
    obj_meascounter(_init),
    obj_interfaceversion(_init)
  {
    (void)_init;
  }

  explicit ObjectStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : obj_nofobjects(_alloc, _init),
    obj_meascounter(_alloc, _init),
    obj_interfaceversion(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _obj_nofobjects_type =
    std_msgs::msg::Int32_<ContainerAllocator>;
  _obj_nofobjects_type obj_nofobjects;
  using _obj_meascounter_type =
    std_msgs::msg::Int32_<ContainerAllocator>;
  _obj_meascounter_type obj_meascounter;
  using _obj_interfaceversion_type =
    std_msgs::msg::Int32_<ContainerAllocator>;
  _obj_interfaceversion_type obj_interfaceversion;

  // setters for named parameter idiom
  Type & set__obj_nofobjects(
    const std_msgs::msg::Int32_<ContainerAllocator> & _arg)
  {
    this->obj_nofobjects = _arg;
    return *this;
  }
  Type & set__obj_meascounter(
    const std_msgs::msg::Int32_<ContainerAllocator> & _arg)
  {
    this->obj_meascounter = _arg;
    return *this;
  }
  Type & set__obj_interfaceversion(
    const std_msgs::msg::Int32_<ContainerAllocator> & _arg)
  {
    this->obj_interfaceversion = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    radar_conti_ars408_msgs::msg::ObjectStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const radar_conti_ars408_msgs::msg::ObjectStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<radar_conti_ars408_msgs::msg::ObjectStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<radar_conti_ars408_msgs::msg::ObjectStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      radar_conti_ars408_msgs::msg::ObjectStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<radar_conti_ars408_msgs::msg::ObjectStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      radar_conti_ars408_msgs::msg::ObjectStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<radar_conti_ars408_msgs::msg::ObjectStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<radar_conti_ars408_msgs::msg::ObjectStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<radar_conti_ars408_msgs::msg::ObjectStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__radar_conti_ars408_msgs__msg__ObjectStatus
    std::shared_ptr<radar_conti_ars408_msgs::msg::ObjectStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__radar_conti_ars408_msgs__msg__ObjectStatus
    std::shared_ptr<radar_conti_ars408_msgs::msg::ObjectStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObjectStatus_ & other) const
  {
    if (this->obj_nofobjects != other.obj_nofobjects) {
      return false;
    }
    if (this->obj_meascounter != other.obj_meascounter) {
      return false;
    }
    if (this->obj_interfaceversion != other.obj_interfaceversion) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObjectStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObjectStatus_

// alias to use template instance with default allocator
using ObjectStatus =
  radar_conti_ars408_msgs::msg::ObjectStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace radar_conti_ars408_msgs

#endif  // RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__OBJECT_STATUS__STRUCT_HPP_
