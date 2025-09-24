// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:srv/SetCircleROI.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "interfaces/srv/set_circle_roi.h"


#ifndef INTERFACES__SRV__DETAIL__SET_CIRCLE_ROI__STRUCT_H_
#define INTERFACES__SRV__DETAIL__SET_CIRCLE_ROI__STRUCT_H_

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
#include "interfaces/msg/detail/roi__struct.h"

/// Struct defined in srv/SetCircleROI in the package interfaces.
typedef struct interfaces__srv__SetCircleROI_Request
{
  interfaces__msg__ROI data;
} interfaces__srv__SetCircleROI_Request;

// Struct for a sequence of interfaces__srv__SetCircleROI_Request.
typedef struct interfaces__srv__SetCircleROI_Request__Sequence
{
  interfaces__srv__SetCircleROI_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__srv__SetCircleROI_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetCircleROI in the package interfaces.
typedef struct interfaces__srv__SetCircleROI_Response
{
  bool success;
  rosidl_runtime_c__String message;
} interfaces__srv__SetCircleROI_Response;

// Struct for a sequence of interfaces__srv__SetCircleROI_Response.
typedef struct interfaces__srv__SetCircleROI_Response__Sequence
{
  interfaces__srv__SetCircleROI_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__srv__SetCircleROI_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  interfaces__srv__SetCircleROI_Event__request__MAX_SIZE = 1
};
// response
enum
{
  interfaces__srv__SetCircleROI_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SetCircleROI in the package interfaces.
typedef struct interfaces__srv__SetCircleROI_Event
{
  service_msgs__msg__ServiceEventInfo info;
  interfaces__srv__SetCircleROI_Request__Sequence request;
  interfaces__srv__SetCircleROI_Response__Sequence response;
} interfaces__srv__SetCircleROI_Event;

// Struct for a sequence of interfaces__srv__SetCircleROI_Event.
typedef struct interfaces__srv__SetCircleROI_Event__Sequence
{
  interfaces__srv__SetCircleROI_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__srv__SetCircleROI_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__SRV__DETAIL__SET_CIRCLE_ROI__STRUCT_H_
