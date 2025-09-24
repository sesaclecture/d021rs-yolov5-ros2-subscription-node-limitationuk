// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:srv/SetPose.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "interfaces/srv/set_pose.h"


#ifndef INTERFACES__SRV__DETAIL__SET_POSE__STRUCT_H_
#define INTERFACES__SRV__DETAIL__SET_POSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'position'
// Member 'orientation'
// Member 'tolerance'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/SetPose in the package interfaces.
typedef struct interfaces__srv__SetPose_Request
{
  rosidl_runtime_c__float__Sequence position;
  rosidl_runtime_c__float__Sequence orientation;
  rosidl_runtime_c__float__Sequence tolerance;
  float resolution;
} interfaces__srv__SetPose_Request;

// Struct for a sequence of interfaces__srv__SetPose_Request.
typedef struct interfaces__srv__SetPose_Request__Sequence
{
  interfaces__srv__SetPose_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__srv__SetPose_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'pulse'
// Member 'current_pulse'
// already included above
// #include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/SetPose in the package interfaces.
typedef struct interfaces__srv__SetPose_Response
{
  bool success;
  rosidl_runtime_c__float__Sequence pulse;
  uint32_t min_variation;
  rosidl_runtime_c__float__Sequence current_pulse;
} interfaces__srv__SetPose_Response;

// Struct for a sequence of interfaces__srv__SetPose_Response.
typedef struct interfaces__srv__SetPose_Response__Sequence
{
  interfaces__srv__SetPose_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__srv__SetPose_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  interfaces__srv__SetPose_Event__request__MAX_SIZE = 1
};
// response
enum
{
  interfaces__srv__SetPose_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SetPose in the package interfaces.
typedef struct interfaces__srv__SetPose_Event
{
  service_msgs__msg__ServiceEventInfo info;
  interfaces__srv__SetPose_Request__Sequence request;
  interfaces__srv__SetPose_Response__Sequence response;
} interfaces__srv__SetPose_Event;

// Struct for a sequence of interfaces__srv__SetPose_Event.
typedef struct interfaces__srv__SetPose_Event__Sequence
{
  interfaces__srv__SetPose_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__srv__SetPose_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__SRV__DETAIL__SET_POSE__STRUCT_H_
