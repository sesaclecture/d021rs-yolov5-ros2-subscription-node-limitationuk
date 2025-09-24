// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from interfaces:msg/ColorInfo.idl
// generated code does not contain a copyright notice

#include "interfaces/msg/detail/color_info__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_interfaces
const rosidl_type_hash_t *
interfaces__msg__ColorInfo__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x67, 0xc8, 0x75, 0x45, 0x04, 0x82, 0xf6, 0x15,
      0x70, 0x10, 0x41, 0x4e, 0xf2, 0xfa, 0x1f, 0x92,
      0x01, 0x89, 0xd5, 0x98, 0xf0, 0x89, 0x81, 0xc1,
      0x2b, 0x67, 0xfb, 0xd8, 0x0a, 0x64, 0x5d, 0xb6,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char interfaces__msg__ColorInfo__TYPE_NAME[] = "interfaces/msg/ColorInfo";

// Define type names, field names, and default values
static char interfaces__msg__ColorInfo__FIELD_NAME__color[] = "color";
static char interfaces__msg__ColorInfo__FIELD_NAME__width[] = "width";
static char interfaces__msg__ColorInfo__FIELD_NAME__height[] = "height";
static char interfaces__msg__ColorInfo__FIELD_NAME__x[] = "x";
static char interfaces__msg__ColorInfo__FIELD_NAME__y[] = "y";
static char interfaces__msg__ColorInfo__FIELD_NAME__radius[] = "radius";
static char interfaces__msg__ColorInfo__FIELD_NAME__angle[] = "angle";

static rosidl_runtime_c__type_description__Field interfaces__msg__ColorInfo__FIELDS[] = {
  {
    {interfaces__msg__ColorInfo__FIELD_NAME__color, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interfaces__msg__ColorInfo__FIELD_NAME__width, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interfaces__msg__ColorInfo__FIELD_NAME__height, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interfaces__msg__ColorInfo__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interfaces__msg__ColorInfo__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interfaces__msg__ColorInfo__FIELD_NAME__radius, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interfaces__msg__ColorInfo__FIELD_NAME__angle, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
interfaces__msg__ColorInfo__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {interfaces__msg__ColorInfo__TYPE_NAME, 24, 24},
      {interfaces__msg__ColorInfo__FIELDS, 7, 7},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string color\n"
  "int32 width\n"
  "int32 height\n"
  "int32 x\n"
  "int32 y\n"
  "int32 radius\n"
  "int32 angle";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
interfaces__msg__ColorInfo__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {interfaces__msg__ColorInfo__TYPE_NAME, 24, 24},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 79, 79},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
interfaces__msg__ColorInfo__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *interfaces__msg__ColorInfo__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
