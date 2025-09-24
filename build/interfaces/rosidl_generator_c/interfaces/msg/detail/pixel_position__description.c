// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from interfaces:msg/PixelPosition.idl
// generated code does not contain a copyright notice

#include "interfaces/msg/detail/pixel_position__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_interfaces
const rosidl_type_hash_t *
interfaces__msg__PixelPosition__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf1, 0x08, 0xe5, 0x00, 0x19, 0x7c, 0xd3, 0x67,
      0x8a, 0xe7, 0xe4, 0xdc, 0xa3, 0xc9, 0x0d, 0x95,
      0x95, 0x72, 0x89, 0x2b, 0x25, 0x97, 0x51, 0x29,
      0x21, 0x70, 0x64, 0x98, 0x7e, 0x16, 0x98, 0xf9,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char interfaces__msg__PixelPosition__TYPE_NAME[] = "interfaces/msg/PixelPosition";

// Define type names, field names, and default values
static char interfaces__msg__PixelPosition__FIELD_NAME__x[] = "x";
static char interfaces__msg__PixelPosition__FIELD_NAME__y[] = "y";

static rosidl_runtime_c__type_description__Field interfaces__msg__PixelPosition__FIELDS[] = {
  {
    {interfaces__msg__PixelPosition__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interfaces__msg__PixelPosition__FIELD_NAME__y, 1, 1},
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
interfaces__msg__PixelPosition__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {interfaces__msg__PixelPosition__TYPE_NAME, 28, 28},
      {interfaces__msg__PixelPosition__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int32 x\n"
  "int32 y";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
interfaces__msg__PixelPosition__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {interfaces__msg__PixelPosition__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 16, 16},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
interfaces__msg__PixelPosition__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *interfaces__msg__PixelPosition__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
