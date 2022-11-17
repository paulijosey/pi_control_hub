// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from pi_hub_srvs:srv/TurnOn.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "pi_hub_srvs/srv/detail/turn_on__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace pi_hub_srvs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _TurnOn_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TurnOn_Request_type_support_ids_t;

static const _TurnOn_Request_type_support_ids_t _TurnOn_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _TurnOn_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TurnOn_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TurnOn_Request_type_support_symbol_names_t _TurnOn_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, pi_hub_srvs, srv, TurnOn_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pi_hub_srvs, srv, TurnOn_Request)),
  }
};

typedef struct _TurnOn_Request_type_support_data_t
{
  void * data[2];
} _TurnOn_Request_type_support_data_t;

static _TurnOn_Request_type_support_data_t _TurnOn_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TurnOn_Request_message_typesupport_map = {
  2,
  "pi_hub_srvs",
  &_TurnOn_Request_message_typesupport_ids.typesupport_identifier[0],
  &_TurnOn_Request_message_typesupport_symbol_names.symbol_name[0],
  &_TurnOn_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TurnOn_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TurnOn_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace pi_hub_srvs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<pi_hub_srvs::srv::TurnOn_Request>()
{
  return &::pi_hub_srvs::srv::rosidl_typesupport_cpp::TurnOn_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, pi_hub_srvs, srv, TurnOn_Request)() {
  return get_message_type_support_handle<pi_hub_srvs::srv::TurnOn_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "pi_hub_srvs/srv/detail/turn_on__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace pi_hub_srvs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _TurnOn_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TurnOn_Response_type_support_ids_t;

static const _TurnOn_Response_type_support_ids_t _TurnOn_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _TurnOn_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TurnOn_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TurnOn_Response_type_support_symbol_names_t _TurnOn_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, pi_hub_srvs, srv, TurnOn_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pi_hub_srvs, srv, TurnOn_Response)),
  }
};

typedef struct _TurnOn_Response_type_support_data_t
{
  void * data[2];
} _TurnOn_Response_type_support_data_t;

static _TurnOn_Response_type_support_data_t _TurnOn_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TurnOn_Response_message_typesupport_map = {
  2,
  "pi_hub_srvs",
  &_TurnOn_Response_message_typesupport_ids.typesupport_identifier[0],
  &_TurnOn_Response_message_typesupport_symbol_names.symbol_name[0],
  &_TurnOn_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TurnOn_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TurnOn_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace pi_hub_srvs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<pi_hub_srvs::srv::TurnOn_Response>()
{
  return &::pi_hub_srvs::srv::rosidl_typesupport_cpp::TurnOn_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, pi_hub_srvs, srv, TurnOn_Response)() {
  return get_message_type_support_handle<pi_hub_srvs::srv::TurnOn_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "pi_hub_srvs/srv/detail/turn_on__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace pi_hub_srvs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _TurnOn_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TurnOn_type_support_ids_t;

static const _TurnOn_type_support_ids_t _TurnOn_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _TurnOn_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TurnOn_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TurnOn_type_support_symbol_names_t _TurnOn_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, pi_hub_srvs, srv, TurnOn)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pi_hub_srvs, srv, TurnOn)),
  }
};

typedef struct _TurnOn_type_support_data_t
{
  void * data[2];
} _TurnOn_type_support_data_t;

static _TurnOn_type_support_data_t _TurnOn_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TurnOn_service_typesupport_map = {
  2,
  "pi_hub_srvs",
  &_TurnOn_service_typesupport_ids.typesupport_identifier[0],
  &_TurnOn_service_typesupport_symbol_names.symbol_name[0],
  &_TurnOn_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t TurnOn_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TurnOn_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace pi_hub_srvs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<pi_hub_srvs::srv::TurnOn>()
{
  return &::pi_hub_srvs::srv::rosidl_typesupport_cpp::TurnOn_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
