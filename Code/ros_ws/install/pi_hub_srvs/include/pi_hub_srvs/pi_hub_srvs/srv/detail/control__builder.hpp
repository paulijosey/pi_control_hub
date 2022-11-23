// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pi_hub_srvs:srv/Control.idl
// generated code does not contain a copyright notice

#ifndef PI_HUB_SRVS__SRV__DETAIL__CONTROL__BUILDER_HPP_
#define PI_HUB_SRVS__SRV__DETAIL__CONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pi_hub_srvs/srv/detail/control__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pi_hub_srvs
{

namespace srv
{

namespace builder
{

class Init_Control_Request_state
{
public:
  Init_Control_Request_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pi_hub_srvs::srv::Control_Request state(::pi_hub_srvs::srv::Control_Request::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pi_hub_srvs::srv::Control_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::pi_hub_srvs::srv::Control_Request>()
{
  return pi_hub_srvs::srv::builder::Init_Control_Request_state();
}

}  // namespace pi_hub_srvs


namespace pi_hub_srvs
{

namespace srv
{

namespace builder
{

class Init_Control_Response_success
{
public:
  Init_Control_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pi_hub_srvs::srv::Control_Response success(::pi_hub_srvs::srv::Control_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pi_hub_srvs::srv::Control_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::pi_hub_srvs::srv::Control_Response>()
{
  return pi_hub_srvs::srv::builder::Init_Control_Response_success();
}

}  // namespace pi_hub_srvs

#endif  // PI_HUB_SRVS__SRV__DETAIL__CONTROL__BUILDER_HPP_
