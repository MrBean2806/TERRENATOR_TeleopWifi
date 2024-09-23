// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_control:msg/TramaDatos.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robot_control/msg/trama_datos.hpp"


#ifndef ROBOT_CONTROL__MSG__DETAIL__TRAMA_DATOS__BUILDER_HPP_
#define ROBOT_CONTROL__MSG__DETAIL__TRAMA_DATOS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_control/msg/detail/trama_datos__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_control
{

namespace msg
{

namespace builder
{

class Init_TramaDatos_v_bat
{
public:
  explicit Init_TramaDatos_v_bat(::robot_control::msg::TramaDatos & msg)
  : msg_(msg)
  {}
  ::robot_control::msg::TramaDatos v_bat(::robot_control::msg::TramaDatos::_v_bat_type arg)
  {
    msg_.v_bat = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_control::msg::TramaDatos msg_;
};

class Init_TramaDatos_u_m
{
public:
  Init_TramaDatos_u_m()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TramaDatos_v_bat u_m(::robot_control::msg::TramaDatos::_u_m_type arg)
  {
    msg_.u_m = std::move(arg);
    return Init_TramaDatos_v_bat(msg_);
  }

private:
  ::robot_control::msg::TramaDatos msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_control::msg::TramaDatos>()
{
  return robot_control::msg::builder::Init_TramaDatos_u_m();
}

}  // namespace robot_control

#endif  // ROBOT_CONTROL__MSG__DETAIL__TRAMA_DATOS__BUILDER_HPP_
