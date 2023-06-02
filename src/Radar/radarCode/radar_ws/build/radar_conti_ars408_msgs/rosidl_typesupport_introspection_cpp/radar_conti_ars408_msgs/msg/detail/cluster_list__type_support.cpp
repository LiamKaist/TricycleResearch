// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from radar_conti_ars408_msgs:msg/ClusterList.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "radar_conti_ars408_msgs/msg/detail/cluster_list__struct.hpp"
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

void ClusterList_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) radar_conti_ars408_msgs::msg::ClusterList(_init);
}

void ClusterList_fini_function(void * message_memory)
{
  auto typed_message = static_cast<radar_conti_ars408_msgs::msg::ClusterList *>(message_memory);
  typed_message->~ClusterList();
}

size_t size_function__ClusterList__clusters(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<radar_conti_ars408_msgs::msg::Cluster> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ClusterList__clusters(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<radar_conti_ars408_msgs::msg::Cluster> *>(untyped_member);
  return &member[index];
}

void * get_function__ClusterList__clusters(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<radar_conti_ars408_msgs::msg::Cluster> *>(untyped_member);
  return &member[index];
}

void fetch_function__ClusterList__clusters(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const radar_conti_ars408_msgs::msg::Cluster *>(
    get_const_function__ClusterList__clusters(untyped_member, index));
  auto & value = *reinterpret_cast<radar_conti_ars408_msgs::msg::Cluster *>(untyped_value);
  value = item;
}

void assign_function__ClusterList__clusters(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<radar_conti_ars408_msgs::msg::Cluster *>(
    get_function__ClusterList__clusters(untyped_member, index));
  const auto & value = *reinterpret_cast<const radar_conti_ars408_msgs::msg::Cluster *>(untyped_value);
  item = value;
}

void resize_function__ClusterList__clusters(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<radar_conti_ars408_msgs::msg::Cluster> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ClusterList_message_member_array[3] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(radar_conti_ars408_msgs::msg::ClusterList, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "cluster_count",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Int32>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(radar_conti_ars408_msgs::msg::ClusterList, cluster_count),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "clusters",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<radar_conti_ars408_msgs::msg::Cluster>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(radar_conti_ars408_msgs::msg::ClusterList, clusters),  // bytes offset in struct
    nullptr,  // default value
    size_function__ClusterList__clusters,  // size() function pointer
    get_const_function__ClusterList__clusters,  // get_const(index) function pointer
    get_function__ClusterList__clusters,  // get(index) function pointer
    fetch_function__ClusterList__clusters,  // fetch(index, &value) function pointer
    assign_function__ClusterList__clusters,  // assign(index, value) function pointer
    resize_function__ClusterList__clusters  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ClusterList_message_members = {
  "radar_conti_ars408_msgs::msg",  // message namespace
  "ClusterList",  // message name
  3,  // number of fields
  sizeof(radar_conti_ars408_msgs::msg::ClusterList),
  ClusterList_message_member_array,  // message members
  ClusterList_init_function,  // function to initialize message memory (memory has to be allocated)
  ClusterList_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ClusterList_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ClusterList_message_members,
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
get_message_type_support_handle<radar_conti_ars408_msgs::msg::ClusterList>()
{
  return &::radar_conti_ars408_msgs::msg::rosidl_typesupport_introspection_cpp::ClusterList_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, radar_conti_ars408_msgs, msg, ClusterList)() {
  return &::radar_conti_ars408_msgs::msg::rosidl_typesupport_introspection_cpp::ClusterList_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
