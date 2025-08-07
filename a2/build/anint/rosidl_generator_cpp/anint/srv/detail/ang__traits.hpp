// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from anint:srv/Ang.idl
// generated code does not contain a copyright notice

#ifndef ANINT__SRV__DETAIL__ANG__TRAITS_HPP_
#define ANINT__SRV__DETAIL__ANG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "anint/srv/detail/ang__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace anint
{

namespace srv
{

inline void to_flow_style_yaml(
  const Ang_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: t1
  {
    out << "t1: ";
    rosidl_generator_traits::value_to_yaml(msg.t1, out);
    out << ", ";
  }

  // member: t2
  {
    out << "t2: ";
    rosidl_generator_traits::value_to_yaml(msg.t2, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Ang_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: t1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "t1: ";
    rosidl_generator_traits::value_to_yaml(msg.t1, out);
    out << "\n";
  }

  // member: t2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "t2: ";
    rosidl_generator_traits::value_to_yaml(msg.t2, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Ang_Request & msg, bool use_flow_style = false)
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

}  // namespace anint

namespace rosidl_generator_traits
{

[[deprecated("use anint::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const anint::srv::Ang_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  anint::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use anint::srv::to_yaml() instead")]]
inline std::string to_yaml(const anint::srv::Ang_Request & msg)
{
  return anint::srv::to_yaml(msg);
}

template<>
inline const char * data_type<anint::srv::Ang_Request>()
{
  return "anint::srv::Ang_Request";
}

template<>
inline const char * name<anint::srv::Ang_Request>()
{
  return "anint/srv/Ang_Request";
}

template<>
struct has_fixed_size<anint::srv::Ang_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<anint::srv::Ang_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<anint::srv::Ang_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace anint
{

namespace srv
{

inline void to_flow_style_yaml(
  const Ang_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Ang_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Ang_Response & msg, bool use_flow_style = false)
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

}  // namespace anint

namespace rosidl_generator_traits
{

[[deprecated("use anint::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const anint::srv::Ang_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  anint::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use anint::srv::to_yaml() instead")]]
inline std::string to_yaml(const anint::srv::Ang_Response & msg)
{
  return anint::srv::to_yaml(msg);
}

template<>
inline const char * data_type<anint::srv::Ang_Response>()
{
  return "anint::srv::Ang_Response";
}

template<>
inline const char * name<anint::srv::Ang_Response>()
{
  return "anint/srv/Ang_Response";
}

template<>
struct has_fixed_size<anint::srv::Ang_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<anint::srv::Ang_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<anint::srv::Ang_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<anint::srv::Ang>()
{
  return "anint::srv::Ang";
}

template<>
inline const char * name<anint::srv::Ang>()
{
  return "anint/srv/Ang";
}

template<>
struct has_fixed_size<anint::srv::Ang>
  : std::integral_constant<
    bool,
    has_fixed_size<anint::srv::Ang_Request>::value &&
    has_fixed_size<anint::srv::Ang_Response>::value
  >
{
};

template<>
struct has_bounded_size<anint::srv::Ang>
  : std::integral_constant<
    bool,
    has_bounded_size<anint::srv::Ang_Request>::value &&
    has_bounded_size<anint::srv::Ang_Response>::value
  >
{
};

template<>
struct is_service<anint::srv::Ang>
  : std::true_type
{
};

template<>
struct is_service_request<anint::srv::Ang_Request>
  : std::true_type
{
};

template<>
struct is_service_response<anint::srv::Ang_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ANINT__SRV__DETAIL__ANG__TRAITS_HPP_
