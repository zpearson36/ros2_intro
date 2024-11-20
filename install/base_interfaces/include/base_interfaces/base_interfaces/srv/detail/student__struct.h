// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from base_interfaces:srv/Student.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "base_interfaces/srv/student.h"


#ifndef BASE_INTERFACES__SRV__DETAIL__STUDENT__STRUCT_H_
#define BASE_INTERFACES__SRV__DETAIL__STUDENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Student in the package base_interfaces.
typedef struct base_interfaces__srv__Student_Request
{
  rosidl_runtime_c__String id;
} base_interfaces__srv__Student_Request;

// Struct for a sequence of base_interfaces__srv__Student_Request.
typedef struct base_interfaces__srv__Student_Request__Sequence
{
  base_interfaces__srv__Student_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} base_interfaces__srv__Student_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'name'
// Member 'index'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Student in the package base_interfaces.
typedef struct base_interfaces__srv__Student_Response
{
  rosidl_runtime_c__String name;
  int32_t age;
  rosidl_runtime_c__String index;
  int32_t height;
  double ratio;
} base_interfaces__srv__Student_Response;

// Struct for a sequence of base_interfaces__srv__Student_Response.
typedef struct base_interfaces__srv__Student_Response__Sequence
{
  base_interfaces__srv__Student_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} base_interfaces__srv__Student_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  base_interfaces__srv__Student_Event__request__MAX_SIZE = 1
};
// response
enum
{
  base_interfaces__srv__Student_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/Student in the package base_interfaces.
typedef struct base_interfaces__srv__Student_Event
{
  service_msgs__msg__ServiceEventInfo info;
  base_interfaces__srv__Student_Request__Sequence request;
  base_interfaces__srv__Student_Response__Sequence response;
} base_interfaces__srv__Student_Event;

// Struct for a sequence of base_interfaces__srv__Student_Event.
typedef struct base_interfaces__srv__Student_Event__Sequence
{
  base_interfaces__srv__Student_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} base_interfaces__srv__Student_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BASE_INTERFACES__SRV__DETAIL__STUDENT__STRUCT_H_
