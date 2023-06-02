// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from radar_conti_ars408_msgs:msg/FilterCfg.idl
// generated code does not contain a copyright notice

#ifndef RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__FILTER_CFG__STRUCT_HPP_
#define RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__FILTER_CFG__STRUCT_HPP_

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
// Member 'filtercfg_valid'
// Member 'filtercfg_active'
// Member 'filtercfg_index'
// Member 'filtercfg_type'
// Member 'filtercfg_min_nofobj'
// Member 'filtercfg_min_distance'
// Member 'filtercfg_min_azimuth'
// Member 'filtercfg_min_vreloncome'
// Member 'filtercfg_min_vreldepart'
// Member 'filtercfg_min_rcs'
// Member 'filtercfg_min_lifetime'
// Member 'filtercfg_min_size'
// Member 'filtercfg_min_probexists'
// Member 'filtercfg_min_y'
// Member 'filtercfg_min_x'
// Member 'filtercfg_min_vyrightleft'
// Member 'filtercfg_min_vxoncome'
// Member 'filtercfg_min_vyleftright'
// Member 'filtercfg_min_vxdepart'
// Member 'filtercfg_min_object_class'
// Member 'filtercfg_max_nofobj'
// Member 'filtercfg_max_distance'
// Member 'filtercfg_max_azimuth'
// Member 'filtercfg_max_vreloncome'
// Member 'filtercfg_max_vreldepart'
// Member 'filtercfg_max_rcs'
// Member 'filtercfg_max_lifetime'
// Member 'filtercfg_max_size'
// Member 'filtercfg_max_probexists'
// Member 'filtercfg_max_y'
// Member 'filtercfg_max_x'
// Member 'filtercfg_max_vyrightleft'
// Member 'filtercfg_max_vxoncome'
// Member 'filtercfg_max_vyleftright'
// Member 'filtercfg_max_vxdepart'
// Member 'filtercfg_max_object_class'
#include "std_msgs/msg/detail/u_int8__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__radar_conti_ars408_msgs__msg__FilterCfg __attribute__((deprecated))
#else
# define DEPRECATED__radar_conti_ars408_msgs__msg__FilterCfg __declspec(deprecated)
#endif

namespace radar_conti_ars408_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FilterCfg_
{
  using Type = FilterCfg_<ContainerAllocator>;

  explicit FilterCfg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    filtercfg_valid(_init),
    filtercfg_active(_init),
    filtercfg_index(_init),
    filtercfg_type(_init),
    filtercfg_min_nofobj(_init),
    filtercfg_min_distance(_init),
    filtercfg_min_azimuth(_init),
    filtercfg_min_vreloncome(_init),
    filtercfg_min_vreldepart(_init),
    filtercfg_min_rcs(_init),
    filtercfg_min_lifetime(_init),
    filtercfg_min_size(_init),
    filtercfg_min_probexists(_init),
    filtercfg_min_y(_init),
    filtercfg_min_x(_init),
    filtercfg_min_vyrightleft(_init),
    filtercfg_min_vxoncome(_init),
    filtercfg_min_vyleftright(_init),
    filtercfg_min_vxdepart(_init),
    filtercfg_min_object_class(_init),
    filtercfg_max_nofobj(_init),
    filtercfg_max_distance(_init),
    filtercfg_max_azimuth(_init),
    filtercfg_max_vreloncome(_init),
    filtercfg_max_vreldepart(_init),
    filtercfg_max_rcs(_init),
    filtercfg_max_lifetime(_init),
    filtercfg_max_size(_init),
    filtercfg_max_probexists(_init),
    filtercfg_max_y(_init),
    filtercfg_max_x(_init),
    filtercfg_max_vyrightleft(_init),
    filtercfg_max_vxoncome(_init),
    filtercfg_max_vyleftright(_init),
    filtercfg_max_vxdepart(_init),
    filtercfg_max_object_class(_init)
  {
    (void)_init;
  }

  explicit FilterCfg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    filtercfg_valid(_alloc, _init),
    filtercfg_active(_alloc, _init),
    filtercfg_index(_alloc, _init),
    filtercfg_type(_alloc, _init),
    filtercfg_min_nofobj(_alloc, _init),
    filtercfg_min_distance(_alloc, _init),
    filtercfg_min_azimuth(_alloc, _init),
    filtercfg_min_vreloncome(_alloc, _init),
    filtercfg_min_vreldepart(_alloc, _init),
    filtercfg_min_rcs(_alloc, _init),
    filtercfg_min_lifetime(_alloc, _init),
    filtercfg_min_size(_alloc, _init),
    filtercfg_min_probexists(_alloc, _init),
    filtercfg_min_y(_alloc, _init),
    filtercfg_min_x(_alloc, _init),
    filtercfg_min_vyrightleft(_alloc, _init),
    filtercfg_min_vxoncome(_alloc, _init),
    filtercfg_min_vyleftright(_alloc, _init),
    filtercfg_min_vxdepart(_alloc, _init),
    filtercfg_min_object_class(_alloc, _init),
    filtercfg_max_nofobj(_alloc, _init),
    filtercfg_max_distance(_alloc, _init),
    filtercfg_max_azimuth(_alloc, _init),
    filtercfg_max_vreloncome(_alloc, _init),
    filtercfg_max_vreldepart(_alloc, _init),
    filtercfg_max_rcs(_alloc, _init),
    filtercfg_max_lifetime(_alloc, _init),
    filtercfg_max_size(_alloc, _init),
    filtercfg_max_probexists(_alloc, _init),
    filtercfg_max_y(_alloc, _init),
    filtercfg_max_x(_alloc, _init),
    filtercfg_max_vyrightleft(_alloc, _init),
    filtercfg_max_vxoncome(_alloc, _init),
    filtercfg_max_vyleftright(_alloc, _init),
    filtercfg_max_vxdepart(_alloc, _init),
    filtercfg_max_object_class(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _filtercfg_valid_type =
    std_msgs::msg::UInt8_<ContainerAllocator>;
  _filtercfg_valid_type filtercfg_valid;
  using _filtercfg_active_type =
    std_msgs::msg::UInt8_<ContainerAllocator>;
  _filtercfg_active_type filtercfg_active;
  using _filtercfg_index_type =
    std_msgs::msg::UInt8_<ContainerAllocator>;
  _filtercfg_index_type filtercfg_index;
  using _filtercfg_type_type =
    std_msgs::msg::UInt8_<ContainerAllocator>;
  _filtercfg_type_type filtercfg_type;
  using _filtercfg_min_nofobj_type =
    std_msgs::msg::UInt8_<ContainerAllocator>;
  _filtercfg_min_nofobj_type filtercfg_min_nofobj;
  using _filtercfg_min_distance_type =
    std_msgs::msg::UInt8_<ContainerAllocator>;
  _filtercfg_min_distance_type filtercfg_min_distance;
  using _filtercfg_min_azimuth_type =
    std_msgs::msg::UInt8_<ContainerAllocator>;
  _filtercfg_min_azimuth_type filtercfg_min_azimuth;
  using _filtercfg_min_vreloncome_type =
    std_msgs::msg::UInt8_<ContainerAllocator>;
  _filtercfg_min_vreloncome_type filtercfg_min_vreloncome;
  using _filtercfg_min_vreldepart_type =
    std_msgs::msg::UInt8_<ContainerAllocator>;
  _filtercfg_min_vreldepart_type filtercfg_min_vreldepart;
  using _filtercfg_min_rcs_type =
    std_msgs::msg::UInt8_<ContainerAllocator>;
  _filtercfg_min_rcs_type filtercfg_min_rcs;
  using _filtercfg_min_lifetime_type =
    std_msgs::msg::UInt8_<ContainerAllocator>;
  _filtercfg_min_lifetime_type filtercfg_min_lifetime;
  using _filtercfg_min_size_type =
    std_msgs::msg::UInt8_<ContainerAllocator>;
  _filtercfg_min_size_type filtercfg_min_size;
  using _filtercfg_min_probexists_type =
    std_msgs::msg::UInt8_<ContainerAllocator>;
  _filtercfg_min_probexists_type filtercfg_min_probexists;
  using _filtercfg_min_y_type =
    std_msgs::msg::UInt8_<ContainerAllocator>;
  _filtercfg_min_y_type filtercfg_min_y;
  using _filtercfg_min_x_type =
    std_msgs::msg::UInt8_<ContainerAllocator>;
  _filtercfg_min_x_type filtercfg_min_x;
  using _filtercfg_min_vyrightleft_type =
    std_msgs::msg::UInt8_<ContainerAllocator>;
  _filtercfg_min_vyrightleft_type filtercfg_min_vyrightleft;
  using _filtercfg_min_vxoncome_type =
    std_msgs::msg::UInt8_<ContainerAllocator>;
  _filtercfg_min_vxoncome_type filtercfg_min_vxoncome;
  using _filtercfg_min_vyleftright_type =
    std_msgs::msg::UInt8_<ContainerAllocator>;
  _filtercfg_min_vyleftright_type filtercfg_min_vyleftright;
  using _filtercfg_min_vxdepart_type =
    std_msgs::msg::UInt8_<ContainerAllocator>;
  _filtercfg_min_vxdepart_type filtercfg_min_vxdepart;
  using _filtercfg_min_object_class_type =
    std_msgs::msg::UInt8_<ContainerAllocator>;
  _filtercfg_min_object_class_type filtercfg_min_object_class;
  using _filtercfg_max_nofobj_type =
    std_msgs::msg::UInt8_<ContainerAllocator>;
  _filtercfg_max_nofobj_type filtercfg_max_nofobj;
  using _filtercfg_max_distance_type =
    std_msgs::msg::UInt8_<ContainerAllocator>;
  _filtercfg_max_distance_type filtercfg_max_distance;
  using _filtercfg_max_azimuth_type =
    std_msgs::msg::UInt8_<ContainerAllocator>;
  _filtercfg_max_azimuth_type filtercfg_max_azimuth;
  using _filtercfg_max_vreloncome_type =
    std_msgs::msg::UInt8_<ContainerAllocator>;
  _filtercfg_max_vreloncome_type filtercfg_max_vreloncome;
  using _filtercfg_max_vreldepart_type =
    std_msgs::msg::UInt8_<ContainerAllocator>;
  _filtercfg_max_vreldepart_type filtercfg_max_vreldepart;
  using _filtercfg_max_rcs_type =
    std_msgs::msg::UInt8_<ContainerAllocator>;
  _filtercfg_max_rcs_type filtercfg_max_rcs;
  using _filtercfg_max_lifetime_type =
    std_msgs::msg::UInt8_<ContainerAllocator>;
  _filtercfg_max_lifetime_type filtercfg_max_lifetime;
  using _filtercfg_max_size_type =
    std_msgs::msg::UInt8_<ContainerAllocator>;
  _filtercfg_max_size_type filtercfg_max_size;
  using _filtercfg_max_probexists_type =
    std_msgs::msg::UInt8_<ContainerAllocator>;
  _filtercfg_max_probexists_type filtercfg_max_probexists;
  using _filtercfg_max_y_type =
    std_msgs::msg::UInt8_<ContainerAllocator>;
  _filtercfg_max_y_type filtercfg_max_y;
  using _filtercfg_max_x_type =
    std_msgs::msg::UInt8_<ContainerAllocator>;
  _filtercfg_max_x_type filtercfg_max_x;
  using _filtercfg_max_vyrightleft_type =
    std_msgs::msg::UInt8_<ContainerAllocator>;
  _filtercfg_max_vyrightleft_type filtercfg_max_vyrightleft;
  using _filtercfg_max_vxoncome_type =
    std_msgs::msg::UInt8_<ContainerAllocator>;
  _filtercfg_max_vxoncome_type filtercfg_max_vxoncome;
  using _filtercfg_max_vyleftright_type =
    std_msgs::msg::UInt8_<ContainerAllocator>;
  _filtercfg_max_vyleftright_type filtercfg_max_vyleftright;
  using _filtercfg_max_vxdepart_type =
    std_msgs::msg::UInt8_<ContainerAllocator>;
  _filtercfg_max_vxdepart_type filtercfg_max_vxdepart;
  using _filtercfg_max_object_class_type =
    std_msgs::msg::UInt8_<ContainerAllocator>;
  _filtercfg_max_object_class_type filtercfg_max_object_class;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__filtercfg_valid(
    const std_msgs::msg::UInt8_<ContainerAllocator> & _arg)
  {
    this->filtercfg_valid = _arg;
    return *this;
  }
  Type & set__filtercfg_active(
    const std_msgs::msg::UInt8_<ContainerAllocator> & _arg)
  {
    this->filtercfg_active = _arg;
    return *this;
  }
  Type & set__filtercfg_index(
    const std_msgs::msg::UInt8_<ContainerAllocator> & _arg)
  {
    this->filtercfg_index = _arg;
    return *this;
  }
  Type & set__filtercfg_type(
    const std_msgs::msg::UInt8_<ContainerAllocator> & _arg)
  {
    this->filtercfg_type = _arg;
    return *this;
  }
  Type & set__filtercfg_min_nofobj(
    const std_msgs::msg::UInt8_<ContainerAllocator> & _arg)
  {
    this->filtercfg_min_nofobj = _arg;
    return *this;
  }
  Type & set__filtercfg_min_distance(
    const std_msgs::msg::UInt8_<ContainerAllocator> & _arg)
  {
    this->filtercfg_min_distance = _arg;
    return *this;
  }
  Type & set__filtercfg_min_azimuth(
    const std_msgs::msg::UInt8_<ContainerAllocator> & _arg)
  {
    this->filtercfg_min_azimuth = _arg;
    return *this;
  }
  Type & set__filtercfg_min_vreloncome(
    const std_msgs::msg::UInt8_<ContainerAllocator> & _arg)
  {
    this->filtercfg_min_vreloncome = _arg;
    return *this;
  }
  Type & set__filtercfg_min_vreldepart(
    const std_msgs::msg::UInt8_<ContainerAllocator> & _arg)
  {
    this->filtercfg_min_vreldepart = _arg;
    return *this;
  }
  Type & set__filtercfg_min_rcs(
    const std_msgs::msg::UInt8_<ContainerAllocator> & _arg)
  {
    this->filtercfg_min_rcs = _arg;
    return *this;
  }
  Type & set__filtercfg_min_lifetime(
    const std_msgs::msg::UInt8_<ContainerAllocator> & _arg)
  {
    this->filtercfg_min_lifetime = _arg;
    return *this;
  }
  Type & set__filtercfg_min_size(
    const std_msgs::msg::UInt8_<ContainerAllocator> & _arg)
  {
    this->filtercfg_min_size = _arg;
    return *this;
  }
  Type & set__filtercfg_min_probexists(
    const std_msgs::msg::UInt8_<ContainerAllocator> & _arg)
  {
    this->filtercfg_min_probexists = _arg;
    return *this;
  }
  Type & set__filtercfg_min_y(
    const std_msgs::msg::UInt8_<ContainerAllocator> & _arg)
  {
    this->filtercfg_min_y = _arg;
    return *this;
  }
  Type & set__filtercfg_min_x(
    const std_msgs::msg::UInt8_<ContainerAllocator> & _arg)
  {
    this->filtercfg_min_x = _arg;
    return *this;
  }
  Type & set__filtercfg_min_vyrightleft(
    const std_msgs::msg::UInt8_<ContainerAllocator> & _arg)
  {
    this->filtercfg_min_vyrightleft = _arg;
    return *this;
  }
  Type & set__filtercfg_min_vxoncome(
    const std_msgs::msg::UInt8_<ContainerAllocator> & _arg)
  {
    this->filtercfg_min_vxoncome = _arg;
    return *this;
  }
  Type & set__filtercfg_min_vyleftright(
    const std_msgs::msg::UInt8_<ContainerAllocator> & _arg)
  {
    this->filtercfg_min_vyleftright = _arg;
    return *this;
  }
  Type & set__filtercfg_min_vxdepart(
    const std_msgs::msg::UInt8_<ContainerAllocator> & _arg)
  {
    this->filtercfg_min_vxdepart = _arg;
    return *this;
  }
  Type & set__filtercfg_min_object_class(
    const std_msgs::msg::UInt8_<ContainerAllocator> & _arg)
  {
    this->filtercfg_min_object_class = _arg;
    return *this;
  }
  Type & set__filtercfg_max_nofobj(
    const std_msgs::msg::UInt8_<ContainerAllocator> & _arg)
  {
    this->filtercfg_max_nofobj = _arg;
    return *this;
  }
  Type & set__filtercfg_max_distance(
    const std_msgs::msg::UInt8_<ContainerAllocator> & _arg)
  {
    this->filtercfg_max_distance = _arg;
    return *this;
  }
  Type & set__filtercfg_max_azimuth(
    const std_msgs::msg::UInt8_<ContainerAllocator> & _arg)
  {
    this->filtercfg_max_azimuth = _arg;
    return *this;
  }
  Type & set__filtercfg_max_vreloncome(
    const std_msgs::msg::UInt8_<ContainerAllocator> & _arg)
  {
    this->filtercfg_max_vreloncome = _arg;
    return *this;
  }
  Type & set__filtercfg_max_vreldepart(
    const std_msgs::msg::UInt8_<ContainerAllocator> & _arg)
  {
    this->filtercfg_max_vreldepart = _arg;
    return *this;
  }
  Type & set__filtercfg_max_rcs(
    const std_msgs::msg::UInt8_<ContainerAllocator> & _arg)
  {
    this->filtercfg_max_rcs = _arg;
    return *this;
  }
  Type & set__filtercfg_max_lifetime(
    const std_msgs::msg::UInt8_<ContainerAllocator> & _arg)
  {
    this->filtercfg_max_lifetime = _arg;
    return *this;
  }
  Type & set__filtercfg_max_size(
    const std_msgs::msg::UInt8_<ContainerAllocator> & _arg)
  {
    this->filtercfg_max_size = _arg;
    return *this;
  }
  Type & set__filtercfg_max_probexists(
    const std_msgs::msg::UInt8_<ContainerAllocator> & _arg)
  {
    this->filtercfg_max_probexists = _arg;
    return *this;
  }
  Type & set__filtercfg_max_y(
    const std_msgs::msg::UInt8_<ContainerAllocator> & _arg)
  {
    this->filtercfg_max_y = _arg;
    return *this;
  }
  Type & set__filtercfg_max_x(
    const std_msgs::msg::UInt8_<ContainerAllocator> & _arg)
  {
    this->filtercfg_max_x = _arg;
    return *this;
  }
  Type & set__filtercfg_max_vyrightleft(
    const std_msgs::msg::UInt8_<ContainerAllocator> & _arg)
  {
    this->filtercfg_max_vyrightleft = _arg;
    return *this;
  }
  Type & set__filtercfg_max_vxoncome(
    const std_msgs::msg::UInt8_<ContainerAllocator> & _arg)
  {
    this->filtercfg_max_vxoncome = _arg;
    return *this;
  }
  Type & set__filtercfg_max_vyleftright(
    const std_msgs::msg::UInt8_<ContainerAllocator> & _arg)
  {
    this->filtercfg_max_vyleftright = _arg;
    return *this;
  }
  Type & set__filtercfg_max_vxdepart(
    const std_msgs::msg::UInt8_<ContainerAllocator> & _arg)
  {
    this->filtercfg_max_vxdepart = _arg;
    return *this;
  }
  Type & set__filtercfg_max_object_class(
    const std_msgs::msg::UInt8_<ContainerAllocator> & _arg)
  {
    this->filtercfg_max_object_class = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    radar_conti_ars408_msgs::msg::FilterCfg_<ContainerAllocator> *;
  using ConstRawPtr =
    const radar_conti_ars408_msgs::msg::FilterCfg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<radar_conti_ars408_msgs::msg::FilterCfg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<radar_conti_ars408_msgs::msg::FilterCfg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      radar_conti_ars408_msgs::msg::FilterCfg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<radar_conti_ars408_msgs::msg::FilterCfg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      radar_conti_ars408_msgs::msg::FilterCfg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<radar_conti_ars408_msgs::msg::FilterCfg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<radar_conti_ars408_msgs::msg::FilterCfg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<radar_conti_ars408_msgs::msg::FilterCfg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__radar_conti_ars408_msgs__msg__FilterCfg
    std::shared_ptr<radar_conti_ars408_msgs::msg::FilterCfg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__radar_conti_ars408_msgs__msg__FilterCfg
    std::shared_ptr<radar_conti_ars408_msgs::msg::FilterCfg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FilterCfg_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->filtercfg_valid != other.filtercfg_valid) {
      return false;
    }
    if (this->filtercfg_active != other.filtercfg_active) {
      return false;
    }
    if (this->filtercfg_index != other.filtercfg_index) {
      return false;
    }
    if (this->filtercfg_type != other.filtercfg_type) {
      return false;
    }
    if (this->filtercfg_min_nofobj != other.filtercfg_min_nofobj) {
      return false;
    }
    if (this->filtercfg_min_distance != other.filtercfg_min_distance) {
      return false;
    }
    if (this->filtercfg_min_azimuth != other.filtercfg_min_azimuth) {
      return false;
    }
    if (this->filtercfg_min_vreloncome != other.filtercfg_min_vreloncome) {
      return false;
    }
    if (this->filtercfg_min_vreldepart != other.filtercfg_min_vreldepart) {
      return false;
    }
    if (this->filtercfg_min_rcs != other.filtercfg_min_rcs) {
      return false;
    }
    if (this->filtercfg_min_lifetime != other.filtercfg_min_lifetime) {
      return false;
    }
    if (this->filtercfg_min_size != other.filtercfg_min_size) {
      return false;
    }
    if (this->filtercfg_min_probexists != other.filtercfg_min_probexists) {
      return false;
    }
    if (this->filtercfg_min_y != other.filtercfg_min_y) {
      return false;
    }
    if (this->filtercfg_min_x != other.filtercfg_min_x) {
      return false;
    }
    if (this->filtercfg_min_vyrightleft != other.filtercfg_min_vyrightleft) {
      return false;
    }
    if (this->filtercfg_min_vxoncome != other.filtercfg_min_vxoncome) {
      return false;
    }
    if (this->filtercfg_min_vyleftright != other.filtercfg_min_vyleftright) {
      return false;
    }
    if (this->filtercfg_min_vxdepart != other.filtercfg_min_vxdepart) {
      return false;
    }
    if (this->filtercfg_min_object_class != other.filtercfg_min_object_class) {
      return false;
    }
    if (this->filtercfg_max_nofobj != other.filtercfg_max_nofobj) {
      return false;
    }
    if (this->filtercfg_max_distance != other.filtercfg_max_distance) {
      return false;
    }
    if (this->filtercfg_max_azimuth != other.filtercfg_max_azimuth) {
      return false;
    }
    if (this->filtercfg_max_vreloncome != other.filtercfg_max_vreloncome) {
      return false;
    }
    if (this->filtercfg_max_vreldepart != other.filtercfg_max_vreldepart) {
      return false;
    }
    if (this->filtercfg_max_rcs != other.filtercfg_max_rcs) {
      return false;
    }
    if (this->filtercfg_max_lifetime != other.filtercfg_max_lifetime) {
      return false;
    }
    if (this->filtercfg_max_size != other.filtercfg_max_size) {
      return false;
    }
    if (this->filtercfg_max_probexists != other.filtercfg_max_probexists) {
      return false;
    }
    if (this->filtercfg_max_y != other.filtercfg_max_y) {
      return false;
    }
    if (this->filtercfg_max_x != other.filtercfg_max_x) {
      return false;
    }
    if (this->filtercfg_max_vyrightleft != other.filtercfg_max_vyrightleft) {
      return false;
    }
    if (this->filtercfg_max_vxoncome != other.filtercfg_max_vxoncome) {
      return false;
    }
    if (this->filtercfg_max_vyleftright != other.filtercfg_max_vyleftright) {
      return false;
    }
    if (this->filtercfg_max_vxdepart != other.filtercfg_max_vxdepart) {
      return false;
    }
    if (this->filtercfg_max_object_class != other.filtercfg_max_object_class) {
      return false;
    }
    return true;
  }
  bool operator!=(const FilterCfg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FilterCfg_

// alias to use template instance with default allocator
using FilterCfg =
  radar_conti_ars408_msgs::msg::FilterCfg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace radar_conti_ars408_msgs

#endif  // RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__FILTER_CFG__STRUCT_HPP_
