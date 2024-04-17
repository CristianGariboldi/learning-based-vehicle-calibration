// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from learning_based_vehicle_calibration:msg/SteeringProgress.idl
// generated code does not contain a copyright notice

#ifndef LEARNING_BASED_VEHICLE_CALIBRATION__MSG__DETAIL__STEERING_PROGRESS__FUNCTIONS_H_
#define LEARNING_BASED_VEHICLE_CALIBRATION__MSG__DETAIL__STEERING_PROGRESS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "learning_based_vehicle_calibration/msg/rosidl_generator_c__visibility_control.h"

#include "learning_based_vehicle_calibration/msg/detail/steering_progress__struct.h"

/// Initialize msg/SteeringProgress message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * learning_based_vehicle_calibration__msg__SteeringProgress
 * )) before or use
 * learning_based_vehicle_calibration__msg__SteeringProgress__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_learning_based_vehicle_calibration
bool
learning_based_vehicle_calibration__msg__SteeringProgress__init(learning_based_vehicle_calibration__msg__SteeringProgress * msg);

/// Finalize msg/SteeringProgress message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_learning_based_vehicle_calibration
void
learning_based_vehicle_calibration__msg__SteeringProgress__fini(learning_based_vehicle_calibration__msg__SteeringProgress * msg);

/// Create msg/SteeringProgress message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * learning_based_vehicle_calibration__msg__SteeringProgress__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_learning_based_vehicle_calibration
learning_based_vehicle_calibration__msg__SteeringProgress *
learning_based_vehicle_calibration__msg__SteeringProgress__create();

/// Destroy msg/SteeringProgress message.
/**
 * It calls
 * learning_based_vehicle_calibration__msg__SteeringProgress__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_learning_based_vehicle_calibration
void
learning_based_vehicle_calibration__msg__SteeringProgress__destroy(learning_based_vehicle_calibration__msg__SteeringProgress * msg);

/// Check for msg/SteeringProgress message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_learning_based_vehicle_calibration
bool
learning_based_vehicle_calibration__msg__SteeringProgress__are_equal(const learning_based_vehicle_calibration__msg__SteeringProgress * lhs, const learning_based_vehicle_calibration__msg__SteeringProgress * rhs);

/// Copy a msg/SteeringProgress message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_learning_based_vehicle_calibration
bool
learning_based_vehicle_calibration__msg__SteeringProgress__copy(
  const learning_based_vehicle_calibration__msg__SteeringProgress * input,
  learning_based_vehicle_calibration__msg__SteeringProgress * output);

/// Initialize array of msg/SteeringProgress messages.
/**
 * It allocates the memory for the number of elements and calls
 * learning_based_vehicle_calibration__msg__SteeringProgress__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_learning_based_vehicle_calibration
bool
learning_based_vehicle_calibration__msg__SteeringProgress__Sequence__init(learning_based_vehicle_calibration__msg__SteeringProgress__Sequence * array, size_t size);

/// Finalize array of msg/SteeringProgress messages.
/**
 * It calls
 * learning_based_vehicle_calibration__msg__SteeringProgress__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_learning_based_vehicle_calibration
void
learning_based_vehicle_calibration__msg__SteeringProgress__Sequence__fini(learning_based_vehicle_calibration__msg__SteeringProgress__Sequence * array);

/// Create array of msg/SteeringProgress messages.
/**
 * It allocates the memory for the array and calls
 * learning_based_vehicle_calibration__msg__SteeringProgress__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_learning_based_vehicle_calibration
learning_based_vehicle_calibration__msg__SteeringProgress__Sequence *
learning_based_vehicle_calibration__msg__SteeringProgress__Sequence__create(size_t size);

/// Destroy array of msg/SteeringProgress messages.
/**
 * It calls
 * learning_based_vehicle_calibration__msg__SteeringProgress__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_learning_based_vehicle_calibration
void
learning_based_vehicle_calibration__msg__SteeringProgress__Sequence__destroy(learning_based_vehicle_calibration__msg__SteeringProgress__Sequence * array);

/// Check for msg/SteeringProgress message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_learning_based_vehicle_calibration
bool
learning_based_vehicle_calibration__msg__SteeringProgress__Sequence__are_equal(const learning_based_vehicle_calibration__msg__SteeringProgress__Sequence * lhs, const learning_based_vehicle_calibration__msg__SteeringProgress__Sequence * rhs);

/// Copy an array of msg/SteeringProgress messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_learning_based_vehicle_calibration
bool
learning_based_vehicle_calibration__msg__SteeringProgress__Sequence__copy(
  const learning_based_vehicle_calibration__msg__SteeringProgress__Sequence * input,
  learning_based_vehicle_calibration__msg__SteeringProgress__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // LEARNING_BASED_VEHICLE_CALIBRATION__MSG__DETAIL__STEERING_PROGRESS__FUNCTIONS_H_
