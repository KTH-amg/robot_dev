// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from control_interfaces:srv/EventHandle.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "control_interfaces/srv/event_handle.h"


#ifndef CONTROL_INTERFACES__SRV__DETAIL__EVENT_HANDLE__STRUCT_H_
#define CONTROL_INTERFACES__SRV__DETAIL__EVENT_HANDLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'event_type'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/EventHandle in the package control_interfaces.
typedef struct control_interfaces__srv__EventHandle_Request
{
  rosidl_runtime_c__String event_type;
} control_interfaces__srv__EventHandle_Request;

// Struct for a sequence of control_interfaces__srv__EventHandle_Request.
typedef struct control_interfaces__srv__EventHandle_Request__Sequence
{
  control_interfaces__srv__EventHandle_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_interfaces__srv__EventHandle_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'status'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/EventHandle in the package control_interfaces.
typedef struct control_interfaces__srv__EventHandle_Response
{
  rosidl_runtime_c__String status;
} control_interfaces__srv__EventHandle_Response;

// Struct for a sequence of control_interfaces__srv__EventHandle_Response.
typedef struct control_interfaces__srv__EventHandle_Response__Sequence
{
  control_interfaces__srv__EventHandle_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_interfaces__srv__EventHandle_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  control_interfaces__srv__EventHandle_Event__request__MAX_SIZE = 1
};
// response
enum
{
  control_interfaces__srv__EventHandle_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/EventHandle in the package control_interfaces.
typedef struct control_interfaces__srv__EventHandle_Event
{
  service_msgs__msg__ServiceEventInfo info;
  control_interfaces__srv__EventHandle_Request__Sequence request;
  control_interfaces__srv__EventHandle_Response__Sequence response;
} control_interfaces__srv__EventHandle_Event;

// Struct for a sequence of control_interfaces__srv__EventHandle_Event.
typedef struct control_interfaces__srv__EventHandle_Event__Sequence
{
  control_interfaces__srv__EventHandle_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_interfaces__srv__EventHandle_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CONTROL_INTERFACES__SRV__DETAIL__EVENT_HANDLE__STRUCT_H_
