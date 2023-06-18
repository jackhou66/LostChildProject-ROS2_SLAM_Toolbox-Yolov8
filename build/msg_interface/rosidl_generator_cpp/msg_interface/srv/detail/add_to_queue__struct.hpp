// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from msg_interface:srv/AddToQueue.idl
// generated code does not contain a copyright notice

#ifndef MSG_INTERFACE__SRV__DETAIL__ADD_TO_QUEUE__STRUCT_HPP_
#define MSG_INTERFACE__SRV__DETAIL__ADD_TO_QUEUE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__msg_interface__srv__AddToQueue_Request __attribute__((deprecated))
#else
# define DEPRECATED__msg_interface__srv__AddToQueue_Request __declspec(deprecated)
#endif

namespace msg_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AddToQueue_Request_
{
  using Type = AddToQueue_Request_<ContainerAllocator>;

  explicit AddToQueue_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->input_string = "";
    }
  }

  explicit AddToQueue_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : input_string(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->input_string = "";
    }
  }

  // field types and members
  using _input_string_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _input_string_type input_string;

  // setters for named parameter idiom
  Type & set__input_string(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->input_string = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    msg_interface::srv::AddToQueue_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const msg_interface::srv::AddToQueue_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<msg_interface::srv::AddToQueue_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<msg_interface::srv::AddToQueue_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      msg_interface::srv::AddToQueue_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<msg_interface::srv::AddToQueue_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      msg_interface::srv::AddToQueue_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<msg_interface::srv::AddToQueue_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<msg_interface::srv::AddToQueue_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<msg_interface::srv::AddToQueue_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__msg_interface__srv__AddToQueue_Request
    std::shared_ptr<msg_interface::srv::AddToQueue_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__msg_interface__srv__AddToQueue_Request
    std::shared_ptr<msg_interface::srv::AddToQueue_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AddToQueue_Request_ & other) const
  {
    if (this->input_string != other.input_string) {
      return false;
    }
    return true;
  }
  bool operator!=(const AddToQueue_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AddToQueue_Request_

// alias to use template instance with default allocator
using AddToQueue_Request =
  msg_interface::srv::AddToQueue_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace msg_interface


#ifndef _WIN32
# define DEPRECATED__msg_interface__srv__AddToQueue_Response __attribute__((deprecated))
#else
# define DEPRECATED__msg_interface__srv__AddToQueue_Response __declspec(deprecated)
#endif

namespace msg_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AddToQueue_Response_
{
  using Type = AddToQueue_Response_<ContainerAllocator>;

  explicit AddToQueue_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->string_list = "";
    }
  }

  explicit AddToQueue_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : string_list(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->string_list = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _string_list_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _string_list_type string_list;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__string_list(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->string_list = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    msg_interface::srv::AddToQueue_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const msg_interface::srv::AddToQueue_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<msg_interface::srv::AddToQueue_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<msg_interface::srv::AddToQueue_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      msg_interface::srv::AddToQueue_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<msg_interface::srv::AddToQueue_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      msg_interface::srv::AddToQueue_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<msg_interface::srv::AddToQueue_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<msg_interface::srv::AddToQueue_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<msg_interface::srv::AddToQueue_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__msg_interface__srv__AddToQueue_Response
    std::shared_ptr<msg_interface::srv::AddToQueue_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__msg_interface__srv__AddToQueue_Response
    std::shared_ptr<msg_interface::srv::AddToQueue_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AddToQueue_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->string_list != other.string_list) {
      return false;
    }
    return true;
  }
  bool operator!=(const AddToQueue_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AddToQueue_Response_

// alias to use template instance with default allocator
using AddToQueue_Response =
  msg_interface::srv::AddToQueue_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace msg_interface

namespace msg_interface
{

namespace srv
{

struct AddToQueue
{
  using Request = msg_interface::srv::AddToQueue_Request;
  using Response = msg_interface::srv::AddToQueue_Response;
};

}  // namespace srv

}  // namespace msg_interface

#endif  // MSG_INTERFACE__SRV__DETAIL__ADD_TO_QUEUE__STRUCT_HPP_
