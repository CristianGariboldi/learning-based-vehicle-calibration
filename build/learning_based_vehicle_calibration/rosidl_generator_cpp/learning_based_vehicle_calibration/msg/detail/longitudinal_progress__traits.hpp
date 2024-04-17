// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from learning_based_vehicle_calibration:msg/LongitudinalProgress.idl
// generated code does not contain a copyright notice

#ifndef LEARNING_BASED_VEHICLE_CALIBRATION__MSG__DETAIL__LONGITUDINAL_PROGRESS__TRAITS_HPP_
#define LEARNING_BASED_VEHICLE_CALIBRATION__MSG__DETAIL__LONGITUDINAL_PROGRESS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "learning_based_vehicle_calibration/msg/detail/longitudinal_progress__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace learning_based_vehicle_calibration
{

namespace msg
{

inline void to_flow_style_yaml(
  const LongitudinalProgress & msg,
  std::ostream & out)
{
  out << "{";
  // member: pedal_value_start
  {
    out << "pedal_value_start: ";
    rosidl_generator_traits::value_to_yaml(msg.pedal_value_start, out);
    out << ", ";
  }

  // member: pedal_value_end
  {
    out << "pedal_value_end: ";
    rosidl_generator_traits::value_to_yaml(msg.pedal_value_end, out);
    out << ", ";
  }

  // member: velocity_start
  {
    out << "velocity_start: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_start, out);
    out << ", ";
  }

  // member: velocity_end
  {
    out << "velocity_end: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_end, out);
    out << ", ";
  }

  // member: data_count
  {
    out << "data_count: ";
    rosidl_generator_traits::value_to_yaml(msg.data_count, out);
    out << ", ";
  }

  // member: progress
  {
    out << "progress: ";
    rosidl_generator_traits::value_to_yaml(msg.progress, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LongitudinalProgress & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pedal_value_start
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pedal_value_start: ";
    rosidl_generator_traits::value_to_yaml(msg.pedal_value_start, out);
    out << "\n";
  }

  // member: pedal_value_end
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pedal_value_end: ";
    rosidl_generator_traits::value_to_yaml(msg.pedal_value_end, out);
    out << "\n";
  }

  // member: velocity_start
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity_start: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_start, out);
    out << "\n";
  }

  // member: velocity_end
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity_end: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_end, out);
    out << "\n";
  }

  // member: data_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data_count: ";
    rosidl_generator_traits::value_to_yaml(msg.data_count, out);
    out << "\n";
  }

  // member: progress
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "progress: ";
    rosidl_generator_traits::value_to_yaml(msg.progress, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LongitudinalProgress & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace learning_based_vehicle_calibration

namespace rosidl_generator_traits
{

[[deprecated("use learning_based_vehicle_calibration::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const learning_based_vehicle_calibration::msg::LongitudinalProgress & msg,
  std::ostream & out, size_t indentation = 0)
{
  learning_based_vehicle_calibration::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use learning_based_vehicle_calibration::msg::to_yaml() instead")]]
inline std::string to_yaml(const learning_based_vehicle_calibration::msg::LongitudinalProgress & msg)
{
  return learning_based_vehicle_calibration::msg::to_yaml(msg);
}

template<>
inline const char * data_type<learning_based_vehicle_calibration::msg::LongitudinalProgress>()
{
  return "learning_based_vehicle_calibration::msg::LongitudinalProgress";
}

template<>
inline const char * name<learning_based_vehicle_calibration::msg::LongitudinalProgress>()
{
  return "learning_based_vehicle_calibration/msg/LongitudinalProgress";
}

template<>
struct has_fixed_size<learning_based_vehicle_calibration::msg::LongitudinalProgress>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<learning_based_vehicle_calibration::msg::LongitudinalProgress>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<learning_based_vehicle_calibration::msg::LongitudinalProgress>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LEARNING_BASED_VEHICLE_CALIBRATION__MSG__DETAIL__LONGITUDINAL_PROGRESS__TRAITS_HPP_
