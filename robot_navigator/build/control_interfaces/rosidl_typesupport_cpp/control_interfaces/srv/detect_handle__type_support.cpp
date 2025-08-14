// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from control_interfaces:srv/DetectHandle.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "control_interfaces/srv/detail/detect_handle__functions.h"
#include "control_interfaces/srv/detail/detect_handle__struct.hpp"
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

typedef struct _DetectHandle_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DetectHandle_Request_type_support_ids_t;

static const _DetectHandle_Request_type_support_ids_t _DetectHandle_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DetectHandle_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DetectHandle_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DetectHandle_Request_type_support_symbol_names_t _DetectHandle_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, control_interfaces, srv, DetectHandle_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, control_interfaces, srv, DetectHandle_Request)),
  }
};

typedef struct _DetectHandle_Request_type_support_data_t
{
  void * data[2];
} _DetectHandle_Request_type_support_data_t;

static _DetectHandle_Request_type_support_data_t _DetectHandle_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DetectHandle_Request_message_typesupport_map = {
  2,
  "control_interfaces",
  &_DetectHandle_Request_message_typesupport_ids.typesupport_identifier[0],
  &_DetectHandle_Request_message_typesupport_symbol_names.symbol_name[0],
  &_DetectHandle_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DetectHandle_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DetectHandle_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &control_interfaces__srv__DetectHandle_Request__get_type_hash,
  &control_interfaces__srv__DetectHandle_Request__get_type_description,
  &control_interfaces__srv__DetectHandle_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace control_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<control_interfaces::srv::DetectHandle_Request>()
{
  return &::control_interfaces::srv::rosidl_typesupport_cpp::DetectHandle_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, control_interfaces, srv, DetectHandle_Request)() {
  return get_message_type_support_handle<control_interfaces::srv::DetectHandle_Request>();
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
// #include "control_interfaces/srv/detail/detect_handle__functions.h"
// already included above
// #include "control_interfaces/srv/detail/detect_handle__struct.hpp"
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

typedef struct _DetectHandle_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DetectHandle_Response_type_support_ids_t;

static const _DetectHandle_Response_type_support_ids_t _DetectHandle_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DetectHandle_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DetectHandle_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DetectHandle_Response_type_support_symbol_names_t _DetectHandle_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, control_interfaces, srv, DetectHandle_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, control_interfaces, srv, DetectHandle_Response)),
  }
};

typedef struct _DetectHandle_Response_type_support_data_t
{
  void * data[2];
} _DetectHandle_Response_type_support_data_t;

static _DetectHandle_Response_type_support_data_t _DetectHandle_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DetectHandle_Response_message_typesupport_map = {
  2,
  "control_interfaces",
  &_DetectHandle_Response_message_typesupport_ids.typesupport_identifier[0],
  &_DetectHandle_Response_message_typesupport_symbol_names.symbol_name[0],
  &_DetectHandle_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DetectHandle_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DetectHandle_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &control_interfaces__srv__DetectHandle_Response__get_type_hash,
  &control_interfaces__srv__DetectHandle_Response__get_type_description,
  &control_interfaces__srv__DetectHandle_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace control_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<control_interfaces::srv::DetectHandle_Response>()
{
  return &::control_interfaces::srv::rosidl_typesupport_cpp::DetectHandle_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, control_interfaces, srv, DetectHandle_Response)() {
  return get_message_type_support_handle<control_interfaces::srv::DetectHandle_Response>();
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
// #include "control_interfaces/srv/detail/detect_handle__functions.h"
// already included above
// #include "control_interfaces/srv/detail/detect_handle__struct.hpp"
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

typedef struct _DetectHandle_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DetectHandle_Event_type_support_ids_t;

static const _DetectHandle_Event_type_support_ids_t _DetectHandle_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DetectHandle_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DetectHandle_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DetectHandle_Event_type_support_symbol_names_t _DetectHandle_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, control_interfaces, srv, DetectHandle_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, control_interfaces, srv, DetectHandle_Event)),
  }
};

typedef struct _DetectHandle_Event_type_support_data_t
{
  void * data[2];
} _DetectHandle_Event_type_support_data_t;

static _DetectHandle_Event_type_support_data_t _DetectHandle_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DetectHandle_Event_message_typesupport_map = {
  2,
  "control_interfaces",
  &_DetectHandle_Event_message_typesupport_ids.typesupport_identifier[0],
  &_DetectHandle_Event_message_typesupport_symbol_names.symbol_name[0],
  &_DetectHandle_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DetectHandle_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DetectHandle_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &control_interfaces__srv__DetectHandle_Event__get_type_hash,
  &control_interfaces__srv__DetectHandle_Event__get_type_description,
  &control_interfaces__srv__DetectHandle_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace control_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<control_interfaces::srv::DetectHandle_Event>()
{
  return &::control_interfaces::srv::rosidl_typesupport_cpp::DetectHandle_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, control_interfaces, srv, DetectHandle_Event)() {
  return get_message_type_support_handle<control_interfaces::srv::DetectHandle_Event>();
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
// #include "control_interfaces/srv/detail/detect_handle__struct.hpp"
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

typedef struct _DetectHandle_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DetectHandle_type_support_ids_t;

static const _DetectHandle_type_support_ids_t _DetectHandle_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DetectHandle_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DetectHandle_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DetectHandle_type_support_symbol_names_t _DetectHandle_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, control_interfaces, srv, DetectHandle)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, control_interfaces, srv, DetectHandle)),
  }
};

typedef struct _DetectHandle_type_support_data_t
{
  void * data[2];
} _DetectHandle_type_support_data_t;

static _DetectHandle_type_support_data_t _DetectHandle_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DetectHandle_service_typesupport_map = {
  2,
  "control_interfaces",
  &_DetectHandle_service_typesupport_ids.typesupport_identifier[0],
  &_DetectHandle_service_typesupport_symbol_names.symbol_name[0],
  &_DetectHandle_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t DetectHandle_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DetectHandle_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<control_interfaces::srv::DetectHandle_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<control_interfaces::srv::DetectHandle_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<control_interfaces::srv::DetectHandle_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<control_interfaces::srv::DetectHandle>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<control_interfaces::srv::DetectHandle>,
  &control_interfaces__srv__DetectHandle__get_type_hash,
  &control_interfaces__srv__DetectHandle__get_type_description,
  &control_interfaces__srv__DetectHandle__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace control_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<control_interfaces::srv::DetectHandle>()
{
  return &::control_interfaces::srv::rosidl_typesupport_cpp::DetectHandle_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, control_interfaces, srv, DetectHandle)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<control_interfaces::srv::DetectHandle>();
}

#ifdef __cplusplus
}
#endif
