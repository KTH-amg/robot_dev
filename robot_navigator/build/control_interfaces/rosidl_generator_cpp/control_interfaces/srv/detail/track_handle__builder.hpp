// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from control_interfaces:srv/TrackHandle.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "control_interfaces/srv/track_handle.hpp"


#ifndef CONTROL_INTERFACES__SRV__DETAIL__TRACK_HANDLE__BUILDER_HPP_
#define CONTROL_INTERFACES__SRV__DETAIL__TRACK_HANDLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "control_interfaces/srv/detail/track_handle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace control_interfaces
{

namespace srv
{

namespace builder
{

class Init_TrackHandle_Request_right_angle
{
public:
  explicit Init_TrackHandle_Request_right_angle(::control_interfaces::srv::TrackHandle_Request & msg)
  : msg_(msg)
  {}
  ::control_interfaces::srv::TrackHandle_Request right_angle(::control_interfaces::srv::TrackHandle_Request::_right_angle_type arg)
  {
    msg_.right_angle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_interfaces::srv::TrackHandle_Request msg_;
};

class Init_TrackHandle_Request_left_angle
{
public:
  explicit Init_TrackHandle_Request_left_angle(::control_interfaces::srv::TrackHandle_Request & msg)
  : msg_(msg)
  {}
  Init_TrackHandle_Request_right_angle left_angle(::control_interfaces::srv::TrackHandle_Request::_left_angle_type arg)
  {
    msg_.left_angle = std::move(arg);
    return Init_TrackHandle_Request_right_angle(msg_);
  }

private:
  ::control_interfaces::srv::TrackHandle_Request msg_;
};

class Init_TrackHandle_Request_event_type
{
public:
  Init_TrackHandle_Request_event_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrackHandle_Request_left_angle event_type(::control_interfaces::srv::TrackHandle_Request::_event_type_type arg)
  {
    msg_.event_type = std::move(arg);
    return Init_TrackHandle_Request_left_angle(msg_);
  }

private:
  ::control_interfaces::srv::TrackHandle_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_interfaces::srv::TrackHandle_Request>()
{
  return control_interfaces::srv::builder::Init_TrackHandle_Request_event_type();
}

}  // namespace control_interfaces


namespace control_interfaces
{

namespace srv
{

namespace builder
{

class Init_TrackHandle_Response_distance
{
public:
  explicit Init_TrackHandle_Response_distance(::control_interfaces::srv::TrackHandle_Response & msg)
  : msg_(msg)
  {}
  ::control_interfaces::srv::TrackHandle_Response distance(::control_interfaces::srv::TrackHandle_Response::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_interfaces::srv::TrackHandle_Response msg_;
};

class Init_TrackHandle_Response_status
{
public:
  Init_TrackHandle_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrackHandle_Response_distance status(::control_interfaces::srv::TrackHandle_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_TrackHandle_Response_distance(msg_);
  }

private:
  ::control_interfaces::srv::TrackHandle_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_interfaces::srv::TrackHandle_Response>()
{
  return control_interfaces::srv::builder::Init_TrackHandle_Response_status();
}

}  // namespace control_interfaces


namespace control_interfaces
{

namespace srv
{

namespace builder
{

class Init_TrackHandle_Event_response
{
public:
  explicit Init_TrackHandle_Event_response(::control_interfaces::srv::TrackHandle_Event & msg)
  : msg_(msg)
  {}
  ::control_interfaces::srv::TrackHandle_Event response(::control_interfaces::srv::TrackHandle_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_interfaces::srv::TrackHandle_Event msg_;
};

class Init_TrackHandle_Event_request
{
public:
  explicit Init_TrackHandle_Event_request(::control_interfaces::srv::TrackHandle_Event & msg)
  : msg_(msg)
  {}
  Init_TrackHandle_Event_response request(::control_interfaces::srv::TrackHandle_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_TrackHandle_Event_response(msg_);
  }

private:
  ::control_interfaces::srv::TrackHandle_Event msg_;
};

class Init_TrackHandle_Event_info
{
public:
  Init_TrackHandle_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrackHandle_Event_request info(::control_interfaces::srv::TrackHandle_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_TrackHandle_Event_request(msg_);
  }

private:
  ::control_interfaces::srv::TrackHandle_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_interfaces::srv::TrackHandle_Event>()
{
  return control_interfaces::srv::builder::Init_TrackHandle_Event_info();
}

}  // namespace control_interfaces

#endif  // CONTROL_INTERFACES__SRV__DETAIL__TRACK_HANDLE__BUILDER_HPP_
