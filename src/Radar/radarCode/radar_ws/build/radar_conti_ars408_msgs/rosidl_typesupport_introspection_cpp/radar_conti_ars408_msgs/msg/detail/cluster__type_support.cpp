// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from radar_conti_ars408_msgs:msg/Cluster.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "radar_conti_ars408_msgs/msg/detail/cluster__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace radar_conti_ars408_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Cluster_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) radar_conti_ars408_msgs::msg::Cluster(_init);
}

void Cluster_fini_function(void * message_memory)
{
  auto typed_message = static_cast<radar_conti_ars408_msgs::msg::Cluster *>(message_memory);
  typed_message->~Cluster();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Cluster_message_member_array[3] = {
  {
    "cluster_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Int32>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(radar_conti_ars408_msgs::msg::Cluster, cluster_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "cluster_general",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<radar_conti_ars408_msgs::msg::ClusterGeneral>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(radar_conti_ars408_msgs::msg::Cluster, cluster_general),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "cluster_quality",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<radar_conti_ars408_msgs::msg::ClusterQuality>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(radar_conti_ars408_msgs::msg::Cluster, cluster_quality),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Cluster_message_members = {
  "radar_conti_ars408_msgs::msg",  // message namespace
  "Cluster",  // message name
  3,  // number of fields
  sizeof(radar_conti_ars408_msgs::msg::Cluster),
  Cluster_message_member_array,  // message members
  Cluster_init_function,  // function to initialize message memory (memory has to be allocated)
  Cluster_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Cluster_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Cluster_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace radar_conti_ars408_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<radar_conti_ars408_msgs::msg::Cluster>()
{
  return &::radar_conti_ars408_msgs::msg::rosidl_typesupport_introspection_cpp::Cluster_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, radar_conti_ars408_msgs, msg, Cluster)() {
  return &::radar_conti_ars408_msgs::msg::rosidl_typesupport_introspection_cpp::Cluster_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
