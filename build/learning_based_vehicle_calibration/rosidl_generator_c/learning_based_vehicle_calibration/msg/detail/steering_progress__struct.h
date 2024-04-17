// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from learning_based_vehicle_calibration:msg/SteeringProgress.idl
// generated code does not contain a copyright notice

#ifndef LEARNING_BASED_VEHICLE_CALIBRATION__MSG__DETAIL__STEERING_PROGRESS__STRUCT_H_
#define LEARNING_BASED_VEHICLE_CALIBRATION__MSG__DETAIL__STEERING_PROGRESS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/SteeringProgress in the package learning_based_vehicle_calibration.
typedef struct learning_based_vehicle_calibration__msg__SteeringProgress
{
  int64_t pedal_value_start;
  int64_t pedal_value_end;
  double steering_value_start;
  double steering_value_end;
  double velocity_max;
  int64_t data_count;
  int64_t progress;
} learning_based_vehicle_calibration__msg__SteeringProgress;

// Struct for a sequence of learning_based_vehicle_calibration__msg__SteeringProgress.
typedef struct learning_based_vehicle_calibration__msg__SteeringProgress__Sequence
{
  learning_based_vehicle_calibration__msg__SteeringProgress * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} learning_based_vehicle_calibration__msg__SteeringProgress__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LEARNING_BASED_VEHICLE_CALIBRATION__MSG__DETAIL__STEERING_PROGRESS__STRUCT_H_
