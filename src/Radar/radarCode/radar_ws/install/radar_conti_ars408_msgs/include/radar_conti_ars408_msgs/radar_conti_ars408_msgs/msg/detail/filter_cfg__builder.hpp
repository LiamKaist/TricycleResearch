// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from radar_conti_ars408_msgs:msg/FilterCfg.idl
// generated code does not contain a copyright notice

#ifndef RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__FILTER_CFG__BUILDER_HPP_
#define RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__FILTER_CFG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "radar_conti_ars408_msgs/msg/detail/filter_cfg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace radar_conti_ars408_msgs
{

namespace msg
{

namespace builder
{

class Init_FilterCfg_filtercfg_max_object_class
{
public:
  explicit Init_FilterCfg_filtercfg_max_object_class(::radar_conti_ars408_msgs::msg::FilterCfg & msg)
  : msg_(msg)
  {}
  ::radar_conti_ars408_msgs::msg::FilterCfg filtercfg_max_object_class(::radar_conti_ars408_msgs::msg::FilterCfg::_filtercfg_max_object_class_type arg)
  {
    msg_.filtercfg_max_object_class = std::move(arg);
    return std::move(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::FilterCfg msg_;
};

class Init_FilterCfg_filtercfg_max_vxdepart
{
public:
  explicit Init_FilterCfg_filtercfg_max_vxdepart(::radar_conti_ars408_msgs::msg::FilterCfg & msg)
  : msg_(msg)
  {}
  Init_FilterCfg_filtercfg_max_object_class filtercfg_max_vxdepart(::radar_conti_ars408_msgs::msg::FilterCfg::_filtercfg_max_vxdepart_type arg)
  {
    msg_.filtercfg_max_vxdepart = std::move(arg);
    return Init_FilterCfg_filtercfg_max_object_class(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::FilterCfg msg_;
};

class Init_FilterCfg_filtercfg_max_vyleftright
{
public:
  explicit Init_FilterCfg_filtercfg_max_vyleftright(::radar_conti_ars408_msgs::msg::FilterCfg & msg)
  : msg_(msg)
  {}
  Init_FilterCfg_filtercfg_max_vxdepart filtercfg_max_vyleftright(::radar_conti_ars408_msgs::msg::FilterCfg::_filtercfg_max_vyleftright_type arg)
  {
    msg_.filtercfg_max_vyleftright = std::move(arg);
    return Init_FilterCfg_filtercfg_max_vxdepart(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::FilterCfg msg_;
};

class Init_FilterCfg_filtercfg_max_vxoncome
{
public:
  explicit Init_FilterCfg_filtercfg_max_vxoncome(::radar_conti_ars408_msgs::msg::FilterCfg & msg)
  : msg_(msg)
  {}
  Init_FilterCfg_filtercfg_max_vyleftright filtercfg_max_vxoncome(::radar_conti_ars408_msgs::msg::FilterCfg::_filtercfg_max_vxoncome_type arg)
  {
    msg_.filtercfg_max_vxoncome = std::move(arg);
    return Init_FilterCfg_filtercfg_max_vyleftright(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::FilterCfg msg_;
};

class Init_FilterCfg_filtercfg_max_vyrightleft
{
public:
  explicit Init_FilterCfg_filtercfg_max_vyrightleft(::radar_conti_ars408_msgs::msg::FilterCfg & msg)
  : msg_(msg)
  {}
  Init_FilterCfg_filtercfg_max_vxoncome filtercfg_max_vyrightleft(::radar_conti_ars408_msgs::msg::FilterCfg::_filtercfg_max_vyrightleft_type arg)
  {
    msg_.filtercfg_max_vyrightleft = std::move(arg);
    return Init_FilterCfg_filtercfg_max_vxoncome(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::FilterCfg msg_;
};

class Init_FilterCfg_filtercfg_max_x
{
public:
  explicit Init_FilterCfg_filtercfg_max_x(::radar_conti_ars408_msgs::msg::FilterCfg & msg)
  : msg_(msg)
  {}
  Init_FilterCfg_filtercfg_max_vyrightleft filtercfg_max_x(::radar_conti_ars408_msgs::msg::FilterCfg::_filtercfg_max_x_type arg)
  {
    msg_.filtercfg_max_x = std::move(arg);
    return Init_FilterCfg_filtercfg_max_vyrightleft(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::FilterCfg msg_;
};

class Init_FilterCfg_filtercfg_max_y
{
public:
  explicit Init_FilterCfg_filtercfg_max_y(::radar_conti_ars408_msgs::msg::FilterCfg & msg)
  : msg_(msg)
  {}
  Init_FilterCfg_filtercfg_max_x filtercfg_max_y(::radar_conti_ars408_msgs::msg::FilterCfg::_filtercfg_max_y_type arg)
  {
    msg_.filtercfg_max_y = std::move(arg);
    return Init_FilterCfg_filtercfg_max_x(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::FilterCfg msg_;
};

class Init_FilterCfg_filtercfg_max_probexists
{
public:
  explicit Init_FilterCfg_filtercfg_max_probexists(::radar_conti_ars408_msgs::msg::FilterCfg & msg)
  : msg_(msg)
  {}
  Init_FilterCfg_filtercfg_max_y filtercfg_max_probexists(::radar_conti_ars408_msgs::msg::FilterCfg::_filtercfg_max_probexists_type arg)
  {
    msg_.filtercfg_max_probexists = std::move(arg);
    return Init_FilterCfg_filtercfg_max_y(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::FilterCfg msg_;
};

class Init_FilterCfg_filtercfg_max_size
{
public:
  explicit Init_FilterCfg_filtercfg_max_size(::radar_conti_ars408_msgs::msg::FilterCfg & msg)
  : msg_(msg)
  {}
  Init_FilterCfg_filtercfg_max_probexists filtercfg_max_size(::radar_conti_ars408_msgs::msg::FilterCfg::_filtercfg_max_size_type arg)
  {
    msg_.filtercfg_max_size = std::move(arg);
    return Init_FilterCfg_filtercfg_max_probexists(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::FilterCfg msg_;
};

class Init_FilterCfg_filtercfg_max_lifetime
{
public:
  explicit Init_FilterCfg_filtercfg_max_lifetime(::radar_conti_ars408_msgs::msg::FilterCfg & msg)
  : msg_(msg)
  {}
  Init_FilterCfg_filtercfg_max_size filtercfg_max_lifetime(::radar_conti_ars408_msgs::msg::FilterCfg::_filtercfg_max_lifetime_type arg)
  {
    msg_.filtercfg_max_lifetime = std::move(arg);
    return Init_FilterCfg_filtercfg_max_size(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::FilterCfg msg_;
};

class Init_FilterCfg_filtercfg_max_rcs
{
public:
  explicit Init_FilterCfg_filtercfg_max_rcs(::radar_conti_ars408_msgs::msg::FilterCfg & msg)
  : msg_(msg)
  {}
  Init_FilterCfg_filtercfg_max_lifetime filtercfg_max_rcs(::radar_conti_ars408_msgs::msg::FilterCfg::_filtercfg_max_rcs_type arg)
  {
    msg_.filtercfg_max_rcs = std::move(arg);
    return Init_FilterCfg_filtercfg_max_lifetime(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::FilterCfg msg_;
};

class Init_FilterCfg_filtercfg_max_vreldepart
{
public:
  explicit Init_FilterCfg_filtercfg_max_vreldepart(::radar_conti_ars408_msgs::msg::FilterCfg & msg)
  : msg_(msg)
  {}
  Init_FilterCfg_filtercfg_max_rcs filtercfg_max_vreldepart(::radar_conti_ars408_msgs::msg::FilterCfg::_filtercfg_max_vreldepart_type arg)
  {
    msg_.filtercfg_max_vreldepart = std::move(arg);
    return Init_FilterCfg_filtercfg_max_rcs(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::FilterCfg msg_;
};

class Init_FilterCfg_filtercfg_max_vreloncome
{
public:
  explicit Init_FilterCfg_filtercfg_max_vreloncome(::radar_conti_ars408_msgs::msg::FilterCfg & msg)
  : msg_(msg)
  {}
  Init_FilterCfg_filtercfg_max_vreldepart filtercfg_max_vreloncome(::radar_conti_ars408_msgs::msg::FilterCfg::_filtercfg_max_vreloncome_type arg)
  {
    msg_.filtercfg_max_vreloncome = std::move(arg);
    return Init_FilterCfg_filtercfg_max_vreldepart(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::FilterCfg msg_;
};

class Init_FilterCfg_filtercfg_max_azimuth
{
public:
  explicit Init_FilterCfg_filtercfg_max_azimuth(::radar_conti_ars408_msgs::msg::FilterCfg & msg)
  : msg_(msg)
  {}
  Init_FilterCfg_filtercfg_max_vreloncome filtercfg_max_azimuth(::radar_conti_ars408_msgs::msg::FilterCfg::_filtercfg_max_azimuth_type arg)
  {
    msg_.filtercfg_max_azimuth = std::move(arg);
    return Init_FilterCfg_filtercfg_max_vreloncome(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::FilterCfg msg_;
};

class Init_FilterCfg_filtercfg_max_distance
{
public:
  explicit Init_FilterCfg_filtercfg_max_distance(::radar_conti_ars408_msgs::msg::FilterCfg & msg)
  : msg_(msg)
  {}
  Init_FilterCfg_filtercfg_max_azimuth filtercfg_max_distance(::radar_conti_ars408_msgs::msg::FilterCfg::_filtercfg_max_distance_type arg)
  {
    msg_.filtercfg_max_distance = std::move(arg);
    return Init_FilterCfg_filtercfg_max_azimuth(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::FilterCfg msg_;
};

class Init_FilterCfg_filtercfg_max_nofobj
{
public:
  explicit Init_FilterCfg_filtercfg_max_nofobj(::radar_conti_ars408_msgs::msg::FilterCfg & msg)
  : msg_(msg)
  {}
  Init_FilterCfg_filtercfg_max_distance filtercfg_max_nofobj(::radar_conti_ars408_msgs::msg::FilterCfg::_filtercfg_max_nofobj_type arg)
  {
    msg_.filtercfg_max_nofobj = std::move(arg);
    return Init_FilterCfg_filtercfg_max_distance(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::FilterCfg msg_;
};

class Init_FilterCfg_filtercfg_min_object_class
{
public:
  explicit Init_FilterCfg_filtercfg_min_object_class(::radar_conti_ars408_msgs::msg::FilterCfg & msg)
  : msg_(msg)
  {}
  Init_FilterCfg_filtercfg_max_nofobj filtercfg_min_object_class(::radar_conti_ars408_msgs::msg::FilterCfg::_filtercfg_min_object_class_type arg)
  {
    msg_.filtercfg_min_object_class = std::move(arg);
    return Init_FilterCfg_filtercfg_max_nofobj(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::FilterCfg msg_;
};

class Init_FilterCfg_filtercfg_min_vxdepart
{
public:
  explicit Init_FilterCfg_filtercfg_min_vxdepart(::radar_conti_ars408_msgs::msg::FilterCfg & msg)
  : msg_(msg)
  {}
  Init_FilterCfg_filtercfg_min_object_class filtercfg_min_vxdepart(::radar_conti_ars408_msgs::msg::FilterCfg::_filtercfg_min_vxdepart_type arg)
  {
    msg_.filtercfg_min_vxdepart = std::move(arg);
    return Init_FilterCfg_filtercfg_min_object_class(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::FilterCfg msg_;
};

class Init_FilterCfg_filtercfg_min_vyleftright
{
public:
  explicit Init_FilterCfg_filtercfg_min_vyleftright(::radar_conti_ars408_msgs::msg::FilterCfg & msg)
  : msg_(msg)
  {}
  Init_FilterCfg_filtercfg_min_vxdepart filtercfg_min_vyleftright(::radar_conti_ars408_msgs::msg::FilterCfg::_filtercfg_min_vyleftright_type arg)
  {
    msg_.filtercfg_min_vyleftright = std::move(arg);
    return Init_FilterCfg_filtercfg_min_vxdepart(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::FilterCfg msg_;
};

class Init_FilterCfg_filtercfg_min_vxoncome
{
public:
  explicit Init_FilterCfg_filtercfg_min_vxoncome(::radar_conti_ars408_msgs::msg::FilterCfg & msg)
  : msg_(msg)
  {}
  Init_FilterCfg_filtercfg_min_vyleftright filtercfg_min_vxoncome(::radar_conti_ars408_msgs::msg::FilterCfg::_filtercfg_min_vxoncome_type arg)
  {
    msg_.filtercfg_min_vxoncome = std::move(arg);
    return Init_FilterCfg_filtercfg_min_vyleftright(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::FilterCfg msg_;
};

class Init_FilterCfg_filtercfg_min_vyrightleft
{
public:
  explicit Init_FilterCfg_filtercfg_min_vyrightleft(::radar_conti_ars408_msgs::msg::FilterCfg & msg)
  : msg_(msg)
  {}
  Init_FilterCfg_filtercfg_min_vxoncome filtercfg_min_vyrightleft(::radar_conti_ars408_msgs::msg::FilterCfg::_filtercfg_min_vyrightleft_type arg)
  {
    msg_.filtercfg_min_vyrightleft = std::move(arg);
    return Init_FilterCfg_filtercfg_min_vxoncome(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::FilterCfg msg_;
};

class Init_FilterCfg_filtercfg_min_x
{
public:
  explicit Init_FilterCfg_filtercfg_min_x(::radar_conti_ars408_msgs::msg::FilterCfg & msg)
  : msg_(msg)
  {}
  Init_FilterCfg_filtercfg_min_vyrightleft filtercfg_min_x(::radar_conti_ars408_msgs::msg::FilterCfg::_filtercfg_min_x_type arg)
  {
    msg_.filtercfg_min_x = std::move(arg);
    return Init_FilterCfg_filtercfg_min_vyrightleft(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::FilterCfg msg_;
};

class Init_FilterCfg_filtercfg_min_y
{
public:
  explicit Init_FilterCfg_filtercfg_min_y(::radar_conti_ars408_msgs::msg::FilterCfg & msg)
  : msg_(msg)
  {}
  Init_FilterCfg_filtercfg_min_x filtercfg_min_y(::radar_conti_ars408_msgs::msg::FilterCfg::_filtercfg_min_y_type arg)
  {
    msg_.filtercfg_min_y = std::move(arg);
    return Init_FilterCfg_filtercfg_min_x(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::FilterCfg msg_;
};

class Init_FilterCfg_filtercfg_min_probexists
{
public:
  explicit Init_FilterCfg_filtercfg_min_probexists(::radar_conti_ars408_msgs::msg::FilterCfg & msg)
  : msg_(msg)
  {}
  Init_FilterCfg_filtercfg_min_y filtercfg_min_probexists(::radar_conti_ars408_msgs::msg::FilterCfg::_filtercfg_min_probexists_type arg)
  {
    msg_.filtercfg_min_probexists = std::move(arg);
    return Init_FilterCfg_filtercfg_min_y(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::FilterCfg msg_;
};

class Init_FilterCfg_filtercfg_min_size
{
public:
  explicit Init_FilterCfg_filtercfg_min_size(::radar_conti_ars408_msgs::msg::FilterCfg & msg)
  : msg_(msg)
  {}
  Init_FilterCfg_filtercfg_min_probexists filtercfg_min_size(::radar_conti_ars408_msgs::msg::FilterCfg::_filtercfg_min_size_type arg)
  {
    msg_.filtercfg_min_size = std::move(arg);
    return Init_FilterCfg_filtercfg_min_probexists(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::FilterCfg msg_;
};

class Init_FilterCfg_filtercfg_min_lifetime
{
public:
  explicit Init_FilterCfg_filtercfg_min_lifetime(::radar_conti_ars408_msgs::msg::FilterCfg & msg)
  : msg_(msg)
  {}
  Init_FilterCfg_filtercfg_min_size filtercfg_min_lifetime(::radar_conti_ars408_msgs::msg::FilterCfg::_filtercfg_min_lifetime_type arg)
  {
    msg_.filtercfg_min_lifetime = std::move(arg);
    return Init_FilterCfg_filtercfg_min_size(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::FilterCfg msg_;
};

class Init_FilterCfg_filtercfg_min_rcs
{
public:
  explicit Init_FilterCfg_filtercfg_min_rcs(::radar_conti_ars408_msgs::msg::FilterCfg & msg)
  : msg_(msg)
  {}
  Init_FilterCfg_filtercfg_min_lifetime filtercfg_min_rcs(::radar_conti_ars408_msgs::msg::FilterCfg::_filtercfg_min_rcs_type arg)
  {
    msg_.filtercfg_min_rcs = std::move(arg);
    return Init_FilterCfg_filtercfg_min_lifetime(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::FilterCfg msg_;
};

class Init_FilterCfg_filtercfg_min_vreldepart
{
public:
  explicit Init_FilterCfg_filtercfg_min_vreldepart(::radar_conti_ars408_msgs::msg::FilterCfg & msg)
  : msg_(msg)
  {}
  Init_FilterCfg_filtercfg_min_rcs filtercfg_min_vreldepart(::radar_conti_ars408_msgs::msg::FilterCfg::_filtercfg_min_vreldepart_type arg)
  {
    msg_.filtercfg_min_vreldepart = std::move(arg);
    return Init_FilterCfg_filtercfg_min_rcs(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::FilterCfg msg_;
};

class Init_FilterCfg_filtercfg_min_vreloncome
{
public:
  explicit Init_FilterCfg_filtercfg_min_vreloncome(::radar_conti_ars408_msgs::msg::FilterCfg & msg)
  : msg_(msg)
  {}
  Init_FilterCfg_filtercfg_min_vreldepart filtercfg_min_vreloncome(::radar_conti_ars408_msgs::msg::FilterCfg::_filtercfg_min_vreloncome_type arg)
  {
    msg_.filtercfg_min_vreloncome = std::move(arg);
    return Init_FilterCfg_filtercfg_min_vreldepart(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::FilterCfg msg_;
};

class Init_FilterCfg_filtercfg_min_azimuth
{
public:
  explicit Init_FilterCfg_filtercfg_min_azimuth(::radar_conti_ars408_msgs::msg::FilterCfg & msg)
  : msg_(msg)
  {}
  Init_FilterCfg_filtercfg_min_vreloncome filtercfg_min_azimuth(::radar_conti_ars408_msgs::msg::FilterCfg::_filtercfg_min_azimuth_type arg)
  {
    msg_.filtercfg_min_azimuth = std::move(arg);
    return Init_FilterCfg_filtercfg_min_vreloncome(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::FilterCfg msg_;
};

class Init_FilterCfg_filtercfg_min_distance
{
public:
  explicit Init_FilterCfg_filtercfg_min_distance(::radar_conti_ars408_msgs::msg::FilterCfg & msg)
  : msg_(msg)
  {}
  Init_FilterCfg_filtercfg_min_azimuth filtercfg_min_distance(::radar_conti_ars408_msgs::msg::FilterCfg::_filtercfg_min_distance_type arg)
  {
    msg_.filtercfg_min_distance = std::move(arg);
    return Init_FilterCfg_filtercfg_min_azimuth(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::FilterCfg msg_;
};

class Init_FilterCfg_filtercfg_min_nofobj
{
public:
  explicit Init_FilterCfg_filtercfg_min_nofobj(::radar_conti_ars408_msgs::msg::FilterCfg & msg)
  : msg_(msg)
  {}
  Init_FilterCfg_filtercfg_min_distance filtercfg_min_nofobj(::radar_conti_ars408_msgs::msg::FilterCfg::_filtercfg_min_nofobj_type arg)
  {
    msg_.filtercfg_min_nofobj = std::move(arg);
    return Init_FilterCfg_filtercfg_min_distance(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::FilterCfg msg_;
};

class Init_FilterCfg_filtercfg_type
{
public:
  explicit Init_FilterCfg_filtercfg_type(::radar_conti_ars408_msgs::msg::FilterCfg & msg)
  : msg_(msg)
  {}
  Init_FilterCfg_filtercfg_min_nofobj filtercfg_type(::radar_conti_ars408_msgs::msg::FilterCfg::_filtercfg_type_type arg)
  {
    msg_.filtercfg_type = std::move(arg);
    return Init_FilterCfg_filtercfg_min_nofobj(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::FilterCfg msg_;
};

class Init_FilterCfg_filtercfg_index
{
public:
  explicit Init_FilterCfg_filtercfg_index(::radar_conti_ars408_msgs::msg::FilterCfg & msg)
  : msg_(msg)
  {}
  Init_FilterCfg_filtercfg_type filtercfg_index(::radar_conti_ars408_msgs::msg::FilterCfg::_filtercfg_index_type arg)
  {
    msg_.filtercfg_index = std::move(arg);
    return Init_FilterCfg_filtercfg_type(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::FilterCfg msg_;
};

class Init_FilterCfg_filtercfg_active
{
public:
  explicit Init_FilterCfg_filtercfg_active(::radar_conti_ars408_msgs::msg::FilterCfg & msg)
  : msg_(msg)
  {}
  Init_FilterCfg_filtercfg_index filtercfg_active(::radar_conti_ars408_msgs::msg::FilterCfg::_filtercfg_active_type arg)
  {
    msg_.filtercfg_active = std::move(arg);
    return Init_FilterCfg_filtercfg_index(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::FilterCfg msg_;
};

class Init_FilterCfg_filtercfg_valid
{
public:
  explicit Init_FilterCfg_filtercfg_valid(::radar_conti_ars408_msgs::msg::FilterCfg & msg)
  : msg_(msg)
  {}
  Init_FilterCfg_filtercfg_active filtercfg_valid(::radar_conti_ars408_msgs::msg::FilterCfg::_filtercfg_valid_type arg)
  {
    msg_.filtercfg_valid = std::move(arg);
    return Init_FilterCfg_filtercfg_active(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::FilterCfg msg_;
};

class Init_FilterCfg_header
{
public:
  Init_FilterCfg_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FilterCfg_filtercfg_valid header(::radar_conti_ars408_msgs::msg::FilterCfg::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_FilterCfg_filtercfg_valid(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::FilterCfg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::radar_conti_ars408_msgs::msg::FilterCfg>()
{
  return radar_conti_ars408_msgs::msg::builder::Init_FilterCfg_header();
}

}  // namespace radar_conti_ars408_msgs

#endif  // RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__FILTER_CFG__BUILDER_HPP_
