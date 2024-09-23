// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from interfaces:msg/TramaDatos.idl
// generated code does not contain a copyright notice

#include "interfaces/msg/detail/trama_datos__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_interfaces
const rosidl_type_hash_t *
interfaces__msg__TramaDatos__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xac, 0x7b, 0xfa, 0x00, 0xed, 0x2f, 0x0b, 0xe3,
      0x3a, 0xac, 0x66, 0x4a, 0x13, 0x80, 0xe8, 0xe4,
      0x70, 0x92, 0xa8, 0x5c, 0xa6, 0xc4, 0x17, 0x18,
      0x32, 0x07, 0x49, 0xe8, 0x65, 0xa0, 0x3e, 0xf1,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char interfaces__msg__TramaDatos__TYPE_NAME[] = "interfaces/msg/TramaDatos";

// Define type names, field names, and default values
static char interfaces__msg__TramaDatos__FIELD_NAME__u_m[] = "u_m";
static char interfaces__msg__TramaDatos__FIELD_NAME__v_bat[] = "v_bat";

static rosidl_runtime_c__type_description__Field interfaces__msg__TramaDatos__FIELDS[] = {
  {
    {interfaces__msg__TramaDatos__FIELD_NAME__u_m, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      4,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interfaces__msg__TramaDatos__FIELD_NAME__v_bat, 5, 5},
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
interfaces__msg__TramaDatos__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {interfaces__msg__TramaDatos__TYPE_NAME, 25, 25},
      {interfaces__msg__TramaDatos__FIELDS, 2, 2},
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
interfaces__msg__TramaDatos__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {interfaces__msg__TramaDatos__TYPE_NAME, 25, 25},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 27, 27},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
interfaces__msg__TramaDatos__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *interfaces__msg__TramaDatos__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
