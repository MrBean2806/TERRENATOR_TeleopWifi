// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from interfaces:msg/TramaDatos.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "interfaces/msg/detail/trama_datos__functions.h"
#include "interfaces/msg/detail/trama_datos__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void TramaDatos_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) interfaces::msg::TramaDatos(_init);
}

void TramaDatos_fini_function(void * message_memory)
{
  auto typed_message = static_cast<interfaces::msg::TramaDatos *>(message_memory);
  typed_message->~TramaDatos();
}

size_t size_function__TramaDatos__u_m(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__TramaDatos__u_m(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__TramaDatos__u_m(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__TramaDatos__u_m(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__TramaDatos__u_m(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__TramaDatos__u_m(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__TramaDatos__u_m(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TramaDatos_message_member_array[2] = {
  {
    "u_m",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(interfaces::msg::TramaDatos, u_m),  // bytes offset in struct
    nullptr,  // default value
    size_function__TramaDatos__u_m,  // size() function pointer
    get_const_function__TramaDatos__u_m,  // get_const(index) function pointer
    get_function__TramaDatos__u_m,  // get(index) function pointer
    fetch_function__TramaDatos__u_m,  // fetch(index, &value) function pointer
    assign_function__TramaDatos__u_m,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "v_bat",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces::msg::TramaDatos, v_bat),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TramaDatos_message_members = {
  "interfaces::msg",  // message namespace
  "TramaDatos",  // message name
  2,  // number of fields
  sizeof(interfaces::msg::TramaDatos),
  false,  // has_any_key_member_
  TramaDatos_message_member_array,  // message members
  TramaDatos_init_function,  // function to initialize message memory (memory has to be allocated)
  TramaDatos_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TramaDatos_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TramaDatos_message_members,
  get_message_typesupport_handle_function,
  &interfaces__msg__TramaDatos__get_type_hash,
  &interfaces__msg__TramaDatos__get_type_description,
  &interfaces__msg__TramaDatos__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<interfaces::msg::TramaDatos>()
{
  return &::interfaces::msg::rosidl_typesupport_introspection_cpp::TramaDatos_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interfaces, msg, TramaDatos)() {
  return &::interfaces::msg::rosidl_typesupport_introspection_cpp::TramaDatos_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
