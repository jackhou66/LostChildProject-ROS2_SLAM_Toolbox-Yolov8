// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from msg_interface:msg/Arithmetic.idl
// generated code does not contain a copyright notice

#ifndef MSG_INTERFACE__MSG__DETAIL__ARITHMETIC__STRUCT_HPP_
#define MSG_INTERFACE__MSG__DETAIL__ARITHMETIC__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__msg_interface__msg__Arithmetic __attribute__((deprecated))
#else
# define DEPRECATED__msg_interface__msg__Arithmetic __declspec(deprecated)
#endif

namespace msg_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Arithmetic_
{
  using Type = Arithmetic_<ContainerAllocator>;

  explicit Arithmetic_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->argument = 0l;
    }
  }

  explicit Arithmetic_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->argument = 0l;
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _argument_type =
    int32_t;
  _argument_type argument;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__argument(
    const int32_t & _arg)
  {
    this->argument = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    msg_interface::msg::Arithmetic_<ContainerAllocator> *;
  using ConstRawPtr =
    const msg_interface::msg::Arithmetic_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<msg_interface::msg::Arithmetic_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<msg_interface::msg::Arithmetic_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      msg_interface::msg::Arithmetic_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<msg_interface::msg::Arithmetic_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      msg_interface::msg::Arithmetic_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<msg_interface::msg::Arithmetic_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<msg_interface::msg::Arithmetic_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<msg_interface::msg::Arithmetic_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__msg_interface__msg__Arithmetic
    std::shared_ptr<msg_interface::msg::Arithmetic_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__msg_interface__msg__Arithmetic
    std::shared_ptr<msg_interface::msg::Arithmetic_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Arithmetic_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->argument != other.argument) {
      return false;
    }
    return true;
  }
  bool operator!=(const Arithmetic_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Arithmetic_

// alias to use template instance with default allocator
using Arithmetic =
  msg_interface::msg::Arithmetic_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace msg_interface

#endif  // MSG_INTERFACE__MSG__DETAIL__ARITHMETIC__STRUCT_HPP_
