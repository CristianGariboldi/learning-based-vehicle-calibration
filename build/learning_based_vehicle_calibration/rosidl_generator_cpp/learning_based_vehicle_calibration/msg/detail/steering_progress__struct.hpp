// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from learning_based_vehicle_calibration:msg/SteeringProgress.idl
// generated code does not contain a copyright notice

#ifndef LEARNING_BASED_VEHICLE_CALIBRATION__MSG__DETAIL__STEERING_PROGRESS__STRUCT_HPP_
#define LEARNING_BASED_VEHICLE_CALIBRATION__MSG__DETAIL__STEERING_PROGRESS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__learning_based_vehicle_calibration__msg__SteeringProgress __attribute__((deprecated))
#else
# define DEPRECATED__learning_based_vehicle_calibration__msg__SteeringProgress __declspec(deprecated)
#endif

namespace learning_based_vehicle_calibration
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SteeringProgress_
{
  using Type = SteeringProgress_<ContainerAllocator>;

  explicit SteeringProgress_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pedal_value_start = 0ll;
      this->pedal_value_end = 0ll;
      this->steering_value_start = 0.0;
      this->steering_value_end = 0.0;
      this->velocity_max = 0.0;
      this->data_count = 0ll;
      this->progress = 0ll;
    }
  }

  explicit SteeringProgress_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pedal_value_start = 0ll;
      this->pedal_value_end = 0ll;
      this->steering_value_start = 0.0;
      this->steering_value_end = 0.0;
      this->velocity_max = 0.0;
      this->data_count = 0ll;
      this->progress = 0ll;
    }
  }

  // field types and members
  using _pedal_value_start_type =
    int64_t;
  _pedal_value_start_type pedal_value_start;
  using _pedal_value_end_type =
    int64_t;
  _pedal_value_end_type pedal_value_end;
  using _steering_value_start_type =
    double;
  _steering_value_start_type steering_value_start;
  using _steering_value_end_type =
    double;
  _steering_value_end_type steering_value_end;
  using _velocity_max_type =
    double;
  _velocity_max_type velocity_max;
  using _data_count_type =
    int64_t;
  _data_count_type data_count;
  using _progress_type =
    int64_t;
  _progress_type progress;

  // setters for named parameter idiom
  Type & set__pedal_value_start(
    const int64_t & _arg)
  {
    this->pedal_value_start = _arg;
    return *this;
  }
  Type & set__pedal_value_end(
    const int64_t & _arg)
  {
    this->pedal_value_end = _arg;
    return *this;
  }
  Type & set__steering_value_start(
    const double & _arg)
  {
    this->steering_value_start = _arg;
    return *this;
  }
  Type & set__steering_value_end(
    const double & _arg)
  {
    this->steering_value_end = _arg;
    return *this;
  }
  Type & set__velocity_max(
    const double & _arg)
  {
    this->velocity_max = _arg;
    return *this;
  }
  Type & set__data_count(
    const int64_t & _arg)
  {
    this->data_count = _arg;
    return *this;
  }
  Type & set__progress(
    const int64_t & _arg)
  {
    this->progress = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    learning_based_vehicle_calibration::msg::SteeringProgress_<ContainerAllocator> *;
  using ConstRawPtr =
    const learning_based_vehicle_calibration::msg::SteeringProgress_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<learning_based_vehicle_calibration::msg::SteeringProgress_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<learning_based_vehicle_calibration::msg::SteeringProgress_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      learning_based_vehicle_calibration::msg::SteeringProgress_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<learning_based_vehicle_calibration::msg::SteeringProgress_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      learning_based_vehicle_calibration::msg::SteeringProgress_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<learning_based_vehicle_calibration::msg::SteeringProgress_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<learning_based_vehicle_calibration::msg::SteeringProgress_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<learning_based_vehicle_calibration::msg::SteeringProgress_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__learning_based_vehicle_calibration__msg__SteeringProgress
    std::shared_ptr<learning_based_vehicle_calibration::msg::SteeringProgress_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__learning_based_vehicle_calibration__msg__SteeringProgress
    std::shared_ptr<learning_based_vehicle_calibration::msg::SteeringProgress_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SteeringProgress_ & other) const
  {
    if (this->pedal_value_start != other.pedal_value_start) {
      return false;
    }
    if (this->pedal_value_end != other.pedal_value_end) {
      return false;
    }
    if (this->steering_value_start != other.steering_value_start) {
      return false;
    }
    if (this->steering_value_end != other.steering_value_end) {
      return false;
    }
    if (this->velocity_max != other.velocity_max) {
      return false;
    }
    if (this->data_count != other.data_count) {
      return false;
    }
    if (this->progress != other.progress) {
      return false;
    }
    return true;
  }
  bool operator!=(const SteeringProgress_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SteeringProgress_

// alias to use template instance with default allocator
using SteeringProgress =
  learning_based_vehicle_calibration::msg::SteeringProgress_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace learning_based_vehicle_calibration

#endif  // LEARNING_BASED_VEHICLE_CALIBRATION__MSG__DETAIL__STEERING_PROGRESS__STRUCT_HPP_
