// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from learning_based_vehicle_calibration:msg/LongitudinalProgress.idl
// generated code does not contain a copyright notice
#include "learning_based_vehicle_calibration/msg/detail/longitudinal_progress__rosidl_typesupport_fastrtps_cpp.hpp"
#include "learning_based_vehicle_calibration/msg/detail/longitudinal_progress__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace learning_based_vehicle_calibration
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_learning_based_vehicle_calibration
cdr_serialize(
  const learning_based_vehicle_calibration::msg::LongitudinalProgress & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: pedal_value_start
  cdr << ros_message.pedal_value_start;
  // Member: pedal_value_end
  cdr << ros_message.pedal_value_end;
  // Member: velocity_start
  cdr << ros_message.velocity_start;
  // Member: velocity_end
  cdr << ros_message.velocity_end;
  // Member: data_count
  cdr << ros_message.data_count;
  // Member: progress
  cdr << ros_message.progress;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_learning_based_vehicle_calibration
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  learning_based_vehicle_calibration::msg::LongitudinalProgress & ros_message)
{
  // Member: pedal_value_start
  cdr >> ros_message.pedal_value_start;

  // Member: pedal_value_end
  cdr >> ros_message.pedal_value_end;

  // Member: velocity_start
  cdr >> ros_message.velocity_start;

  // Member: velocity_end
  cdr >> ros_message.velocity_end;

  // Member: data_count
  cdr >> ros_message.data_count;

  // Member: progress
  cdr >> ros_message.progress;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_learning_based_vehicle_calibration
get_serialized_size(
  const learning_based_vehicle_calibration::msg::LongitudinalProgress & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: pedal_value_start
  {
    size_t item_size = sizeof(ros_message.pedal_value_start);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pedal_value_end
  {
    size_t item_size = sizeof(ros_message.pedal_value_end);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: velocity_start
  {
    size_t item_size = sizeof(ros_message.velocity_start);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: velocity_end
  {
    size_t item_size = sizeof(ros_message.velocity_end);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: data_count
  {
    size_t item_size = sizeof(ros_message.data_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: progress
  {
    size_t item_size = sizeof(ros_message.progress);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_learning_based_vehicle_calibration
max_serialized_size_LongitudinalProgress(
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


  // Member: pedal_value_start
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: pedal_value_end
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: velocity_start
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: velocity_end
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: data_count
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: progress
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
    using DataType = learning_based_vehicle_calibration::msg::LongitudinalProgress;
    is_plain =
      (
      offsetof(DataType, progress) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _LongitudinalProgress__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const learning_based_vehicle_calibration::msg::LongitudinalProgress *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _LongitudinalProgress__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<learning_based_vehicle_calibration::msg::LongitudinalProgress *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _LongitudinalProgress__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const learning_based_vehicle_calibration::msg::LongitudinalProgress *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _LongitudinalProgress__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_LongitudinalProgress(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _LongitudinalProgress__callbacks = {
  "learning_based_vehicle_calibration::msg",
  "LongitudinalProgress",
  _LongitudinalProgress__cdr_serialize,
  _LongitudinalProgress__cdr_deserialize,
  _LongitudinalProgress__get_serialized_size,
  _LongitudinalProgress__max_serialized_size
};

static rosidl_message_type_support_t _LongitudinalProgress__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_LongitudinalProgress__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace learning_based_vehicle_calibration

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_learning_based_vehicle_calibration
const rosidl_message_type_support_t *
get_message_type_support_handle<learning_based_vehicle_calibration::msg::LongitudinalProgress>()
{
  return &learning_based_vehicle_calibration::msg::typesupport_fastrtps_cpp::_LongitudinalProgress__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, learning_based_vehicle_calibration, msg, LongitudinalProgress)() {
  return &learning_based_vehicle_calibration::msg::typesupport_fastrtps_cpp::_LongitudinalProgress__handle;
}

#ifdef __cplusplus
}
#endif
