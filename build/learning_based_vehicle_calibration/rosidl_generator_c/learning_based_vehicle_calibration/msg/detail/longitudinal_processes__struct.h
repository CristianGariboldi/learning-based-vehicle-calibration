// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from learning_based_vehicle_calibration:msg/LongitudinalProcesses.idl
// generated code does not contain a copyright notice

#ifndef LEARNING_BASED_VEHICLE_CALIBRATION__MSG__DETAIL__LONGITUDINAL_PROCESSES__STRUCT_H_
#define LEARNING_BASED_VEHICLE_CALIBRATION__MSG__DETAIL__LONGITUDINAL_PROCESSES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'processes'
#include "learning_based_vehicle_calibration/msg/detail/longitudinal_progress__struct.h"

/// Struct defined in msg/LongitudinalProcesses in the package learning_based_vehicle_calibration.
typedef struct learning_based_vehicle_calibration__msg__LongitudinalProcesses
{
  std_msgs__msg__Header header;
  learning_based_vehicle_calibration__msg__LongitudinalProgress__Sequence processes;
} learning_based_vehicle_calibration__msg__LongitudinalProcesses;

// Struct for a sequence of learning_based_vehicle_calibration__msg__LongitudinalProcesses.
typedef struct learning_based_vehicle_calibration__msg__LongitudinalProcesses__Sequence
{
  learning_based_vehicle_calibration__msg__LongitudinalProcesses * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} learning_based_vehicle_calibration__msg__LongitudinalProcesses__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LEARNING_BASED_VEHICLE_CALIBRATION__MSG__DETAIL__LONGITUDINAL_PROCESSES__STRUCT_H_
