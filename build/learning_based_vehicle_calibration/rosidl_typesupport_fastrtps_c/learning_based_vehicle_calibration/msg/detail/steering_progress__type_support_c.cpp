// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from learning_based_vehicle_calibration:msg/SteeringProgress.idl
// generated code does not contain a copyright notice
#include "learning_based_vehicle_calibration/msg/detail/steering_progress__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "learning_based_vehicle_calibration/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "learning_based_vehicle_calibration/msg/detail/steering_progress__struct.h"
#include "learning_based_vehicle_calibration/msg/detail/steering_progress__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _SteeringProgress__ros_msg_type = learning_based_vehicle_calibration__msg__SteeringProgress;

static bool _SteeringProgress__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SteeringProgress__ros_msg_type * ros_message = static_cast<const _SteeringProgress__ros_msg_type *>(untyped_ros_message);
  // Field name: pedal_value_start
  {
    cdr << ros_message->pedal_value_start;
  }

  // Field name: pedal_value_end
  {
    cdr << ros_message->pedal_value_end;
  }

  // Field name: steering_value_start
  {
    cdr << ros_message->steering_value_start;
  }

  // Field name: steering_value_end
  {
    cdr << ros_message->steering_value_end;
  }

  // Field name: velocity_max
  {
    cdr << ros_message->velocity_max;
  }

  // Field name: data_count
  {
    cdr << ros_message->data_count;
  }

  // Field name: progress
  {
    cdr << ros_message->progress;
  }

  return true;
}

static bool _SteeringProgress__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SteeringProgress__ros_msg_type * ros_message = static_cast<_SteeringProgress__ros_msg_type *>(untyped_ros_message);
  // Field name: pedal_value_start
  {
    cdr >> ros_message->pedal_value_start;
  }

  // Field name: pedal_value_end
  {
    cdr >> ros_message->pedal_value_end;
  }

  // Field name: steering_value_start
  {
    cdr >> ros_message->steering_value_start;
  }

  // Field name: steering_value_end
  {
    cdr >> ros_message->steering_value_end;
  }

  // Field name: velocity_max
  {
    cdr >> ros_message->velocity_max;
  }

  // Field name: data_count
  {
    cdr >> ros_message->data_count;
  }

  // Field name: progress
  {
    cdr >> ros_message->progress;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_learning_based_vehicle_calibration
size_t get_serialized_size_learning_based_vehicle_calibration__msg__SteeringProgress(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SteeringProgress__ros_msg_type * ros_message = static_cast<const _SteeringProgress__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name pedal_value_start
  {
    size_t item_size = sizeof(ros_message->pedal_value_start);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pedal_value_end
  {
    size_t item_size = sizeof(ros_message->pedal_value_end);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name steering_value_start
  {
    size_t item_size = sizeof(ros_message->steering_value_start);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name steering_value_end
  {
    size_t item_size = sizeof(ros_message->steering_value_end);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name velocity_max
  {
    size_t item_size = sizeof(ros_message->velocity_max);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name data_count
  {
    size_t item_size = sizeof(ros_message->data_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name progress
  {
    size_t item_size = sizeof(ros_message->progress);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SteeringProgress__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_learning_based_vehicle_calibration__msg__SteeringProgress(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_learning_based_vehicle_calibration
size_t max_serialized_size_learning_based_vehicle_calibration__msg__SteeringProgress(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: pedal_value_start
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: pedal_value_end
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: steering_value_start
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: steering_value_end
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: velocity_max
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: data_count
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: progress
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = learning_based_vehicle_calibration__msg__SteeringProgress;
    is_plain =
      (
      offsetof(DataType, progress) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SteeringProgress__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_learning_based_vehicle_calibration__msg__SteeringProgress(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SteeringProgress = {
  "learning_based_vehicle_calibration::msg",
  "SteeringProgress",
  _SteeringProgress__cdr_serialize,
  _SteeringProgress__cdr_deserialize,
  _SteeringProgress__get_serialized_size,
  _SteeringProgress__max_serialized_size
};

static rosidl_message_type_support_t _SteeringProgress__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SteeringProgress,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, learning_based_vehicle_calibration, msg, SteeringProgress)() {
  return &_SteeringProgress__type_support;
}

#if defined(__cplusplus)
}
#endif
