// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from robot_control:msg/TramaDatos.idl
// generated code does not contain a copyright notice
#include "robot_control/msg/detail/trama_datos__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "robot_control/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "robot_control/msg/detail/trama_datos__struct.h"
#include "robot_control/msg/detail/trama_datos__functions.h"
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


// forward declare type support functions


using _TramaDatos__ros_msg_type = robot_control__msg__TramaDatos;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robot_control
bool cdr_serialize_robot_control__msg__TramaDatos(
  const robot_control__msg__TramaDatos * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: u_m
  {
    size_t size = 4;
    auto array_ptr = ros_message->u_m;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: v_bat
  {
    cdr << ros_message->v_bat;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robot_control
bool cdr_deserialize_robot_control__msg__TramaDatos(
  eprosima::fastcdr::Cdr & cdr,
  robot_control__msg__TramaDatos * ros_message)
{
  // Field name: u_m
  {
    size_t size = 4;
    auto array_ptr = ros_message->u_m;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: v_bat
  {
    cdr >> ros_message->v_bat;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robot_control
size_t get_serialized_size_robot_control__msg__TramaDatos(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TramaDatos__ros_msg_type * ros_message = static_cast<const _TramaDatos__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: u_m
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->u_m;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: v_bat
  {
    size_t item_size = sizeof(ros_message->v_bat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robot_control
size_t max_serialized_size_robot_control__msg__TramaDatos(
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

  // Field name: u_m
  {
    size_t array_size = 4;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: v_bat
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
    using DataType = robot_control__msg__TramaDatos;
    is_plain =
      (
      offsetof(DataType, v_bat) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robot_control
bool cdr_serialize_key_robot_control__msg__TramaDatos(
  const robot_control__msg__TramaDatos * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: u_m
  {
    size_t size = 4;
    auto array_ptr = ros_message->u_m;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: v_bat
  {
    cdr << ros_message->v_bat;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robot_control
size_t get_serialized_size_key_robot_control__msg__TramaDatos(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TramaDatos__ros_msg_type * ros_message = static_cast<const _TramaDatos__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: u_m
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->u_m;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: v_bat
  {
    size_t item_size = sizeof(ros_message->v_bat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robot_control
size_t max_serialized_size_key_robot_control__msg__TramaDatos(
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
  // Field name: u_m
  {
    size_t array_size = 4;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: v_bat
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
    using DataType = robot_control__msg__TramaDatos;
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
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const robot_control__msg__TramaDatos * ros_message = static_cast<const robot_control__msg__TramaDatos *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_robot_control__msg__TramaDatos(ros_message, cdr);
}

static bool _TramaDatos__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  robot_control__msg__TramaDatos * ros_message = static_cast<robot_control__msg__TramaDatos *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_robot_control__msg__TramaDatos(cdr, ros_message);
}

static uint32_t _TramaDatos__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_robot_control__msg__TramaDatos(
      untyped_ros_message, 0));
}

static size_t _TramaDatos__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_robot_control__msg__TramaDatos(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_TramaDatos = {
  "robot_control::msg",
  "TramaDatos",
  _TramaDatos__cdr_serialize,
  _TramaDatos__cdr_deserialize,
  _TramaDatos__get_serialized_size,
  _TramaDatos__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _TramaDatos__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TramaDatos,
  get_message_typesupport_handle_function,
  &robot_control__msg__TramaDatos__get_type_hash,
  &robot_control__msg__TramaDatos__get_type_description,
  &robot_control__msg__TramaDatos__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robot_control, msg, TramaDatos)() {
  return &_TramaDatos__type_support;
}

#if defined(__cplusplus)
}
#endif
