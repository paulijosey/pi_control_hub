// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pi_hub_srvs:srv/Control.idl
// generated code does not contain a copyright notice

#ifndef PI_HUB_SRVS__SRV__DETAIL__CONTROL__TRAITS_HPP_
#define PI_HUB_SRVS__SRV__DETAIL__CONTROL__TRAITS_HPP_

#include "pi_hub_srvs/srv/detail/control__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<pi_hub_srvs::srv::Control_Request>()
{
  return "pi_hub_srvs::srv::Control_Request";
}

template<>
inline const char * name<pi_hub_srvs::srv::Control_Request>()
{
  return "pi_hub_srvs/srv/Control_Request";
}

template<>
struct has_fixed_size<pi_hub_srvs::srv::Control_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<pi_hub_srvs::srv::Control_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<pi_hub_srvs::srv::Control_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<pi_hub_srvs::srv::Control_Response>()
{
  return "pi_hub_srvs::srv::Control_Response";
}

template<>
inline const char * name<pi_hub_srvs::srv::Control_Response>()
{
  return "pi_hub_srvs/srv/Control_Response";
}

template<>
struct has_fixed_size<pi_hub_srvs::srv::Control_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<pi_hub_srvs::srv::Control_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<pi_hub_srvs::srv::Control_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<pi_hub_srvs::srv::Control>()
{
  return "pi_hub_srvs::srv::Control";
}

template<>
inline const char * name<pi_hub_srvs::srv::Control>()
{
  return "pi_hub_srvs/srv/Control";
}

template<>
struct has_fixed_size<pi_hub_srvs::srv::Control>
  : std::integral_constant<
    bool,
    has_fixed_size<pi_hub_srvs::srv::Control_Request>::value &&
    has_fixed_size<pi_hub_srvs::srv::Control_Response>::value
  >
{
};

template<>
struct has_bounded_size<pi_hub_srvs::srv::Control>
  : std::integral_constant<
    bool,
    has_bounded_size<pi_hub_srvs::srv::Control_Request>::value &&
    has_bounded_size<pi_hub_srvs::srv::Control_Response>::value
  >
{
};

template<>
struct is_service<pi_hub_srvs::srv::Control>
  : std::true_type
{
};

template<>
struct is_service_request<pi_hub_srvs::srv::Control_Request>
  : std::true_type
{
};

template<>
struct is_service_response<pi_hub_srvs::srv::Control_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PI_HUB_SRVS__SRV__DETAIL__CONTROL__TRAITS_HPP_
