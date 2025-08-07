// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from serviceinterface:srv/Getk.idl
// generated code does not contain a copyright notice

#ifndef SERVICEINTERFACE__SRV__DETAIL__GETK__TRAITS_HPP_
#define SERVICEINTERFACE__SRV__DETAIL__GETK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "serviceinterface/srv/detail/getk__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace serviceinterface
{

namespace srv
{

inline void to_flow_style_yaml(
  const Getk_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: k
  {
    out << "k: ";
    rosidl_generator_traits::value_to_yaml(msg.k, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Getk_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: k
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "k: ";
    rosidl_generator_traits::value_to_yaml(msg.k, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Getk_Request & msg, bool use_flow_style = false)
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

}  // namespace serviceinterface

namespace rosidl_generator_traits
{

[[deprecated("use serviceinterface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const serviceinterface::srv::Getk_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  serviceinterface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use serviceinterface::srv::to_yaml() instead")]]
inline std::string to_yaml(const serviceinterface::srv::Getk_Request & msg)
{
  return serviceinterface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<serviceinterface::srv::Getk_Request>()
{
  return "serviceinterface::srv::Getk_Request";
}

template<>
inline const char * name<serviceinterface::srv::Getk_Request>()
{
  return "serviceinterface/srv/Getk_Request";
}

template<>
struct has_fixed_size<serviceinterface::srv::Getk_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<serviceinterface::srv::Getk_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<serviceinterface::srv::Getk_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace serviceinterface
{

namespace srv
{

inline void to_flow_style_yaml(
  const Getk_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: t
  {
    out << "t: ";
    rosidl_generator_traits::value_to_yaml(msg.t, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Getk_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: t
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "t: ";
    rosidl_generator_traits::value_to_yaml(msg.t, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Getk_Response & msg, bool use_flow_style = false)
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

}  // namespace serviceinterface

namespace rosidl_generator_traits
{

[[deprecated("use serviceinterface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const serviceinterface::srv::Getk_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  serviceinterface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use serviceinterface::srv::to_yaml() instead")]]
inline std::string to_yaml(const serviceinterface::srv::Getk_Response & msg)
{
  return serviceinterface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<serviceinterface::srv::Getk_Response>()
{
  return "serviceinterface::srv::Getk_Response";
}

template<>
inline const char * name<serviceinterface::srv::Getk_Response>()
{
  return "serviceinterface/srv/Getk_Response";
}

template<>
struct has_fixed_size<serviceinterface::srv::Getk_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<serviceinterface::srv::Getk_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<serviceinterface::srv::Getk_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<serviceinterface::srv::Getk>()
{
  return "serviceinterface::srv::Getk";
}

template<>
inline const char * name<serviceinterface::srv::Getk>()
{
  return "serviceinterface/srv/Getk";
}

template<>
struct has_fixed_size<serviceinterface::srv::Getk>
  : std::integral_constant<
    bool,
    has_fixed_size<serviceinterface::srv::Getk_Request>::value &&
    has_fixed_size<serviceinterface::srv::Getk_Response>::value
  >
{
};

template<>
struct has_bounded_size<serviceinterface::srv::Getk>
  : std::integral_constant<
    bool,
    has_bounded_size<serviceinterface::srv::Getk_Request>::value &&
    has_bounded_size<serviceinterface::srv::Getk_Response>::value
  >
{
};

template<>
struct is_service<serviceinterface::srv::Getk>
  : std::true_type
{
};

template<>
struct is_service_request<serviceinterface::srv::Getk_Request>
  : std::true_type
{
};

template<>
struct is_service_response<serviceinterface::srv::Getk_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SERVICEINTERFACE__SRV__DETAIL__GETK__TRAITS_HPP_
