// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from interfaces:msg/ColorsInfo.idl
// generated code does not contain a copyright notice

#include "interfaces/msg/detail/colors_info__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_interfaces
const rosidl_type_hash_t *
interfaces__msg__ColorsInfo__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x6a, 0x20, 0x45, 0xac, 0x3a, 0xc5, 0x52, 0xbf,
      0x7d, 0xf2, 0x2a, 0x79, 0x7f, 0x38, 0xe1, 0xe8,
      0x35, 0x36, 0x6c, 0x2c, 0xbf, 0x4b, 0x34, 0x3f,
      0x0e, 0xcb, 0xfd, 0xd6, 0x0d, 0x13, 0xdd, 0x97,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "interfaces/msg/detail/color_info__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t interfaces__msg__ColorInfo__EXPECTED_HASH = {1, {
    0x67, 0xc8, 0x75, 0x45, 0x04, 0x82, 0xf6, 0x15,
    0x70, 0x10, 0x41, 0x4e, 0xf2, 0xfa, 0x1f, 0x92,
    0x01, 0x89, 0xd5, 0x98, 0xf0, 0x89, 0x81, 0xc1,
    0x2b, 0x67, 0xfb, 0xd8, 0x0a, 0x64, 0x5d, 0xb6,
  }};
#endif

static char interfaces__msg__ColorsInfo__TYPE_NAME[] = "interfaces/msg/ColorsInfo";
static char interfaces__msg__ColorInfo__TYPE_NAME[] = "interfaces/msg/ColorInfo";

// Define type names, field names, and default values
static char interfaces__msg__ColorsInfo__FIELD_NAME__data[] = "data";

static rosidl_runtime_c__type_description__Field interfaces__msg__ColorsInfo__FIELDS[] = {
  {
    {interfaces__msg__ColorsInfo__FIELD_NAME__data, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {interfaces__msg__ColorInfo__TYPE_NAME, 24, 24},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription interfaces__msg__ColorsInfo__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {interfaces__msg__ColorInfo__TYPE_NAME, 24, 24},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
interfaces__msg__ColorsInfo__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {interfaces__msg__ColorsInfo__TYPE_NAME, 25, 25},
      {interfaces__msg__ColorsInfo__FIELDS, 1, 1},
    },
    {interfaces__msg__ColorsInfo__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&interfaces__msg__ColorInfo__EXPECTED_HASH, interfaces__msg__ColorInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = interfaces__msg__ColorInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "interfaces/ColorInfo[] data";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
interfaces__msg__ColorsInfo__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {interfaces__msg__ColorsInfo__TYPE_NAME, 25, 25},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 28, 28},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
interfaces__msg__ColorsInfo__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *interfaces__msg__ColorsInfo__get_individual_type_description_source(NULL),
    sources[1] = *interfaces__msg__ColorInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
