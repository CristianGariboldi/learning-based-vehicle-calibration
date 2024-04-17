// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from learning_based_vehicle_calibration:msg/LongitudinalProgress.idl
// generated code does not contain a copyright notice

#ifndef LEARNING_BASED_VEHICLE_CALIBRATION__MSG__DETAIL__LONGITUDINAL_PROGRESS__BUILDER_HPP_
#define LEARNING_BASED_VEHICLE_CALIBRATION__MSG__DETAIL__LONGITUDINAL_PROGRESS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "learning_based_vehicle_calibration/msg/detail/longitudinal_progress__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace learning_based_vehicle_calibration
{

namespace msg
{

namespace builder
{

class Init_LongitudinalProgress_progress
{
public:
  explicit Init_LongitudinalProgress_progress(::learning_based_vehicle_calibration::msg::LongitudinalProgress & msg)
  : msg_(msg)
  {}
  ::learning_based_vehicle_calibration::msg::LongitudinalProgress progress(::learning_based_vehicle_calibration::msg::LongitudinalProgress::_progress_type arg)
  {
    msg_.progress = std::move(arg);
    return std::move(msg_);
  }

private:
  ::learning_based_vehicle_calibration::msg::LongitudinalProgress msg_;
};

class Init_LongitudinalProgress_data_count
{
public:
  explicit Init_LongitudinalProgress_data_count(::learning_based_vehicle_calibration::msg::LongitudinalProgress & msg)
  : msg_(msg)
  {}
  Init_LongitudinalProgress_progress data_count(::learning_based_vehicle_calibration::msg::LongitudinalProgress::_data_count_type arg)
  {
    msg_.data_count = std::move(arg);
    return Init_LongitudinalProgress_progress(msg_);
  }

private:
  ::learning_based_vehicle_calibration::msg::LongitudinalProgress msg_;
};

class Init_LongitudinalProgress_velocity_end
{
public:
  explicit Init_LongitudinalProgress_velocity_end(::learning_based_vehicle_calibration::msg::LongitudinalProgress & msg)
  : msg_(msg)
  {}
  Init_LongitudinalProgress_data_count velocity_end(::learning_based_vehicle_calibration::msg::LongitudinalProgress::_velocity_end_type arg)
  {
    msg_.velocity_end = std::move(arg);
    return Init_LongitudinalProgress_data_count(msg_);
  }

private:
  ::learning_based_vehicle_calibration::msg::LongitudinalProgress msg_;
};

class Init_LongitudinalProgress_velocity_start
{
public:
  explicit Init_LongitudinalProgress_velocity_start(::learning_based_vehicle_calibration::msg::LongitudinalProgress & msg)
  : msg_(msg)
  {}
  Init_LongitudinalProgress_velocity_end velocity_start(::learning_based_vehicle_calibration::msg::LongitudinalProgress::_velocity_start_type arg)
  {
    msg_.velocity_start = std::move(arg);
    return Init_LongitudinalProgress_velocity_end(msg_);
  }

private:
  ::learning_based_vehicle_calibration::msg::LongitudinalProgress msg_;
};

class Init_LongitudinalProgress_pedal_value_end
{
public:
  explicit Init_LongitudinalProgress_pedal_value_end(::learning_based_vehicle_calibration::msg::LongitudinalProgress & msg)
  : msg_(msg)
  {}
  Init_LongitudinalProgress_velocity_start pedal_value_end(::learning_based_vehicle_calibration::msg::LongitudinalProgress::_pedal_value_end_type arg)
  {
    msg_.pedal_value_end = std::move(arg);
    return Init_LongitudinalProgress_velocity_start(msg_);
  }

private:
  ::learning_based_vehicle_calibration::msg::LongitudinalProgress msg_;
};

class Init_LongitudinalProgress_pedal_value_start
{
public:
  Init_LongitudinalProgress_pedal_value_start()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LongitudinalProgress_pedal_value_end pedal_value_start(::learning_based_vehicle_calibration::msg::LongitudinalProgress::_pedal_value_start_type arg)
  {
    msg_.pedal_value_start = std::move(arg);
    return Init_LongitudinalProgress_pedal_value_end(msg_);
  }

private:
  ::learning_based_vehicle_calibration::msg::LongitudinalProgress msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::learning_based_vehicle_calibration::msg::LongitudinalProgress>()
{
  return learning_based_vehicle_calibration::msg::builder::Init_LongitudinalProgress_pedal_value_start();
}

}  // namespace learning_based_vehicle_calibration

#endif  // LEARNING_BASED_VEHICLE_CALIBRATION__MSG__DETAIL__LONGITUDINAL_PROGRESS__BUILDER_HPP_
