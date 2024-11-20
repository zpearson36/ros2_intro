// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from base_interfaces:srv/Student.idl
// generated code does not contain a copyright notice

#include "base_interfaces/srv/detail/student__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_base_interfaces
const rosidl_type_hash_t *
base_interfaces__srv__Student__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb3, 0xa7, 0x51, 0x75, 0xa5, 0x67, 0x71, 0xd6,
      0x9c, 0x81, 0xa2, 0x9f, 0xa7, 0x7f, 0xac, 0x91,
      0xeb, 0x41, 0xfa, 0x3f, 0x06, 0x18, 0x23, 0x20,
      0xf5, 0xdd, 0xfb, 0x1f, 0xea, 0x87, 0x84, 0xfd,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_base_interfaces
const rosidl_type_hash_t *
base_interfaces__srv__Student_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x0f, 0x47, 0x12, 0x4c, 0xe3, 0xf6, 0x34, 0xe8,
      0xd1, 0xd0, 0x4d, 0x64, 0x40, 0x64, 0xcc, 0x1a,
      0xa6, 0xb9, 0xed, 0x64, 0x56, 0x44, 0x11, 0xf0,
      0x42, 0xf7, 0xed, 0x8a, 0x0e, 0x94, 0x89, 0x01,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_base_interfaces
const rosidl_type_hash_t *
base_interfaces__srv__Student_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xdd, 0xa1, 0x32, 0xf2, 0xcb, 0x35, 0xda, 0xc6,
      0x22, 0x44, 0xfc, 0x86, 0x85, 0x5a, 0x78, 0x39,
      0x8e, 0x5a, 0x10, 0x6e, 0xc2, 0xff, 0xc6, 0x07,
      0x33, 0xa0, 0x08, 0xe5, 0xeb, 0xf5, 0x7b, 0x50,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_base_interfaces
const rosidl_type_hash_t *
base_interfaces__srv__Student_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xac, 0x8c, 0x67, 0x7f, 0x97, 0x84, 0xe5, 0x52,
      0xc9, 0x88, 0xe5, 0x73, 0xe4, 0x3f, 0xf3, 0xa2,
      0x22, 0x25, 0x0a, 0x30, 0xa2, 0x77, 0xa4, 0x83,
      0x14, 0x25, 0x1d, 0x08, 0x2b, 0xcf, 0xd9, 0xdb,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char base_interfaces__srv__Student__TYPE_NAME[] = "base_interfaces/srv/Student";
static char base_interfaces__srv__Student_Event__TYPE_NAME[] = "base_interfaces/srv/Student_Event";
static char base_interfaces__srv__Student_Request__TYPE_NAME[] = "base_interfaces/srv/Student_Request";
static char base_interfaces__srv__Student_Response__TYPE_NAME[] = "base_interfaces/srv/Student_Response";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char base_interfaces__srv__Student__FIELD_NAME__request_message[] = "request_message";
static char base_interfaces__srv__Student__FIELD_NAME__response_message[] = "response_message";
static char base_interfaces__srv__Student__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field base_interfaces__srv__Student__FIELDS[] = {
  {
    {base_interfaces__srv__Student__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {base_interfaces__srv__Student_Request__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
  {
    {base_interfaces__srv__Student__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {base_interfaces__srv__Student_Response__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
  {
    {base_interfaces__srv__Student__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {base_interfaces__srv__Student_Event__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription base_interfaces__srv__Student__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {base_interfaces__srv__Student_Event__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {base_interfaces__srv__Student_Request__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {base_interfaces__srv__Student_Response__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
base_interfaces__srv__Student__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {base_interfaces__srv__Student__TYPE_NAME, 27, 27},
      {base_interfaces__srv__Student__FIELDS, 3, 3},
    },
    {base_interfaces__srv__Student__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    description.referenced_type_descriptions.data[0].fields = base_interfaces__srv__Student_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = base_interfaces__srv__Student_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = base_interfaces__srv__Student_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char base_interfaces__srv__Student_Request__FIELD_NAME__id[] = "id";

static rosidl_runtime_c__type_description__Field base_interfaces__srv__Student_Request__FIELDS[] = {
  {
    {base_interfaces__srv__Student_Request__FIELD_NAME__id, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
base_interfaces__srv__Student_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {base_interfaces__srv__Student_Request__TYPE_NAME, 35, 35},
      {base_interfaces__srv__Student_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char base_interfaces__srv__Student_Response__FIELD_NAME__name[] = "name";
static char base_interfaces__srv__Student_Response__FIELD_NAME__age[] = "age";
static char base_interfaces__srv__Student_Response__FIELD_NAME__index[] = "index";
static char base_interfaces__srv__Student_Response__FIELD_NAME__height[] = "height";
static char base_interfaces__srv__Student_Response__FIELD_NAME__ratio[] = "ratio";

static rosidl_runtime_c__type_description__Field base_interfaces__srv__Student_Response__FIELDS[] = {
  {
    {base_interfaces__srv__Student_Response__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {base_interfaces__srv__Student_Response__FIELD_NAME__age, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {base_interfaces__srv__Student_Response__FIELD_NAME__index, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {base_interfaces__srv__Student_Response__FIELD_NAME__height, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {base_interfaces__srv__Student_Response__FIELD_NAME__ratio, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
base_interfaces__srv__Student_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {base_interfaces__srv__Student_Response__TYPE_NAME, 36, 36},
      {base_interfaces__srv__Student_Response__FIELDS, 5, 5},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char base_interfaces__srv__Student_Event__FIELD_NAME__info[] = "info";
static char base_interfaces__srv__Student_Event__FIELD_NAME__request[] = "request";
static char base_interfaces__srv__Student_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field base_interfaces__srv__Student_Event__FIELDS[] = {
  {
    {base_interfaces__srv__Student_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {base_interfaces__srv__Student_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {base_interfaces__srv__Student_Request__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
  {
    {base_interfaces__srv__Student_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {base_interfaces__srv__Student_Response__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription base_interfaces__srv__Student_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {base_interfaces__srv__Student_Request__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {base_interfaces__srv__Student_Response__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
base_interfaces__srv__Student_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {base_interfaces__srv__Student_Event__TYPE_NAME, 33, 33},
      {base_interfaces__srv__Student_Event__FIELDS, 3, 3},
    },
    {base_interfaces__srv__Student_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    description.referenced_type_descriptions.data[0].fields = base_interfaces__srv__Student_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = base_interfaces__srv__Student_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string id\n"
  "---\n"
  "string  name\n"
  "int32   age\n"
  "string  index\n"
  "int32   height\n"
  "float64 ratio";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
base_interfaces__srv__Student__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {base_interfaces__srv__Student__TYPE_NAME, 27, 27},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 82, 82},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
base_interfaces__srv__Student_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {base_interfaces__srv__Student_Request__TYPE_NAME, 35, 35},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
base_interfaces__srv__Student_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {base_interfaces__srv__Student_Response__TYPE_NAME, 36, 36},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
base_interfaces__srv__Student_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {base_interfaces__srv__Student_Event__TYPE_NAME, 33, 33},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
base_interfaces__srv__Student__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *base_interfaces__srv__Student__get_individual_type_description_source(NULL),
    sources[1] = *base_interfaces__srv__Student_Event__get_individual_type_description_source(NULL);
    sources[2] = *base_interfaces__srv__Student_Request__get_individual_type_description_source(NULL);
    sources[3] = *base_interfaces__srv__Student_Response__get_individual_type_description_source(NULL);
    sources[4] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
base_interfaces__srv__Student_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *base_interfaces__srv__Student_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
base_interfaces__srv__Student_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *base_interfaces__srv__Student_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
base_interfaces__srv__Student_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *base_interfaces__srv__Student_Event__get_individual_type_description_source(NULL),
    sources[1] = *base_interfaces__srv__Student_Request__get_individual_type_description_source(NULL);
    sources[2] = *base_interfaces__srv__Student_Response__get_individual_type_description_source(NULL);
    sources[3] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
