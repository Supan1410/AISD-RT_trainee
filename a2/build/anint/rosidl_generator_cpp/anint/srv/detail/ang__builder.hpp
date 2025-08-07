// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from anint:srv/Ang.idl
// generated code does not contain a copyright notice

#ifndef ANINT__SRV__DETAIL__ANG__BUILDER_HPP_
#define ANINT__SRV__DETAIL__ANG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "anint/srv/detail/ang__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace anint
{

namespace srv
{

namespace builder
{

class Init_Ang_Request_t2
{
public:
  explicit Init_Ang_Request_t2(::anint::srv::Ang_Request & msg)
  : msg_(msg)
  {}
  ::anint::srv::Ang_Request t2(::anint::srv::Ang_Request::_t2_type arg)
  {
    msg_.t2 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anint::srv::Ang_Request msg_;
};

class Init_Ang_Request_t1
{
public:
  Init_Ang_Request_t1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Ang_Request_t2 t1(::anint::srv::Ang_Request::_t1_type arg)
  {
    msg_.t1 = std::move(arg);
    return Init_Ang_Request_t2(msg_);
  }

private:
  ::anint::srv::Ang_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::anint::srv::Ang_Request>()
{
  return anint::srv::builder::Init_Ang_Request_t1();
}

}  // namespace anint


namespace anint
{

namespace srv
{

namespace builder
{

class Init_Ang_Response_y
{
public:
  explicit Init_Ang_Response_y(::anint::srv::Ang_Response & msg)
  : msg_(msg)
  {}
  ::anint::srv::Ang_Response y(::anint::srv::Ang_Response::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anint::srv::Ang_Response msg_;
};

class Init_Ang_Response_x
{
public:
  Init_Ang_Response_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Ang_Response_y x(::anint::srv::Ang_Response::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Ang_Response_y(msg_);
  }

private:
  ::anint::srv::Ang_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::anint::srv::Ang_Response>()
{
  return anint::srv::builder::Init_Ang_Response_x();
}

}  // namespace anint

#endif  // ANINT__SRV__DETAIL__ANG__BUILDER_HPP_
