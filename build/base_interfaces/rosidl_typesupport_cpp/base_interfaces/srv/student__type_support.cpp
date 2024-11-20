// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from base_interfaces:srv/Student.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "base_interfaces/srv/detail/student__functions.h"
#include "base_interfaces/srv/detail/student__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace base_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _Student_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Student_Request_type_support_ids_t;

static const _Student_Request_type_support_ids_t _Student_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Student_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Student_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Student_Request_type_support_symbol_names_t _Student_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, base_interfaces, srv, Student_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, base_interfaces, srv, Student_Request)),
  }
};

typedef struct _Student_Request_type_support_data_t
{
  void * data[2];
} _Student_Request_type_support_data_t;

static _Student_Request_type_support_data_t _Student_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Student_Request_message_typesupport_map = {
  2,
  "base_interfaces",
  &_Student_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Student_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Student_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Student_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Student_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &base_interfaces__srv__Student_Request__get_type_hash,
  &base_interfaces__srv__Student_Request__get_type_description,
  &base_interfaces__srv__Student_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace base_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<base_interfaces::srv::Student_Request>()
{
  return &::base_interfaces::srv::rosidl_typesupport_cpp::Student_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, base_interfaces, srv, Student_Request)() {
  return get_message_type_support_handle<base_interfaces::srv::Student_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "base_interfaces/srv/detail/student__functions.h"
// already included above
// #include "base_interfaces/srv/detail/student__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace base_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _Student_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Student_Response_type_support_ids_t;

static const _Student_Response_type_support_ids_t _Student_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Student_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Student_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Student_Response_type_support_symbol_names_t _Student_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, base_interfaces, srv, Student_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, base_interfaces, srv, Student_Response)),
  }
};

typedef struct _Student_Response_type_support_data_t
{
  void * data[2];
} _Student_Response_type_support_data_t;

static _Student_Response_type_support_data_t _Student_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Student_Response_message_typesupport_map = {
  2,
  "base_interfaces",
  &_Student_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Student_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Student_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Student_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Student_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &base_interfaces__srv__Student_Response__get_type_hash,
  &base_interfaces__srv__Student_Response__get_type_description,
  &base_interfaces__srv__Student_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace base_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<base_interfaces::srv::Student_Response>()
{
  return &::base_interfaces::srv::rosidl_typesupport_cpp::Student_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, base_interfaces, srv, Student_Response)() {
  return get_message_type_support_handle<base_interfaces::srv::Student_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "base_interfaces/srv/detail/student__functions.h"
// already included above
// #include "base_interfaces/srv/detail/student__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace base_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _Student_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Student_Event_type_support_ids_t;

static const _Student_Event_type_support_ids_t _Student_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Student_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Student_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Student_Event_type_support_symbol_names_t _Student_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, base_interfaces, srv, Student_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, base_interfaces, srv, Student_Event)),
  }
};

typedef struct _Student_Event_type_support_data_t
{
  void * data[2];
} _Student_Event_type_support_data_t;

static _Student_Event_type_support_data_t _Student_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Student_Event_message_typesupport_map = {
  2,
  "base_interfaces",
  &_Student_Event_message_typesupport_ids.typesupport_identifier[0],
  &_Student_Event_message_typesupport_symbol_names.symbol_name[0],
  &_Student_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Student_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Student_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &base_interfaces__srv__Student_Event__get_type_hash,
  &base_interfaces__srv__Student_Event__get_type_description,
  &base_interfaces__srv__Student_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace base_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<base_interfaces::srv::Student_Event>()
{
  return &::base_interfaces::srv::rosidl_typesupport_cpp::Student_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, base_interfaces, srv, Student_Event)() {
  return get_message_type_support_handle<base_interfaces::srv::Student_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "base_interfaces/srv/detail/student__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace base_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _Student_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Student_type_support_ids_t;

static const _Student_type_support_ids_t _Student_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Student_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Student_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Student_type_support_symbol_names_t _Student_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, base_interfaces, srv, Student)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, base_interfaces, srv, Student)),
  }
};

typedef struct _Student_type_support_data_t
{
  void * data[2];
} _Student_type_support_data_t;

static _Student_type_support_data_t _Student_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Student_service_typesupport_map = {
  2,
  "base_interfaces",
  &_Student_service_typesupport_ids.typesupport_identifier[0],
  &_Student_service_typesupport_symbol_names.symbol_name[0],
  &_Student_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Student_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Student_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<base_interfaces::srv::Student_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<base_interfaces::srv::Student_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<base_interfaces::srv::Student_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<base_interfaces::srv::Student>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<base_interfaces::srv::Student>,
  &base_interfaces__srv__Student__get_type_hash,
  &base_interfaces__srv__Student__get_type_description,
  &base_interfaces__srv__Student__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace base_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<base_interfaces::srv::Student>()
{
  return &::base_interfaces::srv::rosidl_typesupport_cpp::Student_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, base_interfaces, srv, Student)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<base_interfaces::srv::Student>();
}

#ifdef __cplusplus
}
#endif
