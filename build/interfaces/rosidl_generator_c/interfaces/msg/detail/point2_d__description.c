// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from interfaces:msg/Point2D.idl
// generated code does not contain a copyright notice

#include "interfaces/msg/detail/point2_d__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_interfaces
const rosidl_type_hash_t *
interfaces__msg__Point2D__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd1, 0xbe, 0xf8, 0xeb, 0x2a, 0x5a, 0xc6, 0x3d,
      0x43, 0x83, 0xa4, 0xfd, 0x2b, 0x32, 0xfc, 0x88,
      0x28, 0x3e, 0x46, 0x98, 0x93, 0x12, 0xa7, 0xee,
      0xa0, 0xbe, 0xfc, 0xd0, 0x59, 0xfa, 0x2b, 0x42,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char interfaces__msg__Point2D__TYPE_NAME[] = "interfaces/msg/Point2D";

// Define type names, field names, and default values
static char interfaces__msg__Point2D__FIELD_NAME__width[] = "width";
static char interfaces__msg__Point2D__FIELD_NAME__height[] = "height";
static char interfaces__msg__Point2D__FIELD_NAME__x[] = "x";
static char interfaces__msg__Point2D__FIELD_NAME__y[] = "y";

static rosidl_runtime_c__type_description__Field interfaces__msg__Point2D__FIELDS[] = {
  {
    {interfaces__msg__Point2D__FIELD_NAME__width, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interfaces__msg__Point2D__FIELD_NAME__height, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interfaces__msg__Point2D__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interfaces__msg__Point2D__FIELD_NAME__y, 1, 1},
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
interfaces__msg__Point2D__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {interfaces__msg__Point2D__TYPE_NAME, 22, 22},
      {interfaces__msg__Point2D__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int32 width\n"
  "int32 height\n"
  "int32 x\n"
  "int32 y";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
interfaces__msg__Point2D__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {interfaces__msg__Point2D__TYPE_NAME, 22, 22},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 41, 41},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
interfaces__msg__Point2D__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *interfaces__msg__Point2D__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
