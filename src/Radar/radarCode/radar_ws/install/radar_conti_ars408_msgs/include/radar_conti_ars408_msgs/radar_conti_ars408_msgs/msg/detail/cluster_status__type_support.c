// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from radar_conti_ars408_msgs:msg/ClusterStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "radar_conti_ars408_msgs/msg/detail/cluster_status__rosidl_typesupport_introspection_c.h"
#include "radar_conti_ars408_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "radar_conti_ars408_msgs/msg/detail/cluster_status__functions.h"
#include "radar_conti_ars408_msgs/msg/detail/cluster_status__struct.h"


// Include directives for member types
// Member `cluster_nofclustersnear`
// Member `cluster_nofclustersfar`
// Member `cluster_meascounter`
// Member `cluster_interfaceversion`
#include "std_msgs/msg/int32.h"
// Member `cluster_nofclustersnear`
// Member `cluster_nofclustersfar`
// Member `cluster_meascounter`
// Member `cluster_interfaceversion`
#include "std_msgs/msg/detail/int32__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void radar_conti_ars408_msgs__msg__ClusterStatus__rosidl_typesupport_introspection_c__ClusterStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  radar_conti_ars408_msgs__msg__ClusterStatus__init(message_memory);
}

void radar_conti_ars408_msgs__msg__ClusterStatus__rosidl_typesupport_introspection_c__ClusterStatus_fini_function(void * message_memory)
{
  radar_conti_ars408_msgs__msg__ClusterStatus__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember radar_conti_ars408_msgs__msg__ClusterStatus__rosidl_typesupport_introspection_c__ClusterStatus_message_member_array[4] = {
  {
    "cluster_nofclustersnear",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(radar_conti_ars408_msgs__msg__ClusterStatus, cluster_nofclustersnear),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cluster_nofclustersfar",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(radar_conti_ars408_msgs__msg__ClusterStatus, cluster_nofclustersfar),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cluster_meascounter",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(radar_conti_ars408_msgs__msg__ClusterStatus, cluster_meascounter),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cluster_interfaceversion",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(radar_conti_ars408_msgs__msg__ClusterStatus, cluster_interfaceversion),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers radar_conti_ars408_msgs__msg__ClusterStatus__rosidl_typesupport_introspection_c__ClusterStatus_message_members = {
  "radar_conti_ars408_msgs__msg",  // message namespace
  "ClusterStatus",  // message name
  4,  // number of fields
  sizeof(radar_conti_ars408_msgs__msg__ClusterStatus),
  radar_conti_ars408_msgs__msg__ClusterStatus__rosidl_typesupport_introspection_c__ClusterStatus_message_member_array,  // message members
  radar_conti_ars408_msgs__msg__ClusterStatus__rosidl_typesupport_introspection_c__ClusterStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  radar_conti_ars408_msgs__msg__ClusterStatus__rosidl_typesupport_introspection_c__ClusterStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t radar_conti_ars408_msgs__msg__ClusterStatus__rosidl_typesupport_introspection_c__ClusterStatus_message_type_support_handle = {
  0,
  &radar_conti_ars408_msgs__msg__ClusterStatus__rosidl_typesupport_introspection_c__ClusterStatus_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_radar_conti_ars408_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, radar_conti_ars408_msgs, msg, ClusterStatus)() {
  radar_conti_ars408_msgs__msg__ClusterStatus__rosidl_typesupport_introspection_c__ClusterStatus_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Int32)();
  radar_conti_ars408_msgs__msg__ClusterStatus__rosidl_typesupport_introspection_c__ClusterStatus_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Int32)();
  radar_conti_ars408_msgs__msg__ClusterStatus__rosidl_typesupport_introspection_c__ClusterStatus_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Int32)();
  radar_conti_ars408_msgs__msg__ClusterStatus__rosidl_typesupport_introspection_c__ClusterStatus_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Int32)();
  if (!radar_conti_ars408_msgs__msg__ClusterStatus__rosidl_typesupport_introspection_c__ClusterStatus_message_type_support_handle.typesupport_identifier) {
    radar_conti_ars408_msgs__msg__ClusterStatus__rosidl_typesupport_introspection_c__ClusterStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &radar_conti_ars408_msgs__msg__ClusterStatus__rosidl_typesupport_introspection_c__ClusterStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
