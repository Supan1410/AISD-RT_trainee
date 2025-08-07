// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from serviceinterface:srv/Getk.idl
// generated code does not contain a copyright notice

#ifndef SERVICEINTERFACE__SRV__DETAIL__GETK__BUILDER_HPP_
#define SERVICEINTERFACE__SRV__DETAIL__GETK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "serviceinterface/srv/detail/getk__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace serviceinterface
{

namespace srv
{

namespace builder
{

class Init_Getk_Request_k
{
public:
  Init_Getk_Request_k()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::serviceinterface::srv::Getk_Request k(::serviceinterface::srv::Getk_Request::_k_type arg)
  {
    msg_.k = std::move(arg);
    return std::move(msg_);
  }

private:
  ::serviceinterface::srv::Getk_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::serviceinterface::srv::Getk_Request>()
{
  return serviceinterface::srv::builder::Init_Getk_Request_k();
}

}  // namespace serviceinterface


namespace serviceinterface
{

namespace srv
{

namespace builder
{

class Init_Getk_Response_t
{
public:
  Init_Getk_Response_t()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::serviceinterface::srv::Getk_Response t(::serviceinterface::srv::Getk_Response::_t_type arg)
  {
    msg_.t = std::move(arg);
    return std::move(msg_);
  }

private:
  ::serviceinterface::srv::Getk_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::serviceinterface::srv::Getk_Response>()
{
  return serviceinterface::srv::builder::Init_Getk_Response_t();
}

}  // namespace serviceinterface

#endif  // SERVICEINTERFACE__SRV__DETAIL__GETK__BUILDER_HPP_
