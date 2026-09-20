// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nav_hw_interfaces:msg/SensorData.idl
// generated code does not contain a copyright notice

#ifndef NAV_HW_INTERFACES__MSG__DETAIL__SENSOR_DATA__STRUCT_H_
#define NAV_HW_INTERFACES__MSG__DETAIL__SENSOR_DATA__STRUCT_H_

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
// Member 'ranges'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/SensorData in the package nav_hw_interfaces.
/**
  * 传感器数据（用于演示 QoS 可靠性 / 队列深度 depth 与丢包）
  * seq 是递增序号：sub 只要发现 seq 跳号，就说明中间有消息丢了
 */
typedef struct nav_hw_interfaces__msg__SensorData
{
  /// 时间戳与坐标系（为后续 TF / 传感器打好基础）
  std_msgs__msg__Header header;
  /// 递增序号，用于检测丢包
  uint32_t seq;
  /// 单个距离读数 m
  float distance;
  /// 一圈测距值（变长数组）
  rosidl_runtime_c__float__Sequence ranges;
} nav_hw_interfaces__msg__SensorData;

// Struct for a sequence of nav_hw_interfaces__msg__SensorData.
typedef struct nav_hw_interfaces__msg__SensorData__Sequence
{
  nav_hw_interfaces__msg__SensorData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav_hw_interfaces__msg__SensorData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAV_HW_INTERFACES__MSG__DETAIL__SENSOR_DATA__STRUCT_H_
