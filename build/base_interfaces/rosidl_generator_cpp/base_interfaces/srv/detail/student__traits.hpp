// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from base_interfaces:srv/Student.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "base_interfaces/srv/student.hpp"


#ifndef BASE_INTERFACES__SRV__DETAIL__STUDENT__TRAITS_HPP_
#define BASE_INTERFACES__SRV__DETAIL__STUDENT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "base_interfaces/srv/detail/student__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace base_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Student_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Student_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Student_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace base_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use base_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const base_interfaces::srv::Student_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  base_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use base_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const base_interfaces::srv::Student_Request & msg)
{
  return base_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<base_interfaces::srv::Student_Request>()
{
  return "base_interfaces::srv::Student_Request";
}

template<>
inline const char * name<base_interfaces::srv::Student_Request>()
{
  return "base_interfaces/srv/Student_Request";
}

template<>
struct has_fixed_size<base_interfaces::srv::Student_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<base_interfaces::srv::Student_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<base_interfaces::srv::Student_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace base_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Student_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: age
  {
    out << "age: ";
    rosidl_generator_traits::value_to_yaml(msg.age, out);
    out << ", ";
  }

  // member: index
  {
    out << "index: ";
    rosidl_generator_traits::value_to_yaml(msg.index, out);
    out << ", ";
  }

  // member: height
  {
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
    out << ", ";
  }

  // member: ratio
  {
    out << "ratio: ";
    rosidl_generator_traits::value_to_yaml(msg.ratio, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Student_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: age
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "age: ";
    rosidl_generator_traits::value_to_yaml(msg.age, out);
    out << "\n";
  }

  // member: index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "index: ";
    rosidl_generator_traits::value_to_yaml(msg.index, out);
    out << "\n";
  }

  // member: height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
    out << "\n";
  }

  // member: ratio
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ratio: ";
    rosidl_generator_traits::value_to_yaml(msg.ratio, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Student_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace base_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use base_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const base_interfaces::srv::Student_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  base_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use base_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const base_interfaces::srv::Student_Response & msg)
{
  return base_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<base_interfaces::srv::Student_Response>()
{
  return "base_interfaces::srv::Student_Response";
}

template<>
inline const char * name<base_interfaces::srv::Student_Response>()
{
  return "base_interfaces/srv/Student_Response";
}

template<>
struct has_fixed_size<base_interfaces::srv::Student_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<base_interfaces::srv::Student_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<base_interfaces::srv::Student_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace base_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Student_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Student_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Student_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace base_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use base_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const base_interfaces::srv::Student_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  base_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use base_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const base_interfaces::srv::Student_Event & msg)
{
  return base_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<base_interfaces::srv::Student_Event>()
{
  return "base_interfaces::srv::Student_Event";
}

template<>
inline const char * name<base_interfaces::srv::Student_Event>()
{
  return "base_interfaces/srv/Student_Event";
}

template<>
struct has_fixed_size<base_interfaces::srv::Student_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<base_interfaces::srv::Student_Event>
  : std::integral_constant<bool, has_bounded_size<base_interfaces::srv::Student_Request>::value && has_bounded_size<base_interfaces::srv::Student_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<base_interfaces::srv::Student_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<base_interfaces::srv::Student>()
{
  return "base_interfaces::srv::Student";
}

template<>
inline const char * name<base_interfaces::srv::Student>()
{
  return "base_interfaces/srv/Student";
}

template<>
struct has_fixed_size<base_interfaces::srv::Student>
  : std::integral_constant<
    bool,
    has_fixed_size<base_interfaces::srv::Student_Request>::value &&
    has_fixed_size<base_interfaces::srv::Student_Response>::value
  >
{
};

template<>
struct has_bounded_size<base_interfaces::srv::Student>
  : std::integral_constant<
    bool,
    has_bounded_size<base_interfaces::srv::Student_Request>::value &&
    has_bounded_size<base_interfaces::srv::Student_Response>::value
  >
{
};

template<>
struct is_service<base_interfaces::srv::Student>
  : std::true_type
{
};

template<>
struct is_service_request<base_interfaces::srv::Student_Request>
  : std::true_type
{
};

template<>
struct is_service_response<base_interfaces::srv::Student_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // BASE_INTERFACES__SRV__DETAIL__STUDENT__TRAITS_HPP_
