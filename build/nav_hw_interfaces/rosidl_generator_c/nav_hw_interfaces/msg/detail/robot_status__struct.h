// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nav_hw_interfaces:msg/RobotStatus.idl
// generated code does not contain a copyright notice

#ifndef NAV_HW_INTERFACES__MSG__DETAIL__ROBOT_STATUS__STRUCT_H_
#define NAV_HW_INTERFACES__MSG__DETAIL__ROBOT_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/RobotStatus in the package nav_hw_interfaces.
/**
  * 机器人状态（最基础的话题通信练习：一个节点发、一个节点收）
 */
typedef struct nav_hw_interfaces__msg__RobotStatus
{
  /// 机器人名字
  rosidl_runtime_c__String name;
  /// 电量百分比 0.0 ~ 100.0
  float battery;
  /// 当前速度 m/s
  float speed;
  /// 0=idle, 1=moving, 2=charging, 3=error
  int32_t status;
} nav_hw_interfaces__msg__RobotStatus;

// Struct for a sequence of nav_hw_interfaces__msg__RobotStatus.
typedef struct nav_hw_interfaces__msg__RobotStatus__Sequence
{
  nav_hw_interfaces__msg__RobotStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav_hw_interfaces__msg__RobotStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAV_HW_INTERFACES__MSG__DETAIL__ROBOT_STATUS__STRUCT_H_
