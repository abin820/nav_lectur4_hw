#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "nav_hw_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__nav_hw_interfaces__msg__RobotStatus() -> *const std::ffi::c_void;
}

#[link(name = "nav_hw_interfaces__rosidl_generator_c")]
extern "C" {
    fn nav_hw_interfaces__msg__RobotStatus__init(msg: *mut RobotStatus) -> bool;
    fn nav_hw_interfaces__msg__RobotStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RobotStatus>, size: usize) -> bool;
    fn nav_hw_interfaces__msg__RobotStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RobotStatus>);
    fn nav_hw_interfaces__msg__RobotStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RobotStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<RobotStatus>) -> bool;
}

// Corresponds to nav_hw_interfaces__msg__RobotStatus
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// 机器人状态（最基础的话题通信练习：一个节点发、一个节点收）

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RobotStatus {
    /// 机器人名字
    pub name: rosidl_runtime_rs::String,

    /// 电量百分比 0.0 ~ 100.0
    pub battery: f32,

    /// 当前速度 m/s
    pub speed: f32,

    /// 0=idle, 1=moving, 2=charging, 3=error
    pub status: i32,

}



impl Default for RobotStatus {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !nav_hw_interfaces__msg__RobotStatus__init(&mut msg as *mut _) {
        panic!("Call to nav_hw_interfaces__msg__RobotStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RobotStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { nav_hw_interfaces__msg__RobotStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { nav_hw_interfaces__msg__RobotStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { nav_hw_interfaces__msg__RobotStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RobotStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RobotStatus where Self: Sized {
  const TYPE_NAME: &'static str = "nav_hw_interfaces/msg/RobotStatus";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__nav_hw_interfaces__msg__RobotStatus() }
  }
}


#[link(name = "nav_hw_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__nav_hw_interfaces__msg__SensorData() -> *const std::ffi::c_void;
}

#[link(name = "nav_hw_interfaces__rosidl_generator_c")]
extern "C" {
    fn nav_hw_interfaces__msg__SensorData__init(msg: *mut SensorData) -> bool;
    fn nav_hw_interfaces__msg__SensorData__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SensorData>, size: usize) -> bool;
    fn nav_hw_interfaces__msg__SensorData__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SensorData>);
    fn nav_hw_interfaces__msg__SensorData__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SensorData>, out_seq: *mut rosidl_runtime_rs::Sequence<SensorData>) -> bool;
}

// Corresponds to nav_hw_interfaces__msg__SensorData
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// 传感器数据（用于演示 QoS 可靠性 / 队列深度 depth 与丢包）
/// seq 是递增序号：sub 只要发现 seq 跳号，就说明中间有消息丢了

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SensorData {
    /// 时间戳与坐标系（为后续 TF / 传感器打好基础）
    pub header: std_msgs::msg::rmw::Header,

    /// 递增序号，用于检测丢包
    pub seq: u32,

    /// 单个距离读数 m
    pub distance: f32,

    /// 一圈测距值（变长数组）
    pub ranges: rosidl_runtime_rs::Sequence<f32>,

}



impl Default for SensorData {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !nav_hw_interfaces__msg__SensorData__init(&mut msg as *mut _) {
        panic!("Call to nav_hw_interfaces__msg__SensorData__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SensorData {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { nav_hw_interfaces__msg__SensorData__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { nav_hw_interfaces__msg__SensorData__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { nav_hw_interfaces__msg__SensorData__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SensorData {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SensorData where Self: Sized {
  const TYPE_NAME: &'static str = "nav_hw_interfaces/msg/SensorData";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__nav_hw_interfaces__msg__SensorData() }
  }
}


#[link(name = "nav_hw_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__nav_hw_interfaces__msg__Waypoint() -> *const std::ffi::c_void;
}

#[link(name = "nav_hw_interfaces__rosidl_generator_c")]
extern "C" {
    fn nav_hw_interfaces__msg__Waypoint__init(msg: *mut Waypoint) -> bool;
    fn nav_hw_interfaces__msg__Waypoint__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Waypoint>, size: usize) -> bool;
    fn nav_hw_interfaces__msg__Waypoint__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Waypoint>);
    fn nav_hw_interfaces__msg__Waypoint__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Waypoint>, out_seq: *mut rosidl_runtime_rs::Sequence<Waypoint>) -> bool;
}

// Corresponds to nav_hw_interfaces__msg__Waypoint
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// 导航目标点 / 路径点（可选：用于演示持久性 durability 与 latching）

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Waypoint {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// 目标点 x 坐标 m
    pub x: f32,

    /// 目标点 y 坐标 m
    pub y: f32,

    /// 期望朝向 rad
    pub yaw: f32,

}



impl Default for Waypoint {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !nav_hw_interfaces__msg__Waypoint__init(&mut msg as *mut _) {
        panic!("Call to nav_hw_interfaces__msg__Waypoint__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Waypoint {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { nav_hw_interfaces__msg__Waypoint__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { nav_hw_interfaces__msg__Waypoint__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { nav_hw_interfaces__msg__Waypoint__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Waypoint {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Waypoint where Self: Sized {
  const TYPE_NAME: &'static str = "nav_hw_interfaces/msg/Waypoint";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__nav_hw_interfaces__msg__Waypoint() }
  }
}


