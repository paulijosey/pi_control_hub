// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pi_hub_srvs:srv/TurnOff.idl
// generated code does not contain a copyright notice

#ifndef PI_HUB_SRVS__SRV__DETAIL__TURN_OFF__STRUCT_HPP_
#define PI_HUB_SRVS__SRV__DETAIL__TURN_OFF__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__pi_hub_srvs__srv__TurnOff_Request __attribute__((deprecated))
#else
# define DEPRECATED__pi_hub_srvs__srv__TurnOff_Request __declspec(deprecated)
#endif

namespace pi_hub_srvs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TurnOff_Request_
{
  using Type = TurnOff_Request_<ContainerAllocator>;

  explicit TurnOff_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit TurnOff_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    pi_hub_srvs::srv::TurnOff_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const pi_hub_srvs::srv::TurnOff_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pi_hub_srvs::srv::TurnOff_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pi_hub_srvs::srv::TurnOff_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pi_hub_srvs::srv::TurnOff_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pi_hub_srvs::srv::TurnOff_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pi_hub_srvs::srv::TurnOff_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pi_hub_srvs::srv::TurnOff_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pi_hub_srvs::srv::TurnOff_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pi_hub_srvs::srv::TurnOff_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pi_hub_srvs__srv__TurnOff_Request
    std::shared_ptr<pi_hub_srvs::srv::TurnOff_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pi_hub_srvs__srv__TurnOff_Request
    std::shared_ptr<pi_hub_srvs::srv::TurnOff_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TurnOff_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const TurnOff_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TurnOff_Request_

// alias to use template instance with default allocator
using TurnOff_Request =
  pi_hub_srvs::srv::TurnOff_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace pi_hub_srvs


#ifndef _WIN32
# define DEPRECATED__pi_hub_srvs__srv__TurnOff_Response __attribute__((deprecated))
#else
# define DEPRECATED__pi_hub_srvs__srv__TurnOff_Response __declspec(deprecated)
#endif

namespace pi_hub_srvs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TurnOff_Response_
{
  using Type = TurnOff_Response_<ContainerAllocator>;

  explicit TurnOff_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit TurnOff_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pi_hub_srvs::srv::TurnOff_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const pi_hub_srvs::srv::TurnOff_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pi_hub_srvs::srv::TurnOff_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pi_hub_srvs::srv::TurnOff_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pi_hub_srvs::srv::TurnOff_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pi_hub_srvs::srv::TurnOff_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pi_hub_srvs::srv::TurnOff_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pi_hub_srvs::srv::TurnOff_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pi_hub_srvs::srv::TurnOff_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pi_hub_srvs::srv::TurnOff_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pi_hub_srvs__srv__TurnOff_Response
    std::shared_ptr<pi_hub_srvs::srv::TurnOff_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pi_hub_srvs__srv__TurnOff_Response
    std::shared_ptr<pi_hub_srvs::srv::TurnOff_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TurnOff_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const TurnOff_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TurnOff_Response_

// alias to use template instance with default allocator
using TurnOff_Response =
  pi_hub_srvs::srv::TurnOff_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace pi_hub_srvs

namespace pi_hub_srvs
{

namespace srv
{

struct TurnOff
{
  using Request = pi_hub_srvs::srv::TurnOff_Request;
  using Response = pi_hub_srvs::srv::TurnOff_Response;
};

}  // namespace srv

}  // namespace pi_hub_srvs

#endif  // PI_HUB_SRVS__SRV__DETAIL__TURN_OFF__STRUCT_HPP_
