// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from radar_conti_ars408_msgs:msg/ClusterList.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "radar_conti_ars408_msgs/msg/detail/cluster_list__rosidl_typesupport_introspection_c.h"
#include "radar_conti_ars408_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "radar_conti_ars408_msgs/msg/detail/cluster_list__functions.h"
#include "radar_conti_ars408_msgs/msg/detail/cluster_list__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `cluster_count`
#include "std_msgs/msg/int32.h"
// Member `cluster_count`
#include "std_msgs/msg/detail/int32__rosidl_typesupport_introspection_c.h"
// Member `clusters`
#include "radar_conti_ars408_msgs/msg/cluster.h"
// Member `clusters`
#include "radar_conti_ars408_msgs/msg/detail/cluster__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void radar_conti_ars408_msgs__msg__ClusterList__rosidl_typesupport_introspection_c__ClusterList_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  radar_conti_ars408_msgs__msg__ClusterList__init(message_memory);
}

void radar_conti_ars408_msgs__msg__ClusterList__rosidl_typesupport_introspection_c__ClusterList_fini_function(void * message_memory)
{
  radar_conti_ars408_msgs__msg__ClusterList__fini(message_memory);
}

size_t radar_conti_ars408_msgs__msg__ClusterList__rosidl_typesupport_introspection_c__size_function__ClusterList__clusters(
  const void * untyped_member)
{
  const radar_conti_ars408_msgs__msg__Cluster__Sequence * member =
    (const radar_conti_ars408_msgs__msg__Cluster__Sequence *)(untyped_member);
  return member->size;
}

const void * radar_conti_ars408_msgs__msg__ClusterList__rosidl_typesupport_introspection_c__get_const_function__ClusterList__clusters(
  const void * untyped_member, size_t index)
{
  const radar_conti_ars408_msgs__msg__Cluster__Sequence * member =
    (const radar_conti_ars408_msgs__msg__Cluster__Sequence *)(untyped_member);
  return &member->data[index];
}

void * radar_conti_ars408_msgs__msg__ClusterList__rosidl_typesupport_introspection_c__get_function__ClusterList__clusters(
  void * untyped_member, size_t index)
{
  radar_conti_ars408_msgs__msg__Cluster__Sequence * member =
    (radar_conti_ars408_msgs__msg__Cluster__Sequence *)(untyped_member);
  return &member->data[index];
}

void radar_conti_ars408_msgs__msg__ClusterList__rosidl_typesupport_introspection_c__fetch_function__ClusterList__clusters(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const radar_conti_ars408_msgs__msg__Cluster * item =
    ((const radar_conti_ars408_msgs__msg__Cluster *)
    radar_conti_ars408_msgs__msg__ClusterList__rosidl_typesupport_introspection_c__get_const_function__ClusterList__clusters(untyped_member, index));
  radar_conti_ars408_msgs__msg__Cluster * value =
    (radar_conti_ars408_msgs__msg__Cluster *)(untyped_value);
  *value = *item;
}

void radar_conti_ars408_msgs__msg__ClusterList__rosidl_typesupport_introspection_c__assign_function__ClusterList__clusters(
  void * untyped_member, size_t index, const void * untyped_value)
{
  radar_conti_ars408_msgs__msg__Cluster * item =
    ((radar_conti_ars408_msgs__msg__Cluster *)
    radar_conti_ars408_msgs__msg__ClusterList__rosidl_typesupport_introspection_c__get_function__ClusterList__clusters(untyped_member, index));
  const radar_conti_ars408_msgs__msg__Cluster * value =
    (const radar_conti_ars408_msgs__msg__Cluster *)(untyped_value);
  *item = *value;
}

bool radar_conti_ars408_msgs__msg__ClusterList__rosidl_typesupport_introspection_c__resize_function__ClusterList__clusters(
  void * untyped_member, size_t size)
{
  radar_conti_ars408_msgs__msg__Cluster__Sequence * member =
    (radar_conti_ars408_msgs__msg__Cluster__Sequence *)(untyped_member);
  radar_conti_ars408_msgs__msg__Cluster__Sequence__fini(member);
  return radar_conti_ars408_msgs__msg__Cluster__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember radar_conti_ars408_msgs__msg__ClusterList__rosidl_typesupport_introspection_c__ClusterList_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(radar_conti_ars408_msgs__msg__ClusterList, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cluster_count",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(radar_conti_ars408_msgs__msg__ClusterList, cluster_count),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "clusters",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(radar_conti_ars408_msgs__msg__ClusterList, clusters),  // bytes offset in struct
    NULL,  // default value
    radar_conti_ars408_msgs__msg__ClusterList__rosidl_typesupport_introspection_c__size_function__ClusterList__clusters,  // size() function pointer
    radar_conti_ars408_msgs__msg__ClusterList__rosidl_typesupport_introspection_c__get_const_function__ClusterList__clusters,  // get_const(index) function pointer
    radar_conti_ars408_msgs__msg__ClusterList__rosidl_typesupport_introspection_c__get_function__ClusterList__clusters,  // get(index) function pointer
    radar_conti_ars408_msgs__msg__ClusterList__rosidl_typesupport_introspection_c__fetch_function__ClusterList__clusters,  // fetch(index, &value) function pointer
    radar_conti_ars408_msgs__msg__ClusterList__rosidl_typesupport_introspection_c__assign_function__ClusterList__clusters,  // assign(index, value) function pointer
    radar_conti_ars408_msgs__msg__ClusterList__rosidl_typesupport_introspection_c__resize_function__ClusterList__clusters  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers radar_conti_ars408_msgs__msg__ClusterList__rosidl_typesupport_introspection_c__ClusterList_message_members = {
  "radar_conti_ars408_msgs__msg",  // message namespace
  "ClusterList",  // message name
  3,  // number of fields
  sizeof(radar_conti_ars408_msgs__msg__ClusterList),
  radar_conti_ars408_msgs__msg__ClusterList__rosidl_typesupport_introspection_c__ClusterList_message_member_array,  // message members
  radar_conti_ars408_msgs__msg__ClusterList__rosidl_typesupport_introspection_c__ClusterList_init_function,  // function to initialize message memory (memory has to be allocated)
  radar_conti_ars408_msgs__msg__ClusterList__rosidl_typesupport_introspection_c__ClusterList_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t radar_conti_ars408_msgs__msg__ClusterList__rosidl_typesupport_introspection_c__ClusterList_message_type_support_handle = {
  0,
  &radar_conti_ars408_msgs__msg__ClusterList__rosidl_typesupport_introspection_c__ClusterList_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_radar_conti_ars408_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, radar_conti_ars408_msgs, msg, ClusterList)() {
  radar_conti_ars408_msgs__msg__ClusterList__rosidl_typesupport_introspection_c__ClusterList_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  radar_conti_ars408_msgs__msg__ClusterList__rosidl_typesupport_introspection_c__ClusterList_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Int32)();
  radar_conti_ars408_msgs__msg__ClusterList__rosidl_typesupport_introspection_c__ClusterList_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, radar_conti_ars408_msgs, msg, Cluster)();
  if (!radar_conti_ars408_msgs__msg__ClusterList__rosidl_typesupport_introspection_c__ClusterList_message_type_support_handle.typesupport_identifier) {
    radar_conti_ars408_msgs__msg__ClusterList__rosidl_typesupport_introspection_c__ClusterList_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &radar_conti_ars408_msgs__msg__ClusterList__rosidl_typesupport_introspection_c__ClusterList_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
