// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from learning_based_vehicle_calibration:msg/LongitudinalProcesses.idl
// generated code does not contain a copyright notice

#ifndef LEARNING_BASED_VEHICLE_CALIBRATION__MSG__DETAIL__LONGITUDINAL_PROCESSES__STRUCT_HPP_
#define LEARNING_BASED_VEHICLE_CALIBRATION__MSG__DETAIL__LONGITUDINAL_PROCESSES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'processes'
#include "learning_based_vehicle_calibration/msg/detail/longitudinal_progress__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__learning_based_vehicle_calibration__msg__LongitudinalProcesses __attribute__((deprecated))
#else
# define DEPRECATED__learning_based_vehicle_calibration__msg__LongitudinalProcesses __declspec(deprecated)
#endif

namespace learning_based_vehicle_calibration
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LongitudinalProcesses_
{
  using Type = LongitudinalProcesses_<ContainerAllocator>;

  explicit LongitudinalProcesses_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit LongitudinalProcesses_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _processes_type =
    std::vector<learning_based_vehicle_calibration::msg::LongitudinalProgress_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<learning_based_vehicle_calibration::msg::LongitudinalProgress_<ContainerAllocator>>>;
  _processes_type processes;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__processes(
    const std::vector<learning_based_vehicle_calibration::msg::LongitudinalProgress_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<learning_based_vehicle_calibration::msg::LongitudinalProgress_<ContainerAllocator>>> & _arg)
  {
    this->processes = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    learning_based_vehicle_calibration::msg::LongitudinalProcesses_<ContainerAllocator> *;
  using ConstRawPtr =
    const learning_based_vehicle_calibration::msg::LongitudinalProcesses_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<learning_based_vehicle_calibration::msg::LongitudinalProcesses_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<learning_based_vehicle_calibration::msg::LongitudinalProcesses_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      learning_based_vehicle_calibration::msg::LongitudinalProcesses_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<learning_based_vehicle_calibration::msg::LongitudinalProcesses_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      learning_based_vehicle_calibration::msg::LongitudinalProcesses_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<learning_based_vehicle_calibration::msg::LongitudinalProcesses_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<learning_based_vehicle_calibration::msg::LongitudinalProcesses_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<learning_based_vehicle_calibration::msg::LongitudinalProcesses_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__learning_based_vehicle_calibration__msg__LongitudinalProcesses
    std::shared_ptr<learning_based_vehicle_calibration::msg::LongitudinalProcesses_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__learning_based_vehicle_calibration__msg__LongitudinalProcesses
    std::shared_ptr<learning_based_vehicle_calibration::msg::LongitudinalProcesses_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LongitudinalProcesses_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->processes != other.processes) {
      return false;
    }
    return true;
  }
  bool operator!=(const LongitudinalProcesses_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LongitudinalProcesses_

// alias to use template instance with default allocator
using LongitudinalProcesses =
  learning_based_vehicle_calibration::msg::LongitudinalProcesses_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace learning_based_vehicle_calibration

#endif  // LEARNING_BASED_VEHICLE_CALIBRATION__MSG__DETAIL__LONGITUDINAL_PROCESSES__STRUCT_HPP_
