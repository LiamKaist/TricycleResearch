// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from radar_conti_ars408_msgs:msg/ObjectGeneral.idl
// generated code does not contain a copyright notice

#ifndef RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__OBJECT_GENERAL__STRUCT_HPP_
#define RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__OBJECT_GENERAL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'obj_distlong'
// Member 'obj_distlat'
// Member 'obj_vrellong'
// Member 'obj_vrellat'
// Member 'obj_rcs'
#include "std_msgs/msg/detail/float64__struct.hpp"
// Member 'obj_dynprop'
#include "std_msgs/msg/detail/string__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__radar_conti_ars408_msgs__msg__ObjectGeneral __attribute__((deprecated))
#else
# define DEPRECATED__radar_conti_ars408_msgs__msg__ObjectGeneral __declspec(deprecated)
#endif

namespace radar_conti_ars408_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ObjectGeneral_
{
  using Type = ObjectGeneral_<ContainerAllocator>;

  explicit ObjectGeneral_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : obj_distlong(_init),
    obj_distlat(_init),
    obj_vrellong(_init),
    obj_vrellat(_init),
    obj_dynprop(_init),
    obj_rcs(_init)
  {
    (void)_init;
  }

  explicit ObjectGeneral_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : obj_distlong(_alloc, _init),
    obj_distlat(_alloc, _init),
    obj_vrellong(_alloc, _init),
    obj_vrellat(_alloc, _init),
    obj_dynprop(_alloc, _init),
    obj_rcs(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _obj_distlong_type =
    std_msgs::msg::Float64_<ContainerAllocator>;
  _obj_distlong_type obj_distlong;
  using _obj_distlat_type =
    std_msgs::msg::Float64_<ContainerAllocator>;
  _obj_distlat_type obj_distlat;
  using _obj_vrellong_type =
    std_msgs::msg::Float64_<ContainerAllocator>;
  _obj_vrellong_type obj_vrellong;
  using _obj_vrellat_type =
    std_msgs::msg::Float64_<ContainerAllocator>;
  _obj_vrellat_type obj_vrellat;
  using _obj_dynprop_type =
    std_msgs::msg::String_<ContainerAllocator>;
  _obj_dynprop_type obj_dynprop;
  using _obj_rcs_type =
    std_msgs::msg::Float64_<ContainerAllocator>;
  _obj_rcs_type obj_rcs;

  // setters for named parameter idiom
  Type & set__obj_distlong(
    const std_msgs::msg::Float64_<ContainerAllocator> & _arg)
  {
    this->obj_distlong = _arg;
    return *this;
  }
  Type & set__obj_distlat(
    const std_msgs::msg::Float64_<ContainerAllocator> & _arg)
  {
    this->obj_distlat = _arg;
    return *this;
  }
  Type & set__obj_vrellong(
    const std_msgs::msg::Float64_<ContainerAllocator> & _arg)
  {
    this->obj_vrellong = _arg;
    return *this;
  }
  Type & set__obj_vrellat(
    const std_msgs::msg::Float64_<ContainerAllocator> & _arg)
  {
    this->obj_vrellat = _arg;
    return *this;
  }
  Type & set__obj_dynprop(
    const std_msgs::msg::String_<ContainerAllocator> & _arg)
  {
    this->obj_dynprop = _arg;
    return *this;
  }
  Type & set__obj_rcs(
    const std_msgs::msg::Float64_<ContainerAllocator> & _arg)
  {
    this->obj_rcs = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    radar_conti_ars408_msgs::msg::ObjectGeneral_<ContainerAllocator> *;
  using ConstRawPtr =
    const radar_conti_ars408_msgs::msg::ObjectGeneral_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<radar_conti_ars408_msgs::msg::ObjectGeneral_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<radar_conti_ars408_msgs::msg::ObjectGeneral_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      radar_conti_ars408_msgs::msg::ObjectGeneral_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<radar_conti_ars408_msgs::msg::ObjectGeneral_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      radar_conti_ars408_msgs::msg::ObjectGeneral_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<radar_conti_ars408_msgs::msg::ObjectGeneral_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<radar_conti_ars408_msgs::msg::ObjectGeneral_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<radar_conti_ars408_msgs::msg::ObjectGeneral_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__radar_conti_ars408_msgs__msg__ObjectGeneral
    std::shared_ptr<radar_conti_ars408_msgs::msg::ObjectGeneral_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__radar_conti_ars408_msgs__msg__ObjectGeneral
    std::shared_ptr<radar_conti_ars408_msgs::msg::ObjectGeneral_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObjectGeneral_ & other) const
  {
    if (this->obj_distlong != other.obj_distlong) {
      return false;
    }
    if (this->obj_distlat != other.obj_distlat) {
      return false;
    }
    if (this->obj_vrellong != other.obj_vrellong) {
      return false;
    }
    if (this->obj_vrellat != other.obj_vrellat) {
      return false;
    }
    if (this->obj_dynprop != other.obj_dynprop) {
      return false;
    }
    if (this->obj_rcs != other.obj_rcs) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObjectGeneral_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObjectGeneral_

// alias to use template instance with default allocator
using ObjectGeneral =
  radar_conti_ars408_msgs::msg::ObjectGeneral_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace radar_conti_ars408_msgs

#endif  // RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__OBJECT_GENERAL__STRUCT_HPP_
