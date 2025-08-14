// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from control_interfaces:srv/NavigateHandle.idl
// generated code does not contain a copyright notice

#include "control_interfaces/srv/detail/navigate_handle__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_control_interfaces
const rosidl_type_hash_t *
control_interfaces__srv__NavigateHandle__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x99, 0x74, 0x63, 0xe1, 0xe0, 0x04, 0x91, 0x5f,
      0xe6, 0xa5, 0xa9, 0xe6, 0xfb, 0x3b, 0xb0, 0x50,
      0x10, 0x93, 0x77, 0x12, 0x6f, 0x03, 0x04, 0xf3,
      0xaa, 0x64, 0x21, 0x2f, 0x06, 0x62, 0x10, 0xdf,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_control_interfaces
const rosidl_type_hash_t *
control_interfaces__srv__NavigateHandle_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x60, 0x01, 0x58, 0x7d, 0x73, 0xc6, 0x03, 0x84,
      0xef, 0xe1, 0x64, 0xd4, 0xf6, 0x6e, 0x80, 0x2a,
      0x05, 0x87, 0x11, 0x8a, 0xc4, 0xee, 0x39, 0x1f,
      0x2b, 0x50, 0x74, 0x37, 0x52, 0x30, 0xc0, 0x91,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_control_interfaces
const rosidl_type_hash_t *
control_interfaces__srv__NavigateHandle_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x2b, 0x36, 0x73, 0xee, 0x83, 0xe8, 0x8d, 0x5d,
      0x0b, 0x91, 0xf2, 0x11, 0xe0, 0xb0, 0xbc, 0x79,
      0x0b, 0x8e, 0x2c, 0xcc, 0xf6, 0x8a, 0x0e, 0xed,
      0xc8, 0x6c, 0x9b, 0xfd, 0x9b, 0xa6, 0xe1, 0x41,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_control_interfaces
const rosidl_type_hash_t *
control_interfaces__srv__NavigateHandle_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x32, 0xea, 0xac, 0x14, 0x5d, 0xee, 0x96, 0xca,
      0x73, 0x87, 0x44, 0x40, 0x65, 0x79, 0xb1, 0x33,
      0xcf, 0xf7, 0x17, 0xc6, 0x57, 0x88, 0xcb, 0x8d,
      0xf3, 0x8f, 0xe3, 0xe1, 0xb1, 0x48, 0x50, 0x9d,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char control_interfaces__srv__NavigateHandle__TYPE_NAME[] = "control_interfaces/srv/NavigateHandle";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char control_interfaces__srv__NavigateHandle_Event__TYPE_NAME[] = "control_interfaces/srv/NavigateHandle_Event";
static char control_interfaces__srv__NavigateHandle_Request__TYPE_NAME[] = "control_interfaces/srv/NavigateHandle_Request";
static char control_interfaces__srv__NavigateHandle_Response__TYPE_NAME[] = "control_interfaces/srv/NavigateHandle_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char control_interfaces__srv__NavigateHandle__FIELD_NAME__request_message[] = "request_message";
static char control_interfaces__srv__NavigateHandle__FIELD_NAME__response_message[] = "response_message";
static char control_interfaces__srv__NavigateHandle__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field control_interfaces__srv__NavigateHandle__FIELDS[] = {
  {
    {control_interfaces__srv__NavigateHandle__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {control_interfaces__srv__NavigateHandle_Request__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
  {
    {control_interfaces__srv__NavigateHandle__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {control_interfaces__srv__NavigateHandle_Response__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
  {
    {control_interfaces__srv__NavigateHandle__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {control_interfaces__srv__NavigateHandle_Event__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription control_interfaces__srv__NavigateHandle__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {control_interfaces__srv__NavigateHandle_Event__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {control_interfaces__srv__NavigateHandle_Request__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
  {
    {control_interfaces__srv__NavigateHandle_Response__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
control_interfaces__srv__NavigateHandle__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {control_interfaces__srv__NavigateHandle__TYPE_NAME, 37, 37},
      {control_interfaces__srv__NavigateHandle__FIELDS, 3, 3},
    },
    {control_interfaces__srv__NavigateHandle__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = control_interfaces__srv__NavigateHandle_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = control_interfaces__srv__NavigateHandle_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = control_interfaces__srv__NavigateHandle_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char control_interfaces__srv__NavigateHandle_Request__FIELD_NAME__event_type[] = "event_type";
static char control_interfaces__srv__NavigateHandle_Request__FIELD_NAME__command[] = "command";

static rosidl_runtime_c__type_description__Field control_interfaces__srv__NavigateHandle_Request__FIELDS[] = {
  {
    {control_interfaces__srv__NavigateHandle_Request__FIELD_NAME__event_type, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {control_interfaces__srv__NavigateHandle_Request__FIELD_NAME__command, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
control_interfaces__srv__NavigateHandle_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {control_interfaces__srv__NavigateHandle_Request__TYPE_NAME, 45, 45},
      {control_interfaces__srv__NavigateHandle_Request__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char control_interfaces__srv__NavigateHandle_Response__FIELD_NAME__status[] = "status";

static rosidl_runtime_c__type_description__Field control_interfaces__srv__NavigateHandle_Response__FIELDS[] = {
  {
    {control_interfaces__srv__NavigateHandle_Response__FIELD_NAME__status, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
control_interfaces__srv__NavigateHandle_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {control_interfaces__srv__NavigateHandle_Response__TYPE_NAME, 46, 46},
      {control_interfaces__srv__NavigateHandle_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char control_interfaces__srv__NavigateHandle_Event__FIELD_NAME__info[] = "info";
static char control_interfaces__srv__NavigateHandle_Event__FIELD_NAME__request[] = "request";
static char control_interfaces__srv__NavigateHandle_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field control_interfaces__srv__NavigateHandle_Event__FIELDS[] = {
  {
    {control_interfaces__srv__NavigateHandle_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {control_interfaces__srv__NavigateHandle_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {control_interfaces__srv__NavigateHandle_Request__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
  {
    {control_interfaces__srv__NavigateHandle_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {control_interfaces__srv__NavigateHandle_Response__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription control_interfaces__srv__NavigateHandle_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {control_interfaces__srv__NavigateHandle_Request__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
  {
    {control_interfaces__srv__NavigateHandle_Response__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
control_interfaces__srv__NavigateHandle_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {control_interfaces__srv__NavigateHandle_Event__TYPE_NAME, 43, 43},
      {control_interfaces__srv__NavigateHandle_Event__FIELDS, 3, 3},
    },
    {control_interfaces__srv__NavigateHandle_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = control_interfaces__srv__NavigateHandle_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = control_interfaces__srv__NavigateHandle_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string event_type\n"
  "string command\n"
  "---\n"
  "string status";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
control_interfaces__srv__NavigateHandle__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {control_interfaces__srv__NavigateHandle__TYPE_NAME, 37, 37},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 50, 50},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
control_interfaces__srv__NavigateHandle_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {control_interfaces__srv__NavigateHandle_Request__TYPE_NAME, 45, 45},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
control_interfaces__srv__NavigateHandle_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {control_interfaces__srv__NavigateHandle_Response__TYPE_NAME, 46, 46},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
control_interfaces__srv__NavigateHandle_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {control_interfaces__srv__NavigateHandle_Event__TYPE_NAME, 43, 43},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
control_interfaces__srv__NavigateHandle__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *control_interfaces__srv__NavigateHandle__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *control_interfaces__srv__NavigateHandle_Event__get_individual_type_description_source(NULL);
    sources[3] = *control_interfaces__srv__NavigateHandle_Request__get_individual_type_description_source(NULL);
    sources[4] = *control_interfaces__srv__NavigateHandle_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
control_interfaces__srv__NavigateHandle_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *control_interfaces__srv__NavigateHandle_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
control_interfaces__srv__NavigateHandle_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *control_interfaces__srv__NavigateHandle_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
control_interfaces__srv__NavigateHandle_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *control_interfaces__srv__NavigateHandle_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *control_interfaces__srv__NavigateHandle_Request__get_individual_type_description_source(NULL);
    sources[3] = *control_interfaces__srv__NavigateHandle_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
