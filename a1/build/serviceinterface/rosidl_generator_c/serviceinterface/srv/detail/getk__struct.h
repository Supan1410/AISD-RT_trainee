// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from serviceinterface:srv/Getk.idl
// generated code does not contain a copyright notice

#ifndef SERVICEINTERFACE__SRV__DETAIL__GETK__STRUCT_H_
#define SERVICEINTERFACE__SRV__DETAIL__GETK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Getk in the package serviceinterface.
typedef struct serviceinterface__srv__Getk_Request
{
  float k;
} serviceinterface__srv__Getk_Request;

// Struct for a sequence of serviceinterface__srv__Getk_Request.
typedef struct serviceinterface__srv__Getk_Request__Sequence
{
  serviceinterface__srv__Getk_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} serviceinterface__srv__Getk_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/Getk in the package serviceinterface.
typedef struct serviceinterface__srv__Getk_Response
{
  float t;
} serviceinterface__srv__Getk_Response;

// Struct for a sequence of serviceinterface__srv__Getk_Response.
typedef struct serviceinterface__srv__Getk_Response__Sequence
{
  serviceinterface__srv__Getk_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} serviceinterface__srv__Getk_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SERVICEINTERFACE__SRV__DETAIL__GETK__STRUCT_H_
