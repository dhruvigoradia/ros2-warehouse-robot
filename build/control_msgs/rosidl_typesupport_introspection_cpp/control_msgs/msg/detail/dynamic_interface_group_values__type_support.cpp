// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from control_msgs:msg/DynamicInterfaceGroupValues.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "control_msgs/msg/detail/dynamic_interface_group_values__functions.h"
#include "control_msgs/msg/detail/dynamic_interface_group_values__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace control_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void DynamicInterfaceGroupValues_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) control_msgs::msg::DynamicInterfaceGroupValues(_init);
}

void DynamicInterfaceGroupValues_fini_function(void * message_memory)
{
  auto typed_message = static_cast<control_msgs::msg::DynamicInterfaceGroupValues *>(message_memory);
  typed_message->~DynamicInterfaceGroupValues();
}

size_t size_function__DynamicInterfaceGroupValues__interface_groups(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__DynamicInterfaceGroupValues__interface_groups(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__DynamicInterfaceGroupValues__interface_groups(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__DynamicInterfaceGroupValues__interface_groups(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__DynamicInterfaceGroupValues__interface_groups(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__DynamicInterfaceGroupValues__interface_groups(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__DynamicInterfaceGroupValues__interface_groups(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__DynamicInterfaceGroupValues__interface_groups(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__DynamicInterfaceGroupValues__interface_values(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<control_msgs::msg::InterfaceValue> *>(untyped_member);
  return member->size();
}

const void * get_const_function__DynamicInterfaceGroupValues__interface_values(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<control_msgs::msg::InterfaceValue> *>(untyped_member);
  return &member[index];
}

void * get_function__DynamicInterfaceGroupValues__interface_values(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<control_msgs::msg::InterfaceValue> *>(untyped_member);
  return &member[index];
}

void fetch_function__DynamicInterfaceGroupValues__interface_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const control_msgs::msg::InterfaceValue *>(
    get_const_function__DynamicInterfaceGroupValues__interface_values(untyped_member, index));
  auto & value = *reinterpret_cast<control_msgs::msg::InterfaceValue *>(untyped_value);
  value = item;
}

void assign_function__DynamicInterfaceGroupValues__interface_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<control_msgs::msg::InterfaceValue *>(
    get_function__DynamicInterfaceGroupValues__interface_values(untyped_member, index));
  const auto & value = *reinterpret_cast<const control_msgs::msg::InterfaceValue *>(untyped_value);
  item = value;
}

void resize_function__DynamicInterfaceGroupValues__interface_values(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<control_msgs::msg::InterfaceValue> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember DynamicInterfaceGroupValues_message_member_array[3] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs::msg::DynamicInterfaceGroupValues, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "interface_groups",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs::msg::DynamicInterfaceGroupValues, interface_groups),  // bytes offset in struct
    nullptr,  // default value
    size_function__DynamicInterfaceGroupValues__interface_groups,  // size() function pointer
    get_const_function__DynamicInterfaceGroupValues__interface_groups,  // get_const(index) function pointer
    get_function__DynamicInterfaceGroupValues__interface_groups,  // get(index) function pointer
    fetch_function__DynamicInterfaceGroupValues__interface_groups,  // fetch(index, &value) function pointer
    assign_function__DynamicInterfaceGroupValues__interface_groups,  // assign(index, value) function pointer
    resize_function__DynamicInterfaceGroupValues__interface_groups  // resize(index) function pointer
  },
  {
    "interface_values",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<control_msgs::msg::InterfaceValue>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs::msg::DynamicInterfaceGroupValues, interface_values),  // bytes offset in struct
    nullptr,  // default value
    size_function__DynamicInterfaceGroupValues__interface_values,  // size() function pointer
    get_const_function__DynamicInterfaceGroupValues__interface_values,  // get_const(index) function pointer
    get_function__DynamicInterfaceGroupValues__interface_values,  // get(index) function pointer
    fetch_function__DynamicInterfaceGroupValues__interface_values,  // fetch(index, &value) function pointer
    assign_function__DynamicInterfaceGroupValues__interface_values,  // assign(index, value) function pointer
    resize_function__DynamicInterfaceGroupValues__interface_values  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers DynamicInterfaceGroupValues_message_members = {
  "control_msgs::msg",  // message namespace
  "DynamicInterfaceGroupValues",  // message name
  3,  // number of fields
  sizeof(control_msgs::msg::DynamicInterfaceGroupValues),
  false,  // has_any_key_member_
  DynamicInterfaceGroupValues_message_member_array,  // message members
  DynamicInterfaceGroupValues_init_function,  // function to initialize message memory (memory has to be allocated)
  DynamicInterfaceGroupValues_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t DynamicInterfaceGroupValues_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DynamicInterfaceGroupValues_message_members,
  get_message_typesupport_handle_function,
  &control_msgs__msg__DynamicInterfaceGroupValues__get_type_hash,
  &control_msgs__msg__DynamicInterfaceGroupValues__get_type_description,
  &control_msgs__msg__DynamicInterfaceGroupValues__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace control_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<control_msgs::msg::DynamicInterfaceGroupValues>()
{
  return &::control_msgs::msg::rosidl_typesupport_introspection_cpp::DynamicInterfaceGroupValues_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, control_msgs, msg, DynamicInterfaceGroupValues)() {
  return &::control_msgs::msg::rosidl_typesupport_introspection_cpp::DynamicInterfaceGroupValues_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
