// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from nav_hw_interfaces:msg/Waypoint.idl
// generated code does not contain a copyright notice

#ifndef NAV_HW_INTERFACES__MSG__DETAIL__WAYPOINT__TRAITS_HPP_
#define NAV_HW_INTERFACES__MSG__DETAIL__WAYPOINT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "nav_hw_interfaces/msg/detail/waypoint__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace nav_hw_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Waypoint & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: yaw
  {
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Waypoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Waypoint & msg, bool use_flow_style = false)
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
  const nav_hw_interfaces::msg::Waypoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  nav_hw_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use nav_hw_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const nav_hw_interfaces::msg::Waypoint & msg)
{
  return nav_hw_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<nav_hw_interfaces::msg::Waypoint>()
{
  return "nav_hw_interfaces::msg::Waypoint";
}

template<>
inline const char * name<nav_hw_interfaces::msg::Waypoint>()
{
  return "nav_hw_interfaces/msg/Waypoint";
}

template<>
struct has_fixed_size<nav_hw_interfaces::msg::Waypoint>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<nav_hw_interfaces::msg::Waypoint>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<nav_hw_interfaces::msg::Waypoint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NAV_HW_INTERFACES__MSG__DETAIL__WAYPOINT__TRAITS_HPP_
