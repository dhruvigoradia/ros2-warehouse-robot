// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from controller_manager_msgs:msg/HardwareInterface.idl
// generated code does not contain a copyright notice
#ifndef CONTROLLER_MANAGER_MSGS__MSG__DETAIL__HARDWARE_INTERFACE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define CONTROLLER_MANAGER_MSGS__MSG__DETAIL__HARDWARE_INTERFACE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "controller_manager_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "controller_manager_msgs/msg/detail/hardware_interface__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_controller_manager_msgs
bool cdr_serialize_controller_manager_msgs__msg__HardwareInterface(
  const controller_manager_msgs__msg__HardwareInterface * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_controller_manager_msgs
bool cdr_deserialize_controller_manager_msgs__msg__HardwareInterface(
  eprosima::fastcdr::Cdr &,
  controller_manager_msgs__msg__HardwareInterface * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_controller_manager_msgs
size_t get_serialized_size_controller_manager_msgs__msg__HardwareInterface(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_controller_manager_msgs
size_t max_serialized_size_controller_manager_msgs__msg__HardwareInterface(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_controller_manager_msgs
bool cdr_serialize_key_controller_manager_msgs__msg__HardwareInterface(
  const controller_manager_msgs__msg__HardwareInterface * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_controller_manager_msgs
size_t get_serialized_size_key_controller_manager_msgs__msg__HardwareInterface(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_controller_manager_msgs
size_t max_serialized_size_key_controller_manager_msgs__msg__HardwareInterface(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_controller_manager_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, controller_manager_msgs, msg, HardwareInterface)();

#ifdef __cplusplus
}
#endif

#endif  // CONTROLLER_MANAGER_MSGS__MSG__DETAIL__HARDWARE_INTERFACE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
