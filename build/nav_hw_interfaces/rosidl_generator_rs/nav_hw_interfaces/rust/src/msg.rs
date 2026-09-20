#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to nav_hw_interfaces__msg__RobotStatus
/// 机器人状态（最基础的话题通信练习：一个节点发、一个节点收）

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RobotStatus {
    /// 机器人名字
    pub name: std::string::String,

    /// 电量百分比 0.0 ~ 100.0
    pub battery: f32,

    /// 当前速度 m/s
    pub speed: f32,

    /// 0=idle, 1=moving, 2=charging, 3=error
    pub status: i32,

}



impl Default for RobotStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::RobotStatus::default())
  }
}

impl rosidl_runtime_rs::Message for RobotStatus {
  type RmwMsg = super::msg::rmw::RobotStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
        battery: msg.battery,
        speed: msg.speed,
        status: msg.status,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
      battery: msg.battery,
      speed: msg.speed,
      status: msg.status,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      name: msg.name.to_string(),
      battery: msg.battery,
      speed: msg.speed,
      status: msg.status,
    }
  }
}


// Corresponds to nav_hw_interfaces__msg__SensorData
/// 传感器数据（用于演示 QoS 可靠性 / 队列深度 depth 与丢包）
/// seq 是递增序号：sub 只要发现 seq 跳号，就说明中间有消息丢了

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SensorData {
    /// 时间戳与坐标系（为后续 TF / 传感器打好基础）
    pub header: std_msgs::msg::Header,

    /// 递增序号，用于检测丢包
    pub seq: u32,

    /// 单个距离读数 m
    pub distance: f32,

    /// 一圈测距值（变长数组）
    pub ranges: Vec<f32>,

}



impl Default for SensorData {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SensorData::default())
  }
}

impl rosidl_runtime_rs::Message for SensorData {
  type RmwMsg = super::msg::rmw::SensorData;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        seq: msg.seq,
        distance: msg.distance,
        ranges: msg.ranges.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      seq: msg.seq,
      distance: msg.distance,
        ranges: msg.ranges.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      seq: msg.seq,
      distance: msg.distance,
      ranges: msg.ranges
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to nav_hw_interfaces__msg__Waypoint
/// 导航目标点 / 路径点（可选：用于演示持久性 durability 与 latching）

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Waypoint {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// 目标点 x 坐标 m
    pub x: f32,

    /// 目标点 y 坐标 m
    pub y: f32,

    /// 期望朝向 rad
    pub yaw: f32,

}



impl Default for Waypoint {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Waypoint::default())
  }
}

impl rosidl_runtime_rs::Message for Waypoint {
  type RmwMsg = super::msg::rmw::Waypoint;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        x: msg.x,
        y: msg.y,
        yaw: msg.yaw,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      x: msg.x,
      y: msg.y,
      yaw: msg.yaw,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      x: msg.x,
      y: msg.y,
      yaw: msg.yaw,
    }
  }
}


