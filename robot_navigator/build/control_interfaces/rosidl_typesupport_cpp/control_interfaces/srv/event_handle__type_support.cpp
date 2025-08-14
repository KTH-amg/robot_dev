// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from control_interfaces:srv/EventHandle.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "control_interfaces/srv/detail/event_handle__functions.h"
#include "control_interfaces/srv/detail/event_handle__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace control_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _EventHandle_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _EventHandle_Request_type_support_ids_t;

static const _EventHandle_Request_type_support_ids_t _EventHandle_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _EventHandle_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _EventHandle_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _EventHandle_Request_type_support_symbol_names_t _EventHandle_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, control_interfaces, srv, EventHandle_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, control_interfaces, srv, EventHandle_Request)),
  }
};

typedef struct _EventHandle_Request_type_support_data_t
{
  void * data[2];
} _EventHandle_Request_type_support_data_t;

static _EventHandle_Request_type_support_data_t _EventHandle_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _EventHandle_Request_message_typesupport_map = {
  2,
  "control_interfaces",
  &_EventHandle_Request_message_typesupport_ids.typesupport_identifier[0],
  &_EventHandle_Request_message_typesupport_symbol_names.symbol_name[0],
  &_EventHandle_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t EventHandle_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_EventHandle_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &control_interfaces__srv__EventHandle_Request__get_type_hash,
  &control_interfaces__srv__EventHandle_Request__get_type_description,
  &control_interfaces__srv__EventHandle_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace control_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<control_interfaces::srv::EventHandle_Request>()
{
  return &::control_interfaces::srv::rosidl_typesupport_cpp::EventHandle_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, control_interfaces, srv, EventHandle_Request)() {
  return get_message_type_support_handle<control_interfaces::srv::EventHandle_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "control_interfaces/srv/detail/event_handle__functions.h"
// already included above
// #include "control_interfaces/srv/detail/event_handle__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace control_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _EventHandle_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _EventHandle_Response_type_support_ids_t;

static const _EventHandle_Response_type_support_ids_t _EventHandle_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _EventHandle_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _EventHandle_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _EventHandle_Response_type_support_symbol_names_t _EventHandle_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, control_interfaces, srv, EventHandle_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, control_interfaces, srv, EventHandle_Response)),
  }
};

typedef struct _EventHandle_Response_type_support_data_t
{
  void * data[2];
} _EventHandle_Response_type_support_data_t;

static _EventHandle_Response_type_support_data_t _EventHandle_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _EventHandle_Response_message_typesupport_map = {
  2,
  "control_interfaces",
  &_EventHandle_Response_message_typesupport_ids.typesupport_identifier[0],
  &_EventHandle_Response_message_typesupport_symbol_names.symbol_name[0],
  &_EventHandle_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t EventHandle_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_EventHandle_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &control_interfaces__srv__EventHandle_Response__get_type_hash,
  &control_interfaces__srv__EventHandle_Response__get_type_description,
  &control_interfaces__srv__EventHandle_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace control_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<control_interfaces::srv::EventHandle_Response>()
{
  return &::control_interfaces::srv::rosidl_typesupport_cpp::EventHandle_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, control_interfaces, srv, EventHandle_Response)() {
  return get_message_type_support_handle<control_interfaces::srv::EventHandle_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "control_interfaces/srv/detail/event_handle__functions.h"
// already included above
// #include "control_interfaces/srv/detail/event_handle__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace control_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _EventHandle_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _EventHandle_Event_type_support_ids_t;

static const _EventHandle_Event_type_support_ids_t _EventHandle_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _EventHandle_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _EventHandle_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _EventHandle_Event_type_support_symbol_names_t _EventHandle_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, control_interfaces, srv, EventHandle_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, control_interfaces, srv, EventHandle_Event)),
  }
};

typedef struct _EventHandle_Event_type_support_data_t
{
  void * data[2];
} _EventHandle_Event_type_support_data_t;

static _EventHandle_Event_type_support_data_t _EventHandle_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _EventHandle_Event_message_typesupport_map = {
  2,
  "control_interfaces",
  &_EventHandle_Event_message_typesupport_ids.typesupport_identifier[0],
  &_EventHandle_Event_message_typesupport_symbol_names.symbol_name[0],
  &_EventHandle_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t EventHandle_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_EventHandle_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &control_interfaces__srv__EventHandle_Event__get_type_hash,
  &control_interfaces__srv__EventHandle_Event__get_type_description,
  &control_interfaces__srv__EventHandle_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace control_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<control_interfaces::srv::EventHandle_Event>()
{
  return &::control_interfaces::srv::rosidl_typesupport_cpp::EventHandle_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, control_interfaces, srv, EventHandle_Event)() {
  return get_message_type_support_handle<control_interfaces::srv::EventHandle_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "control_interfaces/srv/detail/event_handle__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace control_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _EventHandle_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _EventHandle_type_support_ids_t;

static const _EventHandle_type_support_ids_t _EventHandle_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _EventHandle_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _EventHandle_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _EventHandle_type_support_symbol_names_t _EventHandle_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, control_interfaces, srv, EventHandle)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, control_interfaces, srv, EventHandle)),
  }
};

typedef struct _EventHandle_type_support_data_t
{
  void * data[2];
} _EventHandle_type_support_data_t;

static _EventHandle_type_support_data_t _EventHandle_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _EventHandle_service_typesupport_map = {
  2,
  "control_interfaces",
  &_EventHandle_service_typesupport_ids.typesupport_identifier[0],
  &_EventHandle_service_typesupport_symbol_names.symbol_name[0],
  &_EventHandle_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t EventHandle_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_EventHandle_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<control_interfaces::srv::EventHandle_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<control_interfaces::srv::EventHandle_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<control_interfaces::srv::EventHandle_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<control_interfaces::srv::EventHandle>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<control_interfaces::srv::EventHandle>,
  &control_interfaces__srv__EventHandle__get_type_hash,
  &control_interfaces__srv__EventHandle__get_type_description,
  &control_interfaces__srv__EventHandle__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace control_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<control_interfaces::srv::EventHandle>()
{
  return &::control_interfaces::srv::rosidl_typesupport_cpp::EventHandle_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, control_interfaces, srv, EventHandle)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<control_interfaces::srv::EventHandle>();
}

#ifdef __cplusplus
}
#endif
