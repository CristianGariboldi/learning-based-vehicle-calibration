// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from learning_based_vehicle_calibration:msg/SteeringProcesses.idl
// generated code does not contain a copyright notice

#ifndef LEARNING_BASED_VEHICLE_CALIBRATION__MSG__DETAIL__STEERING_PROCESSES__STRUCT_H_
#define LEARNING_BASED_VEHICLE_CALIBRATION__MSG__DETAIL__STEERING_PROCESSES__STRUCT_H_

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
#include "learning_based_vehicle_calibration/msg/detail/steering_progress__struct.h"

/// Struct defined in msg/SteeringProcesses in the package learning_based_vehicle_calibration.
typedef struct learning_based_vehicle_calibration__msg__SteeringProcesses
{
  std_msgs__msg__Header header;
  learning_based_vehicle_calibration__msg__SteeringProgress__Sequence processes;
} learning_based_vehicle_calibration__msg__SteeringProcesses;

// Struct for a sequence of learning_based_vehicle_calibration__msg__SteeringProcesses.
typedef struct learning_based_vehicle_calibration__msg__SteeringProcesses__Sequence
{
  learning_based_vehicle_calibration__msg__SteeringProcesses * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} learning_based_vehicle_calibration__msg__SteeringProcesses__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LEARNING_BASED_VEHICLE_CALIBRATION__MSG__DETAIL__STEERING_PROCESSES__STRUCT_H_
