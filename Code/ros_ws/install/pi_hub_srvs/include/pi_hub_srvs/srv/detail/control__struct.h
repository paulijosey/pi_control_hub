// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pi_hub_srvs:srv/Control.idl
// generated code does not contain a copyright notice

#ifndef PI_HUB_SRVS__SRV__DETAIL__CONTROL__STRUCT_H_
#define PI_HUB_SRVS__SRV__DETAIL__CONTROL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/Control in the package pi_hub_srvs.
typedef struct pi_hub_srvs__srv__Control_Request
{
  int8_t state;
} pi_hub_srvs__srv__Control_Request;

// Struct for a sequence of pi_hub_srvs__srv__Control_Request.
typedef struct pi_hub_srvs__srv__Control_Request__Sequence
{
  pi_hub_srvs__srv__Control_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pi_hub_srvs__srv__Control_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/Control in the package pi_hub_srvs.
typedef struct pi_hub_srvs__srv__Control_Response
{
  bool success;
} pi_hub_srvs__srv__Control_Response;

// Struct for a sequence of pi_hub_srvs__srv__Control_Response.
typedef struct pi_hub_srvs__srv__Control_Response__Sequence
{
  pi_hub_srvs__srv__Control_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pi_hub_srvs__srv__Control_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PI_HUB_SRVS__SRV__DETAIL__CONTROL__STRUCT_H_
