// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from radar_conti_ars408_msgs:msg/VersionID.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "radar_conti_ars408_msgs/msg/detail/version_id__rosidl_typesupport_introspection_c.h"
#include "radar_conti_ars408_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "radar_conti_ars408_msgs/msg/detail/version_id__functions.h"
#include "radar_conti_ars408_msgs/msg/detail/version_id__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `version_majorrelease`
// Member `version_minorrelease`
// Member `version_patchlevel`
#include "std_msgs/msg/int32.h"
// Member `version_majorrelease`
// Member `version_minorrelease`
// Member `version_patchlevel`
#include "std_msgs/msg/detail/int32__rosidl_typesupport_introspection_c.h"
// Member `version_extendedrange`
// Member `version_countrycode`
#include "std_msgs/msg/string.h"
// Member `version_extendedrange`
// Member `version_countrycode`
#include "std_msgs/msg/detail/string__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void radar_conti_ars408_msgs__msg__VersionID__rosidl_typesupport_introspection_c__VersionID_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  radar_conti_ars408_msgs__msg__VersionID__init(message_memory);
}

void radar_conti_ars408_msgs__msg__VersionID__rosidl_typesupport_introspection_c__VersionID_fini_function(void * message_memory)
{
  radar_conti_ars408_msgs__msg__VersionID__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember radar_conti_ars408_msgs__msg__VersionID__rosidl_typesupport_introspection_c__VersionID_message_member_array[6] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(radar_conti_ars408_msgs__msg__VersionID, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "version_majorrelease",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(radar_conti_ars408_msgs__msg__VersionID, version_majorrelease),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "version_minorrelease",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(radar_conti_ars408_msgs__msg__VersionID, version_minorrelease),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "version_patchlevel",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(radar_conti_ars408_msgs__msg__VersionID, version_patchlevel),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "version_extendedrange",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(radar_conti_ars408_msgs__msg__VersionID, version_extendedrange),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "version_countrycode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(radar_conti_ars408_msgs__msg__VersionID, version_countrycode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers radar_conti_ars408_msgs__msg__VersionID__rosidl_typesupport_introspection_c__VersionID_message_members = {
  "radar_conti_ars408_msgs__msg",  // message namespace
  "VersionID",  // message name
  6,  // number of fields
  sizeof(radar_conti_ars408_msgs__msg__VersionID),
  radar_conti_ars408_msgs__msg__VersionID__rosidl_typesupport_introspection_c__VersionID_message_member_array,  // message members
  radar_conti_ars408_msgs__msg__VersionID__rosidl_typesupport_introspection_c__VersionID_init_function,  // function to initialize message memory (memory has to be allocated)
  radar_conti_ars408_msgs__msg__VersionID__rosidl_typesupport_introspection_c__VersionID_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t radar_conti_ars408_msgs__msg__VersionID__rosidl_typesupport_introspection_c__VersionID_message_type_support_handle = {
  0,
  &radar_conti_ars408_msgs__msg__VersionID__rosidl_typesupport_introspection_c__VersionID_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_radar_conti_ars408_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, radar_conti_ars408_msgs, msg, VersionID)() {
  radar_conti_ars408_msgs__msg__VersionID__rosidl_typesupport_introspection_c__VersionID_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  radar_conti_ars408_msgs__msg__VersionID__rosidl_typesupport_introspection_c__VersionID_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Int32)();
  radar_conti_ars408_msgs__msg__VersionID__rosidl_typesupport_introspection_c__VersionID_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Int32)();
  radar_conti_ars408_msgs__msg__VersionID__rosidl_typesupport_introspection_c__VersionID_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Int32)();
  radar_conti_ars408_msgs__msg__VersionID__rosidl_typesupport_introspection_c__VersionID_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, String)();
  radar_conti_ars408_msgs__msg__VersionID__rosidl_typesupport_introspection_c__VersionID_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, String)();
  if (!radar_conti_ars408_msgs__msg__VersionID__rosidl_typesupport_introspection_c__VersionID_message_type_support_handle.typesupport_identifier) {
    radar_conti_ars408_msgs__msg__VersionID__rosidl_typesupport_introspection_c__VersionID_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &radar_conti_ars408_msgs__msg__VersionID__rosidl_typesupport_introspection_c__VersionID_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
