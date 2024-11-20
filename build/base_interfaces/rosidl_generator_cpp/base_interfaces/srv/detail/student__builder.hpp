// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from base_interfaces:srv/Student.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "base_interfaces/srv/student.hpp"


#ifndef BASE_INTERFACES__SRV__DETAIL__STUDENT__BUILDER_HPP_
#define BASE_INTERFACES__SRV__DETAIL__STUDENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "base_interfaces/srv/detail/student__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace base_interfaces
{

namespace srv
{

namespace builder
{

class Init_Student_Request_id
{
public:
  Init_Student_Request_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::base_interfaces::srv::Student_Request id(::base_interfaces::srv::Student_Request::_id_type arg)
  {
    msg_.id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfaces::srv::Student_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfaces::srv::Student_Request>()
{
  return base_interfaces::srv::builder::Init_Student_Request_id();
}

}  // namespace base_interfaces


namespace base_interfaces
{

namespace srv
{

namespace builder
{

class Init_Student_Response_ratio
{
public:
  explicit Init_Student_Response_ratio(::base_interfaces::srv::Student_Response & msg)
  : msg_(msg)
  {}
  ::base_interfaces::srv::Student_Response ratio(::base_interfaces::srv::Student_Response::_ratio_type arg)
  {
    msg_.ratio = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfaces::srv::Student_Response msg_;
};

class Init_Student_Response_height
{
public:
  explicit Init_Student_Response_height(::base_interfaces::srv::Student_Response & msg)
  : msg_(msg)
  {}
  Init_Student_Response_ratio height(::base_interfaces::srv::Student_Response::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_Student_Response_ratio(msg_);
  }

private:
  ::base_interfaces::srv::Student_Response msg_;
};

class Init_Student_Response_index
{
public:
  explicit Init_Student_Response_index(::base_interfaces::srv::Student_Response & msg)
  : msg_(msg)
  {}
  Init_Student_Response_height index(::base_interfaces::srv::Student_Response::_index_type arg)
  {
    msg_.index = std::move(arg);
    return Init_Student_Response_height(msg_);
  }

private:
  ::base_interfaces::srv::Student_Response msg_;
};

class Init_Student_Response_age
{
public:
  explicit Init_Student_Response_age(::base_interfaces::srv::Student_Response & msg)
  : msg_(msg)
  {}
  Init_Student_Response_index age(::base_interfaces::srv::Student_Response::_age_type arg)
  {
    msg_.age = std::move(arg);
    return Init_Student_Response_index(msg_);
  }

private:
  ::base_interfaces::srv::Student_Response msg_;
};

class Init_Student_Response_name
{
public:
  Init_Student_Response_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Student_Response_age name(::base_interfaces::srv::Student_Response::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Student_Response_age(msg_);
  }

private:
  ::base_interfaces::srv::Student_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfaces::srv::Student_Response>()
{
  return base_interfaces::srv::builder::Init_Student_Response_name();
}

}  // namespace base_interfaces


namespace base_interfaces
{

namespace srv
{

namespace builder
{

class Init_Student_Event_response
{
public:
  explicit Init_Student_Event_response(::base_interfaces::srv::Student_Event & msg)
  : msg_(msg)
  {}
  ::base_interfaces::srv::Student_Event response(::base_interfaces::srv::Student_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfaces::srv::Student_Event msg_;
};

class Init_Student_Event_request
{
public:
  explicit Init_Student_Event_request(::base_interfaces::srv::Student_Event & msg)
  : msg_(msg)
  {}
  Init_Student_Event_response request(::base_interfaces::srv::Student_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Student_Event_response(msg_);
  }

private:
  ::base_interfaces::srv::Student_Event msg_;
};

class Init_Student_Event_info
{
public:
  Init_Student_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Student_Event_request info(::base_interfaces::srv::Student_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Student_Event_request(msg_);
  }

private:
  ::base_interfaces::srv::Student_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfaces::srv::Student_Event>()
{
  return base_interfaces::srv::builder::Init_Student_Event_info();
}

}  // namespace base_interfaces

#endif  // BASE_INTERFACES__SRV__DETAIL__STUDENT__BUILDER_HPP_
