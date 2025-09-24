// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from interfaces:msg/ROI.idl
// generated code does not contain a copyright notice

#include "interfaces/msg/detail/roi__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_interfaces
const rosidl_type_hash_t *
interfaces__msg__ROI__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x57, 0x27, 0x48, 0xb4, 0xea, 0xdc, 0x99, 0x7d,
      0x40, 0x2a, 0xad, 0xc1, 0x3c, 0x7a, 0x97, 0x8b,
      0xb8, 0x95, 0xab, 0xc2, 0x32, 0x43, 0x8e, 0x38,
      0x57, 0x53, 0x17, 0x2e, 0x8c, 0xa1, 0x36, 0xe7,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char interfaces__msg__ROI__TYPE_NAME[] = "interfaces/msg/ROI";

// Define type names, field names, and default values
static char interfaces__msg__ROI__FIELD_NAME__y_min[] = "y_min";
static char interfaces__msg__ROI__FIELD_NAME__y_max[] = "y_max";
static char interfaces__msg__ROI__FIELD_NAME__x_min[] = "x_min";
static char interfaces__msg__ROI__FIELD_NAME__x_max[] = "x_max";
static char interfaces__msg__ROI__FIELD_NAME__scale[] = "scale";

static rosidl_runtime_c__type_description__Field interfaces__msg__ROI__FIELDS[] = {
  {
    {interfaces__msg__ROI__FIELD_NAME__y_min, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interfaces__msg__ROI__FIELD_NAME__y_max, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interfaces__msg__ROI__FIELD_NAME__x_min, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interfaces__msg__ROI__FIELD_NAME__x_max, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interfaces__msg__ROI__FIELD_NAME__scale, 5, 5},
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
interfaces__msg__ROI__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {interfaces__msg__ROI__TYPE_NAME, 18, 18},
      {interfaces__msg__ROI__FIELDS, 5, 5},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int16 y_min\n"
  "int16 y_max\n"
  "int16 x_min\n"
  "int16 x_max\n"
  "float32 scale";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
interfaces__msg__ROI__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {interfaces__msg__ROI__TYPE_NAME, 18, 18},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 62, 62},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
interfaces__msg__ROI__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *interfaces__msg__ROI__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
