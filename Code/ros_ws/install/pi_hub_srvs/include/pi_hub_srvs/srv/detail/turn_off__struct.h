// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pi_hub_srvs:srv/TurnOff.idl
// generated code does not contain a copyright notice

#ifndef PI_HUB_SRVS__SRV__DETAIL__TURN_OFF__STRUCT_H_
#define PI_HUB_SRVS__SRV__DETAIL__TURN_OFF__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/TurnOff in the package pi_hub_srvs.
typedef struct pi_hub_srvs__srv__TurnOff_Request
{
  uint8_t structure_needs_at_least_one_member;
} pi_hub_srvs__srv__TurnOff_Request;

// Struct for a sequence of pi_hub_srvs__srv__TurnOff_Request.
typedef struct pi_hub_srvs__srv__TurnOff_Request__Sequence
{
  pi_hub_srvs__srv__TurnOff_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pi_hub_srvs__srv__TurnOff_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/TurnOff in the package pi_hub_srvs.
typedef struct pi_hub_srvs__srv__TurnOff_Response
{
  bool success;
} pi_hub_srvs__srv__TurnOff_Response;

// Struct for a sequence of pi_hub_srvs__srv__TurnOff_Response.
typedef struct pi_hub_srvs__srv__TurnOff_Response__Sequence
{
  pi_hub_srvs__srv__TurnOff_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pi_hub_srvs__srv__TurnOff_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PI_HUB_SRVS__SRV__DETAIL__TURN_OFF__STRUCT_H_
