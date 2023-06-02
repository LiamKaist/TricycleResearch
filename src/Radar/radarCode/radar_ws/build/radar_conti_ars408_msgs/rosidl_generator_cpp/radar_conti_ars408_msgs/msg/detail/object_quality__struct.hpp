// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from radar_conti_ars408_msgs:msg/ObjectQuality.idl
// generated code does not contain a copyright notice

#ifndef RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__OBJECT_QUALITY__STRUCT_HPP_
#define RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__OBJECT_QUALITY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'obj_distlong_rms'
// Member 'obj_distlat_rms'
// Member 'obj_vrellong_rms'
// Member 'obj_vrellat_rms'
// Member 'obj_arellong_rms'
// Member 'obj_arellat_rms'
// Member 'obj_orientation_rms'
// Member 'obj_probofexist'
#include "std_msgs/msg/detail/float64__struct.hpp"
// Member 'obj_measstate'
#include "std_msgs/msg/detail/string__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__radar_conti_ars408_msgs__msg__ObjectQuality __attribute__((deprecated))
#else
# define DEPRECATED__radar_conti_ars408_msgs__msg__ObjectQuality __declspec(deprecated)
#endif

namespace radar_conti_ars408_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ObjectQuality_
{
  using Type = ObjectQuality_<ContainerAllocator>;

  explicit ObjectQuality_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : obj_distlong_rms(_init),
    obj_distlat_rms(_init),
    obj_vrellong_rms(_init),
    obj_vrellat_rms(_init),
    obj_arellong_rms(_init),
    obj_arellat_rms(_init),
    obj_orientation_rms(_init),
    obj_probofexist(_init),
    obj_measstate(_init)
  {
    (void)_init;
  }

  explicit ObjectQuality_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : obj_distlong_rms(_alloc, _init),
    obj_distlat_rms(_alloc, _init),
    obj_vrellong_rms(_alloc, _init),
    obj_vrellat_rms(_alloc, _init),
    obj_arellong_rms(_alloc, _init),
    obj_arellat_rms(_alloc, _init),
    obj_orientation_rms(_alloc, _init),
    obj_probofexist(_alloc, _init),
    obj_measstate(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _obj_distlong_rms_type =
    std_msgs::msg::Float64_<ContainerAllocator>;
  _obj_distlong_rms_type obj_distlong_rms;
  using _obj_distlat_rms_type =
    std_msgs::msg::Float64_<ContainerAllocator>;
  _obj_distlat_rms_type obj_distlat_rms;
  using _obj_vrellong_rms_type =
    std_msgs::msg::Float64_<ContainerAllocator>;
  _obj_vrellong_rms_type obj_vrellong_rms;
  using _obj_vrellat_rms_type =
    std_msgs::msg::Float64_<ContainerAllocator>;
  _obj_vrellat_rms_type obj_vrellat_rms;
  using _obj_arellong_rms_type =
    std_msgs::msg::Float64_<ContainerAllocator>;
  _obj_arellong_rms_type obj_arellong_rms;
  using _obj_arellat_rms_type =
    std_msgs::msg::Float64_<ContainerAllocator>;
  _obj_arellat_rms_type obj_arellat_rms;
  using _obj_orientation_rms_type =
    std_msgs::msg::Float64_<ContainerAllocator>;
  _obj_orientation_rms_type obj_orientation_rms;
  using _obj_probofexist_type =
    std_msgs::msg::Float64_<ContainerAllocator>;
  _obj_probofexist_type obj_probofexist;
  using _obj_measstate_type =
    std_msgs::msg::String_<ContainerAllocator>;
  _obj_measstate_type obj_measstate;

  // setters for named parameter idiom
  Type & set__obj_distlong_rms(
    const std_msgs::msg::Float64_<ContainerAllocator> & _arg)
  {
    this->obj_distlong_rms = _arg;
    return *this;
  }
  Type & set__obj_distlat_rms(
    const std_msgs::msg::Float64_<ContainerAllocator> & _arg)
  {
    this->obj_distlat_rms = _arg;
    return *this;
  }
  Type & set__obj_vrellong_rms(
    const std_msgs::msg::Float64_<ContainerAllocator> & _arg)
  {
    this->obj_vrellong_rms = _arg;
    return *this;
  }
  Type & set__obj_vrellat_rms(
    const std_msgs::msg::Float64_<ContainerAllocator> & _arg)
  {
    this->obj_vrellat_rms = _arg;
    return *this;
  }
  Type & set__obj_arellong_rms(
    const std_msgs::msg::Float64_<ContainerAllocator> & _arg)
  {
    this->obj_arellong_rms = _arg;
    return *this;
  }
  Type & set__obj_arellat_rms(
    const std_msgs::msg::Float64_<ContainerAllocator> & _arg)
  {
    this->obj_arellat_rms = _arg;
    return *this;
  }
  Type & set__obj_orientation_rms(
    const std_msgs::msg::Float64_<ContainerAllocator> & _arg)
  {
    this->obj_orientation_rms = _arg;
    return *this;
  }
  Type & set__obj_probofexist(
    const std_msgs::msg::Float64_<ContainerAllocator> & _arg)
  {
    this->obj_probofexist = _arg;
    return *this;
  }
  Type & set__obj_measstate(
    const std_msgs::msg::String_<ContainerAllocator> & _arg)
  {
    this->obj_measstate = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    radar_conti_ars408_msgs::msg::ObjectQuality_<ContainerAllocator> *;
  using ConstRawPtr =
    const radar_conti_ars408_msgs::msg::ObjectQuality_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<radar_conti_ars408_msgs::msg::ObjectQuality_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<radar_conti_ars408_msgs::msg::ObjectQuality_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      radar_conti_ars408_msgs::msg::ObjectQuality_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<radar_conti_ars408_msgs::msg::ObjectQuality_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      radar_conti_ars408_msgs::msg::ObjectQuality_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<radar_conti_ars408_msgs::msg::ObjectQuality_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<radar_conti_ars408_msgs::msg::ObjectQuality_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<radar_conti_ars408_msgs::msg::ObjectQuality_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__radar_conti_ars408_msgs__msg__ObjectQuality
    std::shared_ptr<radar_conti_ars408_msgs::msg::ObjectQuality_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__radar_conti_ars408_msgs__msg__ObjectQuality
    std::shared_ptr<radar_conti_ars408_msgs::msg::ObjectQuality_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObjectQuality_ & other) const
  {
    if (this->obj_distlong_rms != other.obj_distlong_rms) {
      return false;
    }
    if (this->obj_distlat_rms != other.obj_distlat_rms) {
      return false;
    }
    if (this->obj_vrellong_rms != other.obj_vrellong_rms) {
      return false;
    }
    if (this->obj_vrellat_rms != other.obj_vrellat_rms) {
      return false;
    }
    if (this->obj_arellong_rms != other.obj_arellong_rms) {
      return false;
    }
    if (this->obj_arellat_rms != other.obj_arellat_rms) {
      return false;
    }
    if (this->obj_orientation_rms != other.obj_orientation_rms) {
      return false;
    }
    if (this->obj_probofexist != other.obj_probofexist) {
      return false;
    }
    if (this->obj_measstate != other.obj_measstate) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObjectQuality_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObjectQuality_

// alias to use template instance with default allocator
using ObjectQuality =
  radar_conti_ars408_msgs::msg::ObjectQuality_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace radar_conti_ars408_msgs

#endif  // RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__OBJECT_QUALITY__STRUCT_HPP_
