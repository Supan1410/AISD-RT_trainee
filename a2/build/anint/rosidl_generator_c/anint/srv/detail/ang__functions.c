// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from anint:srv/Ang.idl
// generated code does not contain a copyright notice
#include "anint/srv/detail/ang__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
anint__srv__Ang_Request__init(anint__srv__Ang_Request * msg)
{
  if (!msg) {
    return false;
  }
  // t1
  // t2
  return true;
}

void
anint__srv__Ang_Request__fini(anint__srv__Ang_Request * msg)
{
  if (!msg) {
    return;
  }
  // t1
  // t2
}

bool
anint__srv__Ang_Request__are_equal(const anint__srv__Ang_Request * lhs, const anint__srv__Ang_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // t1
  if (lhs->t1 != rhs->t1) {
    return false;
  }
  // t2
  if (lhs->t2 != rhs->t2) {
    return false;
  }
  return true;
}

bool
anint__srv__Ang_Request__copy(
  const anint__srv__Ang_Request * input,
  anint__srv__Ang_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // t1
  output->t1 = input->t1;
  // t2
  output->t2 = input->t2;
  return true;
}

anint__srv__Ang_Request *
anint__srv__Ang_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  anint__srv__Ang_Request * msg = (anint__srv__Ang_Request *)allocator.allocate(sizeof(anint__srv__Ang_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(anint__srv__Ang_Request));
  bool success = anint__srv__Ang_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
anint__srv__Ang_Request__destroy(anint__srv__Ang_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    anint__srv__Ang_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
anint__srv__Ang_Request__Sequence__init(anint__srv__Ang_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  anint__srv__Ang_Request * data = NULL;

  if (size) {
    data = (anint__srv__Ang_Request *)allocator.zero_allocate(size, sizeof(anint__srv__Ang_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = anint__srv__Ang_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        anint__srv__Ang_Request__fini(&data[i - 1]);
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
anint__srv__Ang_Request__Sequence__fini(anint__srv__Ang_Request__Sequence * array)
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
      anint__srv__Ang_Request__fini(&array->data[i]);
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

anint__srv__Ang_Request__Sequence *
anint__srv__Ang_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  anint__srv__Ang_Request__Sequence * array = (anint__srv__Ang_Request__Sequence *)allocator.allocate(sizeof(anint__srv__Ang_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = anint__srv__Ang_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
anint__srv__Ang_Request__Sequence__destroy(anint__srv__Ang_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    anint__srv__Ang_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
anint__srv__Ang_Request__Sequence__are_equal(const anint__srv__Ang_Request__Sequence * lhs, const anint__srv__Ang_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!anint__srv__Ang_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
anint__srv__Ang_Request__Sequence__copy(
  const anint__srv__Ang_Request__Sequence * input,
  anint__srv__Ang_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(anint__srv__Ang_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    anint__srv__Ang_Request * data =
      (anint__srv__Ang_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!anint__srv__Ang_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          anint__srv__Ang_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!anint__srv__Ang_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
anint__srv__Ang_Response__init(anint__srv__Ang_Response * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  return true;
}

void
anint__srv__Ang_Response__fini(anint__srv__Ang_Response * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
}

bool
anint__srv__Ang_Response__are_equal(const anint__srv__Ang_Response * lhs, const anint__srv__Ang_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  return true;
}

bool
anint__srv__Ang_Response__copy(
  const anint__srv__Ang_Response * input,
  anint__srv__Ang_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  return true;
}

anint__srv__Ang_Response *
anint__srv__Ang_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  anint__srv__Ang_Response * msg = (anint__srv__Ang_Response *)allocator.allocate(sizeof(anint__srv__Ang_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(anint__srv__Ang_Response));
  bool success = anint__srv__Ang_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
anint__srv__Ang_Response__destroy(anint__srv__Ang_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    anint__srv__Ang_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
anint__srv__Ang_Response__Sequence__init(anint__srv__Ang_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  anint__srv__Ang_Response * data = NULL;

  if (size) {
    data = (anint__srv__Ang_Response *)allocator.zero_allocate(size, sizeof(anint__srv__Ang_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = anint__srv__Ang_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        anint__srv__Ang_Response__fini(&data[i - 1]);
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
anint__srv__Ang_Response__Sequence__fini(anint__srv__Ang_Response__Sequence * array)
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
      anint__srv__Ang_Response__fini(&array->data[i]);
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

anint__srv__Ang_Response__Sequence *
anint__srv__Ang_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  anint__srv__Ang_Response__Sequence * array = (anint__srv__Ang_Response__Sequence *)allocator.allocate(sizeof(anint__srv__Ang_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = anint__srv__Ang_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
anint__srv__Ang_Response__Sequence__destroy(anint__srv__Ang_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    anint__srv__Ang_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
anint__srv__Ang_Response__Sequence__are_equal(const anint__srv__Ang_Response__Sequence * lhs, const anint__srv__Ang_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!anint__srv__Ang_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
anint__srv__Ang_Response__Sequence__copy(
  const anint__srv__Ang_Response__Sequence * input,
  anint__srv__Ang_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(anint__srv__Ang_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    anint__srv__Ang_Response * data =
      (anint__srv__Ang_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!anint__srv__Ang_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          anint__srv__Ang_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!anint__srv__Ang_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
