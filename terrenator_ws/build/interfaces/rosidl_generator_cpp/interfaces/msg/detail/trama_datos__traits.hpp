// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces:msg/TramaDatos.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "interfaces/msg/trama_datos.hpp"


#ifndef INTERFACES__MSG__DETAIL__TRAMA_DATOS__TRAITS_HPP_
#define INTERFACES__MSG__DETAIL__TRAMA_DATOS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interfaces/msg/detail/trama_datos__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const TramaDatos & msg,
  std::ostream & out)
{
  out << "{";
  // member: u_m
  {
    if (msg.u_m.size() == 0) {
      out << "u_m: []";
    } else {
      out << "u_m: [";
      size_t pending_items = msg.u_m.size();
      for (auto item : msg.u_m) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: v_bat
  {
    out << "v_bat: ";
    rosidl_generator_traits::value_to_yaml(msg.v_bat, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TramaDatos & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: u_m
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.u_m.size() == 0) {
      out << "u_m: []\n";
    } else {
      out << "u_m:\n";
      for (auto item : msg.u_m) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: v_bat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "v_bat: ";
    rosidl_generator_traits::value_to_yaml(msg.v_bat, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TramaDatos & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace interfaces

namespace rosidl_generator_traits
{

[[deprecated("use interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interfaces::msg::TramaDatos & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const interfaces::msg::TramaDatos & msg)
{
  return interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces::msg::TramaDatos>()
{
  return "interfaces::msg::TramaDatos";
}

template<>
inline const char * name<interfaces::msg::TramaDatos>()
{
  return "interfaces/msg/TramaDatos";
}

template<>
struct has_fixed_size<interfaces::msg::TramaDatos>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interfaces::msg::TramaDatos>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interfaces::msg::TramaDatos>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES__MSG__DETAIL__TRAMA_DATOS__TRAITS_HPP_
