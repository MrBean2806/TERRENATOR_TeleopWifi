// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from robot_control:msg/TramaDatos.idl
// generated code does not contain a copyright notice
#include "robot_control/msg/detail/trama_datos__rosidl_typesupport_fastrtps_cpp.hpp"
#include "robot_control/msg/detail/trama_datos__functions.h"
#include "robot_control/msg/detail/trama_datos__struct.hpp"

#include <cstddef>
#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace robot_control
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robot_control
cdr_serialize(
  const robot_control::msg::TramaDatos & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: u_m
  {
    cdr << ros_message.u_m;
  }

  // Member: v_bat
  cdr << ros_message.v_bat;

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robot_control
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  robot_control::msg::TramaDatos & ros_message)
{
  // Member: u_m
  {
    cdr >> ros_message.u_m;
  }

  // Member: v_bat
  cdr >> ros_message.v_bat;

  return true;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robot_control
get_serialized_size(
  const robot_control::msg::TramaDatos & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: u_m
  {
    size_t array_size = 4;
    size_t item_size = sizeof(ros_message.u_m[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: v_bat
  {
    size_t item_size = sizeof(ros_message.v_bat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robot_control
max_serialized_size_TramaDatos(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Member: u_m
  {
    size_t array_size = 4;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: v_bat
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = robot_control::msg::TramaDatos;
    is_plain =
      (
      offsetof(DataType, v_bat) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robot_control
cdr_serialize_key(
  const robot_control::msg::TramaDatos & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: u_m
  {
    cdr << ros_message.u_m;
  }

  // Member: v_bat
  cdr << ros_message.v_bat;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robot_control
get_serialized_size_key(
  const robot_control::msg::TramaDatos & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: u_m
  {
    size_t array_size = 4;
    size_t item_size = sizeof(ros_message.u_m[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: v_bat
  {
    size_t item_size = sizeof(ros_message.v_bat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robot_control
max_serialized_size_key_TramaDatos(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Member: u_m
  {
    size_t array_size = 4;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: v_bat
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = robot_control::msg::TramaDatos;
    is_plain =
      (
      offsetof(DataType, v_bat) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _TramaDatos__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const robot_control::msg::TramaDatos *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _TramaDatos__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<robot_control::msg::TramaDatos *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _TramaDatos__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const robot_control::msg::TramaDatos *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _TramaDatos__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_TramaDatos(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _TramaDatos__callbacks = {
  "robot_control::msg",
  "TramaDatos",
  _TramaDatos__cdr_serialize,
  _TramaDatos__cdr_deserialize,
  _TramaDatos__get_serialized_size,
  _TramaDatos__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _TramaDatos__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_TramaDatos__callbacks,
  get_message_typesupport_handle_function,
  &robot_control__msg__TramaDatos__get_type_hash,
  &robot_control__msg__TramaDatos__get_type_description,
  &robot_control__msg__TramaDatos__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace robot_control

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_robot_control
const rosidl_message_type_support_t *
get_message_type_support_handle<robot_control::msg::TramaDatos>()
{
  return &robot_control::msg::typesupport_fastrtps_cpp::_TramaDatos__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robot_control, msg, TramaDatos)() {
  return &robot_control::msg::typesupport_fastrtps_cpp::_TramaDatos__handle;
}

#ifdef __cplusplus
}
#endif
