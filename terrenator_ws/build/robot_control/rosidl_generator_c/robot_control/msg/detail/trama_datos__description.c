// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from robot_control:msg/TramaDatos.idl
// generated code does not contain a copyright notice

#include "robot_control/msg/detail/trama_datos__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_robot_control
const rosidl_type_hash_t *
robot_control__msg__TramaDatos__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x77, 0xf8, 0x40, 0x91, 0xa2, 0x73, 0xbb, 0xe4,
      0x51, 0xb7, 0x48, 0x1b, 0xd2, 0x6c, 0x7c, 0xa4,
      0xd7, 0xb6, 0xc8, 0x5a, 0x53, 0x4d, 0xb4, 0x0d,
      0xbb, 0x9e, 0xc3, 0x5b, 0xf5, 0x5f, 0x3c, 0xa5,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char robot_control__msg__TramaDatos__TYPE_NAME[] = "robot_control/msg/TramaDatos";

// Define type names, field names, and default values
static char robot_control__msg__TramaDatos__FIELD_NAME__u_m[] = "u_m";
static char robot_control__msg__TramaDatos__FIELD_NAME__v_bat[] = "v_bat";

static rosidl_runtime_c__type_description__Field robot_control__msg__TramaDatos__FIELDS[] = {
  {
    {robot_control__msg__TramaDatos__FIELD_NAME__u_m, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      4,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robot_control__msg__TramaDatos__FIELD_NAME__v_bat, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
robot_control__msg__TramaDatos__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {robot_control__msg__TramaDatos__TYPE_NAME, 28, 28},
      {robot_control__msg__TramaDatos__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32[4] u_m\n"
  "uint16 v_bat";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
robot_control__msg__TramaDatos__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {robot_control__msg__TramaDatos__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 27, 27},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
robot_control__msg__TramaDatos__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *robot_control__msg__TramaDatos__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
