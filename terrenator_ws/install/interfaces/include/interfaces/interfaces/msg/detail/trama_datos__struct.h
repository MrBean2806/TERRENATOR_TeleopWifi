// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:msg/TramaDatos.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "interfaces/msg/trama_datos.h"


#ifndef INTERFACES__MSG__DETAIL__TRAMA_DATOS__STRUCT_H_
#define INTERFACES__MSG__DETAIL__TRAMA_DATOS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/TramaDatos in the package interfaces.
typedef struct interfaces__msg__TramaDatos
{
  float u_m[4];
  uint16_t v_bat;
} interfaces__msg__TramaDatos;

// Struct for a sequence of interfaces__msg__TramaDatos.
typedef struct interfaces__msg__TramaDatos__Sequence
{
  interfaces__msg__TramaDatos * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__msg__TramaDatos__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__MSG__DETAIL__TRAMA_DATOS__STRUCT_H_
