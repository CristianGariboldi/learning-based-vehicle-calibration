// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from learning_based_vehicle_calibration:msg/SteeringProcesses.idl
// generated code does not contain a copyright notice

#ifndef LEARNING_BASED_VEHICLE_CALIBRATION__MSG__DETAIL__STEERING_PROCESSES__TRAITS_HPP_
#define LEARNING_BASED_VEHICLE_CALIBRATION__MSG__DETAIL__STEERING_PROCESSES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "learning_based_vehicle_calibration/msg/detail/steering_processes__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'processes'
#include "learning_based_vehicle_calibration/msg/detail/steering_progress__traits.hpp"

namespace learning_based_vehicle_calibration
{

namespace msg
{

inline void to_flow_style_yaml(
  const SteeringProcesses & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: processes
  {
    if (msg.processes.size() == 0) {
      out << "processes: []";
    } else {
      out << "processes: [";
      size_t pending_items = msg.processes.size();
      for (auto item : msg.processes) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SteeringProcesses & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: processes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.processes.size() == 0) {
      out << "processes: []\n";
    } else {
      out << "processes:\n";
      for (auto item : msg.processes) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SteeringProcesses & msg, bool use_flow_style = false)
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
  const learning_based_vehicle_calibration::msg::SteeringProcesses & msg,
  std::ostream & out, size_t indentation = 0)
{
  learning_based_vehicle_calibration::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use learning_based_vehicle_calibration::msg::to_yaml() instead")]]
inline std::string to_yaml(const learning_based_vehicle_calibration::msg::SteeringProcesses & msg)
{
  return learning_based_vehicle_calibration::msg::to_yaml(msg);
}

template<>
inline const char * data_type<learning_based_vehicle_calibration::msg::SteeringProcesses>()
{
  return "learning_based_vehicle_calibration::msg::SteeringProcesses";
}

template<>
inline const char * name<learning_based_vehicle_calibration::msg::SteeringProcesses>()
{
  return "learning_based_vehicle_calibration/msg/SteeringProcesses";
}

template<>
struct has_fixed_size<learning_based_vehicle_calibration::msg::SteeringProcesses>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<learning_based_vehicle_calibration::msg::SteeringProcesses>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<learning_based_vehicle_calibration::msg::SteeringProcesses>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LEARNING_BASED_VEHICLE_CALIBRATION__MSG__DETAIL__STEERING_PROCESSES__TRAITS_HPP_
