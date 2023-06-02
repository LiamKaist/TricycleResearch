// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from radar_conti_ars408_msgs:msg/Cluster.idl
// generated code does not contain a copyright notice
#include "radar_conti_ars408_msgs/msg/detail/cluster__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "radar_conti_ars408_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "radar_conti_ars408_msgs/msg/detail/cluster__struct.h"
#include "radar_conti_ars408_msgs/msg/detail/cluster__functions.h"
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

#include "radar_conti_ars408_msgs/msg/detail/cluster_general__functions.h"  // cluster_general
#include "radar_conti_ars408_msgs/msg/detail/cluster_quality__functions.h"  // cluster_quality
#include "std_msgs/msg/detail/int32__functions.h"  // cluster_id

// forward declare type support functions
size_t get_serialized_size_radar_conti_ars408_msgs__msg__ClusterGeneral(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_radar_conti_ars408_msgs__msg__ClusterGeneral(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, radar_conti_ars408_msgs, msg, ClusterGeneral)();
size_t get_serialized_size_radar_conti_ars408_msgs__msg__ClusterQuality(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_radar_conti_ars408_msgs__msg__ClusterQuality(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, radar_conti_ars408_msgs, msg, ClusterQuality)();
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


using _Cluster__ros_msg_type = radar_conti_ars408_msgs__msg__Cluster;

static bool _Cluster__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Cluster__ros_msg_type * ros_message = static_cast<const _Cluster__ros_msg_type *>(untyped_ros_message);
  // Field name: cluster_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Int32
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->cluster_id, cdr))
    {
      return false;
    }
  }

  // Field name: cluster_general
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, radar_conti_ars408_msgs, msg, ClusterGeneral
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->cluster_general, cdr))
    {
      return false;
    }
  }

  // Field name: cluster_quality
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, radar_conti_ars408_msgs, msg, ClusterQuality
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->cluster_quality, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _Cluster__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Cluster__ros_msg_type * ros_message = static_cast<_Cluster__ros_msg_type *>(untyped_ros_message);
  // Field name: cluster_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Int32
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->cluster_id))
    {
      return false;
    }
  }

  // Field name: cluster_general
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, radar_conti_ars408_msgs, msg, ClusterGeneral
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->cluster_general))
    {
      return false;
    }
  }

  // Field name: cluster_quality
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, radar_conti_ars408_msgs, msg, ClusterQuality
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->cluster_quality))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_radar_conti_ars408_msgs
size_t get_serialized_size_radar_conti_ars408_msgs__msg__Cluster(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Cluster__ros_msg_type * ros_message = static_cast<const _Cluster__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name cluster_id

  current_alignment += get_serialized_size_std_msgs__msg__Int32(
    &(ros_message->cluster_id), current_alignment);
  // field.name cluster_general

  current_alignment += get_serialized_size_radar_conti_ars408_msgs__msg__ClusterGeneral(
    &(ros_message->cluster_general), current_alignment);
  // field.name cluster_quality

  current_alignment += get_serialized_size_radar_conti_ars408_msgs__msg__ClusterQuality(
    &(ros_message->cluster_quality), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _Cluster__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_radar_conti_ars408_msgs__msg__Cluster(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_radar_conti_ars408_msgs
size_t max_serialized_size_radar_conti_ars408_msgs__msg__Cluster(
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

  // member: cluster_id
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
  // member: cluster_general
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_radar_conti_ars408_msgs__msg__ClusterGeneral(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: cluster_quality
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_radar_conti_ars408_msgs__msg__ClusterQuality(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _Cluster__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_radar_conti_ars408_msgs__msg__Cluster(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Cluster = {
  "radar_conti_ars408_msgs::msg",
  "Cluster",
  _Cluster__cdr_serialize,
  _Cluster__cdr_deserialize,
  _Cluster__get_serialized_size,
  _Cluster__max_serialized_size
};

static rosidl_message_type_support_t _Cluster__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Cluster,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, radar_conti_ars408_msgs, msg, Cluster)() {
  return &_Cluster__type_support;
}

#if defined(__cplusplus)
}
#endif
