// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from interfaces:msg/ColorDetect.idl
// generated code does not contain a copyright notice

#include "interfaces/msg/detail/color_detect__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_interfaces
const rosidl_type_hash_t *
interfaces__msg__ColorDetect__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x37, 0xb3, 0xc7, 0x6d, 0x78, 0x96, 0x16, 0xa1,
      0xc8, 0x66, 0xe0, 0x61, 0xb5, 0x66, 0x1d, 0x9c,
      0x48, 0x46, 0x44, 0x9a, 0x3c, 0x9a, 0xfe, 0x01,
      0xa3, 0x47, 0x97, 0xc7, 0x12, 0x51, 0x4b, 0x46,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char interfaces__msg__ColorDetect__TYPE_NAME[] = "interfaces/msg/ColorDetect";

// Define type names, field names, and default values
static char interfaces__msg__ColorDetect__FIELD_NAME__color_name[] = "color_name";
static char interfaces__msg__ColorDetect__FIELD_NAME__detect_type[] = "detect_type";

static rosidl_runtime_c__type_description__Field interfaces__msg__ColorDetect__FIELDS[] = {
  {
    {interfaces__msg__ColorDetect__FIELD_NAME__color_name, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interfaces__msg__ColorDetect__FIELD_NAME__detect_type, 11, 11},
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
interfaces__msg__ColorDetect__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {interfaces__msg__ColorDetect__TYPE_NAME, 26, 26},
      {interfaces__msg__ColorDetect__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string color_name\n"
  "string detect_type";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
interfaces__msg__ColorDetect__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {interfaces__msg__ColorDetect__TYPE_NAME, 26, 26},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 37, 37},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
interfaces__msg__ColorDetect__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *interfaces__msg__ColorDetect__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
