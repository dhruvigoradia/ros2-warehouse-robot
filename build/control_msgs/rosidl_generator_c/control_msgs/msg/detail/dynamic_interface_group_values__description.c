// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from control_msgs:msg/DynamicInterfaceGroupValues.idl
// generated code does not contain a copyright notice

#include "control_msgs/msg/detail/dynamic_interface_group_values__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_control_msgs
const rosidl_type_hash_t *
control_msgs__msg__DynamicInterfaceGroupValues__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x0e, 0xbe, 0xf5, 0x6c, 0x55, 0xcd, 0xde, 0x46,
      0xb4, 0x62, 0x2f, 0x7e, 0x0a, 0x4d, 0xbf, 0x26,
      0xfe, 0xfb, 0xf0, 0x29, 0x62, 0x05, 0x46, 0x3e,
      0x95, 0x50, 0x47, 0x25, 0x2b, 0x43, 0x4c, 0xbc,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "std_msgs/msg/detail/header__functions.h"
#include "control_msgs/msg/detail/interface_value__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t control_msgs__msg__InterfaceValue__EXPECTED_HASH = {1, {
    0x74, 0xa1, 0x21, 0x44, 0xef, 0x6b, 0x7a, 0xf6,
    0x75, 0x33, 0x19, 0x5c, 0xb3, 0x0f, 0x7f, 0x60,
    0x7d, 0x33, 0x01, 0xb6, 0x69, 0x50, 0x20, 0x8a,
    0x72, 0xd2, 0x80, 0x69, 0x5f, 0x3e, 0x19, 0x0c,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char control_msgs__msg__DynamicInterfaceGroupValues__TYPE_NAME[] = "control_msgs/msg/DynamicInterfaceGroupValues";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char control_msgs__msg__InterfaceValue__TYPE_NAME[] = "control_msgs/msg/InterfaceValue";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char control_msgs__msg__DynamicInterfaceGroupValues__FIELD_NAME__header[] = "header";
static char control_msgs__msg__DynamicInterfaceGroupValues__FIELD_NAME__interface_groups[] = "interface_groups";
static char control_msgs__msg__DynamicInterfaceGroupValues__FIELD_NAME__interface_values[] = "interface_values";

static rosidl_runtime_c__type_description__Field control_msgs__msg__DynamicInterfaceGroupValues__FIELDS[] = {
  {
    {control_msgs__msg__DynamicInterfaceGroupValues__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {control_msgs__msg__DynamicInterfaceGroupValues__FIELD_NAME__interface_groups, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {control_msgs__msg__DynamicInterfaceGroupValues__FIELD_NAME__interface_values, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {control_msgs__msg__InterfaceValue__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription control_msgs__msg__DynamicInterfaceGroupValues__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {control_msgs__msg__InterfaceValue__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
control_msgs__msg__DynamicInterfaceGroupValues__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {control_msgs__msg__DynamicInterfaceGroupValues__TYPE_NAME, 44, 44},
      {control_msgs__msg__DynamicInterfaceGroupValues__FIELDS, 3, 3},
    },
    {control_msgs__msg__DynamicInterfaceGroupValues__REFERENCED_TYPE_DESCRIPTIONS, 3, 3},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&control_msgs__msg__InterfaceValue__EXPECTED_HASH, control_msgs__msg__InterfaceValue__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = control_msgs__msg__InterfaceValue__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "std_msgs/Header header\n"
  "\n"
  "# List of interface group names , e.g. [\"flange_analog_IOs\", \"flange_vacuum\"]\n"
  "string[] interface_groups\n"
  "# Key-value pairs representing interfaces and their corresponding values for each interface group listed in `interface_groups`\n"
  "InterfaceValue[] interface_values";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
control_msgs__msg__DynamicInterfaceGroupValues__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {control_msgs__msg__DynamicInterfaceGroupValues__TYPE_NAME, 44, 44},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 289, 289},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
control_msgs__msg__DynamicInterfaceGroupValues__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *control_msgs__msg__DynamicInterfaceGroupValues__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *control_msgs__msg__InterfaceValue__get_individual_type_description_source(NULL);
    sources[3] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
