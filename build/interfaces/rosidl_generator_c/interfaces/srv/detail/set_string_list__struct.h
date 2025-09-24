// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:srv/SetStringList.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "interfaces/srv/set_string_list.h"


#ifndef INTERFACES__SRV__DETAIL__SET_STRING_LIST__STRUCT_H_
#define INTERFACES__SRV__DETAIL__SET_STRING_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetStringList in the package interfaces.
typedef struct interfaces__srv__SetStringList_Request
{
  rosidl_runtime_c__String__Sequence data;
} interfaces__srv__SetStringList_Request;

// Struct for a sequence of interfaces__srv__SetStringList_Request.
typedef struct interfaces__srv__SetStringList_Request__Sequence
{
  interfaces__srv__SetStringList_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__srv__SetStringList_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetStringList in the package interfaces.
typedef struct interfaces__srv__SetStringList_Response
{
  bool success;
  rosidl_runtime_c__String message;
} interfaces__srv__SetStringList_Response;

// Struct for a sequence of interfaces__srv__SetStringList_Response.
typedef struct interfaces__srv__SetStringList_Response__Sequence
{
  interfaces__srv__SetStringList_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__srv__SetStringList_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  interfaces__srv__SetStringList_Event__request__MAX_SIZE = 1
};
// response
enum
{
  interfaces__srv__SetStringList_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SetStringList in the package interfaces.
typedef struct interfaces__srv__SetStringList_Event
{
  service_msgs__msg__ServiceEventInfo info;
  interfaces__srv__SetStringList_Request__Sequence request;
  interfaces__srv__SetStringList_Response__Sequence response;
} interfaces__srv__SetStringList_Event;

// Struct for a sequence of interfaces__srv__SetStringList_Event.
typedef struct interfaces__srv__SetStringList_Event__Sequence
{
  interfaces__srv__SetStringList_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__srv__SetStringList_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__SRV__DETAIL__SET_STRING_LIST__STRUCT_H_
