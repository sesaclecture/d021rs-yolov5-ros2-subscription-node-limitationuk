// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from interfaces:msg/ObjectInfo.idl
// generated code does not contain a copyright notice

#include "interfaces/msg/detail/object_info__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_interfaces
const rosidl_type_hash_t *
interfaces__msg__ObjectInfo__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x83, 0x0f, 0x7e, 0xbf, 0x01, 0x78, 0xe8, 0xf5,
      0xec, 0x32, 0x54, 0x81, 0x39, 0xb6, 0x03, 0xb9,
      0xeb, 0x0f, 0xc1, 0x26, 0xff, 0x16, 0x47, 0x77,
      0x90, 0x5c, 0x72, 0xfd, 0x15, 0xa6, 0xe0, 0x7b,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char interfaces__msg__ObjectInfo__TYPE_NAME[] = "interfaces/msg/ObjectInfo";

// Define type names, field names, and default values
static char interfaces__msg__ObjectInfo__FIELD_NAME__class_name[] = "class_name";
static char interfaces__msg__ObjectInfo__FIELD_NAME__box[] = "box";
static char interfaces__msg__ObjectInfo__FIELD_NAME__score[] = "score";
static char interfaces__msg__ObjectInfo__FIELD_NAME__width[] = "width";
static char interfaces__msg__ObjectInfo__FIELD_NAME__height[] = "height";

static rosidl_runtime_c__type_description__Field interfaces__msg__ObjectInfo__FIELDS[] = {
  {
    {interfaces__msg__ObjectInfo__FIELD_NAME__class_name, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interfaces__msg__ObjectInfo__FIELD_NAME__box, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interfaces__msg__ObjectInfo__FIELD_NAME__score, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interfaces__msg__ObjectInfo__FIELD_NAME__width, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interfaces__msg__ObjectInfo__FIELD_NAME__height, 6, 6},
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
interfaces__msg__ObjectInfo__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {interfaces__msg__ObjectInfo__TYPE_NAME, 25, 25},
      {interfaces__msg__ObjectInfo__FIELDS, 5, 5},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string class_name\n"
  "int32[] box\n"
  "float32 score\n"
  "int32 width\n"
  "int32 height";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
interfaces__msg__ObjectInfo__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {interfaces__msg__ObjectInfo__TYPE_NAME, 25, 25},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 69, 69},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
interfaces__msg__ObjectInfo__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *interfaces__msg__ObjectInfo__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
