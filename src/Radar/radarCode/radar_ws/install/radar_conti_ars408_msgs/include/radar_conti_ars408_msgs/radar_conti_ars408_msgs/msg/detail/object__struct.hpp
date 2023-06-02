// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from radar_conti_ars408_msgs:msg/Object.idl
// generated code does not contain a copyright notice

#ifndef RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__OBJECT__STRUCT_HPP_
#define RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__OBJECT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'obj_id'
#include "std_msgs/msg/detail/int32__struct.hpp"
// Member 'object_general'
#include "radar_conti_ars408_msgs/msg/detail/object_general__struct.hpp"
// Member 'object_extended'
#include "radar_conti_ars408_msgs/msg/detail/object_extended__struct.hpp"
// Member 'object_quality'
#include "radar_conti_ars408_msgs/msg/detail/object_quality__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__radar_conti_ars408_msgs__msg__Object __attribute__((deprecated))
#else
# define DEPRECATED__radar_conti_ars408_msgs__msg__Object __declspec(deprecated)
#endif

namespace radar_conti_ars408_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Object_
{
  using Type = Object_<ContainerAllocator>;

  explicit Object_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : obj_id(_init),
    object_general(_init),
    object_extended(_init),
    object_quality(_init)
  {
    (void)_init;
  }

  explicit Object_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : obj_id(_alloc, _init),
    object_general(_alloc, _init),
    object_extended(_alloc, _init),
    object_quality(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _obj_id_type =
    std_msgs::msg::Int32_<ContainerAllocator>;
  _obj_id_type obj_id;
  using _object_general_type =
    radar_conti_ars408_msgs::msg::ObjectGeneral_<ContainerAllocator>;
  _object_general_type object_general;
  using _object_extended_type =
    radar_conti_ars408_msgs::msg::ObjectExtended_<ContainerAllocator>;
  _object_extended_type object_extended;
  using _object_quality_type =
    radar_conti_ars408_msgs::msg::ObjectQuality_<ContainerAllocator>;
  _object_quality_type object_quality;

  // setters for named parameter idiom
  Type & set__obj_id(
    const std_msgs::msg::Int32_<ContainerAllocator> & _arg)
  {
    this->obj_id = _arg;
    return *this;
  }
  Type & set__object_general(
    const radar_conti_ars408_msgs::msg::ObjectGeneral_<ContainerAllocator> & _arg)
  {
    this->object_general = _arg;
    return *this;
  }
  Type & set__object_extended(
    const radar_conti_ars408_msgs::msg::ObjectExtended_<ContainerAllocator> & _arg)
  {
    this->object_extended = _arg;
    return *this;
  }
  Type & set__object_quality(
    const radar_conti_ars408_msgs::msg::ObjectQuality_<ContainerAllocator> & _arg)
  {
    this->object_quality = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    radar_conti_ars408_msgs::msg::Object_<ContainerAllocator> *;
  using ConstRawPtr =
    const radar_conti_ars408_msgs::msg::Object_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<radar_conti_ars408_msgs::msg::Object_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<radar_conti_ars408_msgs::msg::Object_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      radar_conti_ars408_msgs::msg::Object_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<radar_conti_ars408_msgs::msg::Object_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      radar_conti_ars408_msgs::msg::Object_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<radar_conti_ars408_msgs::msg::Object_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<radar_conti_ars408_msgs::msg::Object_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<radar_conti_ars408_msgs::msg::Object_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__radar_conti_ars408_msgs__msg__Object
    std::shared_ptr<radar_conti_ars408_msgs::msg::Object_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__radar_conti_ars408_msgs__msg__Object
    std::shared_ptr<radar_conti_ars408_msgs::msg::Object_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Object_ & other) const
  {
    if (this->obj_id != other.obj_id) {
      return false;
    }
    if (this->object_general != other.object_general) {
      return false;
    }
    if (this->object_extended != other.object_extended) {
      return false;
    }
    if (this->object_quality != other.object_quality) {
      return false;
    }
    return true;
  }
  bool operator!=(const Object_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Object_

// alias to use template instance with default allocator
using Object =
  radar_conti_ars408_msgs::msg::Object_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace radar_conti_ars408_msgs

#endif  // RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__OBJECT__STRUCT_HPP_
