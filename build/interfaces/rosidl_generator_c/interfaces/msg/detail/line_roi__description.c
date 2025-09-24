// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from interfaces:msg/LineROI.idl
// generated code does not contain a copyright notice

#include "interfaces/msg/detail/line_roi__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_interfaces
const rosidl_type_hash_t *
interfaces__msg__LineROI__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x05, 0x78, 0x4f, 0x75, 0xa3, 0x70, 0xcc, 0x79,
      0xba, 0x64, 0x47, 0x72, 0x46, 0x59, 0xe5, 0xa2,
      0x3a, 0xa0, 0x57, 0xfa, 0xd8, 0xf2, 0x6e, 0x0f,
      0xb4, 0x59, 0x25, 0xc9, 0xd9, 0x40, 0x7e, 0x35,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "interfaces/msg/detail/roi__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t interfaces__msg__ROI__EXPECTED_HASH = {1, {
    0x57, 0x27, 0x48, 0xb4, 0xea, 0xdc, 0x99, 0x7d,
    0x40, 0x2a, 0xad, 0xc1, 0x3c, 0x7a, 0x97, 0x8b,
    0xb8, 0x95, 0xab, 0xc2, 0x32, 0x43, 0x8e, 0x38,
    0x57, 0x53, 0x17, 0x2e, 0x8c, 0xa1, 0x36, 0xe7,
  }};
#endif

static char interfaces__msg__LineROI__TYPE_NAME[] = "interfaces/msg/LineROI";
static char interfaces__msg__ROI__TYPE_NAME[] = "interfaces/msg/ROI";

// Define type names, field names, and default values
static char interfaces__msg__LineROI__FIELD_NAME__roi_up[] = "roi_up";
static char interfaces__msg__LineROI__FIELD_NAME__roi_center[] = "roi_center";
static char interfaces__msg__LineROI__FIELD_NAME__roi_down[] = "roi_down";

static rosidl_runtime_c__type_description__Field interfaces__msg__LineROI__FIELDS[] = {
  {
    {interfaces__msg__LineROI__FIELD_NAME__roi_up, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {interfaces__msg__ROI__TYPE_NAME, 18, 18},
    },
    {NULL, 0, 0},
  },
  {
    {interfaces__msg__LineROI__FIELD_NAME__roi_center, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {interfaces__msg__ROI__TYPE_NAME, 18, 18},
    },
    {NULL, 0, 0},
  },
  {
    {interfaces__msg__LineROI__FIELD_NAME__roi_down, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {interfaces__msg__ROI__TYPE_NAME, 18, 18},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription interfaces__msg__LineROI__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {interfaces__msg__ROI__TYPE_NAME, 18, 18},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
interfaces__msg__LineROI__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {interfaces__msg__LineROI__TYPE_NAME, 22, 22},
      {interfaces__msg__LineROI__FIELDS, 3, 3},
    },
    {interfaces__msg__LineROI__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&interfaces__msg__ROI__EXPECTED_HASH, interfaces__msg__ROI__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = interfaces__msg__ROI__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "interfaces/ROI roi_up\n"
  "interfaces/ROI roi_center\n"
  "interfaces/ROI roi_down";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
interfaces__msg__LineROI__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {interfaces__msg__LineROI__TYPE_NAME, 22, 22},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 72, 72},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
interfaces__msg__LineROI__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *interfaces__msg__LineROI__get_individual_type_description_source(NULL),
    sources[1] = *interfaces__msg__ROI__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
