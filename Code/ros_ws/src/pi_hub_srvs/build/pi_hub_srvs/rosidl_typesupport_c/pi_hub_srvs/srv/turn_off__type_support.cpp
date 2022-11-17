// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from pi_hub_srvs:srv/TurnOff.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "pi_hub_srvs/msg/rosidl_typesupport_c__visibility_control.h"
#include "pi_hub_srvs/srv/detail/turn_off__struct.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace pi_hub_srvs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _TurnOff_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TurnOff_Request_type_support_ids_t;

static const _TurnOff_Request_type_support_ids_t _TurnOff_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _TurnOff_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TurnOff_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TurnOff_Request_type_support_symbol_names_t _TurnOff_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, pi_hub_srvs, srv, TurnOff_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pi_hub_srvs, srv, TurnOff_Request)),
  }
};

typedef struct _TurnOff_Request_type_support_data_t
{
  void * data[2];
} _TurnOff_Request_type_support_data_t;

static _TurnOff_Request_type_support_data_t _TurnOff_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TurnOff_Request_message_typesupport_map = {
  2,
  "pi_hub_srvs",
  &_TurnOff_Request_message_typesupport_ids.typesupport_identifier[0],
  &_TurnOff_Request_message_typesupport_symbol_names.symbol_name[0],
  &_TurnOff_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TurnOff_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TurnOff_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace pi_hub_srvs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_pi_hub_srvs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, pi_hub_srvs, srv, TurnOff_Request)() {
  return &::pi_hub_srvs::srv::rosidl_typesupport_c::TurnOff_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "pi_hub_srvs/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "pi_hub_srvs/srv/detail/turn_off__struct.h"
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

namespace pi_hub_srvs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _TurnOff_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TurnOff_Response_type_support_ids_t;

static const _TurnOff_Response_type_support_ids_t _TurnOff_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _TurnOff_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TurnOff_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TurnOff_Response_type_support_symbol_names_t _TurnOff_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, pi_hub_srvs, srv, TurnOff_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pi_hub_srvs, srv, TurnOff_Response)),
  }
};

typedef struct _TurnOff_Response_type_support_data_t
{
  void * data[2];
} _TurnOff_Response_type_support_data_t;

static _TurnOff_Response_type_support_data_t _TurnOff_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TurnOff_Response_message_typesupport_map = {
  2,
  "pi_hub_srvs",
  &_TurnOff_Response_message_typesupport_ids.typesupport_identifier[0],
  &_TurnOff_Response_message_typesupport_symbol_names.symbol_name[0],
  &_TurnOff_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TurnOff_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TurnOff_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace pi_hub_srvs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_pi_hub_srvs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, pi_hub_srvs, srv, TurnOff_Response)() {
  return &::pi_hub_srvs::srv::rosidl_typesupport_c::TurnOff_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "pi_hub_srvs/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace pi_hub_srvs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _TurnOff_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TurnOff_type_support_ids_t;

static const _TurnOff_type_support_ids_t _TurnOff_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _TurnOff_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TurnOff_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TurnOff_type_support_symbol_names_t _TurnOff_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, pi_hub_srvs, srv, TurnOff)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pi_hub_srvs, srv, TurnOff)),
  }
};

typedef struct _TurnOff_type_support_data_t
{
  void * data[2];
} _TurnOff_type_support_data_t;

static _TurnOff_type_support_data_t _TurnOff_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TurnOff_service_typesupport_map = {
  2,
  "pi_hub_srvs",
  &_TurnOff_service_typesupport_ids.typesupport_identifier[0],
  &_TurnOff_service_typesupport_symbol_names.symbol_name[0],
  &_TurnOff_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t TurnOff_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TurnOff_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace pi_hub_srvs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_pi_hub_srvs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, pi_hub_srvs, srv, TurnOff)() {
  return &::pi_hub_srvs::srv::rosidl_typesupport_c::TurnOff_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
