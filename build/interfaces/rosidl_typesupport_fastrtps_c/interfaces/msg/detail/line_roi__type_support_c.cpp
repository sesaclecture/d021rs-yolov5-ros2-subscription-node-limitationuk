// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from interfaces:msg/LineROI.idl
// generated code does not contain a copyright notice
#include "interfaces/msg/detail/line_roi__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "interfaces/msg/detail/line_roi__struct.h"
#include "interfaces/msg/detail/line_roi__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "interfaces/msg/detail/roi__functions.h"  // roi_center, roi_down, roi_up

// forward declare type support functions

bool cdr_serialize_interfaces__msg__ROI(
  const interfaces__msg__ROI * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_interfaces__msg__ROI(
  eprosima::fastcdr::Cdr & cdr,
  interfaces__msg__ROI * ros_message);

size_t get_serialized_size_interfaces__msg__ROI(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_interfaces__msg__ROI(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_interfaces__msg__ROI(
  const interfaces__msg__ROI * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_interfaces__msg__ROI(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_interfaces__msg__ROI(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces, msg, ROI)();


using _LineROI__ros_msg_type = interfaces__msg__LineROI;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interfaces
bool cdr_serialize_interfaces__msg__LineROI(
  const interfaces__msg__LineROI * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: roi_up
  {
    cdr_serialize_interfaces__msg__ROI(
      &ros_message->roi_up, cdr);
  }

  // Field name: roi_center
  {
    cdr_serialize_interfaces__msg__ROI(
      &ros_message->roi_center, cdr);
  }

  // Field name: roi_down
  {
    cdr_serialize_interfaces__msg__ROI(
      &ros_message->roi_down, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interfaces
bool cdr_deserialize_interfaces__msg__LineROI(
  eprosima::fastcdr::Cdr & cdr,
  interfaces__msg__LineROI * ros_message)
{
  // Field name: roi_up
  {
    cdr_deserialize_interfaces__msg__ROI(cdr, &ros_message->roi_up);
  }

  // Field name: roi_center
  {
    cdr_deserialize_interfaces__msg__ROI(cdr, &ros_message->roi_center);
  }

  // Field name: roi_down
  {
    cdr_deserialize_interfaces__msg__ROI(cdr, &ros_message->roi_down);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interfaces
size_t get_serialized_size_interfaces__msg__LineROI(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LineROI__ros_msg_type * ros_message = static_cast<const _LineROI__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: roi_up
  current_alignment += get_serialized_size_interfaces__msg__ROI(
    &(ros_message->roi_up), current_alignment);

  // Field name: roi_center
  current_alignment += get_serialized_size_interfaces__msg__ROI(
    &(ros_message->roi_center), current_alignment);

  // Field name: roi_down
  current_alignment += get_serialized_size_interfaces__msg__ROI(
    &(ros_message->roi_down), current_alignment);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interfaces
size_t max_serialized_size_interfaces__msg__LineROI(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: roi_up
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_interfaces__msg__ROI(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: roi_center
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_interfaces__msg__ROI(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: roi_down
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_interfaces__msg__ROI(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = interfaces__msg__LineROI;
    is_plain =
      (
      offsetof(DataType, roi_down) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interfaces
bool cdr_serialize_key_interfaces__msg__LineROI(
  const interfaces__msg__LineROI * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: roi_up
  {
    cdr_serialize_key_interfaces__msg__ROI(
      &ros_message->roi_up, cdr);
  }

  // Field name: roi_center
  {
    cdr_serialize_key_interfaces__msg__ROI(
      &ros_message->roi_center, cdr);
  }

  // Field name: roi_down
  {
    cdr_serialize_key_interfaces__msg__ROI(
      &ros_message->roi_down, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interfaces
size_t get_serialized_size_key_interfaces__msg__LineROI(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LineROI__ros_msg_type * ros_message = static_cast<const _LineROI__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: roi_up
  current_alignment += get_serialized_size_key_interfaces__msg__ROI(
    &(ros_message->roi_up), current_alignment);

  // Field name: roi_center
  current_alignment += get_serialized_size_key_interfaces__msg__ROI(
    &(ros_message->roi_center), current_alignment);

  // Field name: roi_down
  current_alignment += get_serialized_size_key_interfaces__msg__ROI(
    &(ros_message->roi_down), current_alignment);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interfaces
size_t max_serialized_size_key_interfaces__msg__LineROI(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: roi_up
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_interfaces__msg__ROI(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: roi_center
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_interfaces__msg__ROI(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: roi_down
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_interfaces__msg__ROI(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = interfaces__msg__LineROI;
    is_plain =
      (
      offsetof(DataType, roi_down) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _LineROI__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const interfaces__msg__LineROI * ros_message = static_cast<const interfaces__msg__LineROI *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_interfaces__msg__LineROI(ros_message, cdr);
}

static bool _LineROI__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  interfaces__msg__LineROI * ros_message = static_cast<interfaces__msg__LineROI *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_interfaces__msg__LineROI(cdr, ros_message);
}

static uint32_t _LineROI__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_interfaces__msg__LineROI(
      untyped_ros_message, 0));
}

static size_t _LineROI__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_interfaces__msg__LineROI(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_LineROI = {
  "interfaces::msg",
  "LineROI",
  _LineROI__cdr_serialize,
  _LineROI__cdr_deserialize,
  _LineROI__get_serialized_size,
  _LineROI__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _LineROI__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_LineROI,
  get_message_typesupport_handle_function,
  &interfaces__msg__LineROI__get_type_hash,
  &interfaces__msg__LineROI__get_type_description,
  &interfaces__msg__LineROI__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces, msg, LineROI)() {
  return &_LineROI__type_support;
}

#if defined(__cplusplus)
}
#endif
