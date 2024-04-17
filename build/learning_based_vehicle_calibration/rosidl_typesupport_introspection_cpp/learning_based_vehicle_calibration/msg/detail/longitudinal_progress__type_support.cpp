// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from learning_based_vehicle_calibration:msg/LongitudinalProgress.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "learning_based_vehicle_calibration/msg/detail/longitudinal_progress__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace learning_based_vehicle_calibration
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void LongitudinalProgress_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) learning_based_vehicle_calibration::msg::LongitudinalProgress(_init);
}

void LongitudinalProgress_fini_function(void * message_memory)
{
  auto typed_message = static_cast<learning_based_vehicle_calibration::msg::LongitudinalProgress *>(message_memory);
  typed_message->~LongitudinalProgress();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember LongitudinalProgress_message_member_array[6] = {
  {
    "pedal_value_start",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(learning_based_vehicle_calibration::msg::LongitudinalProgress, pedal_value_start),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "pedal_value_end",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(learning_based_vehicle_calibration::msg::LongitudinalProgress, pedal_value_end),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "velocity_start",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(learning_based_vehicle_calibration::msg::LongitudinalProgress, velocity_start),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "velocity_end",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(learning_based_vehicle_calibration::msg::LongitudinalProgress, velocity_end),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "data_count",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(learning_based_vehicle_calibration::msg::LongitudinalProgress, data_count),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "progress",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(learning_based_vehicle_calibration::msg::LongitudinalProgress, progress),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers LongitudinalProgress_message_members = {
  "learning_based_vehicle_calibration::msg",  // message namespace
  "LongitudinalProgress",  // message name
  6,  // number of fields
  sizeof(learning_based_vehicle_calibration::msg::LongitudinalProgress),
  LongitudinalProgress_message_member_array,  // message members
  LongitudinalProgress_init_function,  // function to initialize message memory (memory has to be allocated)
  LongitudinalProgress_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t LongitudinalProgress_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &LongitudinalProgress_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace learning_based_vehicle_calibration


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<learning_based_vehicle_calibration::msg::LongitudinalProgress>()
{
  return &::learning_based_vehicle_calibration::msg::rosidl_typesupport_introspection_cpp::LongitudinalProgress_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, learning_based_vehicle_calibration, msg, LongitudinalProgress)() {
  return &::learning_based_vehicle_calibration::msg::rosidl_typesupport_introspection_cpp::LongitudinalProgress_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
