// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:srv/SetString.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "interfaces/srv/set_string.hpp"


#ifndef INTERFACES__SRV__DETAIL__SET_STRING__BUILDER_HPP_
#define INTERFACES__SRV__DETAIL__SET_STRING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/srv/detail/set_string__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_SetString_Request_data
{
public:
  Init_SetString_Request_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces::srv::SetString_Request data(::interfaces::srv::SetString_Request::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::SetString_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::SetString_Request>()
{
  return interfaces::srv::builder::Init_SetString_Request_data();
}

}  // namespace interfaces


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_SetString_Response_message
{
public:
  explicit Init_SetString_Response_message(::interfaces::srv::SetString_Response & msg)
  : msg_(msg)
  {}
  ::interfaces::srv::SetString_Response message(::interfaces::srv::SetString_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::SetString_Response msg_;
};

class Init_SetString_Response_success
{
public:
  Init_SetString_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetString_Response_message success(::interfaces::srv::SetString_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetString_Response_message(msg_);
  }

private:
  ::interfaces::srv::SetString_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::SetString_Response>()
{
  return interfaces::srv::builder::Init_SetString_Response_success();
}

}  // namespace interfaces


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_SetString_Event_response
{
public:
  explicit Init_SetString_Event_response(::interfaces::srv::SetString_Event & msg)
  : msg_(msg)
  {}
  ::interfaces::srv::SetString_Event response(::interfaces::srv::SetString_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::SetString_Event msg_;
};

class Init_SetString_Event_request
{
public:
  explicit Init_SetString_Event_request(::interfaces::srv::SetString_Event & msg)
  : msg_(msg)
  {}
  Init_SetString_Event_response request(::interfaces::srv::SetString_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetString_Event_response(msg_);
  }

private:
  ::interfaces::srv::SetString_Event msg_;
};

class Init_SetString_Event_info
{
public:
  Init_SetString_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetString_Event_request info(::interfaces::srv::SetString_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SetString_Event_request(msg_);
  }

private:
  ::interfaces::srv::SetString_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::SetString_Event>()
{
  return interfaces::srv::builder::Init_SetString_Event_info();
}

}  // namespace interfaces

#endif  // INTERFACES__SRV__DETAIL__SET_STRING__BUILDER_HPP_
