// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from pi_hub_srvs:srv/TurnOff.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "pi_hub_srvs/srv/detail/turn_off__rosidl_typesupport_introspection_c.h"
#include "pi_hub_srvs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "pi_hub_srvs/srv/detail/turn_off__functions.h"
#include "pi_hub_srvs/srv/detail/turn_off__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void TurnOff_Request__rosidl_typesupport_introspection_c__TurnOff_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pi_hub_srvs__srv__TurnOff_Request__init(message_memory);
}

void TurnOff_Request__rosidl_typesupport_introspection_c__TurnOff_Request_fini_function(void * message_memory)
{
  pi_hub_srvs__srv__TurnOff_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember TurnOff_Request__rosidl_typesupport_introspection_c__TurnOff_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pi_hub_srvs__srv__TurnOff_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TurnOff_Request__rosidl_typesupport_introspection_c__TurnOff_Request_message_members = {
  "pi_hub_srvs__srv",  // message namespace
  "TurnOff_Request",  // message name
  1,  // number of fields
  sizeof(pi_hub_srvs__srv__TurnOff_Request),
  TurnOff_Request__rosidl_typesupport_introspection_c__TurnOff_Request_message_member_array,  // message members
  TurnOff_Request__rosidl_typesupport_introspection_c__TurnOff_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  TurnOff_Request__rosidl_typesupport_introspection_c__TurnOff_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TurnOff_Request__rosidl_typesupport_introspection_c__TurnOff_Request_message_type_support_handle = {
  0,
  &TurnOff_Request__rosidl_typesupport_introspection_c__TurnOff_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pi_hub_srvs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pi_hub_srvs, srv, TurnOff_Request)() {
  if (!TurnOff_Request__rosidl_typesupport_introspection_c__TurnOff_Request_message_type_support_handle.typesupport_identifier) {
    TurnOff_Request__rosidl_typesupport_introspection_c__TurnOff_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TurnOff_Request__rosidl_typesupport_introspection_c__TurnOff_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "pi_hub_srvs/srv/detail/turn_off__rosidl_typesupport_introspection_c.h"
// already included above
// #include "pi_hub_srvs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "pi_hub_srvs/srv/detail/turn_off__functions.h"
// already included above
// #include "pi_hub_srvs/srv/detail/turn_off__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void TurnOff_Response__rosidl_typesupport_introspection_c__TurnOff_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pi_hub_srvs__srv__TurnOff_Response__init(message_memory);
}

void TurnOff_Response__rosidl_typesupport_introspection_c__TurnOff_Response_fini_function(void * message_memory)
{
  pi_hub_srvs__srv__TurnOff_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember TurnOff_Response__rosidl_typesupport_introspection_c__TurnOff_Response_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pi_hub_srvs__srv__TurnOff_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TurnOff_Response__rosidl_typesupport_introspection_c__TurnOff_Response_message_members = {
  "pi_hub_srvs__srv",  // message namespace
  "TurnOff_Response",  // message name
  1,  // number of fields
  sizeof(pi_hub_srvs__srv__TurnOff_Response),
  TurnOff_Response__rosidl_typesupport_introspection_c__TurnOff_Response_message_member_array,  // message members
  TurnOff_Response__rosidl_typesupport_introspection_c__TurnOff_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  TurnOff_Response__rosidl_typesupport_introspection_c__TurnOff_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TurnOff_Response__rosidl_typesupport_introspection_c__TurnOff_Response_message_type_support_handle = {
  0,
  &TurnOff_Response__rosidl_typesupport_introspection_c__TurnOff_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pi_hub_srvs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pi_hub_srvs, srv, TurnOff_Response)() {
  if (!TurnOff_Response__rosidl_typesupport_introspection_c__TurnOff_Response_message_type_support_handle.typesupport_identifier) {
    TurnOff_Response__rosidl_typesupport_introspection_c__TurnOff_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TurnOff_Response__rosidl_typesupport_introspection_c__TurnOff_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "pi_hub_srvs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "pi_hub_srvs/srv/detail/turn_off__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers pi_hub_srvs__srv__detail__turn_off__rosidl_typesupport_introspection_c__TurnOff_service_members = {
  "pi_hub_srvs__srv",  // service namespace
  "TurnOff",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // pi_hub_srvs__srv__detail__turn_off__rosidl_typesupport_introspection_c__TurnOff_Request_message_type_support_handle,
  NULL  // response message
  // pi_hub_srvs__srv__detail__turn_off__rosidl_typesupport_introspection_c__TurnOff_Response_message_type_support_handle
};

static rosidl_service_type_support_t pi_hub_srvs__srv__detail__turn_off__rosidl_typesupport_introspection_c__TurnOff_service_type_support_handle = {
  0,
  &pi_hub_srvs__srv__detail__turn_off__rosidl_typesupport_introspection_c__TurnOff_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pi_hub_srvs, srv, TurnOff_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pi_hub_srvs, srv, TurnOff_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pi_hub_srvs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pi_hub_srvs, srv, TurnOff)() {
  if (!pi_hub_srvs__srv__detail__turn_off__rosidl_typesupport_introspection_c__TurnOff_service_type_support_handle.typesupport_identifier) {
    pi_hub_srvs__srv__detail__turn_off__rosidl_typesupport_introspection_c__TurnOff_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)pi_hub_srvs__srv__detail__turn_off__rosidl_typesupport_introspection_c__TurnOff_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pi_hub_srvs, srv, TurnOff_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pi_hub_srvs, srv, TurnOff_Response)()->data;
  }

  return &pi_hub_srvs__srv__detail__turn_off__rosidl_typesupport_introspection_c__TurnOff_service_type_support_handle;
}
