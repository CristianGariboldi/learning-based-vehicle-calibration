// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from learning_based_vehicle_calibration:msg/SteeringProgress.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "learning_based_vehicle_calibration/msg/detail/steering_progress__rosidl_typesupport_introspection_c.h"
#include "learning_based_vehicle_calibration/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "learning_based_vehicle_calibration/msg/detail/steering_progress__functions.h"
#include "learning_based_vehicle_calibration/msg/detail/steering_progress__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void learning_based_vehicle_calibration__msg__SteeringProgress__rosidl_typesupport_introspection_c__SteeringProgress_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  learning_based_vehicle_calibration__msg__SteeringProgress__init(message_memory);
}

void learning_based_vehicle_calibration__msg__SteeringProgress__rosidl_typesupport_introspection_c__SteeringProgress_fini_function(void * message_memory)
{
  learning_based_vehicle_calibration__msg__SteeringProgress__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember learning_based_vehicle_calibration__msg__SteeringProgress__rosidl_typesupport_introspection_c__SteeringProgress_message_member_array[7] = {
  {
    "pedal_value_start",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(learning_based_vehicle_calibration__msg__SteeringProgress, pedal_value_start),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pedal_value_end",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(learning_based_vehicle_calibration__msg__SteeringProgress, pedal_value_end),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "steering_value_start",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(learning_based_vehicle_calibration__msg__SteeringProgress, steering_value_start),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "steering_value_end",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(learning_based_vehicle_calibration__msg__SteeringProgress, steering_value_end),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "velocity_max",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(learning_based_vehicle_calibration__msg__SteeringProgress, velocity_max),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data_count",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(learning_based_vehicle_calibration__msg__SteeringProgress, data_count),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "progress",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(learning_based_vehicle_calibration__msg__SteeringProgress, progress),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers learning_based_vehicle_calibration__msg__SteeringProgress__rosidl_typesupport_introspection_c__SteeringProgress_message_members = {
  "learning_based_vehicle_calibration__msg",  // message namespace
  "SteeringProgress",  // message name
  7,  // number of fields
  sizeof(learning_based_vehicle_calibration__msg__SteeringProgress),
  learning_based_vehicle_calibration__msg__SteeringProgress__rosidl_typesupport_introspection_c__SteeringProgress_message_member_array,  // message members
  learning_based_vehicle_calibration__msg__SteeringProgress__rosidl_typesupport_introspection_c__SteeringProgress_init_function,  // function to initialize message memory (memory has to be allocated)
  learning_based_vehicle_calibration__msg__SteeringProgress__rosidl_typesupport_introspection_c__SteeringProgress_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t learning_based_vehicle_calibration__msg__SteeringProgress__rosidl_typesupport_introspection_c__SteeringProgress_message_type_support_handle = {
  0,
  &learning_based_vehicle_calibration__msg__SteeringProgress__rosidl_typesupport_introspection_c__SteeringProgress_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_learning_based_vehicle_calibration
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, learning_based_vehicle_calibration, msg, SteeringProgress)() {
  if (!learning_based_vehicle_calibration__msg__SteeringProgress__rosidl_typesupport_introspection_c__SteeringProgress_message_type_support_handle.typesupport_identifier) {
    learning_based_vehicle_calibration__msg__SteeringProgress__rosidl_typesupport_introspection_c__SteeringProgress_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &learning_based_vehicle_calibration__msg__SteeringProgress__rosidl_typesupport_introspection_c__SteeringProgress_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
