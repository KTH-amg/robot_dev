// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from control_interfaces:srv/DetectHandle.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "control_interfaces/srv/detect_handle.hpp"


#ifndef CONTROL_INTERFACES__SRV__DETAIL__DETECT_HANDLE__BUILDER_HPP_
#define CONTROL_INTERFACES__SRV__DETAIL__DETECT_HANDLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "control_interfaces/srv/detail/detect_handle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace control_interfaces
{

namespace srv
{

namespace builder
{

class Init_DetectHandle_Request_right_angle
{
public:
  explicit Init_DetectHandle_Request_right_angle(::control_interfaces::srv::DetectHandle_Request & msg)
  : msg_(msg)
  {}
  ::control_interfaces::srv::DetectHandle_Request right_angle(::control_interfaces::srv::DetectHandle_Request::_right_angle_type arg)
  {
    msg_.right_angle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_interfaces::srv::DetectHandle_Request msg_;
};

class Init_DetectHandle_Request_left_angle
{
public:
  Init_DetectHandle_Request_left_angle()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DetectHandle_Request_right_angle left_angle(::control_interfaces::srv::DetectHandle_Request::_left_angle_type arg)
  {
    msg_.left_angle = std::move(arg);
    return Init_DetectHandle_Request_right_angle(msg_);
  }

private:
  ::control_interfaces::srv::DetectHandle_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_interfaces::srv::DetectHandle_Request>()
{
  return control_interfaces::srv::builder::Init_DetectHandle_Request_left_angle();
}

}  // namespace control_interfaces


namespace control_interfaces
{

namespace srv
{

namespace builder
{

class Init_DetectHandle_Response_flag
{
public:
  Init_DetectHandle_Response_flag()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::control_interfaces::srv::DetectHandle_Response flag(::control_interfaces::srv::DetectHandle_Response::_flag_type arg)
  {
    msg_.flag = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_interfaces::srv::DetectHandle_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_interfaces::srv::DetectHandle_Response>()
{
  return control_interfaces::srv::builder::Init_DetectHandle_Response_flag();
}

}  // namespace control_interfaces


namespace control_interfaces
{

namespace srv
{

namespace builder
{

class Init_DetectHandle_Event_response
{
public:
  explicit Init_DetectHandle_Event_response(::control_interfaces::srv::DetectHandle_Event & msg)
  : msg_(msg)
  {}
  ::control_interfaces::srv::DetectHandle_Event response(::control_interfaces::srv::DetectHandle_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_interfaces::srv::DetectHandle_Event msg_;
};

class Init_DetectHandle_Event_request
{
public:
  explicit Init_DetectHandle_Event_request(::control_interfaces::srv::DetectHandle_Event & msg)
  : msg_(msg)
  {}
  Init_DetectHandle_Event_response request(::control_interfaces::srv::DetectHandle_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_DetectHandle_Event_response(msg_);
  }

private:
  ::control_interfaces::srv::DetectHandle_Event msg_;
};

class Init_DetectHandle_Event_info
{
public:
  Init_DetectHandle_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DetectHandle_Event_request info(::control_interfaces::srv::DetectHandle_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_DetectHandle_Event_request(msg_);
  }

private:
  ::control_interfaces::srv::DetectHandle_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_interfaces::srv::DetectHandle_Event>()
{
  return control_interfaces::srv::builder::Init_DetectHandle_Event_info();
}

}  // namespace control_interfaces

#endif  // CONTROL_INTERFACES__SRV__DETAIL__DETECT_HANDLE__BUILDER_HPP_
