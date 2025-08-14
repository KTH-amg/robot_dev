// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from control_interfaces:srv/NavigateHandle.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "control_interfaces/srv/detail/navigate_handle__struct.h"
#include "control_interfaces/srv/detail/navigate_handle__type_support.h"
#include "control_interfaces/srv/detail/navigate_handle__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace control_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _NavigateHandle_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _NavigateHandle_Request_type_support_ids_t;

static const _NavigateHandle_Request_type_support_ids_t _NavigateHandle_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _NavigateHandle_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _NavigateHandle_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _NavigateHandle_Request_type_support_symbol_names_t _NavigateHandle_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, control_interfaces, srv, NavigateHandle_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, control_interfaces, srv, NavigateHandle_Request)),
  }
};

typedef struct _NavigateHandle_Request_type_support_data_t
{
  void * data[2];
} _NavigateHandle_Request_type_support_data_t;

static _NavigateHandle_Request_type_support_data_t _NavigateHandle_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _NavigateHandle_Request_message_typesupport_map = {
  2,
  "control_interfaces",
  &_NavigateHandle_Request_message_typesupport_ids.typesupport_identifier[0],
  &_NavigateHandle_Request_message_typesupport_symbol_names.symbol_name[0],
  &_NavigateHandle_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t NavigateHandle_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_NavigateHandle_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &control_interfaces__srv__NavigateHandle_Request__get_type_hash,
  &control_interfaces__srv__NavigateHandle_Request__get_type_description,
  &control_interfaces__srv__NavigateHandle_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace control_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, control_interfaces, srv, NavigateHandle_Request)() {
  return &::control_interfaces::srv::rosidl_typesupport_c::NavigateHandle_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "control_interfaces/srv/detail/navigate_handle__struct.h"
// already included above
// #include "control_interfaces/srv/detail/navigate_handle__type_support.h"
// already included above
// #include "control_interfaces/srv/detail/navigate_handle__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace control_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _NavigateHandle_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _NavigateHandle_Response_type_support_ids_t;

static const _NavigateHandle_Response_type_support_ids_t _NavigateHandle_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _NavigateHandle_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _NavigateHandle_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _NavigateHandle_Response_type_support_symbol_names_t _NavigateHandle_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, control_interfaces, srv, NavigateHandle_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, control_interfaces, srv, NavigateHandle_Response)),
  }
};

typedef struct _NavigateHandle_Response_type_support_data_t
{
  void * data[2];
} _NavigateHandle_Response_type_support_data_t;

static _NavigateHandle_Response_type_support_data_t _NavigateHandle_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _NavigateHandle_Response_message_typesupport_map = {
  2,
  "control_interfaces",
  &_NavigateHandle_Response_message_typesupport_ids.typesupport_identifier[0],
  &_NavigateHandle_Response_message_typesupport_symbol_names.symbol_name[0],
  &_NavigateHandle_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t NavigateHandle_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_NavigateHandle_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &control_interfaces__srv__NavigateHandle_Response__get_type_hash,
  &control_interfaces__srv__NavigateHandle_Response__get_type_description,
  &control_interfaces__srv__NavigateHandle_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace control_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, control_interfaces, srv, NavigateHandle_Response)() {
  return &::control_interfaces::srv::rosidl_typesupport_c::NavigateHandle_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "control_interfaces/srv/detail/navigate_handle__struct.h"
// already included above
// #include "control_interfaces/srv/detail/navigate_handle__type_support.h"
// already included above
// #include "control_interfaces/srv/detail/navigate_handle__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace control_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _NavigateHandle_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _NavigateHandle_Event_type_support_ids_t;

static const _NavigateHandle_Event_type_support_ids_t _NavigateHandle_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _NavigateHandle_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _NavigateHandle_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _NavigateHandle_Event_type_support_symbol_names_t _NavigateHandle_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, control_interfaces, srv, NavigateHandle_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, control_interfaces, srv, NavigateHandle_Event)),
  }
};

typedef struct _NavigateHandle_Event_type_support_data_t
{
  void * data[2];
} _NavigateHandle_Event_type_support_data_t;

static _NavigateHandle_Event_type_support_data_t _NavigateHandle_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _NavigateHandle_Event_message_typesupport_map = {
  2,
  "control_interfaces",
  &_NavigateHandle_Event_message_typesupport_ids.typesupport_identifier[0],
  &_NavigateHandle_Event_message_typesupport_symbol_names.symbol_name[0],
  &_NavigateHandle_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t NavigateHandle_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_NavigateHandle_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &control_interfaces__srv__NavigateHandle_Event__get_type_hash,
  &control_interfaces__srv__NavigateHandle_Event__get_type_description,
  &control_interfaces__srv__NavigateHandle_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace control_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, control_interfaces, srv, NavigateHandle_Event)() {
  return &::control_interfaces::srv::rosidl_typesupport_c::NavigateHandle_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "control_interfaces/srv/detail/navigate_handle__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace control_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _NavigateHandle_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _NavigateHandle_type_support_ids_t;

static const _NavigateHandle_type_support_ids_t _NavigateHandle_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _NavigateHandle_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _NavigateHandle_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _NavigateHandle_type_support_symbol_names_t _NavigateHandle_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, control_interfaces, srv, NavigateHandle)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, control_interfaces, srv, NavigateHandle)),
  }
};

typedef struct _NavigateHandle_type_support_data_t
{
  void * data[2];
} _NavigateHandle_type_support_data_t;

static _NavigateHandle_type_support_data_t _NavigateHandle_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _NavigateHandle_service_typesupport_map = {
  2,
  "control_interfaces",
  &_NavigateHandle_service_typesupport_ids.typesupport_identifier[0],
  &_NavigateHandle_service_typesupport_symbol_names.symbol_name[0],
  &_NavigateHandle_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t NavigateHandle_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_NavigateHandle_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &NavigateHandle_Request_message_type_support_handle,
  &NavigateHandle_Response_message_type_support_handle,
  &NavigateHandle_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    control_interfaces,
    srv,
    NavigateHandle
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    control_interfaces,
    srv,
    NavigateHandle
  ),
  &control_interfaces__srv__NavigateHandle__get_type_hash,
  &control_interfaces__srv__NavigateHandle__get_type_description,
  &control_interfaces__srv__NavigateHandle__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace control_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, control_interfaces, srv, NavigateHandle)() {
  return &::control_interfaces::srv::rosidl_typesupport_c::NavigateHandle_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
