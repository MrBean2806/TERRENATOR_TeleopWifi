// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:msg/TramaDatos.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "interfaces/msg/trama_datos.hpp"


#ifndef INTERFACES__MSG__DETAIL__TRAMA_DATOS__BUILDER_HPP_
#define INTERFACES__MSG__DETAIL__TRAMA_DATOS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/msg/detail/trama_datos__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace msg
{

namespace builder
{

class Init_TramaDatos_v_bat
{
public:
  explicit Init_TramaDatos_v_bat(::interfaces::msg::TramaDatos & msg)
  : msg_(msg)
  {}
  ::interfaces::msg::TramaDatos v_bat(::interfaces::msg::TramaDatos::_v_bat_type arg)
  {
    msg_.v_bat = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::msg::TramaDatos msg_;
};

class Init_TramaDatos_u_m
{
public:
  Init_TramaDatos_u_m()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TramaDatos_v_bat u_m(::interfaces::msg::TramaDatos::_u_m_type arg)
  {
    msg_.u_m = std::move(arg);
    return Init_TramaDatos_v_bat(msg_);
  }

private:
  ::interfaces::msg::TramaDatos msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::msg::TramaDatos>()
{
  return interfaces::msg::builder::Init_TramaDatos_u_m();
}

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__TRAMA_DATOS__BUILDER_HPP_
