// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from learning_based_vehicle_calibration:msg/SteeringProgress.idl
// generated code does not contain a copyright notice

#ifndef LEARNING_BASED_VEHICLE_CALIBRATION__MSG__DETAIL__STEERING_PROGRESS__BUILDER_HPP_
#define LEARNING_BASED_VEHICLE_CALIBRATION__MSG__DETAIL__STEERING_PROGRESS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "learning_based_vehicle_calibration/msg/detail/steering_progress__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace learning_based_vehicle_calibration
{

namespace msg
{

namespace builder
{

class Init_SteeringProgress_progress
{
public:
  explicit Init_SteeringProgress_progress(::learning_based_vehicle_calibration::msg::SteeringProgress & msg)
  : msg_(msg)
  {}
  ::learning_based_vehicle_calibration::msg::SteeringProgress progress(::learning_based_vehicle_calibration::msg::SteeringProgress::_progress_type arg)
  {
    msg_.progress = std::move(arg);
    return std::move(msg_);
  }

private:
  ::learning_based_vehicle_calibration::msg::SteeringProgress msg_;
};

class Init_SteeringProgress_data_count
{
public:
  explicit Init_SteeringProgress_data_count(::learning_based_vehicle_calibration::msg::SteeringProgress & msg)
  : msg_(msg)
  {}
  Init_SteeringProgress_progress data_count(::learning_based_vehicle_calibration::msg::SteeringProgress::_data_count_type arg)
  {
    msg_.data_count = std::move(arg);
    return Init_SteeringProgress_progress(msg_);
  }

private:
  ::learning_based_vehicle_calibration::msg::SteeringProgress msg_;
};

class Init_SteeringProgress_velocity_max
{
public:
  explicit Init_SteeringProgress_velocity_max(::learning_based_vehicle_calibration::msg::SteeringProgress & msg)
  : msg_(msg)
  {}
  Init_SteeringProgress_data_count velocity_max(::learning_based_vehicle_calibration::msg::SteeringProgress::_velocity_max_type arg)
  {
    msg_.velocity_max = std::move(arg);
    return Init_SteeringProgress_data_count(msg_);
  }

private:
  ::learning_based_vehicle_calibration::msg::SteeringProgress msg_;
};

class Init_SteeringProgress_steering_value_end
{
public:
  explicit Init_SteeringProgress_steering_value_end(::learning_based_vehicle_calibration::msg::SteeringProgress & msg)
  : msg_(msg)
  {}
  Init_SteeringProgress_velocity_max steering_value_end(::learning_based_vehicle_calibration::msg::SteeringProgress::_steering_value_end_type arg)
  {
    msg_.steering_value_end = std::move(arg);
    return Init_SteeringProgress_velocity_max(msg_);
  }

private:
  ::learning_based_vehicle_calibration::msg::SteeringProgress msg_;
};

class Init_SteeringProgress_steering_value_start
{
public:
  explicit Init_SteeringProgress_steering_value_start(::learning_based_vehicle_calibration::msg::SteeringProgress & msg)
  : msg_(msg)
  {}
  Init_SteeringProgress_steering_value_end steering_value_start(::learning_based_vehicle_calibration::msg::SteeringProgress::_steering_value_start_type arg)
  {
    msg_.steering_value_start = std::move(arg);
    return Init_SteeringProgress_steering_value_end(msg_);
  }

private:
  ::learning_based_vehicle_calibration::msg::SteeringProgress msg_;
};

class Init_SteeringProgress_pedal_value_end
{
public:
  explicit Init_SteeringProgress_pedal_value_end(::learning_based_vehicle_calibration::msg::SteeringProgress & msg)
  : msg_(msg)
  {}
  Init_SteeringProgress_steering_value_start pedal_value_end(::learning_based_vehicle_calibration::msg::SteeringProgress::_pedal_value_end_type arg)
  {
    msg_.pedal_value_end = std::move(arg);
    return Init_SteeringProgress_steering_value_start(msg_);
  }

private:
  ::learning_based_vehicle_calibration::msg::SteeringProgress msg_;
};

class Init_SteeringProgress_pedal_value_start
{
public:
  Init_SteeringProgress_pedal_value_start()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SteeringProgress_pedal_value_end pedal_value_start(::learning_based_vehicle_calibration::msg::SteeringProgress::_pedal_value_start_type arg)
  {
    msg_.pedal_value_start = std::move(arg);
    return Init_SteeringProgress_pedal_value_end(msg_);
  }

private:
  ::learning_based_vehicle_calibration::msg::SteeringProgress msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::learning_based_vehicle_calibration::msg::SteeringProgress>()
{
  return learning_based_vehicle_calibration::msg::builder::Init_SteeringProgress_pedal_value_start();
}

}  // namespace learning_based_vehicle_calibration

#endif  // LEARNING_BASED_VEHICLE_CALIBRATION__MSG__DETAIL__STEERING_PROGRESS__BUILDER_HPP_
