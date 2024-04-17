// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from learning_based_vehicle_calibration:msg/LongitudinalProgress.idl
// generated code does not contain a copyright notice
#include "learning_based_vehicle_calibration/msg/detail/longitudinal_progress__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
learning_based_vehicle_calibration__msg__LongitudinalProgress__init(learning_based_vehicle_calibration__msg__LongitudinalProgress * msg)
{
  if (!msg) {
    return false;
  }
  // pedal_value_start
  // pedal_value_end
  // velocity_start
  // velocity_end
  // data_count
  // progress
  return true;
}

void
learning_based_vehicle_calibration__msg__LongitudinalProgress__fini(learning_based_vehicle_calibration__msg__LongitudinalProgress * msg)
{
  if (!msg) {
    return;
  }
  // pedal_value_start
  // pedal_value_end
  // velocity_start
  // velocity_end
  // data_count
  // progress
}

bool
learning_based_vehicle_calibration__msg__LongitudinalProgress__are_equal(const learning_based_vehicle_calibration__msg__LongitudinalProgress * lhs, const learning_based_vehicle_calibration__msg__LongitudinalProgress * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pedal_value_start
  if (lhs->pedal_value_start != rhs->pedal_value_start) {
    return false;
  }
  // pedal_value_end
  if (lhs->pedal_value_end != rhs->pedal_value_end) {
    return false;
  }
  // velocity_start
  if (lhs->velocity_start != rhs->velocity_start) {
    return false;
  }
  // velocity_end
  if (lhs->velocity_end != rhs->velocity_end) {
    return false;
  }
  // data_count
  if (lhs->data_count != rhs->data_count) {
    return false;
  }
  // progress
  if (lhs->progress != rhs->progress) {
    return false;
  }
  return true;
}

bool
learning_based_vehicle_calibration__msg__LongitudinalProgress__copy(
  const learning_based_vehicle_calibration__msg__LongitudinalProgress * input,
  learning_based_vehicle_calibration__msg__LongitudinalProgress * output)
{
  if (!input || !output) {
    return false;
  }
  // pedal_value_start
  output->pedal_value_start = input->pedal_value_start;
  // pedal_value_end
  output->pedal_value_end = input->pedal_value_end;
  // velocity_start
  output->velocity_start = input->velocity_start;
  // velocity_end
  output->velocity_end = input->velocity_end;
  // data_count
  output->data_count = input->data_count;
  // progress
  output->progress = input->progress;
  return true;
}

learning_based_vehicle_calibration__msg__LongitudinalProgress *
learning_based_vehicle_calibration__msg__LongitudinalProgress__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  learning_based_vehicle_calibration__msg__LongitudinalProgress * msg = (learning_based_vehicle_calibration__msg__LongitudinalProgress *)allocator.allocate(sizeof(learning_based_vehicle_calibration__msg__LongitudinalProgress), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(learning_based_vehicle_calibration__msg__LongitudinalProgress));
  bool success = learning_based_vehicle_calibration__msg__LongitudinalProgress__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
learning_based_vehicle_calibration__msg__LongitudinalProgress__destroy(learning_based_vehicle_calibration__msg__LongitudinalProgress * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    learning_based_vehicle_calibration__msg__LongitudinalProgress__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
learning_based_vehicle_calibration__msg__LongitudinalProgress__Sequence__init(learning_based_vehicle_calibration__msg__LongitudinalProgress__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  learning_based_vehicle_calibration__msg__LongitudinalProgress * data = NULL;

  if (size) {
    data = (learning_based_vehicle_calibration__msg__LongitudinalProgress *)allocator.zero_allocate(size, sizeof(learning_based_vehicle_calibration__msg__LongitudinalProgress), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = learning_based_vehicle_calibration__msg__LongitudinalProgress__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        learning_based_vehicle_calibration__msg__LongitudinalProgress__fini(&data[i - 1]);
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
learning_based_vehicle_calibration__msg__LongitudinalProgress__Sequence__fini(learning_based_vehicle_calibration__msg__LongitudinalProgress__Sequence * array)
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
      learning_based_vehicle_calibration__msg__LongitudinalProgress__fini(&array->data[i]);
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

learning_based_vehicle_calibration__msg__LongitudinalProgress__Sequence *
learning_based_vehicle_calibration__msg__LongitudinalProgress__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  learning_based_vehicle_calibration__msg__LongitudinalProgress__Sequence * array = (learning_based_vehicle_calibration__msg__LongitudinalProgress__Sequence *)allocator.allocate(sizeof(learning_based_vehicle_calibration__msg__LongitudinalProgress__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = learning_based_vehicle_calibration__msg__LongitudinalProgress__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
learning_based_vehicle_calibration__msg__LongitudinalProgress__Sequence__destroy(learning_based_vehicle_calibration__msg__LongitudinalProgress__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    learning_based_vehicle_calibration__msg__LongitudinalProgress__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
learning_based_vehicle_calibration__msg__LongitudinalProgress__Sequence__are_equal(const learning_based_vehicle_calibration__msg__LongitudinalProgress__Sequence * lhs, const learning_based_vehicle_calibration__msg__LongitudinalProgress__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!learning_based_vehicle_calibration__msg__LongitudinalProgress__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
learning_based_vehicle_calibration__msg__LongitudinalProgress__Sequence__copy(
  const learning_based_vehicle_calibration__msg__LongitudinalProgress__Sequence * input,
  learning_based_vehicle_calibration__msg__LongitudinalProgress__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(learning_based_vehicle_calibration__msg__LongitudinalProgress);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    learning_based_vehicle_calibration__msg__LongitudinalProgress * data =
      (learning_based_vehicle_calibration__msg__LongitudinalProgress *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!learning_based_vehicle_calibration__msg__LongitudinalProgress__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          learning_based_vehicle_calibration__msg__LongitudinalProgress__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!learning_based_vehicle_calibration__msg__LongitudinalProgress__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
