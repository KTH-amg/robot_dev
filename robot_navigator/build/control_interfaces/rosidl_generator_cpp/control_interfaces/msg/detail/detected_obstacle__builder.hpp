// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from control_interfaces:msg/DetectedObstacle.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "control_interfaces/msg/detected_obstacle.hpp"


#ifndef CONTROL_INTERFACES__MSG__DETAIL__DETECTED_OBSTACLE__BUILDER_HPP_
#define CONTROL_INTERFACES__MSG__DETAIL__DETECTED_OBSTACLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "control_interfaces/msg/detail/detected_obstacle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace control_interfaces
{

namespace msg
{

namespace builder
{

class Init_DetectedObstacle_yaw
{
public:
  explicit Init_DetectedObstacle_yaw(::control_interfaces::msg::DetectedObstacle & msg)
  : msg_(msg)
  {}
  ::control_interfaces::msg::DetectedObstacle yaw(::control_interfaces::msg::DetectedObstacle::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_interfaces::msg::DetectedObstacle msg_;
};

class Init_DetectedObstacle_y
{
public:
  explicit Init_DetectedObstacle_y(::control_interfaces::msg::DetectedObstacle & msg)
  : msg_(msg)
  {}
  Init_DetectedObstacle_yaw y(::control_interfaces::msg::DetectedObstacle::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_DetectedObstacle_yaw(msg_);
  }

private:
  ::control_interfaces::msg::DetectedObstacle msg_;
};

class Init_DetectedObstacle_x
{
public:
  Init_DetectedObstacle_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DetectedObstacle_y x(::control_interfaces::msg::DetectedObstacle::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_DetectedObstacle_y(msg_);
  }

private:
  ::control_interfaces::msg::DetectedObstacle msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_interfaces::msg::DetectedObstacle>()
{
  return control_interfaces::msg::builder::Init_DetectedObstacle_x();
}

}  // namespace control_interfaces

#endif  // CONTROL_INTERFACES__MSG__DETAIL__DETECTED_OBSTACLE__BUILDER_HPP_
