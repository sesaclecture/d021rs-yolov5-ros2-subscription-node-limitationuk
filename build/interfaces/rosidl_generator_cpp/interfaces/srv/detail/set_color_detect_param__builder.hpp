// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:srv/SetColorDetectParam.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "interfaces/srv/set_color_detect_param.hpp"


#ifndef INTERFACES__SRV__DETAIL__SET_COLOR_DETECT_PARAM__BUILDER_HPP_
#define INTERFACES__SRV__DETAIL__SET_COLOR_DETECT_PARAM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/srv/detail/set_color_detect_param__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_SetColorDetectParam_Request_data
{
public:
  Init_SetColorDetectParam_Request_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces::srv::SetColorDetectParam_Request data(::interfaces::srv::SetColorDetectParam_Request::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::SetColorDetectParam_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::SetColorDetectParam_Request>()
{
  return interfaces::srv::builder::Init_SetColorDetectParam_Request_data();
}

}  // namespace interfaces


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_SetColorDetectParam_Response_message
{
public:
  explicit Init_SetColorDetectParam_Response_message(::interfaces::srv::SetColorDetectParam_Response & msg)
  : msg_(msg)
  {}
  ::interfaces::srv::SetColorDetectParam_Response message(::interfaces::srv::SetColorDetectParam_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::SetColorDetectParam_Response msg_;
};

class Init_SetColorDetectParam_Response_success
{
public:
  Init_SetColorDetectParam_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetColorDetectParam_Response_message success(::interfaces::srv::SetColorDetectParam_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetColorDetectParam_Response_message(msg_);
  }

private:
  ::interfaces::srv::SetColorDetectParam_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::SetColorDetectParam_Response>()
{
  return interfaces::srv::builder::Init_SetColorDetectParam_Response_success();
}

}  // namespace interfaces


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_SetColorDetectParam_Event_response
{
public:
  explicit Init_SetColorDetectParam_Event_response(::interfaces::srv::SetColorDetectParam_Event & msg)
  : msg_(msg)
  {}
  ::interfaces::srv::SetColorDetectParam_Event response(::interfaces::srv::SetColorDetectParam_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::SetColorDetectParam_Event msg_;
};

class Init_SetColorDetectParam_Event_request
{
public:
  explicit Init_SetColorDetectParam_Event_request(::interfaces::srv::SetColorDetectParam_Event & msg)
  : msg_(msg)
  {}
  Init_SetColorDetectParam_Event_response request(::interfaces::srv::SetColorDetectParam_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetColorDetectParam_Event_response(msg_);
  }

private:
  ::interfaces::srv::SetColorDetectParam_Event msg_;
};

class Init_SetColorDetectParam_Event_info
{
public:
  Init_SetColorDetectParam_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetColorDetectParam_Event_request info(::interfaces::srv::SetColorDetectParam_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SetColorDetectParam_Event_request(msg_);
  }

private:
  ::interfaces::srv::SetColorDetectParam_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::SetColorDetectParam_Event>()
{
  return interfaces::srv::builder::Init_SetColorDetectParam_Event_info();
}

}  // namespace interfaces

#endif  // INTERFACES__SRV__DETAIL__SET_COLOR_DETECT_PARAM__BUILDER_HPP_
