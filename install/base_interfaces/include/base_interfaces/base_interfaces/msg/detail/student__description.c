// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from base_interfaces:msg/Student.idl
// generated code does not contain a copyright notice

#include "base_interfaces/msg/detail/student__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_base_interfaces
const rosidl_type_hash_t *
base_interfaces__msg__Student__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x8c, 0xb0, 0x0a, 0xce, 0x6e, 0x13, 0x6b, 0x31,
      0xa7, 0x85, 0xb2, 0x05, 0xf5, 0x2c, 0xa0, 0xc0,
      0x13, 0x4e, 0x4b, 0xb4, 0x27, 0xdd, 0x6d, 0x7e,
      0x48, 0x58, 0x1c, 0xdc, 0xa9, 0xaf, 0x51, 0x4e,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char base_interfaces__msg__Student__TYPE_NAME[] = "base_interfaces/msg/Student";

// Define type names, field names, and default values
static char base_interfaces__msg__Student__FIELD_NAME__name[] = "name";
static char base_interfaces__msg__Student__FIELD_NAME__age[] = "age";
static char base_interfaces__msg__Student__FIELD_NAME__index[] = "index";
static char base_interfaces__msg__Student__FIELD_NAME__height[] = "height";

static rosidl_runtime_c__type_description__Field base_interfaces__msg__Student__FIELDS[] = {
  {
    {base_interfaces__msg__Student__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {base_interfaces__msg__Student__FIELD_NAME__age, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {base_interfaces__msg__Student__FIELD_NAME__index, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {base_interfaces__msg__Student__FIELD_NAME__height, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
base_interfaces__msg__Student__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {base_interfaces__msg__Student__TYPE_NAME, 27, 27},
      {base_interfaces__msg__Student__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string name\n"
  "int32  age\n"
  "string index\n"
  "int32  height";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
base_interfaces__msg__Student__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {base_interfaces__msg__Student__TYPE_NAME, 27, 27},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 50, 50},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
base_interfaces__msg__Student__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *base_interfaces__msg__Student__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
