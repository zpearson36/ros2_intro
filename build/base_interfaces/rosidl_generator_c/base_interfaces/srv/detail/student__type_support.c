// generated from rosidl_generator_c/resource/idl__type_support.c.em
// with input from base_interfaces:srv/Student.idl
// generated code does not contain a copyright notice

#include <string.h>

#include "base_interfaces/srv/detail/student__type_support.h"
#include "base_interfaces/srv/detail/student__functions.h"
#include "rosidl_typesupport_interface/macros.h"
#include "base_interfaces/srv/detail/student__struct.h"

#ifdef __cplusplus
extern "C"
{
#endif


void *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  base_interfaces,
  srv,
  Student
)(
  const rosidl_service_introspection_info_t * info,
  rcutils_allocator_t * allocator,
  const void * request_message,
  const void * response_message)
{
  if (!allocator || !info) {
    return NULL;
  }
  base_interfaces__srv__Student_Event * event_msg = (base_interfaces__srv__Student_Event *)(allocator->allocate(sizeof(base_interfaces__srv__Student_Event), allocator->state));
  if (!base_interfaces__srv__Student_Event__init(event_msg)) {
    allocator->deallocate(event_msg, allocator->state);
    return NULL;
  }

  event_msg->info.event_type = info->event_type;
  event_msg->info.sequence_number = info->sequence_number;
  event_msg->info.stamp.sec = info->stamp_sec;
  event_msg->info.stamp.nanosec = info->stamp_nanosec;
  memcpy(event_msg->info.client_gid, info->client_gid, 16);
  if (request_message) {
    base_interfaces__srv__Student_Request__Sequence__init(
      &event_msg->request,
      1);
    if (!base_interfaces__srv__Student_Request__copy((const base_interfaces__srv__Student_Request *)(request_message), event_msg->request.data)) {
      allocator->deallocate(event_msg, allocator->state);
      return NULL;
    }
  }
  if (response_message) {
    base_interfaces__srv__Student_Response__Sequence__init(
      &event_msg->response,
      1);
    if (!base_interfaces__srv__Student_Response__copy((const base_interfaces__srv__Student_Response *)(response_message), event_msg->response.data)) {
      allocator->deallocate(event_msg, allocator->state);
      return NULL;
    }
  }
  return event_msg;
}

// Forward declare the get type support functions for this type.
bool
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  base_interfaces,
  srv,
  Student
)(
  void * event_msg,
  rcutils_allocator_t * allocator)
{
  if (!allocator) {
    return false;
  }
  if (NULL == event_msg) {
    return false;
  }
  base_interfaces__srv__Student_Event * _event_msg = (base_interfaces__srv__Student_Event *)(event_msg);

  base_interfaces__srv__Student_Event__fini((base_interfaces__srv__Student_Event *)(_event_msg));
  if (_event_msg->request.data) {
    allocator->deallocate(_event_msg->request.data, allocator->state);
  }
  if (_event_msg->response.data) {
    allocator->deallocate(_event_msg->response.data, allocator->state);
  }
  allocator->deallocate(_event_msg, allocator->state);
  return true;
}

#ifdef __cplusplus
}
#endif
