// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from pi_hub_srvs:srv/TurnOn.idl
// generated code does not contain a copyright notice
#include "pi_hub_srvs/srv/detail/turn_on__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "pi_hub_srvs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "pi_hub_srvs/srv/detail/turn_on__struct.h"
#include "pi_hub_srvs/srv/detail/turn_on__functions.h"
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


// forward declare type support functions


using _TurnOn_Request__ros_msg_type = pi_hub_srvs__srv__TurnOn_Request;

static bool _TurnOn_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TurnOn_Request__ros_msg_type * ros_message = static_cast<const _TurnOn_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr << ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

static bool _TurnOn_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TurnOn_Request__ros_msg_type * ros_message = static_cast<_TurnOn_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr >> ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pi_hub_srvs
size_t get_serialized_size_pi_hub_srvs__srv__TurnOn_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TurnOn_Request__ros_msg_type * ros_message = static_cast<const _TurnOn_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message->structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _TurnOn_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_pi_hub_srvs__srv__TurnOn_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pi_hub_srvs
size_t max_serialized_size_pi_hub_srvs__srv__TurnOn_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: structure_needs_at_least_one_member
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _TurnOn_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_pi_hub_srvs__srv__TurnOn_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_TurnOn_Request = {
  "pi_hub_srvs::srv",
  "TurnOn_Request",
  _TurnOn_Request__cdr_serialize,
  _TurnOn_Request__cdr_deserialize,
  _TurnOn_Request__get_serialized_size,
  _TurnOn_Request__max_serialized_size
};

static rosidl_message_type_support_t _TurnOn_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TurnOn_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, pi_hub_srvs, srv, TurnOn_Request)() {
  return &_TurnOn_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "pi_hub_srvs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "pi_hub_srvs/srv/detail/turn_on__struct.h"
// already included above
// #include "pi_hub_srvs/srv/detail/turn_on__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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


// forward declare type support functions


using _TurnOn_Response__ros_msg_type = pi_hub_srvs__srv__TurnOn_Response;

static bool _TurnOn_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TurnOn_Response__ros_msg_type * ros_message = static_cast<const _TurnOn_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  return true;
}

static bool _TurnOn_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TurnOn_Response__ros_msg_type * ros_message = static_cast<_TurnOn_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pi_hub_srvs
size_t get_serialized_size_pi_hub_srvs__srv__TurnOn_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TurnOn_Response__ros_msg_type * ros_message = static_cast<const _TurnOn_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _TurnOn_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_pi_hub_srvs__srv__TurnOn_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pi_hub_srvs
size_t max_serialized_size_pi_hub_srvs__srv__TurnOn_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: success
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _TurnOn_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_pi_hub_srvs__srv__TurnOn_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_TurnOn_Response = {
  "pi_hub_srvs::srv",
  "TurnOn_Response",
  _TurnOn_Response__cdr_serialize,
  _TurnOn_Response__cdr_deserialize,
  _TurnOn_Response__get_serialized_size,
  _TurnOn_Response__max_serialized_size
};

static rosidl_message_type_support_t _TurnOn_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TurnOn_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, pi_hub_srvs, srv, TurnOn_Response)() {
  return &_TurnOn_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "pi_hub_srvs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "pi_hub_srvs/srv/turn_on.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t TurnOn__callbacks = {
  "pi_hub_srvs::srv",
  "TurnOn",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, pi_hub_srvs, srv, TurnOn_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, pi_hub_srvs, srv, TurnOn_Response)(),
};

static rosidl_service_type_support_t TurnOn__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &TurnOn__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, pi_hub_srvs, srv, TurnOn)() {
  return &TurnOn__handle;
}

#if defined(__cplusplus)
}
#endif
