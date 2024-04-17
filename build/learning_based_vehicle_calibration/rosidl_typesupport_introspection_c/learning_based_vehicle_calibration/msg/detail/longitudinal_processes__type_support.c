// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from learning_based_vehicle_calibration:msg/LongitudinalProcesses.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "learning_based_vehicle_calibration/msg/detail/longitudinal_processes__rosidl_typesupport_introspection_c.h"
#include "learning_based_vehicle_calibration/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "learning_based_vehicle_calibration/msg/detail/longitudinal_processes__functions.h"
#include "learning_based_vehicle_calibration/msg/detail/longitudinal_processes__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `processes`
#include "learning_based_vehicle_calibration/msg/longitudinal_progress.h"
// Member `processes`
#include "learning_based_vehicle_calibration/msg/detail/longitudinal_progress__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void learning_based_vehicle_calibration__msg__LongitudinalProcesses__rosidl_typesupport_introspection_c__LongitudinalProcesses_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  learning_based_vehicle_calibration__msg__LongitudinalProcesses__init(message_memory);
}

void learning_based_vehicle_calibration__msg__LongitudinalProcesses__rosidl_typesupport_introspection_c__LongitudinalProcesses_fini_function(void * message_memory)
{
  learning_based_vehicle_calibration__msg__LongitudinalProcesses__fini(message_memory);
}

size_t learning_based_vehicle_calibration__msg__LongitudinalProcesses__rosidl_typesupport_introspection_c__size_function__LongitudinalProcesses__processes(
  const void * untyped_member)
{
  const learning_based_vehicle_calibration__msg__LongitudinalProgress__Sequence * member =
    (const learning_based_vehicle_calibration__msg__LongitudinalProgress__Sequence *)(untyped_member);
  return member->size;
}

const void * learning_based_vehicle_calibration__msg__LongitudinalProcesses__rosidl_typesupport_introspection_c__get_const_function__LongitudinalProcesses__processes(
  const void * untyped_member, size_t index)
{
  const learning_based_vehicle_calibration__msg__LongitudinalProgress__Sequence * member =
    (const learning_based_vehicle_calibration__msg__LongitudinalProgress__Sequence *)(untyped_member);
  return &member->data[index];
}

void * learning_based_vehicle_calibration__msg__LongitudinalProcesses__rosidl_typesupport_introspection_c__get_function__LongitudinalProcesses__processes(
  void * untyped_member, size_t index)
{
  learning_based_vehicle_calibration__msg__LongitudinalProgress__Sequence * member =
    (learning_based_vehicle_calibration__msg__LongitudinalProgress__Sequence *)(untyped_member);
  return &member->data[index];
}

void learning_based_vehicle_calibration__msg__LongitudinalProcesses__rosidl_typesupport_introspection_c__fetch_function__LongitudinalProcesses__processes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const learning_based_vehicle_calibration__msg__LongitudinalProgress * item =
    ((const learning_based_vehicle_calibration__msg__LongitudinalProgress *)
    learning_based_vehicle_calibration__msg__LongitudinalProcesses__rosidl_typesupport_introspection_c__get_const_function__LongitudinalProcesses__processes(untyped_member, index));
  learning_based_vehicle_calibration__msg__LongitudinalProgress * value =
    (learning_based_vehicle_calibration__msg__LongitudinalProgress *)(untyped_value);
  *value = *item;
}

void learning_based_vehicle_calibration__msg__LongitudinalProcesses__rosidl_typesupport_introspection_c__assign_function__LongitudinalProcesses__processes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  learning_based_vehicle_calibration__msg__LongitudinalProgress * item =
    ((learning_based_vehicle_calibration__msg__LongitudinalProgress *)
    learning_based_vehicle_calibration__msg__LongitudinalProcesses__rosidl_typesupport_introspection_c__get_function__LongitudinalProcesses__processes(untyped_member, index));
  const learning_based_vehicle_calibration__msg__LongitudinalProgress * value =
    (const learning_based_vehicle_calibration__msg__LongitudinalProgress *)(untyped_value);
  *item = *value;
}

bool learning_based_vehicle_calibration__msg__LongitudinalProcesses__rosidl_typesupport_introspection_c__resize_function__LongitudinalProcesses__processes(
  void * untyped_member, size_t size)
{
  learning_based_vehicle_calibration__msg__LongitudinalProgress__Sequence * member =
    (learning_based_vehicle_calibration__msg__LongitudinalProgress__Sequence *)(untyped_member);
  learning_based_vehicle_calibration__msg__LongitudinalProgress__Sequence__fini(member);
  return learning_based_vehicle_calibration__msg__LongitudinalProgress__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember learning_based_vehicle_calibration__msg__LongitudinalProcesses__rosidl_typesupport_introspection_c__LongitudinalProcesses_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(learning_based_vehicle_calibration__msg__LongitudinalProcesses, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "processes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(learning_based_vehicle_calibration__msg__LongitudinalProcesses, processes),  // bytes offset in struct
    NULL,  // default value
    learning_based_vehicle_calibration__msg__LongitudinalProcesses__rosidl_typesupport_introspection_c__size_function__LongitudinalProcesses__processes,  // size() function pointer
    learning_based_vehicle_calibration__msg__LongitudinalProcesses__rosidl_typesupport_introspection_c__get_const_function__LongitudinalProcesses__processes,  // get_const(index) function pointer
    learning_based_vehicle_calibration__msg__LongitudinalProcesses__rosidl_typesupport_introspection_c__get_function__LongitudinalProcesses__processes,  // get(index) function pointer
    learning_based_vehicle_calibration__msg__LongitudinalProcesses__rosidl_typesupport_introspection_c__fetch_function__LongitudinalProcesses__processes,  // fetch(index, &value) function pointer
    learning_based_vehicle_calibration__msg__LongitudinalProcesses__rosidl_typesupport_introspection_c__assign_function__LongitudinalProcesses__processes,  // assign(index, value) function pointer
    learning_based_vehicle_calibration__msg__LongitudinalProcesses__rosidl_typesupport_introspection_c__resize_function__LongitudinalProcesses__processes  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers learning_based_vehicle_calibration__msg__LongitudinalProcesses__rosidl_typesupport_introspection_c__LongitudinalProcesses_message_members = {
  "learning_based_vehicle_calibration__msg",  // message namespace
  "LongitudinalProcesses",  // message name
  2,  // number of fields
  sizeof(learning_based_vehicle_calibration__msg__LongitudinalProcesses),
  learning_based_vehicle_calibration__msg__LongitudinalProcesses__rosidl_typesupport_introspection_c__LongitudinalProcesses_message_member_array,  // message members
  learning_based_vehicle_calibration__msg__LongitudinalProcesses__rosidl_typesupport_introspection_c__LongitudinalProcesses_init_function,  // function to initialize message memory (memory has to be allocated)
  learning_based_vehicle_calibration__msg__LongitudinalProcesses__rosidl_typesupport_introspection_c__LongitudinalProcesses_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t learning_based_vehicle_calibration__msg__LongitudinalProcesses__rosidl_typesupport_introspection_c__LongitudinalProcesses_message_type_support_handle = {
  0,
  &learning_based_vehicle_calibration__msg__LongitudinalProcesses__rosidl_typesupport_introspection_c__LongitudinalProcesses_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_learning_based_vehicle_calibration
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, learning_based_vehicle_calibration, msg, LongitudinalProcesses)() {
  learning_based_vehicle_calibration__msg__LongitudinalProcesses__rosidl_typesupport_introspection_c__LongitudinalProcesses_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  learning_based_vehicle_calibration__msg__LongitudinalProcesses__rosidl_typesupport_introspection_c__LongitudinalProcesses_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, learning_based_vehicle_calibration, msg, LongitudinalProgress)();
  if (!learning_based_vehicle_calibration__msg__LongitudinalProcesses__rosidl_typesupport_introspection_c__LongitudinalProcesses_message_type_support_handle.typesupport_identifier) {
    learning_based_vehicle_calibration__msg__LongitudinalProcesses__rosidl_typesupport_introspection_c__LongitudinalProcesses_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &learning_based_vehicle_calibration__msg__LongitudinalProcesses__rosidl_typesupport_introspection_c__LongitudinalProcesses_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
