// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from anint:srv/Ang.idl
// generated code does not contain a copyright notice

#ifndef ANINT__SRV__DETAIL__ANG__STRUCT_HPP_
#define ANINT__SRV__DETAIL__ANG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__anint__srv__Ang_Request __attribute__((deprecated))
#else
# define DEPRECATED__anint__srv__Ang_Request __declspec(deprecated)
#endif

namespace anint
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Ang_Request_
{
  using Type = Ang_Request_<ContainerAllocator>;

  explicit Ang_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->t1 = 0.0f;
      this->t2 = 0.0f;
    }
  }

  explicit Ang_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->t1 = 0.0f;
      this->t2 = 0.0f;
    }
  }

  // field types and members
  using _t1_type =
    float;
  _t1_type t1;
  using _t2_type =
    float;
  _t2_type t2;

  // setters for named parameter idiom
  Type & set__t1(
    const float & _arg)
  {
    this->t1 = _arg;
    return *this;
  }
  Type & set__t2(
    const float & _arg)
  {
    this->t2 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    anint::srv::Ang_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const anint::srv::Ang_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<anint::srv::Ang_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<anint::srv::Ang_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      anint::srv::Ang_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<anint::srv::Ang_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      anint::srv::Ang_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<anint::srv::Ang_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<anint::srv::Ang_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<anint::srv::Ang_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__anint__srv__Ang_Request
    std::shared_ptr<anint::srv::Ang_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__anint__srv__Ang_Request
    std::shared_ptr<anint::srv::Ang_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Ang_Request_ & other) const
  {
    if (this->t1 != other.t1) {
      return false;
    }
    if (this->t2 != other.t2) {
      return false;
    }
    return true;
  }
  bool operator!=(const Ang_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Ang_Request_

// alias to use template instance with default allocator
using Ang_Request =
  anint::srv::Ang_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace anint


#ifndef _WIN32
# define DEPRECATED__anint__srv__Ang_Response __attribute__((deprecated))
#else
# define DEPRECATED__anint__srv__Ang_Response __declspec(deprecated)
#endif

namespace anint
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Ang_Response_
{
  using Type = Ang_Response_<ContainerAllocator>;

  explicit Ang_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0f;
      this->y = 0.0f;
    }
  }

  explicit Ang_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0f;
      this->y = 0.0f;
    }
  }

  // field types and members
  using _x_type =
    float;
  _x_type x;
  using _y_type =
    float;
  _y_type y;

  // setters for named parameter idiom
  Type & set__x(
    const float & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const float & _arg)
  {
    this->y = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    anint::srv::Ang_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const anint::srv::Ang_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<anint::srv::Ang_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<anint::srv::Ang_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      anint::srv::Ang_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<anint::srv::Ang_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      anint::srv::Ang_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<anint::srv::Ang_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<anint::srv::Ang_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<anint::srv::Ang_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__anint__srv__Ang_Response
    std::shared_ptr<anint::srv::Ang_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__anint__srv__Ang_Response
    std::shared_ptr<anint::srv::Ang_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Ang_Response_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    return true;
  }
  bool operator!=(const Ang_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Ang_Response_

// alias to use template instance with default allocator
using Ang_Response =
  anint::srv::Ang_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace anint

namespace anint
{

namespace srv
{

struct Ang
{
  using Request = anint::srv::Ang_Request;
  using Response = anint::srv::Ang_Response;
};

}  // namespace srv

}  // namespace anint

#endif  // ANINT__SRV__DETAIL__ANG__STRUCT_HPP_
