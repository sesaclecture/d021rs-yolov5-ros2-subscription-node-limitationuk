// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces:srv/SetColorDetectParam.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "interfaces/srv/set_color_detect_param.hpp"


#ifndef INTERFACES__SRV__DETAIL__SET_COLOR_DETECT_PARAM__STRUCT_HPP_
#define INTERFACES__SRV__DETAIL__SET_COLOR_DETECT_PARAM__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'data'
#include "interfaces/msg/detail/color_detect__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__interfaces__srv__SetColorDetectParam_Request __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__srv__SetColorDetectParam_Request __declspec(deprecated)
#endif

namespace interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetColorDetectParam_Request_
{
  using Type = SetColorDetectParam_Request_<ContainerAllocator>;

  explicit SetColorDetectParam_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit SetColorDetectParam_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _data_type =
    std::vector<interfaces::msg::ColorDetect_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<interfaces::msg::ColorDetect_<ContainerAllocator>>>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__data(
    const std::vector<interfaces::msg::ColorDetect_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<interfaces::msg::ColorDetect_<ContainerAllocator>>> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::srv::SetColorDetectParam_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::srv::SetColorDetectParam_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::srv::SetColorDetectParam_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::srv::SetColorDetectParam_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::SetColorDetectParam_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::SetColorDetectParam_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::SetColorDetectParam_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::SetColorDetectParam_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::srv::SetColorDetectParam_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::srv::SetColorDetectParam_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__srv__SetColorDetectParam_Request
    std::shared_ptr<interfaces::srv::SetColorDetectParam_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__srv__SetColorDetectParam_Request
    std::shared_ptr<interfaces::srv::SetColorDetectParam_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetColorDetectParam_Request_ & other) const
  {
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetColorDetectParam_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetColorDetectParam_Request_

// alias to use template instance with default allocator
using SetColorDetectParam_Request =
  interfaces::srv::SetColorDetectParam_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interfaces


#ifndef _WIN32
# define DEPRECATED__interfaces__srv__SetColorDetectParam_Response __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__srv__SetColorDetectParam_Response __declspec(deprecated)
#endif

namespace interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetColorDetectParam_Response_
{
  using Type = SetColorDetectParam_Response_<ContainerAllocator>;

  explicit SetColorDetectParam_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit SetColorDetectParam_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::srv::SetColorDetectParam_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::srv::SetColorDetectParam_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::srv::SetColorDetectParam_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::srv::SetColorDetectParam_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::SetColorDetectParam_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::SetColorDetectParam_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::SetColorDetectParam_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::SetColorDetectParam_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::srv::SetColorDetectParam_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::srv::SetColorDetectParam_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__srv__SetColorDetectParam_Response
    std::shared_ptr<interfaces::srv::SetColorDetectParam_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__srv__SetColorDetectParam_Response
    std::shared_ptr<interfaces::srv::SetColorDetectParam_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetColorDetectParam_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetColorDetectParam_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetColorDetectParam_Response_

// alias to use template instance with default allocator
using SetColorDetectParam_Response =
  interfaces::srv::SetColorDetectParam_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__interfaces__srv__SetColorDetectParam_Event __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__srv__SetColorDetectParam_Event __declspec(deprecated)
#endif

namespace interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetColorDetectParam_Event_
{
  using Type = SetColorDetectParam_Event_<ContainerAllocator>;

  explicit SetColorDetectParam_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit SetColorDetectParam_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<interfaces::srv::SetColorDetectParam_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<interfaces::srv::SetColorDetectParam_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<interfaces::srv::SetColorDetectParam_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<interfaces::srv::SetColorDetectParam_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<interfaces::srv::SetColorDetectParam_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<interfaces::srv::SetColorDetectParam_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<interfaces::srv::SetColorDetectParam_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<interfaces::srv::SetColorDetectParam_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::srv::SetColorDetectParam_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::srv::SetColorDetectParam_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::srv::SetColorDetectParam_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::srv::SetColorDetectParam_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::SetColorDetectParam_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::SetColorDetectParam_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::SetColorDetectParam_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::SetColorDetectParam_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::srv::SetColorDetectParam_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::srv::SetColorDetectParam_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__srv__SetColorDetectParam_Event
    std::shared_ptr<interfaces::srv::SetColorDetectParam_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__srv__SetColorDetectParam_Event
    std::shared_ptr<interfaces::srv::SetColorDetectParam_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetColorDetectParam_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetColorDetectParam_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetColorDetectParam_Event_

// alias to use template instance with default allocator
using SetColorDetectParam_Event =
  interfaces::srv::SetColorDetectParam_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interfaces

namespace interfaces
{

namespace srv
{

struct SetColorDetectParam
{
  using Request = interfaces::srv::SetColorDetectParam_Request;
  using Response = interfaces::srv::SetColorDetectParam_Response;
  using Event = interfaces::srv::SetColorDetectParam_Event;
};

}  // namespace srv

}  // namespace interfaces

#endif  // INTERFACES__SRV__DETAIL__SET_COLOR_DETECT_PARAM__STRUCT_HPP_
