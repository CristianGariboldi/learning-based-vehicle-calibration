// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from learning_based_vehicle_calibration:msg/LongitudinalProcesses.idl
// generated code does not contain a copyright notice
#include "learning_based_vehicle_calibration/msg/detail/longitudinal_processes__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `processes`
#include "learning_based_vehicle_calibration/msg/detail/longitudinal_progress__functions.h"

bool
learning_based_vehicle_calibration__msg__LongitudinalProcesses__init(learning_based_vehicle_calibration__msg__LongitudinalProcesses * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    learning_based_vehicle_calibration__msg__LongitudinalProcesses__fini(msg);
    return false;
  }
  // processes
  if (!learning_based_vehicle_calibration__msg__LongitudinalProgress__Sequence__init(&msg->processes, 0)) {
    learning_based_vehicle_calibration__msg__LongitudinalProcesses__fini(msg);
    return false;
  }
  return true;
}

void
learning_based_vehicle_calibration__msg__LongitudinalProcesses__fini(learning_based_vehicle_calibration__msg__LongitudinalProcesses * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // processes
  learning_based_vehicle_calibration__msg__LongitudinalProgress__Sequence__fini(&msg->processes);
}

bool
learning_based_vehicle_calibration__msg__LongitudinalProcesses__are_equal(const learning_based_vehicle_calibration__msg__LongitudinalProcesses * lhs, const learning_based_vehicle_calibration__msg__LongitudinalProcesses * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // processes
  if (!learning_based_vehicle_calibration__msg__LongitudinalProgress__Sequence__are_equal(
      &(lhs->processes), &(rhs->processes)))
  {
    return false;
  }
  return true;
}

bool
learning_based_vehicle_calibration__msg__LongitudinalProcesses__copy(
  const learning_based_vehicle_calibration__msg__LongitudinalProcesses * input,
  learning_based_vehicle_calibration__msg__LongitudinalProcesses * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // processes
  if (!learning_based_vehicle_calibration__msg__LongitudinalProgress__Sequence__copy(
      &(input->processes), &(output->processes)))
  {
    return false;
  }
  return true;
}

learning_based_vehicle_calibration__msg__LongitudinalProcesses *
learning_based_vehicle_calibration__msg__LongitudinalProcesses__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  learning_based_vehicle_calibration__msg__LongitudinalProcesses * msg = (learning_based_vehicle_calibration__msg__LongitudinalProcesses *)allocator.allocate(sizeof(learning_based_vehicle_calibration__msg__LongitudinalProcesses), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(learning_based_vehicle_calibration__msg__LongitudinalProcesses));
  bool success = learning_based_vehicle_calibration__msg__LongitudinalProcesses__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
learning_based_vehicle_calibration__msg__LongitudinalProcesses__destroy(learning_based_vehicle_calibration__msg__LongitudinalProcesses * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    learning_based_vehicle_calibration__msg__LongitudinalProcesses__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
learning_based_vehicle_calibration__msg__LongitudinalProcesses__Sequence__init(learning_based_vehicle_calibration__msg__LongitudinalProcesses__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  learning_based_vehicle_calibration__msg__LongitudinalProcesses * data = NULL;

  if (size) {
    data = (learning_based_vehicle_calibration__msg__LongitudinalProcesses *)allocator.zero_allocate(size, sizeof(learning_based_vehicle_calibration__msg__LongitudinalProcesses), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = learning_based_vehicle_calibration__msg__LongitudinalProcesses__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        learning_based_vehicle_calibration__msg__LongitudinalProcesses__fini(&data[i - 1]);
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
learning_based_vehicle_calibration__msg__LongitudinalProcesses__Sequence__fini(learning_based_vehicle_calibration__msg__LongitudinalProcesses__Sequence * array)
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
      learning_based_vehicle_calibration__msg__LongitudinalProcesses__fini(&array->data[i]);
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

learning_based_vehicle_calibration__msg__LongitudinalProcesses__Sequence *
learning_based_vehicle_calibration__msg__LongitudinalProcesses__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  learning_based_vehicle_calibration__msg__LongitudinalProcesses__Sequence * array = (learning_based_vehicle_calibration__msg__LongitudinalProcesses__Sequence *)allocator.allocate(sizeof(learning_based_vehicle_calibration__msg__LongitudinalProcesses__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = learning_based_vehicle_calibration__msg__LongitudinalProcesses__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
learning_based_vehicle_calibration__msg__LongitudinalProcesses__Sequence__destroy(learning_based_vehicle_calibration__msg__LongitudinalProcesses__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    learning_based_vehicle_calibration__msg__LongitudinalProcesses__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
learning_based_vehicle_calibration__msg__LongitudinalProcesses__Sequence__are_equal(const learning_based_vehicle_calibration__msg__LongitudinalProcesses__Sequence * lhs, const learning_based_vehicle_calibration__msg__LongitudinalProcesses__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!learning_based_vehicle_calibration__msg__LongitudinalProcesses__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
learning_based_vehicle_calibration__msg__LongitudinalProcesses__Sequence__copy(
  const learning_based_vehicle_calibration__msg__LongitudinalProcesses__Sequence * input,
  learning_based_vehicle_calibration__msg__LongitudinalProcesses__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(learning_based_vehicle_calibration__msg__LongitudinalProcesses);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    learning_based_vehicle_calibration__msg__LongitudinalProcesses * data =
      (learning_based_vehicle_calibration__msg__LongitudinalProcesses *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!learning_based_vehicle_calibration__msg__LongitudinalProcesses__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          learning_based_vehicle_calibration__msg__LongitudinalProcesses__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!learning_based_vehicle_calibration__msg__LongitudinalProcesses__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
