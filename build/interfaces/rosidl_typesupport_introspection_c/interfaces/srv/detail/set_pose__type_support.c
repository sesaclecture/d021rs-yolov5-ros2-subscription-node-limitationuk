// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from interfaces:srv/SetPose.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "interfaces/srv/detail/set_pose__rosidl_typesupport_introspection_c.h"
#include "interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "interfaces/srv/detail/set_pose__functions.h"
#include "interfaces/srv/detail/set_pose__struct.h"


// Include directives for member types
// Member `position`
// Member `orientation`
// Member `tolerance`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void interfaces__srv__SetPose_Request__rosidl_typesupport_introspection_c__SetPose_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  interfaces__srv__SetPose_Request__init(message_memory);
}

void interfaces__srv__SetPose_Request__rosidl_typesupport_introspection_c__SetPose_Request_fini_function(void * message_memory)
{
  interfaces__srv__SetPose_Request__fini(message_memory);
}

size_t interfaces__srv__SetPose_Request__rosidl_typesupport_introspection_c__size_function__SetPose_Request__position(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * interfaces__srv__SetPose_Request__rosidl_typesupport_introspection_c__get_const_function__SetPose_Request__position(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * interfaces__srv__SetPose_Request__rosidl_typesupport_introspection_c__get_function__SetPose_Request__position(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void interfaces__srv__SetPose_Request__rosidl_typesupport_introspection_c__fetch_function__SetPose_Request__position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    interfaces__srv__SetPose_Request__rosidl_typesupport_introspection_c__get_const_function__SetPose_Request__position(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void interfaces__srv__SetPose_Request__rosidl_typesupport_introspection_c__assign_function__SetPose_Request__position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    interfaces__srv__SetPose_Request__rosidl_typesupport_introspection_c__get_function__SetPose_Request__position(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool interfaces__srv__SetPose_Request__rosidl_typesupport_introspection_c__resize_function__SetPose_Request__position(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t interfaces__srv__SetPose_Request__rosidl_typesupport_introspection_c__size_function__SetPose_Request__orientation(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * interfaces__srv__SetPose_Request__rosidl_typesupport_introspection_c__get_const_function__SetPose_Request__orientation(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * interfaces__srv__SetPose_Request__rosidl_typesupport_introspection_c__get_function__SetPose_Request__orientation(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void interfaces__srv__SetPose_Request__rosidl_typesupport_introspection_c__fetch_function__SetPose_Request__orientation(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    interfaces__srv__SetPose_Request__rosidl_typesupport_introspection_c__get_const_function__SetPose_Request__orientation(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void interfaces__srv__SetPose_Request__rosidl_typesupport_introspection_c__assign_function__SetPose_Request__orientation(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    interfaces__srv__SetPose_Request__rosidl_typesupport_introspection_c__get_function__SetPose_Request__orientation(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool interfaces__srv__SetPose_Request__rosidl_typesupport_introspection_c__resize_function__SetPose_Request__orientation(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t interfaces__srv__SetPose_Request__rosidl_typesupport_introspection_c__size_function__SetPose_Request__tolerance(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * interfaces__srv__SetPose_Request__rosidl_typesupport_introspection_c__get_const_function__SetPose_Request__tolerance(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * interfaces__srv__SetPose_Request__rosidl_typesupport_introspection_c__get_function__SetPose_Request__tolerance(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void interfaces__srv__SetPose_Request__rosidl_typesupport_introspection_c__fetch_function__SetPose_Request__tolerance(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    interfaces__srv__SetPose_Request__rosidl_typesupport_introspection_c__get_const_function__SetPose_Request__tolerance(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void interfaces__srv__SetPose_Request__rosidl_typesupport_introspection_c__assign_function__SetPose_Request__tolerance(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    interfaces__srv__SetPose_Request__rosidl_typesupport_introspection_c__get_function__SetPose_Request__tolerance(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool interfaces__srv__SetPose_Request__rosidl_typesupport_introspection_c__resize_function__SetPose_Request__tolerance(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember interfaces__srv__SetPose_Request__rosidl_typesupport_introspection_c__SetPose_Request_message_member_array[4] = {
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__srv__SetPose_Request, position),  // bytes offset in struct
    NULL,  // default value
    interfaces__srv__SetPose_Request__rosidl_typesupport_introspection_c__size_function__SetPose_Request__position,  // size() function pointer
    interfaces__srv__SetPose_Request__rosidl_typesupport_introspection_c__get_const_function__SetPose_Request__position,  // get_const(index) function pointer
    interfaces__srv__SetPose_Request__rosidl_typesupport_introspection_c__get_function__SetPose_Request__position,  // get(index) function pointer
    interfaces__srv__SetPose_Request__rosidl_typesupport_introspection_c__fetch_function__SetPose_Request__position,  // fetch(index, &value) function pointer
    interfaces__srv__SetPose_Request__rosidl_typesupport_introspection_c__assign_function__SetPose_Request__position,  // assign(index, value) function pointer
    interfaces__srv__SetPose_Request__rosidl_typesupport_introspection_c__resize_function__SetPose_Request__position  // resize(index) function pointer
  },
  {
    "orientation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__srv__SetPose_Request, orientation),  // bytes offset in struct
    NULL,  // default value
    interfaces__srv__SetPose_Request__rosidl_typesupport_introspection_c__size_function__SetPose_Request__orientation,  // size() function pointer
    interfaces__srv__SetPose_Request__rosidl_typesupport_introspection_c__get_const_function__SetPose_Request__orientation,  // get_const(index) function pointer
    interfaces__srv__SetPose_Request__rosidl_typesupport_introspection_c__get_function__SetPose_Request__orientation,  // get(index) function pointer
    interfaces__srv__SetPose_Request__rosidl_typesupport_introspection_c__fetch_function__SetPose_Request__orientation,  // fetch(index, &value) function pointer
    interfaces__srv__SetPose_Request__rosidl_typesupport_introspection_c__assign_function__SetPose_Request__orientation,  // assign(index, value) function pointer
    interfaces__srv__SetPose_Request__rosidl_typesupport_introspection_c__resize_function__SetPose_Request__orientation  // resize(index) function pointer
  },
  {
    "tolerance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__srv__SetPose_Request, tolerance),  // bytes offset in struct
    NULL,  // default value
    interfaces__srv__SetPose_Request__rosidl_typesupport_introspection_c__size_function__SetPose_Request__tolerance,  // size() function pointer
    interfaces__srv__SetPose_Request__rosidl_typesupport_introspection_c__get_const_function__SetPose_Request__tolerance,  // get_const(index) function pointer
    interfaces__srv__SetPose_Request__rosidl_typesupport_introspection_c__get_function__SetPose_Request__tolerance,  // get(index) function pointer
    interfaces__srv__SetPose_Request__rosidl_typesupport_introspection_c__fetch_function__SetPose_Request__tolerance,  // fetch(index, &value) function pointer
    interfaces__srv__SetPose_Request__rosidl_typesupport_introspection_c__assign_function__SetPose_Request__tolerance,  // assign(index, value) function pointer
    interfaces__srv__SetPose_Request__rosidl_typesupport_introspection_c__resize_function__SetPose_Request__tolerance  // resize(index) function pointer
  },
  {
    "resolution",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__srv__SetPose_Request, resolution),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers interfaces__srv__SetPose_Request__rosidl_typesupport_introspection_c__SetPose_Request_message_members = {
  "interfaces__srv",  // message namespace
  "SetPose_Request",  // message name
  4,  // number of fields
  sizeof(interfaces__srv__SetPose_Request),
  false,  // has_any_key_member_
  interfaces__srv__SetPose_Request__rosidl_typesupport_introspection_c__SetPose_Request_message_member_array,  // message members
  interfaces__srv__SetPose_Request__rosidl_typesupport_introspection_c__SetPose_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  interfaces__srv__SetPose_Request__rosidl_typesupport_introspection_c__SetPose_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t interfaces__srv__SetPose_Request__rosidl_typesupport_introspection_c__SetPose_Request_message_type_support_handle = {
  0,
  &interfaces__srv__SetPose_Request__rosidl_typesupport_introspection_c__SetPose_Request_message_members,
  get_message_typesupport_handle_function,
  &interfaces__srv__SetPose_Request__get_type_hash,
  &interfaces__srv__SetPose_Request__get_type_description,
  &interfaces__srv__SetPose_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, srv, SetPose_Request)() {
  if (!interfaces__srv__SetPose_Request__rosidl_typesupport_introspection_c__SetPose_Request_message_type_support_handle.typesupport_identifier) {
    interfaces__srv__SetPose_Request__rosidl_typesupport_introspection_c__SetPose_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &interfaces__srv__SetPose_Request__rosidl_typesupport_introspection_c__SetPose_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "interfaces/srv/detail/set_pose__rosidl_typesupport_introspection_c.h"
// already included above
// #include "interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "interfaces/srv/detail/set_pose__functions.h"
// already included above
// #include "interfaces/srv/detail/set_pose__struct.h"


// Include directives for member types
// Member `pulse`
// Member `current_pulse`
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void interfaces__srv__SetPose_Response__rosidl_typesupport_introspection_c__SetPose_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  interfaces__srv__SetPose_Response__init(message_memory);
}

void interfaces__srv__SetPose_Response__rosidl_typesupport_introspection_c__SetPose_Response_fini_function(void * message_memory)
{
  interfaces__srv__SetPose_Response__fini(message_memory);
}

size_t interfaces__srv__SetPose_Response__rosidl_typesupport_introspection_c__size_function__SetPose_Response__pulse(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * interfaces__srv__SetPose_Response__rosidl_typesupport_introspection_c__get_const_function__SetPose_Response__pulse(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * interfaces__srv__SetPose_Response__rosidl_typesupport_introspection_c__get_function__SetPose_Response__pulse(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void interfaces__srv__SetPose_Response__rosidl_typesupport_introspection_c__fetch_function__SetPose_Response__pulse(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    interfaces__srv__SetPose_Response__rosidl_typesupport_introspection_c__get_const_function__SetPose_Response__pulse(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void interfaces__srv__SetPose_Response__rosidl_typesupport_introspection_c__assign_function__SetPose_Response__pulse(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    interfaces__srv__SetPose_Response__rosidl_typesupport_introspection_c__get_function__SetPose_Response__pulse(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool interfaces__srv__SetPose_Response__rosidl_typesupport_introspection_c__resize_function__SetPose_Response__pulse(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t interfaces__srv__SetPose_Response__rosidl_typesupport_introspection_c__size_function__SetPose_Response__current_pulse(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * interfaces__srv__SetPose_Response__rosidl_typesupport_introspection_c__get_const_function__SetPose_Response__current_pulse(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * interfaces__srv__SetPose_Response__rosidl_typesupport_introspection_c__get_function__SetPose_Response__current_pulse(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void interfaces__srv__SetPose_Response__rosidl_typesupport_introspection_c__fetch_function__SetPose_Response__current_pulse(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    interfaces__srv__SetPose_Response__rosidl_typesupport_introspection_c__get_const_function__SetPose_Response__current_pulse(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void interfaces__srv__SetPose_Response__rosidl_typesupport_introspection_c__assign_function__SetPose_Response__current_pulse(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    interfaces__srv__SetPose_Response__rosidl_typesupport_introspection_c__get_function__SetPose_Response__current_pulse(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool interfaces__srv__SetPose_Response__rosidl_typesupport_introspection_c__resize_function__SetPose_Response__current_pulse(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember interfaces__srv__SetPose_Response__rosidl_typesupport_introspection_c__SetPose_Response_message_member_array[4] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__srv__SetPose_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pulse",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__srv__SetPose_Response, pulse),  // bytes offset in struct
    NULL,  // default value
    interfaces__srv__SetPose_Response__rosidl_typesupport_introspection_c__size_function__SetPose_Response__pulse,  // size() function pointer
    interfaces__srv__SetPose_Response__rosidl_typesupport_introspection_c__get_const_function__SetPose_Response__pulse,  // get_const(index) function pointer
    interfaces__srv__SetPose_Response__rosidl_typesupport_introspection_c__get_function__SetPose_Response__pulse,  // get(index) function pointer
    interfaces__srv__SetPose_Response__rosidl_typesupport_introspection_c__fetch_function__SetPose_Response__pulse,  // fetch(index, &value) function pointer
    interfaces__srv__SetPose_Response__rosidl_typesupport_introspection_c__assign_function__SetPose_Response__pulse,  // assign(index, value) function pointer
    interfaces__srv__SetPose_Response__rosidl_typesupport_introspection_c__resize_function__SetPose_Response__pulse  // resize(index) function pointer
  },
  {
    "min_variation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__srv__SetPose_Response, min_variation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "current_pulse",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__srv__SetPose_Response, current_pulse),  // bytes offset in struct
    NULL,  // default value
    interfaces__srv__SetPose_Response__rosidl_typesupport_introspection_c__size_function__SetPose_Response__current_pulse,  // size() function pointer
    interfaces__srv__SetPose_Response__rosidl_typesupport_introspection_c__get_const_function__SetPose_Response__current_pulse,  // get_const(index) function pointer
    interfaces__srv__SetPose_Response__rosidl_typesupport_introspection_c__get_function__SetPose_Response__current_pulse,  // get(index) function pointer
    interfaces__srv__SetPose_Response__rosidl_typesupport_introspection_c__fetch_function__SetPose_Response__current_pulse,  // fetch(index, &value) function pointer
    interfaces__srv__SetPose_Response__rosidl_typesupport_introspection_c__assign_function__SetPose_Response__current_pulse,  // assign(index, value) function pointer
    interfaces__srv__SetPose_Response__rosidl_typesupport_introspection_c__resize_function__SetPose_Response__current_pulse  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers interfaces__srv__SetPose_Response__rosidl_typesupport_introspection_c__SetPose_Response_message_members = {
  "interfaces__srv",  // message namespace
  "SetPose_Response",  // message name
  4,  // number of fields
  sizeof(interfaces__srv__SetPose_Response),
  false,  // has_any_key_member_
  interfaces__srv__SetPose_Response__rosidl_typesupport_introspection_c__SetPose_Response_message_member_array,  // message members
  interfaces__srv__SetPose_Response__rosidl_typesupport_introspection_c__SetPose_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  interfaces__srv__SetPose_Response__rosidl_typesupport_introspection_c__SetPose_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t interfaces__srv__SetPose_Response__rosidl_typesupport_introspection_c__SetPose_Response_message_type_support_handle = {
  0,
  &interfaces__srv__SetPose_Response__rosidl_typesupport_introspection_c__SetPose_Response_message_members,
  get_message_typesupport_handle_function,
  &interfaces__srv__SetPose_Response__get_type_hash,
  &interfaces__srv__SetPose_Response__get_type_description,
  &interfaces__srv__SetPose_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, srv, SetPose_Response)() {
  if (!interfaces__srv__SetPose_Response__rosidl_typesupport_introspection_c__SetPose_Response_message_type_support_handle.typesupport_identifier) {
    interfaces__srv__SetPose_Response__rosidl_typesupport_introspection_c__SetPose_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &interfaces__srv__SetPose_Response__rosidl_typesupport_introspection_c__SetPose_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "interfaces/srv/detail/set_pose__rosidl_typesupport_introspection_c.h"
// already included above
// #include "interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "interfaces/srv/detail/set_pose__functions.h"
// already included above
// #include "interfaces/srv/detail/set_pose__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "interfaces/srv/set_pose.h"
// Member `request`
// Member `response`
// already included above
// #include "interfaces/srv/detail/set_pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void interfaces__srv__SetPose_Event__rosidl_typesupport_introspection_c__SetPose_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  interfaces__srv__SetPose_Event__init(message_memory);
}

void interfaces__srv__SetPose_Event__rosidl_typesupport_introspection_c__SetPose_Event_fini_function(void * message_memory)
{
  interfaces__srv__SetPose_Event__fini(message_memory);
}

size_t interfaces__srv__SetPose_Event__rosidl_typesupport_introspection_c__size_function__SetPose_Event__request(
  const void * untyped_member)
{
  const interfaces__srv__SetPose_Request__Sequence * member =
    (const interfaces__srv__SetPose_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * interfaces__srv__SetPose_Event__rosidl_typesupport_introspection_c__get_const_function__SetPose_Event__request(
  const void * untyped_member, size_t index)
{
  const interfaces__srv__SetPose_Request__Sequence * member =
    (const interfaces__srv__SetPose_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * interfaces__srv__SetPose_Event__rosidl_typesupport_introspection_c__get_function__SetPose_Event__request(
  void * untyped_member, size_t index)
{
  interfaces__srv__SetPose_Request__Sequence * member =
    (interfaces__srv__SetPose_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void interfaces__srv__SetPose_Event__rosidl_typesupport_introspection_c__fetch_function__SetPose_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const interfaces__srv__SetPose_Request * item =
    ((const interfaces__srv__SetPose_Request *)
    interfaces__srv__SetPose_Event__rosidl_typesupport_introspection_c__get_const_function__SetPose_Event__request(untyped_member, index));
  interfaces__srv__SetPose_Request * value =
    (interfaces__srv__SetPose_Request *)(untyped_value);
  *value = *item;
}

void interfaces__srv__SetPose_Event__rosidl_typesupport_introspection_c__assign_function__SetPose_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  interfaces__srv__SetPose_Request * item =
    ((interfaces__srv__SetPose_Request *)
    interfaces__srv__SetPose_Event__rosidl_typesupport_introspection_c__get_function__SetPose_Event__request(untyped_member, index));
  const interfaces__srv__SetPose_Request * value =
    (const interfaces__srv__SetPose_Request *)(untyped_value);
  *item = *value;
}

bool interfaces__srv__SetPose_Event__rosidl_typesupport_introspection_c__resize_function__SetPose_Event__request(
  void * untyped_member, size_t size)
{
  interfaces__srv__SetPose_Request__Sequence * member =
    (interfaces__srv__SetPose_Request__Sequence *)(untyped_member);
  interfaces__srv__SetPose_Request__Sequence__fini(member);
  return interfaces__srv__SetPose_Request__Sequence__init(member, size);
}

size_t interfaces__srv__SetPose_Event__rosidl_typesupport_introspection_c__size_function__SetPose_Event__response(
  const void * untyped_member)
{
  const interfaces__srv__SetPose_Response__Sequence * member =
    (const interfaces__srv__SetPose_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * interfaces__srv__SetPose_Event__rosidl_typesupport_introspection_c__get_const_function__SetPose_Event__response(
  const void * untyped_member, size_t index)
{
  const interfaces__srv__SetPose_Response__Sequence * member =
    (const interfaces__srv__SetPose_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * interfaces__srv__SetPose_Event__rosidl_typesupport_introspection_c__get_function__SetPose_Event__response(
  void * untyped_member, size_t index)
{
  interfaces__srv__SetPose_Response__Sequence * member =
    (interfaces__srv__SetPose_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void interfaces__srv__SetPose_Event__rosidl_typesupport_introspection_c__fetch_function__SetPose_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const interfaces__srv__SetPose_Response * item =
    ((const interfaces__srv__SetPose_Response *)
    interfaces__srv__SetPose_Event__rosidl_typesupport_introspection_c__get_const_function__SetPose_Event__response(untyped_member, index));
  interfaces__srv__SetPose_Response * value =
    (interfaces__srv__SetPose_Response *)(untyped_value);
  *value = *item;
}

void interfaces__srv__SetPose_Event__rosidl_typesupport_introspection_c__assign_function__SetPose_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  interfaces__srv__SetPose_Response * item =
    ((interfaces__srv__SetPose_Response *)
    interfaces__srv__SetPose_Event__rosidl_typesupport_introspection_c__get_function__SetPose_Event__response(untyped_member, index));
  const interfaces__srv__SetPose_Response * value =
    (const interfaces__srv__SetPose_Response *)(untyped_value);
  *item = *value;
}

bool interfaces__srv__SetPose_Event__rosidl_typesupport_introspection_c__resize_function__SetPose_Event__response(
  void * untyped_member, size_t size)
{
  interfaces__srv__SetPose_Response__Sequence * member =
    (interfaces__srv__SetPose_Response__Sequence *)(untyped_member);
  interfaces__srv__SetPose_Response__Sequence__fini(member);
  return interfaces__srv__SetPose_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember interfaces__srv__SetPose_Event__rosidl_typesupport_introspection_c__SetPose_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__srv__SetPose_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(interfaces__srv__SetPose_Event, request),  // bytes offset in struct
    NULL,  // default value
    interfaces__srv__SetPose_Event__rosidl_typesupport_introspection_c__size_function__SetPose_Event__request,  // size() function pointer
    interfaces__srv__SetPose_Event__rosidl_typesupport_introspection_c__get_const_function__SetPose_Event__request,  // get_const(index) function pointer
    interfaces__srv__SetPose_Event__rosidl_typesupport_introspection_c__get_function__SetPose_Event__request,  // get(index) function pointer
    interfaces__srv__SetPose_Event__rosidl_typesupport_introspection_c__fetch_function__SetPose_Event__request,  // fetch(index, &value) function pointer
    interfaces__srv__SetPose_Event__rosidl_typesupport_introspection_c__assign_function__SetPose_Event__request,  // assign(index, value) function pointer
    interfaces__srv__SetPose_Event__rosidl_typesupport_introspection_c__resize_function__SetPose_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(interfaces__srv__SetPose_Event, response),  // bytes offset in struct
    NULL,  // default value
    interfaces__srv__SetPose_Event__rosidl_typesupport_introspection_c__size_function__SetPose_Event__response,  // size() function pointer
    interfaces__srv__SetPose_Event__rosidl_typesupport_introspection_c__get_const_function__SetPose_Event__response,  // get_const(index) function pointer
    interfaces__srv__SetPose_Event__rosidl_typesupport_introspection_c__get_function__SetPose_Event__response,  // get(index) function pointer
    interfaces__srv__SetPose_Event__rosidl_typesupport_introspection_c__fetch_function__SetPose_Event__response,  // fetch(index, &value) function pointer
    interfaces__srv__SetPose_Event__rosidl_typesupport_introspection_c__assign_function__SetPose_Event__response,  // assign(index, value) function pointer
    interfaces__srv__SetPose_Event__rosidl_typesupport_introspection_c__resize_function__SetPose_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers interfaces__srv__SetPose_Event__rosidl_typesupport_introspection_c__SetPose_Event_message_members = {
  "interfaces__srv",  // message namespace
  "SetPose_Event",  // message name
  3,  // number of fields
  sizeof(interfaces__srv__SetPose_Event),
  false,  // has_any_key_member_
  interfaces__srv__SetPose_Event__rosidl_typesupport_introspection_c__SetPose_Event_message_member_array,  // message members
  interfaces__srv__SetPose_Event__rosidl_typesupport_introspection_c__SetPose_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  interfaces__srv__SetPose_Event__rosidl_typesupport_introspection_c__SetPose_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t interfaces__srv__SetPose_Event__rosidl_typesupport_introspection_c__SetPose_Event_message_type_support_handle = {
  0,
  &interfaces__srv__SetPose_Event__rosidl_typesupport_introspection_c__SetPose_Event_message_members,
  get_message_typesupport_handle_function,
  &interfaces__srv__SetPose_Event__get_type_hash,
  &interfaces__srv__SetPose_Event__get_type_description,
  &interfaces__srv__SetPose_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, srv, SetPose_Event)() {
  interfaces__srv__SetPose_Event__rosidl_typesupport_introspection_c__SetPose_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  interfaces__srv__SetPose_Event__rosidl_typesupport_introspection_c__SetPose_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, srv, SetPose_Request)();
  interfaces__srv__SetPose_Event__rosidl_typesupport_introspection_c__SetPose_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, srv, SetPose_Response)();
  if (!interfaces__srv__SetPose_Event__rosidl_typesupport_introspection_c__SetPose_Event_message_type_support_handle.typesupport_identifier) {
    interfaces__srv__SetPose_Event__rosidl_typesupport_introspection_c__SetPose_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &interfaces__srv__SetPose_Event__rosidl_typesupport_introspection_c__SetPose_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "interfaces/srv/detail/set_pose__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers interfaces__srv__detail__set_pose__rosidl_typesupport_introspection_c__SetPose_service_members = {
  "interfaces__srv",  // service namespace
  "SetPose",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // interfaces__srv__detail__set_pose__rosidl_typesupport_introspection_c__SetPose_Request_message_type_support_handle,
  NULL,  // response message
  // interfaces__srv__detail__set_pose__rosidl_typesupport_introspection_c__SetPose_Response_message_type_support_handle
  NULL  // event_message
  // interfaces__srv__detail__set_pose__rosidl_typesupport_introspection_c__SetPose_Response_message_type_support_handle
};


static rosidl_service_type_support_t interfaces__srv__detail__set_pose__rosidl_typesupport_introspection_c__SetPose_service_type_support_handle = {
  0,
  &interfaces__srv__detail__set_pose__rosidl_typesupport_introspection_c__SetPose_service_members,
  get_service_typesupport_handle_function,
  &interfaces__srv__SetPose_Request__rosidl_typesupport_introspection_c__SetPose_Request_message_type_support_handle,
  &interfaces__srv__SetPose_Response__rosidl_typesupport_introspection_c__SetPose_Response_message_type_support_handle,
  &interfaces__srv__SetPose_Event__rosidl_typesupport_introspection_c__SetPose_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    interfaces,
    srv,
    SetPose
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    interfaces,
    srv,
    SetPose
  ),
  &interfaces__srv__SetPose__get_type_hash,
  &interfaces__srv__SetPose__get_type_description,
  &interfaces__srv__SetPose__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, srv, SetPose_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, srv, SetPose_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, srv, SetPose_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, srv, SetPose)(void) {
  if (!interfaces__srv__detail__set_pose__rosidl_typesupport_introspection_c__SetPose_service_type_support_handle.typesupport_identifier) {
    interfaces__srv__detail__set_pose__rosidl_typesupport_introspection_c__SetPose_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)interfaces__srv__detail__set_pose__rosidl_typesupport_introspection_c__SetPose_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, srv, SetPose_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, srv, SetPose_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, srv, SetPose_Event)()->data;
  }

  return &interfaces__srv__detail__set_pose__rosidl_typesupport_introspection_c__SetPose_service_type_support_handle;
}
