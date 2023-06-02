// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from radar_conti_ars408_msgs:msg/ObjectGeneral.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "radar_conti_ars408_msgs/msg/detail/object_general__rosidl_typesupport_introspection_c.h"
#include "radar_conti_ars408_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "radar_conti_ars408_msgs/msg/detail/object_general__functions.h"
#include "radar_conti_ars408_msgs/msg/detail/object_general__struct.h"


// Include directives for member types
// Member `obj_distlong`
// Member `obj_distlat`
// Member `obj_vrellong`
// Member `obj_vrellat`
// Member `obj_rcs`
#include "std_msgs/msg/float64.h"
// Member `obj_distlong`
// Member `obj_distlat`
// Member `obj_vrellong`
// Member `obj_vrellat`
// Member `obj_rcs`
#include "std_msgs/msg/detail/float64__rosidl_typesupport_introspection_c.h"
// Member `obj_dynprop`
#include "std_msgs/msg/string.h"
// Member `obj_dynprop`
#include "std_msgs/msg/detail/string__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void radar_conti_ars408_msgs__msg__ObjectGeneral__rosidl_typesupport_introspection_c__ObjectGeneral_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  radar_conti_ars408_msgs__msg__ObjectGeneral__init(message_memory);
}

void radar_conti_ars408_msgs__msg__ObjectGeneral__rosidl_typesupport_introspection_c__ObjectGeneral_fini_function(void * message_memory)
{
  radar_conti_ars408_msgs__msg__ObjectGeneral__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember radar_conti_ars408_msgs__msg__ObjectGeneral__rosidl_typesupport_introspection_c__ObjectGeneral_message_member_array[6] = {
  {
    "obj_distlong",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(radar_conti_ars408_msgs__msg__ObjectGeneral, obj_distlong),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "obj_distlat",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(radar_conti_ars408_msgs__msg__ObjectGeneral, obj_distlat),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "obj_vrellong",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(radar_conti_ars408_msgs__msg__ObjectGeneral, obj_vrellong),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "obj_vrellat",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(radar_conti_ars408_msgs__msg__ObjectGeneral, obj_vrellat),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "obj_dynprop",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(radar_conti_ars408_msgs__msg__ObjectGeneral, obj_dynprop),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "obj_rcs",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(radar_conti_ars408_msgs__msg__ObjectGeneral, obj_rcs),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers radar_conti_ars408_msgs__msg__ObjectGeneral__rosidl_typesupport_introspection_c__ObjectGeneral_message_members = {
  "radar_conti_ars408_msgs__msg",  // message namespace
  "ObjectGeneral",  // message name
  6,  // number of fields
  sizeof(radar_conti_ars408_msgs__msg__ObjectGeneral),
  radar_conti_ars408_msgs__msg__ObjectGeneral__rosidl_typesupport_introspection_c__ObjectGeneral_message_member_array,  // message members
  radar_conti_ars408_msgs__msg__ObjectGeneral__rosidl_typesupport_introspection_c__ObjectGeneral_init_function,  // function to initialize message memory (memory has to be allocated)
  radar_conti_ars408_msgs__msg__ObjectGeneral__rosidl_typesupport_introspection_c__ObjectGeneral_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t radar_conti_ars408_msgs__msg__ObjectGeneral__rosidl_typesupport_introspection_c__ObjectGeneral_message_type_support_handle = {
  0,
  &radar_conti_ars408_msgs__msg__ObjectGeneral__rosidl_typesupport_introspection_c__ObjectGeneral_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_radar_conti_ars408_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, radar_conti_ars408_msgs, msg, ObjectGeneral)() {
  radar_conti_ars408_msgs__msg__ObjectGeneral__rosidl_typesupport_introspection_c__ObjectGeneral_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Float64)();
  radar_conti_ars408_msgs__msg__ObjectGeneral__rosidl_typesupport_introspection_c__ObjectGeneral_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Float64)();
  radar_conti_ars408_msgs__msg__ObjectGeneral__rosidl_typesupport_introspection_c__ObjectGeneral_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Float64)();
  radar_conti_ars408_msgs__msg__ObjectGeneral__rosidl_typesupport_introspection_c__ObjectGeneral_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Float64)();
  radar_conti_ars408_msgs__msg__ObjectGeneral__rosidl_typesupport_introspection_c__ObjectGeneral_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, String)();
  radar_conti_ars408_msgs__msg__ObjectGeneral__rosidl_typesupport_introspection_c__ObjectGeneral_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Float64)();
  if (!radar_conti_ars408_msgs__msg__ObjectGeneral__rosidl_typesupport_introspection_c__ObjectGeneral_message_type_support_handle.typesupport_identifier) {
    radar_conti_ars408_msgs__msg__ObjectGeneral__rosidl_typesupport_introspection_c__ObjectGeneral_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &radar_conti_ars408_msgs__msg__ObjectGeneral__rosidl_typesupport_introspection_c__ObjectGeneral_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
