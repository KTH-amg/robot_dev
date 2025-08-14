// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from control_interfaces:msg/DetectedObstacle.idl
// generated code does not contain a copyright notice

#include "control_interfaces/msg/detail/detected_obstacle__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_control_interfaces
const rosidl_type_hash_t *
control_interfaces__msg__DetectedObstacle__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xef, 0x7b, 0xc9, 0x16, 0x0e, 0x27, 0x73, 0x05,
      0x2c, 0xbb, 0xfc, 0x93, 0x67, 0x48, 0x54, 0xc6,
      0xd8, 0xde, 0x4d, 0x23, 0x92, 0x0f, 0xd6, 0xbe,
      0x43, 0x3c, 0x56, 0x75, 0x9e, 0x42, 0xf6, 0xfa,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char control_interfaces__msg__DetectedObstacle__TYPE_NAME[] = "control_interfaces/msg/DetectedObstacle";

// Define type names, field names, and default values
static char control_interfaces__msg__DetectedObstacle__FIELD_NAME__x[] = "x";
static char control_interfaces__msg__DetectedObstacle__FIELD_NAME__y[] = "y";
static char control_interfaces__msg__DetectedObstacle__FIELD_NAME__yaw[] = "yaw";

static rosidl_runtime_c__type_description__Field control_interfaces__msg__DetectedObstacle__FIELDS[] = {
  {
    {control_interfaces__msg__DetectedObstacle__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {control_interfaces__msg__DetectedObstacle__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {control_interfaces__msg__DetectedObstacle__FIELD_NAME__yaw, 3, 3},
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
control_interfaces__msg__DetectedObstacle__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {control_interfaces__msg__DetectedObstacle__TYPE_NAME, 39, 39},
      {control_interfaces__msg__DetectedObstacle__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# \\xec\\x9e\\xa5\\xec\\x95\\xa0\\xeb\\xac\\xbc \\xea\\xb0\\x90\\xec\\xa7\\x80 \\xec\\xa0\\x95\\xeb\\xb3\\xb4 \\xeb\\xa9\\x94\\xec\\x8b\\x9c\\xec\\xa7\\x80\n"
  "# \\xeb\\xa1\\x9c\\xeb\\xb4\\x87\\xec\\x9d\\xb4 \\xeb\\x9d\\xbc\\xec\\x9d\\xb4\\xeb\\x8b\\xa4\\xeb\\xa1\\x9c \\xea\\xb0\\x90\\xec\\xa7\\x80\\xed\\x95\\x9c \\xec\\x9e\\xa5\\xec\\x95\\xa0\\xeb\\xac\\xbc\\xec\\x9d\\x98 \\xec\\x9c\\x84\\xec\\xb9\\x98 \\xec\\xa0\\x95\\xeb\\xb3\\xb4\n"
  "\n"
  "# \\xec\\x9e\\xa5\\xec\\x95\\xa0\\xeb\\xac\\xbc\\xec\\x9d\\x98 \\xeb\\xa1\\x9c\\xec\\xbb\\xac \\xec\\xa2\\x8c\\xed\\x91\\x9c\\xea\\xb3\\x84 \\xec\\x9c\\x84\\xec\\xb9\\x98 (\\xeb\\xaf\\xb8\\xed\\x84\\xb0)\n"
  "float32 x\n"
  "float32 y\n"
  "\n"
  "# \\xec\\x9e\\xa5\\xec\\x95\\xa0\\xeb\\xac\\xbc \\xeb\\xb0\\xa9\\xed\\x96\\xa5 (\\xeb\\x8f\\x84, \\xeb\\xa1\\x9c\\xeb\\xb4\\x87 \\xea\\xb8\\xb0\\xec\\xa4\\x80)\n"
  "float32 yaw";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
control_interfaces__msg__DetectedObstacle__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {control_interfaces__msg__DetectedObstacle__TYPE_NAME, 39, 39},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 117, 117},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
control_interfaces__msg__DetectedObstacle__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *control_interfaces__msg__DetectedObstacle__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
