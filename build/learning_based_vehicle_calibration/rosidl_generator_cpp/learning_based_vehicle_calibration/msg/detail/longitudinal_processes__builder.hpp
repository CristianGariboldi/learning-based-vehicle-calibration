// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from learning_based_vehicle_calibration:msg/LongitudinalProcesses.idl
// generated code does not contain a copyright notice

#ifndef LEARNING_BASED_VEHICLE_CALIBRATION__MSG__DETAIL__LONGITUDINAL_PROCESSES__BUILDER_HPP_
#define LEARNING_BASED_VEHICLE_CALIBRATION__MSG__DETAIL__LONGITUDINAL_PROCESSES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "learning_based_vehicle_calibration/msg/detail/longitudinal_processes__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace learning_based_vehicle_calibration
{

namespace msg
{

namespace builder
{

class Init_LongitudinalProcesses_processes
{
public:
  explicit Init_LongitudinalProcesses_processes(::learning_based_vehicle_calibration::msg::LongitudinalProcesses & msg)
  : msg_(msg)
  {}
  ::learning_based_vehicle_calibration::msg::LongitudinalProcesses processes(::learning_based_vehicle_calibration::msg::LongitudinalProcesses::_processes_type arg)
  {
    msg_.processes = std::move(arg);
    return std::move(msg_);
  }

private:
  ::learning_based_vehicle_calibration::msg::LongitudinalProcesses msg_;
};

class Init_LongitudinalProcesses_header
{
public:
  Init_LongitudinalProcesses_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LongitudinalProcesses_processes header(::learning_based_vehicle_calibration::msg::LongitudinalProcesses::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_LongitudinalProcesses_processes(msg_);
  }

private:
  ::learning_based_vehicle_calibration::msg::LongitudinalProcesses msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::learning_based_vehicle_calibration::msg::LongitudinalProcesses>()
{
  return learning_based_vehicle_calibration::msg::builder::Init_LongitudinalProcesses_header();
}

}  // namespace learning_based_vehicle_calibration

#endif  // LEARNING_BASED_VEHICLE_CALIBRATION__MSG__DETAIL__LONGITUDINAL_PROCESSES__BUILDER_HPP_
