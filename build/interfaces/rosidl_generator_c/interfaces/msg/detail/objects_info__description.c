// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from interfaces:msg/ObjectsInfo.idl
// generated code does not contain a copyright notice

#include "interfaces/msg/detail/objects_info__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_interfaces
const rosidl_type_hash_t *
interfaces__msg__ObjectsInfo__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb7, 0xdc, 0x36, 0x46, 0x9c, 0x45, 0x90, 0x41,
      0xd7, 0x06, 0xc5, 0xff, 0x1a, 0x2b, 0x1a, 0xa6,
      0x3a, 0xda, 0x7b, 0x73, 0xa8, 0x3b, 0x46, 0x56,
      0x73, 0x6a, 0x37, 0xff, 0x65, 0xda, 0x58, 0xbe,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "interfaces/msg/detail/object_info__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t interfaces__msg__ObjectInfo__EXPECTED_HASH = {1, {
    0x83, 0x0f, 0x7e, 0xbf, 0x01, 0x78, 0xe8, 0xf5,
    0xec, 0x32, 0x54, 0x81, 0x39, 0xb6, 0x03, 0xb9,
    0xeb, 0x0f, 0xc1, 0x26, 0xff, 0x16, 0x47, 0x77,
    0x90, 0x5c, 0x72, 0xfd, 0x15, 0xa6, 0xe0, 0x7b,
  }};
#endif

static char interfaces__msg__ObjectsInfo__TYPE_NAME[] = "interfaces/msg/ObjectsInfo";
static char interfaces__msg__ObjectInfo__TYPE_NAME[] = "interfaces/msg/ObjectInfo";

// Define type names, field names, and default values
static char interfaces__msg__ObjectsInfo__FIELD_NAME__objects[] = "objects";

static rosidl_runtime_c__type_description__Field interfaces__msg__ObjectsInfo__FIELDS[] = {
  {
    {interfaces__msg__ObjectsInfo__FIELD_NAME__objects, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {interfaces__msg__ObjectInfo__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription interfaces__msg__ObjectsInfo__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {interfaces__msg__ObjectInfo__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
interfaces__msg__ObjectsInfo__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {interfaces__msg__ObjectsInfo__TYPE_NAME, 26, 26},
      {interfaces__msg__ObjectsInfo__FIELDS, 1, 1},
    },
    {interfaces__msg__ObjectsInfo__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&interfaces__msg__ObjectInfo__EXPECTED_HASH, interfaces__msg__ObjectInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = interfaces__msg__ObjectInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "interfaces/ObjectInfo[] objects";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
interfaces__msg__ObjectsInfo__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {interfaces__msg__ObjectsInfo__TYPE_NAME, 26, 26},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 32, 32},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
interfaces__msg__ObjectsInfo__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *interfaces__msg__ObjectsInfo__get_individual_type_description_source(NULL),
    sources[1] = *interfaces__msg__ObjectInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
