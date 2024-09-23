// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robot_control:msg/TramaDatos.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robot_control/msg/trama_datos.hpp"


#ifndef ROBOT_CONTROL__MSG__DETAIL__TRAMA_DATOS__STRUCT_HPP_
#define ROBOT_CONTROL__MSG__DETAIL__TRAMA_DATOS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__robot_control__msg__TramaDatos __attribute__((deprecated))
#else
# define DEPRECATED__robot_control__msg__TramaDatos __declspec(deprecated)
#endif

namespace robot_control
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TramaDatos_
{
  using Type = TramaDatos_<ContainerAllocator>;

  explicit TramaDatos_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 4>::iterator, float>(this->u_m.begin(), this->u_m.end(), 0.0f);
      this->v_bat = 0;
    }
  }

  explicit TramaDatos_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : u_m(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 4>::iterator, float>(this->u_m.begin(), this->u_m.end(), 0.0f);
      this->v_bat = 0;
    }
  }

  // field types and members
  using _u_m_type =
    std::array<float, 4>;
  _u_m_type u_m;
  using _v_bat_type =
    uint16_t;
  _v_bat_type v_bat;

  // setters for named parameter idiom
  Type & set__u_m(
    const std::array<float, 4> & _arg)
  {
    this->u_m = _arg;
    return *this;
  }
  Type & set__v_bat(
    const uint16_t & _arg)
  {
    this->v_bat = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robot_control::msg::TramaDatos_<ContainerAllocator> *;
  using ConstRawPtr =
    const robot_control::msg::TramaDatos_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robot_control::msg::TramaDatos_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robot_control::msg::TramaDatos_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robot_control::msg::TramaDatos_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robot_control::msg::TramaDatos_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robot_control::msg::TramaDatos_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robot_control::msg::TramaDatos_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robot_control::msg::TramaDatos_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robot_control::msg::TramaDatos_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robot_control__msg__TramaDatos
    std::shared_ptr<robot_control::msg::TramaDatos_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robot_control__msg__TramaDatos
    std::shared_ptr<robot_control::msg::TramaDatos_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TramaDatos_ & other) const
  {
    if (this->u_m != other.u_m) {
      return false;
    }
    if (this->v_bat != other.v_bat) {
      return false;
    }
    return true;
  }
  bool operator!=(const TramaDatos_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TramaDatos_

// alias to use template instance with default allocator
using TramaDatos =
  robot_control::msg::TramaDatos_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robot_control

#endif  // ROBOT_CONTROL__MSG__DETAIL__TRAMA_DATOS__STRUCT_HPP_
