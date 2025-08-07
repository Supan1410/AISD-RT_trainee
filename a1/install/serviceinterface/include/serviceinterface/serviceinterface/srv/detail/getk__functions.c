// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from serviceinterface:srv/Getk.idl
// generated code does not contain a copyright notice
#include "serviceinterface/srv/detail/getk__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
serviceinterface__srv__Getk_Request__init(serviceinterface__srv__Getk_Request * msg)
{
  if (!msg) {
    return false;
  }
  // k
  return true;
}

void
serviceinterface__srv__Getk_Request__fini(serviceinterface__srv__Getk_Request * msg)
{
  if (!msg) {
    return;
  }
  // k
}

bool
serviceinterface__srv__Getk_Request__are_equal(const serviceinterface__srv__Getk_Request * lhs, const serviceinterface__srv__Getk_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // k
  if (lhs->k != rhs->k) {
    return false;
  }
  return true;
}

bool
serviceinterface__srv__Getk_Request__copy(
  const serviceinterface__srv__Getk_Request * input,
  serviceinterface__srv__Getk_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // k
  output->k = input->k;
  return true;
}

serviceinterface__srv__Getk_Request *
serviceinterface__srv__Getk_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  serviceinterface__srv__Getk_Request * msg = (serviceinterface__srv__Getk_Request *)allocator.allocate(sizeof(serviceinterface__srv__Getk_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(serviceinterface__srv__Getk_Request));
  bool success = serviceinterface__srv__Getk_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
serviceinterface__srv__Getk_Request__destroy(serviceinterface__srv__Getk_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    serviceinterface__srv__Getk_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
serviceinterface__srv__Getk_Request__Sequence__init(serviceinterface__srv__Getk_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  serviceinterface__srv__Getk_Request * data = NULL;

  if (size) {
    data = (serviceinterface__srv__Getk_Request *)allocator.zero_allocate(size, sizeof(serviceinterface__srv__Getk_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = serviceinterface__srv__Getk_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        serviceinterface__srv__Getk_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
serviceinterface__srv__Getk_Request__Sequence__fini(serviceinterface__srv__Getk_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      serviceinterface__srv__Getk_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

serviceinterface__srv__Getk_Request__Sequence *
serviceinterface__srv__Getk_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  serviceinterface__srv__Getk_Request__Sequence * array = (serviceinterface__srv__Getk_Request__Sequence *)allocator.allocate(sizeof(serviceinterface__srv__Getk_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = serviceinterface__srv__Getk_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
serviceinterface__srv__Getk_Request__Sequence__destroy(serviceinterface__srv__Getk_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    serviceinterface__srv__Getk_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
serviceinterface__srv__Getk_Request__Sequence__are_equal(const serviceinterface__srv__Getk_Request__Sequence * lhs, const serviceinterface__srv__Getk_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!serviceinterface__srv__Getk_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
serviceinterface__srv__Getk_Request__Sequence__copy(
  const serviceinterface__srv__Getk_Request__Sequence * input,
  serviceinterface__srv__Getk_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(serviceinterface__srv__Getk_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    serviceinterface__srv__Getk_Request * data =
      (serviceinterface__srv__Getk_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!serviceinterface__srv__Getk_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          serviceinterface__srv__Getk_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!serviceinterface__srv__Getk_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
serviceinterface__srv__Getk_Response__init(serviceinterface__srv__Getk_Response * msg)
{
  if (!msg) {
    return false;
  }
  // t
  return true;
}

void
serviceinterface__srv__Getk_Response__fini(serviceinterface__srv__Getk_Response * msg)
{
  if (!msg) {
    return;
  }
  // t
}

bool
serviceinterface__srv__Getk_Response__are_equal(const serviceinterface__srv__Getk_Response * lhs, const serviceinterface__srv__Getk_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // t
  if (lhs->t != rhs->t) {
    return false;
  }
  return true;
}

bool
serviceinterface__srv__Getk_Response__copy(
  const serviceinterface__srv__Getk_Response * input,
  serviceinterface__srv__Getk_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // t
  output->t = input->t;
  return true;
}

serviceinterface__srv__Getk_Response *
serviceinterface__srv__Getk_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  serviceinterface__srv__Getk_Response * msg = (serviceinterface__srv__Getk_Response *)allocator.allocate(sizeof(serviceinterface__srv__Getk_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(serviceinterface__srv__Getk_Response));
  bool success = serviceinterface__srv__Getk_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
serviceinterface__srv__Getk_Response__destroy(serviceinterface__srv__Getk_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    serviceinterface__srv__Getk_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
serviceinterface__srv__Getk_Response__Sequence__init(serviceinterface__srv__Getk_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  serviceinterface__srv__Getk_Response * data = NULL;

  if (size) {
    data = (serviceinterface__srv__Getk_Response *)allocator.zero_allocate(size, sizeof(serviceinterface__srv__Getk_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = serviceinterface__srv__Getk_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        serviceinterface__srv__Getk_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
serviceinterface__srv__Getk_Response__Sequence__fini(serviceinterface__srv__Getk_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      serviceinterface__srv__Getk_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

serviceinterface__srv__Getk_Response__Sequence *
serviceinterface__srv__Getk_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  serviceinterface__srv__Getk_Response__Sequence * array = (serviceinterface__srv__Getk_Response__Sequence *)allocator.allocate(sizeof(serviceinterface__srv__Getk_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = serviceinterface__srv__Getk_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
serviceinterface__srv__Getk_Response__Sequence__destroy(serviceinterface__srv__Getk_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    serviceinterface__srv__Getk_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
serviceinterface__srv__Getk_Response__Sequence__are_equal(const serviceinterface__srv__Getk_Response__Sequence * lhs, const serviceinterface__srv__Getk_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!serviceinterface__srv__Getk_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
serviceinterface__srv__Getk_Response__Sequence__copy(
  const serviceinterface__srv__Getk_Response__Sequence * input,
  serviceinterface__srv__Getk_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(serviceinterface__srv__Getk_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    serviceinterface__srv__Getk_Response * data =
      (serviceinterface__srv__Getk_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!serviceinterface__srv__Getk_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          serviceinterface__srv__Getk_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!serviceinterface__srv__Getk_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
