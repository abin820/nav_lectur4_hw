// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from nav_hw_interfaces:msg/RobotStatus.idl
// generated code does not contain a copyright notice

#ifndef NAV_HW_INTERFACES__MSG__DETAIL__ROBOT_STATUS__TRAITS_HPP_
#define NAV_HW_INTERFACES__MSG__DETAIL__ROBOT_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "nav_hw_interfaces/msg/detail/robot_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace nav_hw_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const RobotStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: battery
  {
    out << "battery: ";
    rosidl_generator_traits::value_to_yaml(msg.battery, out);
    out << ", ";
  }

  // member: speed
  {
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobotStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: battery
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery: ";
    rosidl_generator_traits::value_to_yaml(msg.battery, out);
    out << "\n";
  }

  // member: speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << "\n";
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotStatus & msg, bool use_flow_style = false)
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

}  // namespace nav_hw_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use nav_hw_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const nav_hw_interfaces::msg::RobotStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  nav_hw_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use nav_hw_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const nav_hw_interfaces::msg::RobotStatus & msg)
{
  return nav_hw_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<nav_hw_interfaces::msg::RobotStatus>()
{
  return "nav_hw_interfaces::msg::RobotStatus";
}

template<>
inline const char * name<nav_hw_interfaces::msg::RobotStatus>()
{
  return "nav_hw_interfaces/msg/RobotStatus";
}

template<>
struct has_fixed_size<nav_hw_interfaces::msg::RobotStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<nav_hw_interfaces::msg::RobotStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<nav_hw_interfaces::msg::RobotStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NAV_HW_INTERFACES__MSG__DETAIL__ROBOT_STATUS__TRAITS_HPP_
