// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from base_interfaces:srv/Student.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "base_interfaces/srv/student.hpp"


#ifndef BASE_INTERFACES__SRV__DETAIL__STUDENT__STRUCT_HPP_
#define BASE_INTERFACES__SRV__DETAIL__STUDENT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__base_interfaces__srv__Student_Request __attribute__((deprecated))
#else
# define DEPRECATED__base_interfaces__srv__Student_Request __declspec(deprecated)
#endif

namespace base_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Student_Request_
{
  using Type = Student_Request_<ContainerAllocator>;

  explicit Student_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = "";
    }
  }

  explicit Student_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = "";
    }
  }

  // field types and members
  using _id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _id_type id;

  // setters for named parameter idiom
  Type & set__id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    base_interfaces::srv::Student_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const base_interfaces::srv::Student_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<base_interfaces::srv::Student_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<base_interfaces::srv::Student_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      base_interfaces::srv::Student_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<base_interfaces::srv::Student_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      base_interfaces::srv::Student_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<base_interfaces::srv::Student_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<base_interfaces::srv::Student_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<base_interfaces::srv::Student_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__base_interfaces__srv__Student_Request
    std::shared_ptr<base_interfaces::srv::Student_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__base_interfaces__srv__Student_Request
    std::shared_ptr<base_interfaces::srv::Student_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Student_Request_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    return true;
  }
  bool operator!=(const Student_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Student_Request_

// alias to use template instance with default allocator
using Student_Request =
  base_interfaces::srv::Student_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace base_interfaces


#ifndef _WIN32
# define DEPRECATED__base_interfaces__srv__Student_Response __attribute__((deprecated))
#else
# define DEPRECATED__base_interfaces__srv__Student_Response __declspec(deprecated)
#endif

namespace base_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Student_Response_
{
  using Type = Student_Response_<ContainerAllocator>;

  explicit Student_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->age = 0l;
      this->index = "";
      this->height = 0l;
      this->ratio = 0.0;
    }
  }

  explicit Student_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    index(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->age = 0l;
      this->index = "";
      this->height = 0l;
      this->ratio = 0.0;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _age_type =
    int32_t;
  _age_type age;
  using _index_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _index_type index;
  using _height_type =
    int32_t;
  _height_type height;
  using _ratio_type =
    double;
  _ratio_type ratio;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__age(
    const int32_t & _arg)
  {
    this->age = _arg;
    return *this;
  }
  Type & set__index(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->index = _arg;
    return *this;
  }
  Type & set__height(
    const int32_t & _arg)
  {
    this->height = _arg;
    return *this;
  }
  Type & set__ratio(
    const double & _arg)
  {
    this->ratio = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    base_interfaces::srv::Student_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const base_interfaces::srv::Student_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<base_interfaces::srv::Student_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<base_interfaces::srv::Student_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      base_interfaces::srv::Student_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<base_interfaces::srv::Student_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      base_interfaces::srv::Student_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<base_interfaces::srv::Student_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<base_interfaces::srv::Student_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<base_interfaces::srv::Student_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__base_interfaces__srv__Student_Response
    std::shared_ptr<base_interfaces::srv::Student_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__base_interfaces__srv__Student_Response
    std::shared_ptr<base_interfaces::srv::Student_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Student_Response_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->age != other.age) {
      return false;
    }
    if (this->index != other.index) {
      return false;
    }
    if (this->height != other.height) {
      return false;
    }
    if (this->ratio != other.ratio) {
      return false;
    }
    return true;
  }
  bool operator!=(const Student_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Student_Response_

// alias to use template instance with default allocator
using Student_Response =
  base_interfaces::srv::Student_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace base_interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__base_interfaces__srv__Student_Event __attribute__((deprecated))
#else
# define DEPRECATED__base_interfaces__srv__Student_Event __declspec(deprecated)
#endif

namespace base_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Student_Event_
{
  using Type = Student_Event_<ContainerAllocator>;

  explicit Student_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit Student_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<base_interfaces::srv::Student_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<base_interfaces::srv::Student_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<base_interfaces::srv::Student_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<base_interfaces::srv::Student_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<base_interfaces::srv::Student_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<base_interfaces::srv::Student_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<base_interfaces::srv::Student_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<base_interfaces::srv::Student_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    base_interfaces::srv::Student_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const base_interfaces::srv::Student_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<base_interfaces::srv::Student_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<base_interfaces::srv::Student_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      base_interfaces::srv::Student_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<base_interfaces::srv::Student_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      base_interfaces::srv::Student_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<base_interfaces::srv::Student_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<base_interfaces::srv::Student_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<base_interfaces::srv::Student_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__base_interfaces__srv__Student_Event
    std::shared_ptr<base_interfaces::srv::Student_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__base_interfaces__srv__Student_Event
    std::shared_ptr<base_interfaces::srv::Student_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Student_Event_ & other) const
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
  bool operator!=(const Student_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Student_Event_

// alias to use template instance with default allocator
using Student_Event =
  base_interfaces::srv::Student_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace base_interfaces

namespace base_interfaces
{

namespace srv
{

struct Student
{
  using Request = base_interfaces::srv::Student_Request;
  using Response = base_interfaces::srv::Student_Response;
  using Event = base_interfaces::srv::Student_Event;
};

}  // namespace srv

}  // namespace base_interfaces

#endif  // BASE_INTERFACES__SRV__DETAIL__STUDENT__STRUCT_HPP_
