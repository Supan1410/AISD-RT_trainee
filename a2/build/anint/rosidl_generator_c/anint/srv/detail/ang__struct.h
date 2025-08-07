// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from anint:srv/Ang.idl
// generated code does not contain a copyright notice

#ifndef ANINT__SRV__DETAIL__ANG__STRUCT_H_
#define ANINT__SRV__DETAIL__ANG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Ang in the package anint.
typedef struct anint__srv__Ang_Request
{
  float t1;
  float t2;
} anint__srv__Ang_Request;

// Struct for a sequence of anint__srv__Ang_Request.
typedef struct anint__srv__Ang_Request__Sequence
{
  anint__srv__Ang_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anint__srv__Ang_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/Ang in the package anint.
typedef struct anint__srv__Ang_Response
{
  float x;
  float y;
} anint__srv__Ang_Response;

// Struct for a sequence of anint__srv__Ang_Response.
typedef struct anint__srv__Ang_Response__Sequence
{
  anint__srv__Ang_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} anint__srv__Ang_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ANINT__SRV__DETAIL__ANG__STRUCT_H_
