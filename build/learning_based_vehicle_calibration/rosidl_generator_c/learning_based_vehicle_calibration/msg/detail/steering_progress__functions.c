// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from learning_based_vehicle_calibration:msg/SteeringProgress.idl
// generated code does not contain a copyright notice
#include "learning_based_vehicle_calibration/msg/detail/steering_progress__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
learning_based_vehicle_calibration__msg__SteeringProgress__init(learning_based_vehicle_calibration__msg__SteeringProgress * msg)
{
  if (!msg) {
    return false;
  }
  // pedal_value_start
  // pedal_value_end
  // steering_value_start
  // steering_value_end
  // velocity_max
  // data_count
  // progress
  return true;
}

void
learning_based_vehicle_calibration__msg__SteeringProgress__fini(learning_based_vehicle_calibration__msg__SteeringProgress * msg)
{
  if (!msg) {
    return;
  }
  // pedal_value_start
  // pedal_value_end
  // steering_value_start
  // steering_value_end
  // velocity_max
  // data_count
  // progress
}

bool
learning_based_vehicle_calibration__msg__SteeringProgress__are_equal(const learning_based_vehicle_calibration__msg__SteeringProgress * lhs, const learning_based_vehicle_calibration__msg__SteeringProgress * rhs)
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
  // steering_value_start
  if (lhs->steering_value_start != rhs->steering_value_start) {
    return false;
  }
  // steering_value_end
  if (lhs->steering_value_end != rhs->steering_value_end) {
    return false;
  }
  // velocity_max
  if (lhs->velocity_max != rhs->velocity_max) {
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
learning_based_vehicle_calibration__msg__SteeringProgress__copy(
  const learning_based_vehicle_calibration__msg__SteeringProgress * input,
  learning_based_vehicle_calibration__msg__SteeringProgress * output)
{
  if (!input || !output) {
    return false;
  }
  // pedal_value_start
  output->pedal_value_start = input->pedal_value_start;
  // pedal_value_end
  output->pedal_value_end = input->pedal_value_end;
  // steering_value_start
  output->steering_value_start = input->steering_value_start;
  // steering_value_end
  output->steering_value_end = input->steering_value_end;
  // velocity_max
  output->velocity_max = input->velocity_max;
  // data_count
  output->data_count = input->data_count;
  // progress
  output->progress = input->progress;
  return true;
}

learning_based_vehicle_calibration__msg__SteeringProgress *
learning_based_vehicle_calibration__msg__SteeringProgress__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  learning_based_vehicle_calibration__msg__SteeringProgress * msg = (learning_based_vehicle_calibration__msg__SteeringProgress *)allocator.allocate(sizeof(learning_based_vehicle_calibration__msg__SteeringProgress), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(learning_based_vehicle_calibration__msg__SteeringProgress));
  bool success = learning_based_vehicle_calibration__msg__SteeringProgress__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
learning_based_vehicle_calibration__msg__SteeringProgress__destroy(learning_based_vehicle_calibration__msg__SteeringProgress * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    learning_based_vehicle_calibration__msg__SteeringProgress__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
learning_based_vehicle_calibration__msg__SteeringProgress__Sequence__init(learning_based_vehicle_calibration__msg__SteeringProgress__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  learning_based_vehicle_calibration__msg__SteeringProgress * data = NULL;

  if (size) {
    data = (learning_based_vehicle_calibration__msg__SteeringProgress *)allocator.zero_allocate(size, sizeof(learning_based_vehicle_calibration__msg__SteeringProgress), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = learning_based_vehicle_calibration__msg__SteeringProgress__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        learning_based_vehicle_calibration__msg__SteeringProgress__fini(&data[i - 1]);
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
learning_based_vehicle_calibration__msg__SteeringProgress__Sequence__fini(learning_based_vehicle_calibration__msg__SteeringProgress__Sequence * array)
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
      learning_based_vehicle_calibration__msg__SteeringProgress__fini(&array->data[i]);
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

learning_based_vehicle_calibration__msg__SteeringProgress__Sequence *
learning_based_vehicle_calibration__msg__SteeringProgress__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  learning_based_vehicle_calibration__msg__SteeringProgress__Sequence * array = (learning_based_vehicle_calibration__msg__SteeringProgress__Sequence *)allocator.allocate(sizeof(learning_based_vehicle_calibration__msg__SteeringProgress__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = learning_based_vehicle_calibration__msg__SteeringProgress__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
learning_based_vehicle_calibration__msg__SteeringProgress__Sequence__destroy(learning_based_vehicle_calibration__msg__SteeringProgress__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    learning_based_vehicle_calibration__msg__SteeringProgress__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
learning_based_vehicle_calibration__msg__SteeringProgress__Sequence__are_equal(const learning_based_vehicle_calibration__msg__SteeringProgress__Sequence * lhs, const learning_based_vehicle_calibration__msg__SteeringProgress__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!learning_based_vehicle_calibration__msg__SteeringProgress__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
learning_based_vehicle_calibration__msg__SteeringProgress__Sequence__copy(
  const learning_based_vehicle_calibration__msg__SteeringProgress__Sequence * input,
  learning_based_vehicle_calibration__msg__SteeringProgress__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(learning_based_vehicle_calibration__msg__SteeringProgress);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    learning_based_vehicle_calibration__msg__SteeringProgress * data =
      (learning_based_vehicle_calibration__msg__SteeringProgress *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!learning_based_vehicle_calibration__msg__SteeringProgress__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          learning_based_vehicle_calibration__msg__SteeringProgress__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!learning_based_vehicle_calibration__msg__SteeringProgress__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
