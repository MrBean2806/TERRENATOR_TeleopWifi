// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robot_control:msg/TramaDatos.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robot_control/msg/detail/trama_datos__rosidl_typesupport_introspection_c.h"
#include "robot_control/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robot_control/msg/detail/trama_datos__functions.h"
#include "robot_control/msg/detail/trama_datos__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void robot_control__msg__TramaDatos__rosidl_typesupport_introspection_c__TramaDatos_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robot_control__msg__TramaDatos__init(message_memory);
}

void robot_control__msg__TramaDatos__rosidl_typesupport_introspection_c__TramaDatos_fini_function(void * message_memory)
{
  robot_control__msg__TramaDatos__fini(message_memory);
}

size_t robot_control__msg__TramaDatos__rosidl_typesupport_introspection_c__size_function__TramaDatos__u_m(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * robot_control__msg__TramaDatos__rosidl_typesupport_introspection_c__get_const_function__TramaDatos__u_m(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * robot_control__msg__TramaDatos__rosidl_typesupport_introspection_c__get_function__TramaDatos__u_m(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void robot_control__msg__TramaDatos__rosidl_typesupport_introspection_c__fetch_function__TramaDatos__u_m(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    robot_control__msg__TramaDatos__rosidl_typesupport_introspection_c__get_const_function__TramaDatos__u_m(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void robot_control__msg__TramaDatos__rosidl_typesupport_introspection_c__assign_function__TramaDatos__u_m(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    robot_control__msg__TramaDatos__rosidl_typesupport_introspection_c__get_function__TramaDatos__u_m(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember robot_control__msg__TramaDatos__rosidl_typesupport_introspection_c__TramaDatos_message_member_array[2] = {
  {
    "u_m",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(robot_control__msg__TramaDatos, u_m),  // bytes offset in struct
    NULL,  // default value
    robot_control__msg__TramaDatos__rosidl_typesupport_introspection_c__size_function__TramaDatos__u_m,  // size() function pointer
    robot_control__msg__TramaDatos__rosidl_typesupport_introspection_c__get_const_function__TramaDatos__u_m,  // get_const(index) function pointer
    robot_control__msg__TramaDatos__rosidl_typesupport_introspection_c__get_function__TramaDatos__u_m,  // get(index) function pointer
    robot_control__msg__TramaDatos__rosidl_typesupport_introspection_c__fetch_function__TramaDatos__u_m,  // fetch(index, &value) function pointer
    robot_control__msg__TramaDatos__rosidl_typesupport_introspection_c__assign_function__TramaDatos__u_m,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "v_bat",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_control__msg__TramaDatos, v_bat),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers robot_control__msg__TramaDatos__rosidl_typesupport_introspection_c__TramaDatos_message_members = {
  "robot_control__msg",  // message namespace
  "TramaDatos",  // message name
  2,  // number of fields
  sizeof(robot_control__msg__TramaDatos),
  false,  // has_any_key_member_
  robot_control__msg__TramaDatos__rosidl_typesupport_introspection_c__TramaDatos_message_member_array,  // message members
  robot_control__msg__TramaDatos__rosidl_typesupport_introspection_c__TramaDatos_init_function,  // function to initialize message memory (memory has to be allocated)
  robot_control__msg__TramaDatos__rosidl_typesupport_introspection_c__TramaDatos_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t robot_control__msg__TramaDatos__rosidl_typesupport_introspection_c__TramaDatos_message_type_support_handle = {
  0,
  &robot_control__msg__TramaDatos__rosidl_typesupport_introspection_c__TramaDatos_message_members,
  get_message_typesupport_handle_function,
  &robot_control__msg__TramaDatos__get_type_hash,
  &robot_control__msg__TramaDatos__get_type_description,
  &robot_control__msg__TramaDatos__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robot_control
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_control, msg, TramaDatos)() {
  if (!robot_control__msg__TramaDatos__rosidl_typesupport_introspection_c__TramaDatos_message_type_support_handle.typesupport_identifier) {
    robot_control__msg__TramaDatos__rosidl_typesupport_introspection_c__TramaDatos_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &robot_control__msg__TramaDatos__rosidl_typesupport_introspection_c__TramaDatos_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
