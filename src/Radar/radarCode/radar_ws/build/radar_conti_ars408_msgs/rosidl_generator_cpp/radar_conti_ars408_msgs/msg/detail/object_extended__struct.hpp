// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from radar_conti_ars408_msgs:msg/ObjectExtended.idl
// generated code does not contain a copyright notice

#ifndef RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__OBJECT_EXTENDED__STRUCT_HPP_
#define RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__OBJECT_EXTENDED__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'obj_arellong'
// Member 'obj_arellat'
// Member 'obj_orientationangle'
// Member 'obj_length'
// Member 'obj_width'
#include "std_msgs/msg/detail/float64__struct.hpp"
// Member 'obj_class'
#include "std_msgs/msg/detail/string__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__radar_conti_ars408_msgs__msg__ObjectExtended __attribute__((deprecated))
#else
# define DEPRECATED__radar_conti_ars408_msgs__msg__ObjectExtended __declspec(deprecated)
#endif

namespace radar_conti_ars408_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ObjectExtended_
{
  using Type = ObjectExtended_<ContainerAllocator>;

  explicit ObjectExtended_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : obj_arellong(_init),
    obj_arellat(_init),
    obj_class(_init),
    obj_orientationangle(_init),
    obj_length(_init),
    obj_width(_init)
  {
    (void)_init;
  }

  explicit ObjectExtended_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : obj_arellong(_alloc, _init),
    obj_arellat(_alloc, _init),
    obj_class(_alloc, _init),
    obj_orientationangle(_alloc, _init),
    obj_length(_alloc, _init),
    obj_width(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _obj_arellong_type =
    std_msgs::msg::Float64_<ContainerAllocator>;
  _obj_arellong_type obj_arellong;
  using _obj_arellat_type =
    std_msgs::msg::Float64_<ContainerAllocator>;
  _obj_arellat_type obj_arellat;
  using _obj_class_type =
    std_msgs::msg::String_<ContainerAllocator>;
  _obj_class_type obj_class;
  using _obj_orientationangle_type =
    std_msgs::msg::Float64_<ContainerAllocator>;
  _obj_orientationangle_type obj_orientationangle;
  using _obj_length_type =
    std_msgs::msg::Float64_<ContainerAllocator>;
  _obj_length_type obj_length;
  using _obj_width_type =
    std_msgs::msg::Float64_<ContainerAllocator>;
  _obj_width_type obj_width;

  // setters for named parameter idiom
  Type & set__obj_arellong(
    const std_msgs::msg::Float64_<ContainerAllocator> & _arg)
  {
    this->obj_arellong = _arg;
    return *this;
  }
  Type & set__obj_arellat(
    const std_msgs::msg::Float64_<ContainerAllocator> & _arg)
  {
    this->obj_arellat = _arg;
    return *this;
  }
  Type & set__obj_class(
    const std_msgs::msg::String_<ContainerAllocator> & _arg)
  {
    this->obj_class = _arg;
    return *this;
  }
  Type & set__obj_orientationangle(
    const std_msgs::msg::Float64_<ContainerAllocator> & _arg)
  {
    this->obj_orientationangle = _arg;
    return *this;
  }
  Type & set__obj_length(
    const std_msgs::msg::Float64_<ContainerAllocator> & _arg)
  {
    this->obj_length = _arg;
    return *this;
  }
  Type & set__obj_width(
    const std_msgs::msg::Float64_<ContainerAllocator> & _arg)
  {
    this->obj_width = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    radar_conti_ars408_msgs::msg::ObjectExtended_<ContainerAllocator> *;
  using ConstRawPtr =
    const radar_conti_ars408_msgs::msg::ObjectExtended_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<radar_conti_ars408_msgs::msg::ObjectExtended_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<radar_conti_ars408_msgs::msg::ObjectExtended_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      radar_conti_ars408_msgs::msg::ObjectExtended_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<radar_conti_ars408_msgs::msg::ObjectExtended_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      radar_conti_ars408_msgs::msg::ObjectExtended_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<radar_conti_ars408_msgs::msg::ObjectExtended_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<radar_conti_ars408_msgs::msg::ObjectExtended_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<radar_conti_ars408_msgs::msg::ObjectExtended_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__radar_conti_ars408_msgs__msg__ObjectExtended
    std::shared_ptr<radar_conti_ars408_msgs::msg::ObjectExtended_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__radar_conti_ars408_msgs__msg__ObjectExtended
    std::shared_ptr<radar_conti_ars408_msgs::msg::ObjectExtended_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObjectExtended_ & other) const
  {
    if (this->obj_arellong != other.obj_arellong) {
      return false;
    }
    if (this->obj_arellat != other.obj_arellat) {
      return false;
    }
    if (this->obj_class != other.obj_class) {
      return false;
    }
    if (this->obj_orientationangle != other.obj_orientationangle) {
      return false;
    }
    if (this->obj_length != other.obj_length) {
      return false;
    }
    if (this->obj_width != other.obj_width) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObjectExtended_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObjectExtended_

// alias to use template instance with default allocator
using ObjectExtended =
  radar_conti_ars408_msgs::msg::ObjectExtended_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace radar_conti_ars408_msgs

#endif  // RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__OBJECT_EXTENDED__STRUCT_HPP_
