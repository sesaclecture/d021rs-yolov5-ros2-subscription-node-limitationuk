// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from interfaces:srv/SetStringList.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "interfaces/srv/detail/set_string_list__struct.h"
#include "interfaces/srv/detail/set_string_list__type_support.h"
#include "interfaces/srv/detail/set_string_list__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SetStringList_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetStringList_Request_type_support_ids_t;

static const _SetStringList_Request_type_support_ids_t _SetStringList_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetStringList_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetStringList_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetStringList_Request_type_support_symbol_names_t _SetStringList_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces, srv, SetStringList_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, srv, SetStringList_Request)),
  }
};

typedef struct _SetStringList_Request_type_support_data_t
{
  void * data[2];
} _SetStringList_Request_type_support_data_t;

static _SetStringList_Request_type_support_data_t _SetStringList_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetStringList_Request_message_typesupport_map = {
  2,
  "interfaces",
  &_SetStringList_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SetStringList_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SetStringList_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetStringList_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetStringList_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &interfaces__srv__SetStringList_Request__get_type_hash,
  &interfaces__srv__SetStringList_Request__get_type_description,
  &interfaces__srv__SetStringList_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, interfaces, srv, SetStringList_Request)() {
  return &::interfaces::srv::rosidl_typesupport_c::SetStringList_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "interfaces/srv/detail/set_string_list__struct.h"
// already included above
// #include "interfaces/srv/detail/set_string_list__type_support.h"
// already included above
// #include "interfaces/srv/detail/set_string_list__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SetStringList_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetStringList_Response_type_support_ids_t;

static const _SetStringList_Response_type_support_ids_t _SetStringList_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetStringList_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetStringList_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetStringList_Response_type_support_symbol_names_t _SetStringList_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces, srv, SetStringList_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, srv, SetStringList_Response)),
  }
};

typedef struct _SetStringList_Response_type_support_data_t
{
  void * data[2];
} _SetStringList_Response_type_support_data_t;

static _SetStringList_Response_type_support_data_t _SetStringList_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetStringList_Response_message_typesupport_map = {
  2,
  "interfaces",
  &_SetStringList_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SetStringList_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SetStringList_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetStringList_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetStringList_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &interfaces__srv__SetStringList_Response__get_type_hash,
  &interfaces__srv__SetStringList_Response__get_type_description,
  &interfaces__srv__SetStringList_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, interfaces, srv, SetStringList_Response)() {
  return &::interfaces::srv::rosidl_typesupport_c::SetStringList_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "interfaces/srv/detail/set_string_list__struct.h"
// already included above
// #include "interfaces/srv/detail/set_string_list__type_support.h"
// already included above
// #include "interfaces/srv/detail/set_string_list__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SetStringList_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetStringList_Event_type_support_ids_t;

static const _SetStringList_Event_type_support_ids_t _SetStringList_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetStringList_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetStringList_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetStringList_Event_type_support_symbol_names_t _SetStringList_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces, srv, SetStringList_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, srv, SetStringList_Event)),
  }
};

typedef struct _SetStringList_Event_type_support_data_t
{
  void * data[2];
} _SetStringList_Event_type_support_data_t;

static _SetStringList_Event_type_support_data_t _SetStringList_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetStringList_Event_message_typesupport_map = {
  2,
  "interfaces",
  &_SetStringList_Event_message_typesupport_ids.typesupport_identifier[0],
  &_SetStringList_Event_message_typesupport_symbol_names.symbol_name[0],
  &_SetStringList_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetStringList_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetStringList_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &interfaces__srv__SetStringList_Event__get_type_hash,
  &interfaces__srv__SetStringList_Event__get_type_description,
  &interfaces__srv__SetStringList_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, interfaces, srv, SetStringList_Event)() {
  return &::interfaces::srv::rosidl_typesupport_c::SetStringList_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "interfaces/srv/detail/set_string_list__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _SetStringList_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetStringList_type_support_ids_t;

static const _SetStringList_type_support_ids_t _SetStringList_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetStringList_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetStringList_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetStringList_type_support_symbol_names_t _SetStringList_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces, srv, SetStringList)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, srv, SetStringList)),
  }
};

typedef struct _SetStringList_type_support_data_t
{
  void * data[2];
} _SetStringList_type_support_data_t;

static _SetStringList_type_support_data_t _SetStringList_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetStringList_service_typesupport_map = {
  2,
  "interfaces",
  &_SetStringList_service_typesupport_ids.typesupport_identifier[0],
  &_SetStringList_service_typesupport_symbol_names.symbol_name[0],
  &_SetStringList_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SetStringList_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetStringList_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &SetStringList_Request_message_type_support_handle,
  &SetStringList_Response_message_type_support_handle,
  &SetStringList_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    interfaces,
    srv,
    SetStringList
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    interfaces,
    srv,
    SetStringList
  ),
  &interfaces__srv__SetStringList__get_type_hash,
  &interfaces__srv__SetStringList__get_type_description,
  &interfaces__srv__SetStringList__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, interfaces, srv, SetStringList)() {
  return &::interfaces::srv::rosidl_typesupport_c::SetStringList_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
