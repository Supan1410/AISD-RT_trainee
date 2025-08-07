// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from serviceinterface:srv/Getk.idl
// generated code does not contain a copyright notice

#ifndef SERVICEINTERFACE__SRV__DETAIL__GETK__STRUCT_HPP_
#define SERVICEINTERFACE__SRV__DETAIL__GETK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__serviceinterface__srv__Getk_Request __attribute__((deprecated))
#else
# define DEPRECATED__serviceinterface__srv__Getk_Request __declspec(deprecated)
#endif

namespace serviceinterface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Getk_Request_
{
  using Type = Getk_Request_<ContainerAllocator>;

  explicit Getk_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->k = 0.0f;
    }
  }

  explicit Getk_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->k = 0.0f;
    }
  }

  // field types and members
  using _k_type =
    float;
  _k_type k;

  // setters for named parameter idiom
  Type & set__k(
    const float & _arg)
  {
    this->k = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    serviceinterface::srv::Getk_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const serviceinterface::srv::Getk_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<serviceinterface::srv::Getk_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<serviceinterface::srv::Getk_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      serviceinterface::srv::Getk_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<serviceinterface::srv::Getk_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      serviceinterface::srv::Getk_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<serviceinterface::srv::Getk_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<serviceinterface::srv::Getk_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<serviceinterface::srv::Getk_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__serviceinterface__srv__Getk_Request
    std::shared_ptr<serviceinterface::srv::Getk_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__serviceinterface__srv__Getk_Request
    std::shared_ptr<serviceinterface::srv::Getk_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Getk_Request_ & other) const
  {
    if (this->k != other.k) {
      return false;
    }
    return true;
  }
  bool operator!=(const Getk_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Getk_Request_

// alias to use template instance with default allocator
using Getk_Request =
  serviceinterface::srv::Getk_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace serviceinterface


#ifndef _WIN32
# define DEPRECATED__serviceinterface__srv__Getk_Response __attribute__((deprecated))
#else
# define DEPRECATED__serviceinterface__srv__Getk_Response __declspec(deprecated)
#endif

namespace serviceinterface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Getk_Response_
{
  using Type = Getk_Response_<ContainerAllocator>;

  explicit Getk_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->t = 0.0f;
    }
  }

  explicit Getk_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->t = 0.0f;
    }
  }

  // field types and members
  using _t_type =
    float;
  _t_type t;

  // setters for named parameter idiom
  Type & set__t(
    const float & _arg)
  {
    this->t = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    serviceinterface::srv::Getk_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const serviceinterface::srv::Getk_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<serviceinterface::srv::Getk_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<serviceinterface::srv::Getk_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      serviceinterface::srv::Getk_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<serviceinterface::srv::Getk_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      serviceinterface::srv::Getk_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<serviceinterface::srv::Getk_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<serviceinterface::srv::Getk_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<serviceinterface::srv::Getk_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__serviceinterface__srv__Getk_Response
    std::shared_ptr<serviceinterface::srv::Getk_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__serviceinterface__srv__Getk_Response
    std::shared_ptr<serviceinterface::srv::Getk_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Getk_Response_ & other) const
  {
    if (this->t != other.t) {
      return false;
    }
    return true;
  }
  bool operator!=(const Getk_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Getk_Response_

// alias to use template instance with default allocator
using Getk_Response =
  serviceinterface::srv::Getk_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace serviceinterface

namespace serviceinterface
{

namespace srv
{

struct Getk
{
  using Request = serviceinterface::srv::Getk_Request;
  using Response = serviceinterface::srv::Getk_Response;
};

}  // namespace srv

}  // namespace serviceinterface

#endif  // SERVICEINTERFACE__SRV__DETAIL__GETK__STRUCT_HPP_
