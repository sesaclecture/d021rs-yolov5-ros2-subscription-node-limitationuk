// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from interfaces:srv/GetPose.idl
// generated code does not contain a copyright notice

#include "interfaces/srv/detail/get_pose__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_interfaces
const rosidl_type_hash_t *
interfaces__srv__GetPose__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xbb, 0xdf, 0x50, 0x4a, 0x56, 0x77, 0x0a, 0x43,
      0x86, 0xd1, 0xb7, 0xd8, 0x74, 0xe8, 0x39, 0x15,
      0x20, 0xf1, 0x5c, 0xae, 0x50, 0x45, 0x1f, 0xbf,
      0xcb, 0x30, 0x71, 0x83, 0xa2, 0xcc, 0x2b, 0x50,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_interfaces
const rosidl_type_hash_t *
interfaces__srv__GetPose_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xef, 0xae, 0xbb, 0x63, 0xf1, 0x33, 0x1d, 0xe1,
      0x23, 0x0a, 0x97, 0x08, 0xf2, 0xb2, 0xa0, 0x2d,
      0x9e, 0xbe, 0x21, 0x9c, 0xfa, 0x1c, 0x11, 0x54,
      0x08, 0xd9, 0x3c, 0x80, 0xe2, 0xa8, 0x56, 0x4f,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_interfaces
const rosidl_type_hash_t *
interfaces__srv__GetPose_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x41, 0xa5, 0xcb, 0x05, 0xa4, 0x78, 0x3c, 0x00,
      0x61, 0x61, 0x49, 0xa8, 0x23, 0x95, 0xfd, 0x8f,
      0xda, 0x90, 0x6d, 0x98, 0x61, 0x0a, 0x8b, 0x68,
      0xbb, 0x2a, 0xf0, 0x3c, 0xbf, 0x2a, 0x6c, 0x62,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_interfaces
const rosidl_type_hash_t *
interfaces__srv__GetPose_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x08, 0x9f, 0xd7, 0x5c, 0x8f, 0xfc, 0x05, 0x5d,
      0xa8, 0x66, 0x5b, 0x91, 0x6b, 0xd8, 0x53, 0x06,
      0x51, 0xdc, 0x27, 0x40, 0xee, 0x81, 0x44, 0xf9,
      0x86, 0xe8, 0x00, 0xde, 0xe6, 0x03, 0xdf, 0xf7,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char interfaces__srv__GetPose__TYPE_NAME[] = "interfaces/srv/GetPose";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char interfaces__srv__GetPose_Event__TYPE_NAME[] = "interfaces/srv/GetPose_Event";
static char interfaces__srv__GetPose_Request__TYPE_NAME[] = "interfaces/srv/GetPose_Request";
static char interfaces__srv__GetPose_Response__TYPE_NAME[] = "interfaces/srv/GetPose_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char interfaces__srv__GetPose__FIELD_NAME__request_message[] = "request_message";
static char interfaces__srv__GetPose__FIELD_NAME__response_message[] = "response_message";
static char interfaces__srv__GetPose__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field interfaces__srv__GetPose__FIELDS[] = {
  {
    {interfaces__srv__GetPose__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {interfaces__srv__GetPose_Request__TYPE_NAME, 30, 30},
    },
    {NULL, 0, 0},
  },
  {
    {interfaces__srv__GetPose__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {interfaces__srv__GetPose_Response__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
  {
    {interfaces__srv__GetPose__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {interfaces__srv__GetPose_Event__TYPE_NAME, 28, 28},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription interfaces__srv__GetPose__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {interfaces__srv__GetPose_Event__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {interfaces__srv__GetPose_Request__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {interfaces__srv__GetPose_Response__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
interfaces__srv__GetPose__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {interfaces__srv__GetPose__TYPE_NAME, 22, 22},
      {interfaces__srv__GetPose__FIELDS, 3, 3},
    },
    {interfaces__srv__GetPose__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = interfaces__srv__GetPose_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = interfaces__srv__GetPose_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = interfaces__srv__GetPose_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char interfaces__srv__GetPose_Request__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field interfaces__srv__GetPose_Request__FIELDS[] = {
  {
    {interfaces__srv__GetPose_Request__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
interfaces__srv__GetPose_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {interfaces__srv__GetPose_Request__TYPE_NAME, 30, 30},
      {interfaces__srv__GetPose_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char interfaces__srv__GetPose_Response__FIELD_NAME__success[] = "success";
static char interfaces__srv__GetPose_Response__FIELD_NAME__position[] = "position";
static char interfaces__srv__GetPose_Response__FIELD_NAME__orientation[] = "orientation";

static rosidl_runtime_c__type_description__Field interfaces__srv__GetPose_Response__FIELDS[] = {
  {
    {interfaces__srv__GetPose_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interfaces__srv__GetPose_Response__FIELD_NAME__position, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interfaces__srv__GetPose_Response__FIELD_NAME__orientation, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
interfaces__srv__GetPose_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {interfaces__srv__GetPose_Response__TYPE_NAME, 31, 31},
      {interfaces__srv__GetPose_Response__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char interfaces__srv__GetPose_Event__FIELD_NAME__info[] = "info";
static char interfaces__srv__GetPose_Event__FIELD_NAME__request[] = "request";
static char interfaces__srv__GetPose_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field interfaces__srv__GetPose_Event__FIELDS[] = {
  {
    {interfaces__srv__GetPose_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {interfaces__srv__GetPose_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {interfaces__srv__GetPose_Request__TYPE_NAME, 30, 30},
    },
    {NULL, 0, 0},
  },
  {
    {interfaces__srv__GetPose_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {interfaces__srv__GetPose_Response__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription interfaces__srv__GetPose_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {interfaces__srv__GetPose_Request__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {interfaces__srv__GetPose_Response__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
interfaces__srv__GetPose_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {interfaces__srv__GetPose_Event__TYPE_NAME, 28, 28},
      {interfaces__srv__GetPose_Event__FIELDS, 3, 3},
    },
    {interfaces__srv__GetPose_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = interfaces__srv__GetPose_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = interfaces__srv__GetPose_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "---\n"
  "bool success\n"
  "float32[] position\n"
  "float32[] orientation";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
interfaces__srv__GetPose__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {interfaces__srv__GetPose__TYPE_NAME, 22, 22},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 58, 58},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
interfaces__srv__GetPose_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {interfaces__srv__GetPose_Request__TYPE_NAME, 30, 30},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
interfaces__srv__GetPose_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {interfaces__srv__GetPose_Response__TYPE_NAME, 31, 31},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
interfaces__srv__GetPose_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {interfaces__srv__GetPose_Event__TYPE_NAME, 28, 28},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
interfaces__srv__GetPose__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *interfaces__srv__GetPose__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *interfaces__srv__GetPose_Event__get_individual_type_description_source(NULL);
    sources[3] = *interfaces__srv__GetPose_Request__get_individual_type_description_source(NULL);
    sources[4] = *interfaces__srv__GetPose_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
interfaces__srv__GetPose_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *interfaces__srv__GetPose_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
interfaces__srv__GetPose_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *interfaces__srv__GetPose_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
interfaces__srv__GetPose_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *interfaces__srv__GetPose_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *interfaces__srv__GetPose_Request__get_individual_type_description_source(NULL);
    sources[3] = *interfaces__srv__GetPose_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
