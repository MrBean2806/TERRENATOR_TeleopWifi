// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robot_control:msg/TramaDatos.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robot_control/msg/trama_datos.h"


#ifndef ROBOT_CONTROL__MSG__DETAIL__TRAMA_DATOS__STRUCT_H_
#define ROBOT_CONTROL__MSG__DETAIL__TRAMA_DATOS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/TramaDatos in the package robot_control.
typedef struct robot_control__msg__TramaDatos
{
  float u_m[4];
  uint16_t v_bat;
} robot_control__msg__TramaDatos;

// Struct for a sequence of robot_control__msg__TramaDatos.
typedef struct robot_control__msg__TramaDatos__Sequence
{
  robot_control__msg__TramaDatos * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_control__msg__TramaDatos__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_CONTROL__MSG__DETAIL__TRAMA_DATOS__STRUCT_H_
