// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nav_hw_interfaces:msg/Waypoint.idl
// generated code does not contain a copyright notice

#ifndef NAV_HW_INTERFACES__MSG__DETAIL__WAYPOINT__STRUCT_H_
#define NAV_HW_INTERFACES__MSG__DETAIL__WAYPOINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/Waypoint in the package nav_hw_interfaces.
/**
  * 导航目标点 / 路径点（可选：用于演示持久性 durability 与 latching）
 */
typedef struct nav_hw_interfaces__msg__Waypoint
{
  std_msgs__msg__Header header;
  /// 目标点 x 坐标 m
  float x;
  /// 目标点 y 坐标 m
  float y;
  /// 期望朝向 rad
  float yaw;
} nav_hw_interfaces__msg__Waypoint;

// Struct for a sequence of nav_hw_interfaces__msg__Waypoint.
typedef struct nav_hw_interfaces__msg__Waypoint__Sequence
{
  nav_hw_interfaces__msg__Waypoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav_hw_interfaces__msg__Waypoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAV_HW_INTERFACES__MSG__DETAIL__WAYPOINT__STRUCT_H_
