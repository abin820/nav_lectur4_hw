// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nav_hw_interfaces:msg/RobotStatus.idl
// generated code does not contain a copyright notice

#ifndef NAV_HW_INTERFACES__MSG__DETAIL__ROBOT_STATUS__BUILDER_HPP_
#define NAV_HW_INTERFACES__MSG__DETAIL__ROBOT_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "nav_hw_interfaces/msg/detail/robot_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace nav_hw_interfaces
{

namespace msg
{

namespace builder
{

class Init_RobotStatus_status
{
public:
  explicit Init_RobotStatus_status(::nav_hw_interfaces::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  ::nav_hw_interfaces::msg::RobotStatus status(::nav_hw_interfaces::msg::RobotStatus::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav_hw_interfaces::msg::RobotStatus msg_;
};

class Init_RobotStatus_speed
{
public:
  explicit Init_RobotStatus_speed(::nav_hw_interfaces::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_status speed(::nav_hw_interfaces::msg::RobotStatus::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_RobotStatus_status(msg_);
  }

private:
  ::nav_hw_interfaces::msg::RobotStatus msg_;
};

class Init_RobotStatus_battery
{
public:
  explicit Init_RobotStatus_battery(::nav_hw_interfaces::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_speed battery(::nav_hw_interfaces::msg::RobotStatus::_battery_type arg)
  {
    msg_.battery = std::move(arg);
    return Init_RobotStatus_speed(msg_);
  }

private:
  ::nav_hw_interfaces::msg::RobotStatus msg_;
};

class Init_RobotStatus_name
{
public:
  Init_RobotStatus_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotStatus_battery name(::nav_hw_interfaces::msg::RobotStatus::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_RobotStatus_battery(msg_);
  }

private:
  ::nav_hw_interfaces::msg::RobotStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav_hw_interfaces::msg::RobotStatus>()
{
  return nav_hw_interfaces::msg::builder::Init_RobotStatus_name();
}

}  // namespace nav_hw_interfaces

#endif  // NAV_HW_INTERFACES__MSG__DETAIL__ROBOT_STATUS__BUILDER_HPP_
