// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from interfaces:srv/SetPose.idl
// generated code does not contain a copyright notice

#include "interfaces/srv/detail/set_pose__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_interfaces
const rosidl_type_hash_t *
interfaces__srv__SetPose__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xcc, 0x0a, 0x45, 0xbd, 0x78, 0xa6, 0xbc, 0x48,
      0xa1, 0xba, 0x32, 0xc0, 0x2b, 0x85, 0xc0, 0xe3,
      0xe9, 0x13, 0x61, 0x3a, 0xe8, 0xd3, 0x7b, 0xe0,
      0xf7, 0x7c, 0x90, 0xef, 0xde, 0xba, 0xe3, 0xa4,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_interfaces
const rosidl_type_hash_t *
interfaces__srv__SetPose_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x37, 0x52, 0x31, 0x0f, 0xd1, 0x56, 0x58, 0x81,
      0x5b, 0x8b, 0x28, 0x78, 0xaf, 0xe7, 0xc4, 0x21,
      0x0c, 0x80, 0x0f, 0xb5, 0x99, 0x5d, 0x2f, 0x97,
      0x61, 0x0c, 0x4c, 0xf8, 0x95, 0xd6, 0xf3, 0x63,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_interfaces
const rosidl_type_hash_t *
interfaces__srv__SetPose_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x76, 0x2d, 0x31, 0xa8, 0x02, 0xcd, 0x8b, 0xe3,
      0xbb, 0xeb, 0x0c, 0x12, 0x75, 0x23, 0x31, 0x91,
      0x3e, 0x88, 0xd0, 0x67, 0x71, 0x83, 0x64, 0x73,
      0xe2, 0x5f, 0xd9, 0xb4, 0x46, 0x10, 0x9f, 0x23,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_interfaces
const rosidl_type_hash_t *
interfaces__srv__SetPose_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x63, 0x9e, 0x0f, 0x59, 0xa0, 0x4e, 0x0d, 0x76,
      0xd8, 0xcc, 0xf7, 0xbe, 0x73, 0x42, 0x4b, 0x3d,
      0x88, 0x22, 0x21, 0x66, 0xf2, 0x74, 0xdc, 0x63,
      0x06, 0xa6, 0xd5, 0x56, 0x18, 0xc0, 0x99, 0xa0,
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

static char interfaces__srv__SetPose__TYPE_NAME[] = "interfaces/srv/SetPose";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char interfaces__srv__SetPose_Event__TYPE_NAME[] = "interfaces/srv/SetPose_Event";
static char interfaces__srv__SetPose_Request__TYPE_NAME[] = "interfaces/srv/SetPose_Request";
static char interfaces__srv__SetPose_Response__TYPE_NAME[] = "interfaces/srv/SetPose_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char interfaces__srv__SetPose__FIELD_NAME__request_message[] = "request_message";
static char interfaces__srv__SetPose__FIELD_NAME__response_message[] = "response_message";
static char interfaces__srv__SetPose__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field interfaces__srv__SetPose__FIELDS[] = {
  {
    {interfaces__srv__SetPose__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {interfaces__srv__SetPose_Request__TYPE_NAME, 30, 30},
    },
    {NULL, 0, 0},
  },
  {
    {interfaces__srv__SetPose__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {interfaces__srv__SetPose_Response__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
  {
    {interfaces__srv__SetPose__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {interfaces__srv__SetPose_Event__TYPE_NAME, 28, 28},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription interfaces__srv__SetPose__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {interfaces__srv__SetPose_Event__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {interfaces__srv__SetPose_Request__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {interfaces__srv__SetPose_Response__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
interfaces__srv__SetPose__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {interfaces__srv__SetPose__TYPE_NAME, 22, 22},
      {interfaces__srv__SetPose__FIELDS, 3, 3},
    },
    {interfaces__srv__SetPose__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = interfaces__srv__SetPose_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = interfaces__srv__SetPose_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = interfaces__srv__SetPose_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char interfaces__srv__SetPose_Request__FIELD_NAME__position[] = "position";
static char interfaces__srv__SetPose_Request__FIELD_NAME__orientation[] = "orientation";
static char interfaces__srv__SetPose_Request__FIELD_NAME__tolerance[] = "tolerance";
static char interfaces__srv__SetPose_Request__FIELD_NAME__resolution[] = "resolution";

static rosidl_runtime_c__type_description__Field interfaces__srv__SetPose_Request__FIELDS[] = {
  {
    {interfaces__srv__SetPose_Request__FIELD_NAME__position, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interfaces__srv__SetPose_Request__FIELD_NAME__orientation, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interfaces__srv__SetPose_Request__FIELD_NAME__tolerance, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interfaces__srv__SetPose_Request__FIELD_NAME__resolution, 10, 10},
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
interfaces__srv__SetPose_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {interfaces__srv__SetPose_Request__TYPE_NAME, 30, 30},
      {interfaces__srv__SetPose_Request__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char interfaces__srv__SetPose_Response__FIELD_NAME__success[] = "success";
static char interfaces__srv__SetPose_Response__FIELD_NAME__pulse[] = "pulse";
static char interfaces__srv__SetPose_Response__FIELD_NAME__min_variation[] = "min_variation";
static char interfaces__srv__SetPose_Response__FIELD_NAME__current_pulse[] = "current_pulse";

static rosidl_runtime_c__type_description__Field interfaces__srv__SetPose_Response__FIELDS[] = {
  {
    {interfaces__srv__SetPose_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interfaces__srv__SetPose_Response__FIELD_NAME__pulse, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interfaces__srv__SetPose_Response__FIELD_NAME__min_variation, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interfaces__srv__SetPose_Response__FIELD_NAME__current_pulse, 13, 13},
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
interfaces__srv__SetPose_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {interfaces__srv__SetPose_Response__TYPE_NAME, 31, 31},
      {interfaces__srv__SetPose_Response__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char interfaces__srv__SetPose_Event__FIELD_NAME__info[] = "info";
static char interfaces__srv__SetPose_Event__FIELD_NAME__request[] = "request";
static char interfaces__srv__SetPose_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field interfaces__srv__SetPose_Event__FIELDS[] = {
  {
    {interfaces__srv__SetPose_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {interfaces__srv__SetPose_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {interfaces__srv__SetPose_Request__TYPE_NAME, 30, 30},
    },
    {NULL, 0, 0},
  },
  {
    {interfaces__srv__SetPose_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {interfaces__srv__SetPose_Response__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription interfaces__srv__SetPose_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {interfaces__srv__SetPose_Request__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {interfaces__srv__SetPose_Response__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
interfaces__srv__SetPose_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {interfaces__srv__SetPose_Event__TYPE_NAME, 28, 28},
      {interfaces__srv__SetPose_Event__FIELDS, 3, 3},
    },
    {interfaces__srv__SetPose_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = interfaces__srv__SetPose_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = interfaces__srv__SetPose_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32[] position\n"
  "float32[] orientation\n"
  "float32[] tolerance\n"
  "float32 resolution\n"
  "---\n"
  "bool success\n"
  "float32[] pulse\n"
  "uint32 min_variation\n"
  "float32[] current_pulse";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
interfaces__srv__SetPose__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {interfaces__srv__SetPose__TYPE_NAME, 22, 22},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 158, 158},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
interfaces__srv__SetPose_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {interfaces__srv__SetPose_Request__TYPE_NAME, 30, 30},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
interfaces__srv__SetPose_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {interfaces__srv__SetPose_Response__TYPE_NAME, 31, 31},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
interfaces__srv__SetPose_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {interfaces__srv__SetPose_Event__TYPE_NAME, 28, 28},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
interfaces__srv__SetPose__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *interfaces__srv__SetPose__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *interfaces__srv__SetPose_Event__get_individual_type_description_source(NULL);
    sources[3] = *interfaces__srv__SetPose_Request__get_individual_type_description_source(NULL);
    sources[4] = *interfaces__srv__SetPose_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
interfaces__srv__SetPose_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *interfaces__srv__SetPose_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
interfaces__srv__SetPose_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *interfaces__srv__SetPose_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
interfaces__srv__SetPose_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *interfaces__srv__SetPose_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *interfaces__srv__SetPose_Request__get_individual_type_description_source(NULL);
    sources[3] = *interfaces__srv__SetPose_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
