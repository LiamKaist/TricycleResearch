// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from radar_conti_ars408_msgs:msg/Object.idl
// generated code does not contain a copyright notice
#include "radar_conti_ars408_msgs/msg/detail/object__rosidl_typesupport_fastrtps_cpp.hpp"
#include "radar_conti_ars408_msgs/msg/detail/object__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Int32 &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Int32 &);
size_t get_serialized_size(
  const std_msgs::msg::Int32 &,
  size_t current_alignment);
size_t
max_serialized_size_Int32(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs

namespace radar_conti_ars408_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const radar_conti_ars408_msgs::msg::ObjectGeneral &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  radar_conti_ars408_msgs::msg::ObjectGeneral &);
size_t get_serialized_size(
  const radar_conti_ars408_msgs::msg::ObjectGeneral &,
  size_t current_alignment);
size_t
max_serialized_size_ObjectGeneral(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace radar_conti_ars408_msgs

namespace radar_conti_ars408_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const radar_conti_ars408_msgs::msg::ObjectExtended &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  radar_conti_ars408_msgs::msg::ObjectExtended &);
size_t get_serialized_size(
  const radar_conti_ars408_msgs::msg::ObjectExtended &,
  size_t current_alignment);
size_t
max_serialized_size_ObjectExtended(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace radar_conti_ars408_msgs

namespace radar_conti_ars408_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const radar_conti_ars408_msgs::msg::ObjectQuality &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  radar_conti_ars408_msgs::msg::ObjectQuality &);
size_t get_serialized_size(
  const radar_conti_ars408_msgs::msg::ObjectQuality &,
  size_t current_alignment);
size_t
max_serialized_size_ObjectQuality(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace radar_conti_ars408_msgs


namespace radar_conti_ars408_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_radar_conti_ars408_msgs
cdr_serialize(
  const radar_conti_ars408_msgs::msg::Object & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: obj_id
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.obj_id,
    cdr);
  // Member: object_general
  radar_conti_ars408_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.object_general,
    cdr);
  // Member: object_extended
  radar_conti_ars408_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.object_extended,
    cdr);
  // Member: object_quality
  radar_conti_ars408_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.object_quality,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_radar_conti_ars408_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  radar_conti_ars408_msgs::msg::Object & ros_message)
{
  // Member: obj_id
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.obj_id);

  // Member: object_general
  radar_conti_ars408_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.object_general);

  // Member: object_extended
  radar_conti_ars408_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.object_extended);

  // Member: object_quality
  radar_conti_ars408_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.object_quality);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_radar_conti_ars408_msgs
get_serialized_size(
  const radar_conti_ars408_msgs::msg::Object & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: obj_id

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.obj_id, current_alignment);
  // Member: object_general

  current_alignment +=
    radar_conti_ars408_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.object_general, current_alignment);
  // Member: object_extended

  current_alignment +=
    radar_conti_ars408_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.object_extended, current_alignment);
  // Member: object_quality

  current_alignment +=
    radar_conti_ars408_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.object_quality, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_radar_conti_ars408_msgs
max_serialized_size_Object(
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


  // Member: obj_id
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Int32(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: object_general
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        radar_conti_ars408_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_ObjectGeneral(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: object_extended
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        radar_conti_ars408_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_ObjectExtended(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: object_quality
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        radar_conti_ars408_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_ObjectQuality(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _Object__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const radar_conti_ars408_msgs::msg::Object *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Object__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<radar_conti_ars408_msgs::msg::Object *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Object__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const radar_conti_ars408_msgs::msg::Object *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Object__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Object(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Object__callbacks = {
  "radar_conti_ars408_msgs::msg",
  "Object",
  _Object__cdr_serialize,
  _Object__cdr_deserialize,
  _Object__get_serialized_size,
  _Object__max_serialized_size
};

static rosidl_message_type_support_t _Object__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Object__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace radar_conti_ars408_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_radar_conti_ars408_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<radar_conti_ars408_msgs::msg::Object>()
{
  return &radar_conti_ars408_msgs::msg::typesupport_fastrtps_cpp::_Object__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, radar_conti_ars408_msgs, msg, Object)() {
  return &radar_conti_ars408_msgs::msg::typesupport_fastrtps_cpp::_Object__handle;
}

#ifdef __cplusplus
}
#endif
