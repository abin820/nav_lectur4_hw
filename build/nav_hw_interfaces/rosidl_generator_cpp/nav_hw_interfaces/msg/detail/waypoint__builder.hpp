// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nav_hw_interfaces:msg/Waypoint.idl
// generated code does not contain a copyright notice

#ifndef NAV_HW_INTERFACES__MSG__DETAIL__WAYPOINT__BUILDER_HPP_
#define NAV_HW_INTERFACES__MSG__DETAIL__WAYPOINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "nav_hw_interfaces/msg/detail/waypoint__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace nav_hw_interfaces
{

namespace msg
{

namespace builder
{

class Init_Waypoint_yaw
{
public:
  explicit Init_Waypoint_yaw(::nav_hw_interfaces::msg::Waypoint & msg)
  : msg_(msg)
  {}
  ::nav_hw_interfaces::msg::Waypoint yaw(::nav_hw_interfaces::msg::Waypoint::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav_hw_interfaces::msg::Waypoint msg_;
};

class Init_Waypoint_y
{
public:
  explicit Init_Waypoint_y(::nav_hw_interfaces::msg::Waypoint & msg)
  : msg_(msg)
  {}
  Init_Waypoint_yaw y(::nav_hw_interfaces::msg::Waypoint::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Waypoint_yaw(msg_);
  }

private:
  ::nav_hw_interfaces::msg::Waypoint msg_;
};

class Init_Waypoint_x
{
public:
  explicit Init_Waypoint_x(::nav_hw_interfaces::msg::Waypoint & msg)
  : msg_(msg)
  {}
  Init_Waypoint_y x(::nav_hw_interfaces::msg::Waypoint::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Waypoint_y(msg_);
  }

private:
  ::nav_hw_interfaces::msg::Waypoint msg_;
};

class Init_Waypoint_header
{
public:
  Init_Waypoint_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Waypoint_x header(::nav_hw_interfaces::msg::Waypoint::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Waypoint_x(msg_);
  }

private:
  ::nav_hw_interfaces::msg::Waypoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav_hw_interfaces::msg::Waypoint>()
{
  return nav_hw_interfaces::msg::builder::Init_Waypoint_header();
}

}  // namespace nav_hw_interfaces

#endif  // NAV_HW_INTERFACES__MSG__DETAIL__WAYPOINT__BUILDER_HPP_
