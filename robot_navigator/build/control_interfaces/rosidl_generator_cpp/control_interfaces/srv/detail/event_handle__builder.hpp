// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from control_interfaces:srv/EventHandle.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "control_interfaces/srv/event_handle.hpp"


#ifndef CONTROL_INTERFACES__SRV__DETAIL__EVENT_HANDLE__BUILDER_HPP_
#define CONTROL_INTERFACES__SRV__DETAIL__EVENT_HANDLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "control_interfaces/srv/detail/event_handle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace control_interfaces
{

namespace srv
{

namespace builder
{

class Init_EventHandle_Request_event_type
{
public:
  Init_EventHandle_Request_event_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::control_interfaces::srv::EventHandle_Request event_type(::control_interfaces::srv::EventHandle_Request::_event_type_type arg)
  {
    msg_.event_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_interfaces::srv::EventHandle_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_interfaces::srv::EventHandle_Request>()
{
  return control_interfaces::srv::builder::Init_EventHandle_Request_event_type();
}

}  // namespace control_interfaces


namespace control_interfaces
{

namespace srv
{

namespace builder
{

class Init_EventHandle_Response_status
{
public:
  Init_EventHandle_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::control_interfaces::srv::EventHandle_Response status(::control_interfaces::srv::EventHandle_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_interfaces::srv::EventHandle_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_interfaces::srv::EventHandle_Response>()
{
  return control_interfaces::srv::builder::Init_EventHandle_Response_status();
}

}  // namespace control_interfaces


namespace control_interfaces
{

namespace srv
{

namespace builder
{

class Init_EventHandle_Event_response
{
public:
  explicit Init_EventHandle_Event_response(::control_interfaces::srv::EventHandle_Event & msg)
  : msg_(msg)
  {}
  ::control_interfaces::srv::EventHandle_Event response(::control_interfaces::srv::EventHandle_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_interfaces::srv::EventHandle_Event msg_;
};

class Init_EventHandle_Event_request
{
public:
  explicit Init_EventHandle_Event_request(::control_interfaces::srv::EventHandle_Event & msg)
  : msg_(msg)
  {}
  Init_EventHandle_Event_response request(::control_interfaces::srv::EventHandle_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_EventHandle_Event_response(msg_);
  }

private:
  ::control_interfaces::srv::EventHandle_Event msg_;
};

class Init_EventHandle_Event_info
{
public:
  Init_EventHandle_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EventHandle_Event_request info(::control_interfaces::srv::EventHandle_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_EventHandle_Event_request(msg_);
  }

private:
  ::control_interfaces::srv::EventHandle_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_interfaces::srv::EventHandle_Event>()
{
  return control_interfaces::srv::builder::Init_EventHandle_Event_info();
}

}  // namespace control_interfaces

#endif  // CONTROL_INTERFACES__SRV__DETAIL__EVENT_HANDLE__BUILDER_HPP_
