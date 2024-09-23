// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from robot_control:msg/TramaDatos.idl
// generated code does not contain a copyright notice
#ifndef ROBOT_CONTROL__MSG__DETAIL__TRAMA_DATOS__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define ROBOT_CONTROL__MSG__DETAIL__TRAMA_DATOS__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "robot_control/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "robot_control/msg/detail/trama_datos__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robot_control
bool cdr_serialize_robot_control__msg__TramaDatos(
  const robot_control__msg__TramaDatos * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robot_control
bool cdr_deserialize_robot_control__msg__TramaDatos(
  eprosima::fastcdr::Cdr &,
  robot_control__msg__TramaDatos * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robot_control
size_t get_serialized_size_robot_control__msg__TramaDatos(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robot_control
size_t max_serialized_size_robot_control__msg__TramaDatos(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robot_control
bool cdr_serialize_key_robot_control__msg__TramaDatos(
  const robot_control__msg__TramaDatos * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robot_control
size_t get_serialized_size_key_robot_control__msg__TramaDatos(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robot_control
size_t max_serialized_size_key_robot_control__msg__TramaDatos(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robot_control
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robot_control, msg, TramaDatos)();

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_CONTROL__MSG__DETAIL__TRAMA_DATOS__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
