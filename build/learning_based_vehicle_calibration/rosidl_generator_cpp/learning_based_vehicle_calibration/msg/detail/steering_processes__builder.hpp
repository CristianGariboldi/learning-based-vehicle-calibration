// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from learning_based_vehicle_calibration:msg/SteeringProcesses.idl
// generated code does not contain a copyright notice

#ifndef LEARNING_BASED_VEHICLE_CALIBRATION__MSG__DETAIL__STEERING_PROCESSES__BUILDER_HPP_
#define LEARNING_BASED_VEHICLE_CALIBRATION__MSG__DETAIL__STEERING_PROCESSES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "learning_based_vehicle_calibration/msg/detail/steering_processes__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace learning_based_vehicle_calibration
{

namespace msg
{

namespace builder
{

class Init_SteeringProcesses_processes
{
public:
  explicit Init_SteeringProcesses_processes(::learning_based_vehicle_calibration::msg::SteeringProcesses & msg)
  : msg_(msg)
  {}
  ::learning_based_vehicle_calibration::msg::SteeringProcesses processes(::learning_based_vehicle_calibration::msg::SteeringProcesses::_processes_type arg)
  {
    msg_.processes = std::move(arg);
    return std::move(msg_);
  }

private:
  ::learning_based_vehicle_calibration::msg::SteeringProcesses msg_;
};

class Init_SteeringProcesses_header
{
public:
  Init_SteeringProcesses_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SteeringProcesses_processes header(::learning_based_vehicle_calibration::msg::SteeringProcesses::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SteeringProcesses_processes(msg_);
  }

private:
  ::learning_based_vehicle_calibration::msg::SteeringProcesses msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::learning_based_vehicle_calibration::msg::SteeringProcesses>()
{
  return learning_based_vehicle_calibration::msg::builder::Init_SteeringProcesses_header();
}

}  // namespace learning_based_vehicle_calibration

#endif  // LEARNING_BASED_VEHICLE_CALIBRATION__MSG__DETAIL__STEERING_PROCESSES__BUILDER_HPP_
