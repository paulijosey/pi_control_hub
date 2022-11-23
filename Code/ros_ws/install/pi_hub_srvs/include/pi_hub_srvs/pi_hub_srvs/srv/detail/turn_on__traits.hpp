// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pi_hub_srvs:srv/TurnOn.idl
// generated code does not contain a copyright notice

#ifndef PI_HUB_SRVS__SRV__DETAIL__TURN_ON__TRAITS_HPP_
#define PI_HUB_SRVS__SRV__DETAIL__TURN_ON__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pi_hub_srvs/srv/detail/turn_on__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace pi_hub_srvs
{

namespace srv
{

inline void to_flow_style_yaml(
  const TurnOn_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TurnOn_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TurnOn_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace pi_hub_srvs

namespace rosidl_generator_traits
{

[[deprecated("use pi_hub_srvs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pi_hub_srvs::srv::TurnOn_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  pi_hub_srvs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pi_hub_srvs::srv::to_yaml() instead")]]
inline std::string to_yaml(const pi_hub_srvs::srv::TurnOn_Request & msg)
{
  return pi_hub_srvs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<pi_hub_srvs::srv::TurnOn_Request>()
{
  return "pi_hub_srvs::srv::TurnOn_Request";
}

template<>
inline const char * name<pi_hub_srvs::srv::TurnOn_Request>()
{
  return "pi_hub_srvs/srv/TurnOn_Request";
}

template<>
struct has_fixed_size<pi_hub_srvs::srv::TurnOn_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<pi_hub_srvs::srv::TurnOn_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<pi_hub_srvs::srv::TurnOn_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace pi_hub_srvs
{

namespace srv
{

inline void to_flow_style_yaml(
  const TurnOn_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TurnOn_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TurnOn_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace pi_hub_srvs

namespace rosidl_generator_traits
{

[[deprecated("use pi_hub_srvs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pi_hub_srvs::srv::TurnOn_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  pi_hub_srvs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pi_hub_srvs::srv::to_yaml() instead")]]
inline std::string to_yaml(const pi_hub_srvs::srv::TurnOn_Response & msg)
{
  return pi_hub_srvs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<pi_hub_srvs::srv::TurnOn_Response>()
{
  return "pi_hub_srvs::srv::TurnOn_Response";
}

template<>
inline const char * name<pi_hub_srvs::srv::TurnOn_Response>()
{
  return "pi_hub_srvs/srv/TurnOn_Response";
}

template<>
struct has_fixed_size<pi_hub_srvs::srv::TurnOn_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<pi_hub_srvs::srv::TurnOn_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<pi_hub_srvs::srv::TurnOn_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<pi_hub_srvs::srv::TurnOn>()
{
  return "pi_hub_srvs::srv::TurnOn";
}

template<>
inline const char * name<pi_hub_srvs::srv::TurnOn>()
{
  return "pi_hub_srvs/srv/TurnOn";
}

template<>
struct has_fixed_size<pi_hub_srvs::srv::TurnOn>
  : std::integral_constant<
    bool,
    has_fixed_size<pi_hub_srvs::srv::TurnOn_Request>::value &&
    has_fixed_size<pi_hub_srvs::srv::TurnOn_Response>::value
  >
{
};

template<>
struct has_bounded_size<pi_hub_srvs::srv::TurnOn>
  : std::integral_constant<
    bool,
    has_bounded_size<pi_hub_srvs::srv::TurnOn_Request>::value &&
    has_bounded_size<pi_hub_srvs::srv::TurnOn_Response>::value
  >
{
};

template<>
struct is_service<pi_hub_srvs::srv::TurnOn>
  : std::true_type
{
};

template<>
struct is_service_request<pi_hub_srvs::srv::TurnOn_Request>
  : std::true_type
{
};

template<>
struct is_service_response<pi_hub_srvs::srv::TurnOn_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PI_HUB_SRVS__SRV__DETAIL__TURN_ON__TRAITS_HPP_
