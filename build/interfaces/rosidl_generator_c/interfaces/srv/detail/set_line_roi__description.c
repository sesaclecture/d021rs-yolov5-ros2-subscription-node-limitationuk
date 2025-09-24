// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from interfaces:srv/SetLineROI.idl
// generated code does not contain a copyright notice

#include "interfaces/srv/detail/set_line_roi__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_interfaces
const rosidl_type_hash_t *
interfaces__srv__SetLineROI__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x2e, 0xfc, 0x78, 0x4e, 0x5e, 0x62, 0x4d, 0x9f,
      0xee, 0x37, 0x80, 0x7a, 0x42, 0x54, 0x69, 0xa5,
      0x60, 0x42, 0xa3, 0x1c, 0x5f, 0x7f, 0x4e, 0xbe,
      0xe1, 0xd9, 0x8a, 0xac, 0x85, 0x4c, 0x8f, 0x6e,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_interfaces
const rosidl_type_hash_t *
interfaces__srv__SetLineROI_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa9, 0xd9, 0xcc, 0xe0, 0x2f, 0x87, 0xb9, 0xd7,
      0x2d, 0xd1, 0x9e, 0x7d, 0xf2, 0x9b, 0x05, 0xc3,
      0x18, 0xcd, 0xf2, 0xd5, 0xc4, 0x81, 0x95, 0xfd,
      0xc4, 0x6b, 0x39, 0x6d, 0xe5, 0xe6, 0xd6, 0x4a,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_interfaces
const rosidl_type_hash_t *
interfaces__srv__SetLineROI_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe1, 0x4f, 0x54, 0xa4, 0xb1, 0x43, 0xfa, 0x43,
      0xb4, 0xd1, 0xa5, 0x44, 0xf9, 0x70, 0x17, 0x7e,
      0xa5, 0x3f, 0xac, 0xfa, 0x10, 0x51, 0xf3, 0x80,
      0x07, 0x63, 0x85, 0x76, 0xef, 0x8d, 0xf2, 0xfb,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_interfaces
const rosidl_type_hash_t *
interfaces__srv__SetLineROI_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x2d, 0xc6, 0x35, 0xfa, 0xff, 0x21, 0x36, 0xd0,
      0x99, 0x93, 0x7e, 0x4d, 0xda, 0x90, 0xc4, 0x66,
      0x36, 0xbd, 0xf9, 0x9a, 0x62, 0x60, 0x79, 0x64,
      0x45, 0xb5, 0x46, 0x1f, 0xb9, 0xab, 0x93, 0xda,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "interfaces/msg/detail/line_roi__functions.h"
#include "interfaces/msg/detail/roi__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t interfaces__msg__LineROI__EXPECTED_HASH = {1, {
    0x05, 0x78, 0x4f, 0x75, 0xa3, 0x70, 0xcc, 0x79,
    0xba, 0x64, 0x47, 0x72, 0x46, 0x59, 0xe5, 0xa2,
    0x3a, 0xa0, 0x57, 0xfa, 0xd8, 0xf2, 0x6e, 0x0f,
    0xb4, 0x59, 0x25, 0xc9, 0xd9, 0x40, 0x7e, 0x35,
  }};
static const rosidl_type_hash_t interfaces__msg__ROI__EXPECTED_HASH = {1, {
    0x57, 0x27, 0x48, 0xb4, 0xea, 0xdc, 0x99, 0x7d,
    0x40, 0x2a, 0xad, 0xc1, 0x3c, 0x7a, 0x97, 0x8b,
    0xb8, 0x95, 0xab, 0xc2, 0x32, 0x43, 0x8e, 0x38,
    0x57, 0x53, 0x17, 0x2e, 0x8c, 0xa1, 0x36, 0xe7,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char interfaces__srv__SetLineROI__TYPE_NAME[] = "interfaces/srv/SetLineROI";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char interfaces__msg__LineROI__TYPE_NAME[] = "interfaces/msg/LineROI";
static char interfaces__msg__ROI__TYPE_NAME[] = "interfaces/msg/ROI";
static char interfaces__srv__SetLineROI_Event__TYPE_NAME[] = "interfaces/srv/SetLineROI_Event";
static char interfaces__srv__SetLineROI_Request__TYPE_NAME[] = "interfaces/srv/SetLineROI_Request";
static char interfaces__srv__SetLineROI_Response__TYPE_NAME[] = "interfaces/srv/SetLineROI_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char interfaces__srv__SetLineROI__FIELD_NAME__request_message[] = "request_message";
static char interfaces__srv__SetLineROI__FIELD_NAME__response_message[] = "response_message";
static char interfaces__srv__SetLineROI__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field interfaces__srv__SetLineROI__FIELDS[] = {
  {
    {interfaces__srv__SetLineROI__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {interfaces__srv__SetLineROI_Request__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {interfaces__srv__SetLineROI__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {interfaces__srv__SetLineROI_Response__TYPE_NAME, 34, 34},
    },
    {NULL, 0, 0},
  },
  {
    {interfaces__srv__SetLineROI__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {interfaces__srv__SetLineROI_Event__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription interfaces__srv__SetLineROI__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {interfaces__msg__LineROI__TYPE_NAME, 22, 22},
    {NULL, 0, 0},
  },
  {
    {interfaces__msg__ROI__TYPE_NAME, 18, 18},
    {NULL, 0, 0},
  },
  {
    {interfaces__srv__SetLineROI_Event__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {interfaces__srv__SetLineROI_Request__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {interfaces__srv__SetLineROI_Response__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
interfaces__srv__SetLineROI__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {interfaces__srv__SetLineROI__TYPE_NAME, 25, 25},
      {interfaces__srv__SetLineROI__FIELDS, 3, 3},
    },
    {interfaces__srv__SetLineROI__REFERENCED_TYPE_DESCRIPTIONS, 7, 7},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&interfaces__msg__LineROI__EXPECTED_HASH, interfaces__msg__LineROI__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = interfaces__msg__LineROI__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&interfaces__msg__ROI__EXPECTED_HASH, interfaces__msg__ROI__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = interfaces__msg__ROI__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = interfaces__srv__SetLineROI_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = interfaces__srv__SetLineROI_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[5].fields = interfaces__srv__SetLineROI_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char interfaces__srv__SetLineROI_Request__FIELD_NAME__data[] = "data";

static rosidl_runtime_c__type_description__Field interfaces__srv__SetLineROI_Request__FIELDS[] = {
  {
    {interfaces__srv__SetLineROI_Request__FIELD_NAME__data, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {interfaces__msg__LineROI__TYPE_NAME, 22, 22},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription interfaces__srv__SetLineROI_Request__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {interfaces__msg__LineROI__TYPE_NAME, 22, 22},
    {NULL, 0, 0},
  },
  {
    {interfaces__msg__ROI__TYPE_NAME, 18, 18},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
interfaces__srv__SetLineROI_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {interfaces__srv__SetLineROI_Request__TYPE_NAME, 33, 33},
      {interfaces__srv__SetLineROI_Request__FIELDS, 1, 1},
    },
    {interfaces__srv__SetLineROI_Request__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&interfaces__msg__LineROI__EXPECTED_HASH, interfaces__msg__LineROI__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = interfaces__msg__LineROI__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&interfaces__msg__ROI__EXPECTED_HASH, interfaces__msg__ROI__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = interfaces__msg__ROI__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char interfaces__srv__SetLineROI_Response__FIELD_NAME__success[] = "success";
static char interfaces__srv__SetLineROI_Response__FIELD_NAME__message[] = "message";

static rosidl_runtime_c__type_description__Field interfaces__srv__SetLineROI_Response__FIELDS[] = {
  {
    {interfaces__srv__SetLineROI_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interfaces__srv__SetLineROI_Response__FIELD_NAME__message, 7, 7},
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
interfaces__srv__SetLineROI_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {interfaces__srv__SetLineROI_Response__TYPE_NAME, 34, 34},
      {interfaces__srv__SetLineROI_Response__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char interfaces__srv__SetLineROI_Event__FIELD_NAME__info[] = "info";
static char interfaces__srv__SetLineROI_Event__FIELD_NAME__request[] = "request";
static char interfaces__srv__SetLineROI_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field interfaces__srv__SetLineROI_Event__FIELDS[] = {
  {
    {interfaces__srv__SetLineROI_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {interfaces__srv__SetLineROI_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {interfaces__srv__SetLineROI_Request__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {interfaces__srv__SetLineROI_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {interfaces__srv__SetLineROI_Response__TYPE_NAME, 34, 34},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription interfaces__srv__SetLineROI_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {interfaces__msg__LineROI__TYPE_NAME, 22, 22},
    {NULL, 0, 0},
  },
  {
    {interfaces__msg__ROI__TYPE_NAME, 18, 18},
    {NULL, 0, 0},
  },
  {
    {interfaces__srv__SetLineROI_Request__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {interfaces__srv__SetLineROI_Response__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
interfaces__srv__SetLineROI_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {interfaces__srv__SetLineROI_Event__TYPE_NAME, 31, 31},
      {interfaces__srv__SetLineROI_Event__FIELDS, 3, 3},
    },
    {interfaces__srv__SetLineROI_Event__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&interfaces__msg__LineROI__EXPECTED_HASH, interfaces__msg__LineROI__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = interfaces__msg__LineROI__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&interfaces__msg__ROI__EXPECTED_HASH, interfaces__msg__ROI__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = interfaces__msg__ROI__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = interfaces__srv__SetLineROI_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = interfaces__srv__SetLineROI_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "interfaces/LineROI data\n"
  "---\n"
  "bool success\n"
  "string message";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
interfaces__srv__SetLineROI__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {interfaces__srv__SetLineROI__TYPE_NAME, 25, 25},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 56, 56},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
interfaces__srv__SetLineROI_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {interfaces__srv__SetLineROI_Request__TYPE_NAME, 33, 33},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
interfaces__srv__SetLineROI_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {interfaces__srv__SetLineROI_Response__TYPE_NAME, 34, 34},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
interfaces__srv__SetLineROI_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {interfaces__srv__SetLineROI_Event__TYPE_NAME, 31, 31},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
interfaces__srv__SetLineROI__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[8];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 8, 8};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *interfaces__srv__SetLineROI__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *interfaces__msg__LineROI__get_individual_type_description_source(NULL);
    sources[3] = *interfaces__msg__ROI__get_individual_type_description_source(NULL);
    sources[4] = *interfaces__srv__SetLineROI_Event__get_individual_type_description_source(NULL);
    sources[5] = *interfaces__srv__SetLineROI_Request__get_individual_type_description_source(NULL);
    sources[6] = *interfaces__srv__SetLineROI_Response__get_individual_type_description_source(NULL);
    sources[7] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
interfaces__srv__SetLineROI_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *interfaces__srv__SetLineROI_Request__get_individual_type_description_source(NULL),
    sources[1] = *interfaces__msg__LineROI__get_individual_type_description_source(NULL);
    sources[2] = *interfaces__msg__ROI__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
interfaces__srv__SetLineROI_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *interfaces__srv__SetLineROI_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
interfaces__srv__SetLineROI_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *interfaces__srv__SetLineROI_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *interfaces__msg__LineROI__get_individual_type_description_source(NULL);
    sources[3] = *interfaces__msg__ROI__get_individual_type_description_source(NULL);
    sources[4] = *interfaces__srv__SetLineROI_Request__get_individual_type_description_source(NULL);
    sources[5] = *interfaces__srv__SetLineROI_Response__get_individual_type_description_source(NULL);
    sources[6] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
