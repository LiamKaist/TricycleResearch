// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from radar_conti_ars408_msgs:msg/VersionID.idl
// generated code does not contain a copyright notice
#include "radar_conti_ars408_msgs/msg/detail/version_id__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "radar_conti_ars408_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "radar_conti_ars408_msgs/msg/detail/version_id__struct.h"
#include "radar_conti_ars408_msgs/msg/detail/version_id__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "std_msgs/msg/detail/header__functions.h"  // header
#include "std_msgs/msg/detail/int32__functions.h"  // version_majorrelease, version_minorrelease, version_patchlevel
#include "std_msgs/msg/detail/string__functions.h"  // version_countrycode, version_extendedrange

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_radar_conti_ars408_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_radar_conti_ars408_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_radar_conti_ars408_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_radar_conti_ars408_msgs
size_t get_serialized_size_std_msgs__msg__Int32(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_radar_conti_ars408_msgs
size_t max_serialized_size_std_msgs__msg__Int32(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_radar_conti_ars408_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Int32)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_radar_conti_ars408_msgs
size_t get_serialized_size_std_msgs__msg__String(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_radar_conti_ars408_msgs
size_t max_serialized_size_std_msgs__msg__String(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_radar_conti_ars408_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, String)();


using _VersionID__ros_msg_type = radar_conti_ars408_msgs__msg__VersionID;

static bool _VersionID__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _VersionID__ros_msg_type * ros_message = static_cast<const _VersionID__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: version_majorrelease
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Int32
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->version_majorrelease, cdr))
    {
      return false;
    }
  }

  // Field name: version_minorrelease
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Int32
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->version_minorrelease, cdr))
    {
      return false;
    }
  }

  // Field name: version_patchlevel
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Int32
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->version_patchlevel, cdr))
    {
      return false;
    }
  }

  // Field name: version_extendedrange
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, String
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->version_extendedrange, cdr))
    {
      return false;
    }
  }

  // Field name: version_countrycode
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, String
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->version_countrycode, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _VersionID__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _VersionID__ros_msg_type * ros_message = static_cast<_VersionID__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: version_majorrelease
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Int32
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->version_majorrelease))
    {
      return false;
    }
  }

  // Field name: version_minorrelease
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Int32
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->version_minorrelease))
    {
      return false;
    }
  }

  // Field name: version_patchlevel
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Int32
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->version_patchlevel))
    {
      return false;
    }
  }

  // Field name: version_extendedrange
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, String
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->version_extendedrange))
    {
      return false;
    }
  }

  // Field name: version_countrycode
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, String
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->version_countrycode))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_radar_conti_ars408_msgs
size_t get_serialized_size_radar_conti_ars408_msgs__msg__VersionID(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _VersionID__ros_msg_type * ros_message = static_cast<const _VersionID__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name version_majorrelease

  current_alignment += get_serialized_size_std_msgs__msg__Int32(
    &(ros_message->version_majorrelease), current_alignment);
  // field.name version_minorrelease

  current_alignment += get_serialized_size_std_msgs__msg__Int32(
    &(ros_message->version_minorrelease), current_alignment);
  // field.name version_patchlevel

  current_alignment += get_serialized_size_std_msgs__msg__Int32(
    &(ros_message->version_patchlevel), current_alignment);
  // field.name version_extendedrange

  current_alignment += get_serialized_size_std_msgs__msg__String(
    &(ros_message->version_extendedrange), current_alignment);
  // field.name version_countrycode

  current_alignment += get_serialized_size_std_msgs__msg__String(
    &(ros_message->version_countrycode), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _VersionID__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_radar_conti_ars408_msgs__msg__VersionID(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_radar_conti_ars408_msgs
size_t max_serialized_size_radar_conti_ars408_msgs__msg__VersionID(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: version_majorrelease
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_std_msgs__msg__Int32(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: version_minorrelease
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_std_msgs__msg__Int32(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: version_patchlevel
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_std_msgs__msg__Int32(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: version_extendedrange
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_std_msgs__msg__String(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: version_countrycode
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_std_msgs__msg__String(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _VersionID__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_radar_conti_ars408_msgs__msg__VersionID(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_VersionID = {
  "radar_conti_ars408_msgs::msg",
  "VersionID",
  _VersionID__cdr_serialize,
  _VersionID__cdr_deserialize,
  _VersionID__get_serialized_size,
  _VersionID__max_serialized_size
};

static rosidl_message_type_support_t _VersionID__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_VersionID,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, radar_conti_ars408_msgs, msg, VersionID)() {
  return &_VersionID__type_support;
}

#if defined(__cplusplus)
}
#endif
