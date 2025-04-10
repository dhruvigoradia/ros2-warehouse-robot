// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from control_msgs:msg/DynamicInterfaceValues.idl
// generated code does not contain a copyright notice
#include "control_msgs/msg/detail/dynamic_interface_values__rosidl_typesupport_fastrtps_cpp.hpp"
#include "control_msgs/msg/detail/dynamic_interface_values__functions.h"
#include "control_msgs/msg/detail/dynamic_interface_values__struct.hpp"

#include <cstddef>
#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_key_Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs

namespace control_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const control_msgs::msg::InterfaceValue &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  control_msgs::msg::InterfaceValue &);
size_t get_serialized_size(
  const control_msgs::msg::InterfaceValue &,
  size_t current_alignment);
size_t
max_serialized_size_InterfaceValue(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const control_msgs::msg::InterfaceValue &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const control_msgs::msg::InterfaceValue &,
  size_t current_alignment);
size_t
max_serialized_size_key_InterfaceValue(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace control_msgs

// functions for control_msgs::msg::InterfaceValue already declared above


namespace control_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_control_msgs
cdr_serialize(
  const control_msgs::msg::DynamicInterfaceValues & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);

  // Member: states
  control_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.states,
    cdr);

  // Member: commands
  control_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.commands,
    cdr);

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_control_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  control_msgs::msg::DynamicInterfaceValues & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: states
  control_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.states);

  // Member: commands
  control_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.commands);

  return true;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_control_msgs
get_serialized_size(
  const control_msgs::msg::DynamicInterfaceValues & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header
  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);

  // Member: states
  current_alignment +=
    control_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.states, current_alignment);

  // Member: commands
  current_alignment +=
    control_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.commands, current_alignment);

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_control_msgs
max_serialized_size_DynamicInterfaceValues(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Member: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // Member: states
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        control_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_InterfaceValue(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // Member: commands
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        control_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_InterfaceValue(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = control_msgs::msg::DynamicInterfaceValues;
    is_plain =
      (
      offsetof(DataType, commands) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_control_msgs
cdr_serialize_key(
  const control_msgs::msg::DynamicInterfaceValues & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.header,
    cdr);

  // Member: states
  control_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.states,
    cdr);

  // Member: commands
  control_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.commands,
    cdr);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_control_msgs
get_serialized_size_key(
  const control_msgs::msg::DynamicInterfaceValues & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header
  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.header, current_alignment);

  // Member: states
  current_alignment +=
    control_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.states, current_alignment);

  // Member: commands
  current_alignment +=
    control_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.commands, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_control_msgs
max_serialized_size_key_DynamicInterfaceValues(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Member: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_key_Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: states
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        control_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_key_InterfaceValue(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: commands
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        control_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_key_InterfaceValue(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = control_msgs::msg::DynamicInterfaceValues;
    is_plain =
      (
      offsetof(DataType, commands) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _DynamicInterfaceValues__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const control_msgs::msg::DynamicInterfaceValues *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _DynamicInterfaceValues__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<control_msgs::msg::DynamicInterfaceValues *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _DynamicInterfaceValues__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const control_msgs::msg::DynamicInterfaceValues *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _DynamicInterfaceValues__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_DynamicInterfaceValues(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _DynamicInterfaceValues__callbacks = {
  "control_msgs::msg",
  "DynamicInterfaceValues",
  _DynamicInterfaceValues__cdr_serialize,
  _DynamicInterfaceValues__cdr_deserialize,
  _DynamicInterfaceValues__get_serialized_size,
  _DynamicInterfaceValues__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _DynamicInterfaceValues__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_DynamicInterfaceValues__callbacks,
  get_message_typesupport_handle_function,
  &control_msgs__msg__DynamicInterfaceValues__get_type_hash,
  &control_msgs__msg__DynamicInterfaceValues__get_type_description,
  &control_msgs__msg__DynamicInterfaceValues__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace control_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_control_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<control_msgs::msg::DynamicInterfaceValues>()
{
  return &control_msgs::msg::typesupport_fastrtps_cpp::_DynamicInterfaceValues__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, control_msgs, msg, DynamicInterfaceValues)() {
  return &control_msgs::msg::typesupport_fastrtps_cpp::_DynamicInterfaceValues__handle;
}

#ifdef __cplusplus
}
#endif
