// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from control_interfaces:srv/TrackHandle.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "control_interfaces/srv/track_handle.hpp"


#ifndef CONTROL_INTERFACES__SRV__DETAIL__TRACK_HANDLE__TRAITS_HPP_
#define CONTROL_INTERFACES__SRV__DETAIL__TRACK_HANDLE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "control_interfaces/srv/detail/track_handle__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace control_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const TrackHandle_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: event_type
  {
    out << "event_type: ";
    rosidl_generator_traits::value_to_yaml(msg.event_type, out);
    out << ", ";
  }

  // member: left_angle
  {
    out << "left_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.left_angle, out);
    out << ", ";
  }

  // member: right_angle
  {
    out << "right_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.right_angle, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TrackHandle_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: event_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "event_type: ";
    rosidl_generator_traits::value_to_yaml(msg.event_type, out);
    out << "\n";
  }

  // member: left_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.left_angle, out);
    out << "\n";
  }

  // member: right_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.right_angle, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TrackHandle_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace control_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use control_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const control_interfaces::srv::TrackHandle_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  control_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use control_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const control_interfaces::srv::TrackHandle_Request & msg)
{
  return control_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<control_interfaces::srv::TrackHandle_Request>()
{
  return "control_interfaces::srv::TrackHandle_Request";
}

template<>
inline const char * name<control_interfaces::srv::TrackHandle_Request>()
{
  return "control_interfaces/srv/TrackHandle_Request";
}

template<>
struct has_fixed_size<control_interfaces::srv::TrackHandle_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<control_interfaces::srv::TrackHandle_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<control_interfaces::srv::TrackHandle_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace control_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const TrackHandle_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: distance
  {
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TrackHandle_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TrackHandle_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace control_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use control_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const control_interfaces::srv::TrackHandle_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  control_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use control_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const control_interfaces::srv::TrackHandle_Response & msg)
{
  return control_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<control_interfaces::srv::TrackHandle_Response>()
{
  return "control_interfaces::srv::TrackHandle_Response";
}

template<>
inline const char * name<control_interfaces::srv::TrackHandle_Response>()
{
  return "control_interfaces/srv/TrackHandle_Response";
}

template<>
struct has_fixed_size<control_interfaces::srv::TrackHandle_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<control_interfaces::srv::TrackHandle_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<control_interfaces::srv::TrackHandle_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace control_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const TrackHandle_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TrackHandle_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TrackHandle_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace control_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use control_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const control_interfaces::srv::TrackHandle_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  control_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use control_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const control_interfaces::srv::TrackHandle_Event & msg)
{
  return control_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<control_interfaces::srv::TrackHandle_Event>()
{
  return "control_interfaces::srv::TrackHandle_Event";
}

template<>
inline const char * name<control_interfaces::srv::TrackHandle_Event>()
{
  return "control_interfaces/srv/TrackHandle_Event";
}

template<>
struct has_fixed_size<control_interfaces::srv::TrackHandle_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<control_interfaces::srv::TrackHandle_Event>
  : std::integral_constant<bool, has_bounded_size<control_interfaces::srv::TrackHandle_Request>::value && has_bounded_size<control_interfaces::srv::TrackHandle_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<control_interfaces::srv::TrackHandle_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<control_interfaces::srv::TrackHandle>()
{
  return "control_interfaces::srv::TrackHandle";
}

template<>
inline const char * name<control_interfaces::srv::TrackHandle>()
{
  return "control_interfaces/srv/TrackHandle";
}

template<>
struct has_fixed_size<control_interfaces::srv::TrackHandle>
  : std::integral_constant<
    bool,
    has_fixed_size<control_interfaces::srv::TrackHandle_Request>::value &&
    has_fixed_size<control_interfaces::srv::TrackHandle_Response>::value
  >
{
};

template<>
struct has_bounded_size<control_interfaces::srv::TrackHandle>
  : std::integral_constant<
    bool,
    has_bounded_size<control_interfaces::srv::TrackHandle_Request>::value &&
    has_bounded_size<control_interfaces::srv::TrackHandle_Response>::value
  >
{
};

template<>
struct is_service<control_interfaces::srv::TrackHandle>
  : std::true_type
{
};

template<>
struct is_service_request<control_interfaces::srv::TrackHandle_Request>
  : std::true_type
{
};

template<>
struct is_service_response<control_interfaces::srv::TrackHandle_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CONTROL_INTERFACES__SRV__DETAIL__TRACK_HANDLE__TRAITS_HPP_
