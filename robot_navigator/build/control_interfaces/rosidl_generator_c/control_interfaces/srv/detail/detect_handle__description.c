// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from control_interfaces:srv/DetectHandle.idl
// generated code does not contain a copyright notice

#include "control_interfaces/srv/detail/detect_handle__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_control_interfaces
const rosidl_type_hash_t *
control_interfaces__srv__DetectHandle__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x46, 0xc1, 0xde, 0xb1, 0x78, 0xfd, 0x3a, 0x98,
      0xb1, 0x21, 0x5c, 0xf1, 0x9e, 0x16, 0x83, 0xd2,
      0x19, 0x93, 0x42, 0x59, 0x7a, 0x87, 0x50, 0x67,
      0x86, 0x35, 0xbf, 0xcb, 0x43, 0x65, 0x13, 0x1b,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_control_interfaces
const rosidl_type_hash_t *
control_interfaces__srv__DetectHandle_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x26, 0xd7, 0x98, 0x86, 0x4a, 0xd5, 0xec, 0x6b,
      0xc3, 0xbb, 0x4a, 0x2e, 0x77, 0xce, 0x4d, 0x98,
      0xb0, 0xd1, 0x92, 0x2a, 0xe2, 0x5d, 0x76, 0x5e,
      0xdb, 0xff, 0x49, 0x57, 0x63, 0x07, 0x4b, 0x73,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_control_interfaces
const rosidl_type_hash_t *
control_interfaces__srv__DetectHandle_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x2b, 0xba, 0x31, 0x8b, 0x39, 0xc9, 0x3c, 0x71,
      0x4b, 0x42, 0xc3, 0x20, 0xdf, 0xb2, 0x13, 0xbf,
      0x0a, 0xf3, 0x4b, 0xc8, 0x71, 0x37, 0xf3, 0x9e,
      0x8a, 0x6e, 0xc0, 0x19, 0xcb, 0x38, 0xa0, 0xb5,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_control_interfaces
const rosidl_type_hash_t *
control_interfaces__srv__DetectHandle_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x67, 0x6d, 0x02, 0x49, 0x90, 0x08, 0x83, 0x48,
      0xc9, 0xe9, 0x6c, 0x9e, 0x47, 0xd5, 0xce, 0xba,
      0xab, 0x61, 0x44, 0x94, 0xaa, 0x32, 0xfe, 0x54,
      0x00, 0xa6, 0x9e, 0x00, 0xfd, 0x3b, 0xcf, 0xb6,
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

static char control_interfaces__srv__DetectHandle__TYPE_NAME[] = "control_interfaces/srv/DetectHandle";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char control_interfaces__srv__DetectHandle_Event__TYPE_NAME[] = "control_interfaces/srv/DetectHandle_Event";
static char control_interfaces__srv__DetectHandle_Request__TYPE_NAME[] = "control_interfaces/srv/DetectHandle_Request";
static char control_interfaces__srv__DetectHandle_Response__TYPE_NAME[] = "control_interfaces/srv/DetectHandle_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char control_interfaces__srv__DetectHandle__FIELD_NAME__request_message[] = "request_message";
static char control_interfaces__srv__DetectHandle__FIELD_NAME__response_message[] = "response_message";
static char control_interfaces__srv__DetectHandle__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field control_interfaces__srv__DetectHandle__FIELDS[] = {
  {
    {control_interfaces__srv__DetectHandle__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {control_interfaces__srv__DetectHandle_Request__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
  {
    {control_interfaces__srv__DetectHandle__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {control_interfaces__srv__DetectHandle_Response__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
  {
    {control_interfaces__srv__DetectHandle__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {control_interfaces__srv__DetectHandle_Event__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription control_interfaces__srv__DetectHandle__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {control_interfaces__srv__DetectHandle_Event__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {control_interfaces__srv__DetectHandle_Request__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {control_interfaces__srv__DetectHandle_Response__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
control_interfaces__srv__DetectHandle__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {control_interfaces__srv__DetectHandle__TYPE_NAME, 35, 35},
      {control_interfaces__srv__DetectHandle__FIELDS, 3, 3},
    },
    {control_interfaces__srv__DetectHandle__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = control_interfaces__srv__DetectHandle_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = control_interfaces__srv__DetectHandle_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = control_interfaces__srv__DetectHandle_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char control_interfaces__srv__DetectHandle_Request__FIELD_NAME__left_angle[] = "left_angle";
static char control_interfaces__srv__DetectHandle_Request__FIELD_NAME__right_angle[] = "right_angle";

static rosidl_runtime_c__type_description__Field control_interfaces__srv__DetectHandle_Request__FIELDS[] = {
  {
    {control_interfaces__srv__DetectHandle_Request__FIELD_NAME__left_angle, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {control_interfaces__srv__DetectHandle_Request__FIELD_NAME__right_angle, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
control_interfaces__srv__DetectHandle_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {control_interfaces__srv__DetectHandle_Request__TYPE_NAME, 43, 43},
      {control_interfaces__srv__DetectHandle_Request__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char control_interfaces__srv__DetectHandle_Response__FIELD_NAME__flag[] = "flag";

static rosidl_runtime_c__type_description__Field control_interfaces__srv__DetectHandle_Response__FIELDS[] = {
  {
    {control_interfaces__srv__DetectHandle_Response__FIELD_NAME__flag, 4, 4},
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
control_interfaces__srv__DetectHandle_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {control_interfaces__srv__DetectHandle_Response__TYPE_NAME, 44, 44},
      {control_interfaces__srv__DetectHandle_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char control_interfaces__srv__DetectHandle_Event__FIELD_NAME__info[] = "info";
static char control_interfaces__srv__DetectHandle_Event__FIELD_NAME__request[] = "request";
static char control_interfaces__srv__DetectHandle_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field control_interfaces__srv__DetectHandle_Event__FIELDS[] = {
  {
    {control_interfaces__srv__DetectHandle_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {control_interfaces__srv__DetectHandle_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {control_interfaces__srv__DetectHandle_Request__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
  {
    {control_interfaces__srv__DetectHandle_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {control_interfaces__srv__DetectHandle_Response__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription control_interfaces__srv__DetectHandle_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {control_interfaces__srv__DetectHandle_Request__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {control_interfaces__srv__DetectHandle_Response__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
control_interfaces__srv__DetectHandle_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {control_interfaces__srv__DetectHandle_Event__TYPE_NAME, 41, 41},
      {control_interfaces__srv__DetectHandle_Event__FIELDS, 3, 3},
    },
    {control_interfaces__srv__DetectHandle_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = control_interfaces__srv__DetectHandle_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = control_interfaces__srv__DetectHandle_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32 left_angle\n"
  "float32 right_angle\n"
  "---\n"
  "string flag";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
control_interfaces__srv__DetectHandle__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {control_interfaces__srv__DetectHandle__TYPE_NAME, 35, 35},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 54, 54},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
control_interfaces__srv__DetectHandle_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {control_interfaces__srv__DetectHandle_Request__TYPE_NAME, 43, 43},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
control_interfaces__srv__DetectHandle_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {control_interfaces__srv__DetectHandle_Response__TYPE_NAME, 44, 44},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
control_interfaces__srv__DetectHandle_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {control_interfaces__srv__DetectHandle_Event__TYPE_NAME, 41, 41},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
control_interfaces__srv__DetectHandle__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *control_interfaces__srv__DetectHandle__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *control_interfaces__srv__DetectHandle_Event__get_individual_type_description_source(NULL);
    sources[3] = *control_interfaces__srv__DetectHandle_Request__get_individual_type_description_source(NULL);
    sources[4] = *control_interfaces__srv__DetectHandle_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
control_interfaces__srv__DetectHandle_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *control_interfaces__srv__DetectHandle_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
control_interfaces__srv__DetectHandle_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *control_interfaces__srv__DetectHandle_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
control_interfaces__srv__DetectHandle_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *control_interfaces__srv__DetectHandle_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *control_interfaces__srv__DetectHandle_Request__get_individual_type_description_source(NULL);
    sources[3] = *control_interfaces__srv__DetectHandle_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
