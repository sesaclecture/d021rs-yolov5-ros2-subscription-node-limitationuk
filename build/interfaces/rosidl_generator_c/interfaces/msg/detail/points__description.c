// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from interfaces:msg/Points.idl
// generated code does not contain a copyright notice

#include "interfaces/msg/detail/points__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_interfaces
const rosidl_type_hash_t *
interfaces__msg__Points__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x6c, 0x74, 0xa0, 0xc1, 0x43, 0xfe, 0xa4, 0x88,
      0x8c, 0xac, 0xae, 0x40, 0xf7, 0xbc, 0xf3, 0x71,
      0x25, 0x24, 0x94, 0xa1, 0x2a, 0x95, 0x8a, 0x1e,
      0x3f, 0x11, 0x24, 0x5b, 0x37, 0xda, 0x21, 0xbc,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "interfaces/msg/detail/pixel_position__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t interfaces__msg__PixelPosition__EXPECTED_HASH = {1, {
    0xf1, 0x08, 0xe5, 0x00, 0x19, 0x7c, 0xd3, 0x67,
    0x8a, 0xe7, 0xe4, 0xdc, 0xa3, 0xc9, 0x0d, 0x95,
    0x95, 0x72, 0x89, 0x2b, 0x25, 0x97, 0x51, 0x29,
    0x21, 0x70, 0x64, 0x98, 0x7e, 0x16, 0x98, 0xf9,
  }};
#endif

static char interfaces__msg__Points__TYPE_NAME[] = "interfaces/msg/Points";
static char interfaces__msg__PixelPosition__TYPE_NAME[] = "interfaces/msg/PixelPosition";

// Define type names, field names, and default values
static char interfaces__msg__Points__FIELD_NAME__points[] = "points";

static rosidl_runtime_c__type_description__Field interfaces__msg__Points__FIELDS[] = {
  {
    {interfaces__msg__Points__FIELD_NAME__points, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {interfaces__msg__PixelPosition__TYPE_NAME, 28, 28},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription interfaces__msg__Points__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {interfaces__msg__PixelPosition__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
interfaces__msg__Points__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {interfaces__msg__Points__TYPE_NAME, 21, 21},
      {interfaces__msg__Points__FIELDS, 1, 1},
    },
    {interfaces__msg__Points__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&interfaces__msg__PixelPosition__EXPECTED_HASH, interfaces__msg__PixelPosition__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = interfaces__msg__PixelPosition__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "interfaces/PixelPosition[] points";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
interfaces__msg__Points__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {interfaces__msg__Points__TYPE_NAME, 21, 21},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 33, 33},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
interfaces__msg__Points__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *interfaces__msg__Points__get_individual_type_description_source(NULL),
    sources[1] = *interfaces__msg__PixelPosition__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
