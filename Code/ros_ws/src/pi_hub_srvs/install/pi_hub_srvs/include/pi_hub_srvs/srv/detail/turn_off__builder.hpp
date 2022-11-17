// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pi_hub_srvs:srv/TurnOff.idl
// generated code does not contain a copyright notice

#ifndef PI_HUB_SRVS__SRV__DETAIL__TURN_OFF__BUILDER_HPP_
#define PI_HUB_SRVS__SRV__DETAIL__TURN_OFF__BUILDER_HPP_

#include "pi_hub_srvs/srv/detail/turn_off__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace pi_hub_srvs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::pi_hub_srvs::srv::TurnOff_Request>()
{
  return ::pi_hub_srvs::srv::TurnOff_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace pi_hub_srvs


namespace pi_hub_srvs
{

namespace srv
{

namespace builder
{

class Init_TurnOff_Response_success
{
public:
  Init_TurnOff_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pi_hub_srvs::srv::TurnOff_Response success(::pi_hub_srvs::srv::TurnOff_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pi_hub_srvs::srv::TurnOff_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::pi_hub_srvs::srv::TurnOff_Response>()
{
  return pi_hub_srvs::srv::builder::Init_TurnOff_Response_success();
}

}  // namespace pi_hub_srvs

#endif  // PI_HUB_SRVS__SRV__DETAIL__TURN_OFF__BUILDER_HPP_
