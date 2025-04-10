// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from controller_manager_msgs:srv/SwitchController.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "controller_manager_msgs/srv/detail/switch_controller__struct.h"
#include "controller_manager_msgs/srv/detail/switch_controller__type_support.h"
#include "controller_manager_msgs/srv/detail/switch_controller__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace controller_manager_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SwitchController_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SwitchController_Request_type_support_ids_t;

static const _SwitchController_Request_type_support_ids_t _SwitchController_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SwitchController_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SwitchController_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SwitchController_Request_type_support_symbol_names_t _SwitchController_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, controller_manager_msgs, srv, SwitchController_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_manager_msgs, srv, SwitchController_Request)),
  }
};

typedef struct _SwitchController_Request_type_support_data_t
{
  void * data[2];
} _SwitchController_Request_type_support_data_t;

static _SwitchController_Request_type_support_data_t _SwitchController_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SwitchController_Request_message_typesupport_map = {
  2,
  "controller_manager_msgs",
  &_SwitchController_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SwitchController_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SwitchController_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SwitchController_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SwitchController_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &controller_manager_msgs__srv__SwitchController_Request__get_type_hash,
  &controller_manager_msgs__srv__SwitchController_Request__get_type_description,
  &controller_manager_msgs__srv__SwitchController_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace controller_manager_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, controller_manager_msgs, srv, SwitchController_Request)() {
  return &::controller_manager_msgs::srv::rosidl_typesupport_c::SwitchController_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "controller_manager_msgs/srv/detail/switch_controller__struct.h"
// already included above
// #include "controller_manager_msgs/srv/detail/switch_controller__type_support.h"
// already included above
// #include "controller_manager_msgs/srv/detail/switch_controller__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace controller_manager_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SwitchController_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SwitchController_Response_type_support_ids_t;

static const _SwitchController_Response_type_support_ids_t _SwitchController_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SwitchController_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SwitchController_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SwitchController_Response_type_support_symbol_names_t _SwitchController_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, controller_manager_msgs, srv, SwitchController_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_manager_msgs, srv, SwitchController_Response)),
  }
};

typedef struct _SwitchController_Response_type_support_data_t
{
  void * data[2];
} _SwitchController_Response_type_support_data_t;

static _SwitchController_Response_type_support_data_t _SwitchController_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SwitchController_Response_message_typesupport_map = {
  2,
  "controller_manager_msgs",
  &_SwitchController_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SwitchController_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SwitchController_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SwitchController_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SwitchController_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &controller_manager_msgs__srv__SwitchController_Response__get_type_hash,
  &controller_manager_msgs__srv__SwitchController_Response__get_type_description,
  &controller_manager_msgs__srv__SwitchController_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace controller_manager_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, controller_manager_msgs, srv, SwitchController_Response)() {
  return &::controller_manager_msgs::srv::rosidl_typesupport_c::SwitchController_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "controller_manager_msgs/srv/detail/switch_controller__struct.h"
// already included above
// #include "controller_manager_msgs/srv/detail/switch_controller__type_support.h"
// already included above
// #include "controller_manager_msgs/srv/detail/switch_controller__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace controller_manager_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SwitchController_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SwitchController_Event_type_support_ids_t;

static const _SwitchController_Event_type_support_ids_t _SwitchController_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SwitchController_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SwitchController_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SwitchController_Event_type_support_symbol_names_t _SwitchController_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, controller_manager_msgs, srv, SwitchController_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_manager_msgs, srv, SwitchController_Event)),
  }
};

typedef struct _SwitchController_Event_type_support_data_t
{
  void * data[2];
} _SwitchController_Event_type_support_data_t;

static _SwitchController_Event_type_support_data_t _SwitchController_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SwitchController_Event_message_typesupport_map = {
  2,
  "controller_manager_msgs",
  &_SwitchController_Event_message_typesupport_ids.typesupport_identifier[0],
  &_SwitchController_Event_message_typesupport_symbol_names.symbol_name[0],
  &_SwitchController_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SwitchController_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SwitchController_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &controller_manager_msgs__srv__SwitchController_Event__get_type_hash,
  &controller_manager_msgs__srv__SwitchController_Event__get_type_description,
  &controller_manager_msgs__srv__SwitchController_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace controller_manager_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, controller_manager_msgs, srv, SwitchController_Event)() {
  return &::controller_manager_msgs::srv::rosidl_typesupport_c::SwitchController_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "controller_manager_msgs/srv/detail/switch_controller__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace controller_manager_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _SwitchController_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SwitchController_type_support_ids_t;

static const _SwitchController_type_support_ids_t _SwitchController_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SwitchController_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SwitchController_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SwitchController_type_support_symbol_names_t _SwitchController_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, controller_manager_msgs, srv, SwitchController)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_manager_msgs, srv, SwitchController)),
  }
};

typedef struct _SwitchController_type_support_data_t
{
  void * data[2];
} _SwitchController_type_support_data_t;

static _SwitchController_type_support_data_t _SwitchController_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SwitchController_service_typesupport_map = {
  2,
  "controller_manager_msgs",
  &_SwitchController_service_typesupport_ids.typesupport_identifier[0],
  &_SwitchController_service_typesupport_symbol_names.symbol_name[0],
  &_SwitchController_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SwitchController_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SwitchController_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &SwitchController_Request_message_type_support_handle,
  &SwitchController_Response_message_type_support_handle,
  &SwitchController_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    controller_manager_msgs,
    srv,
    SwitchController
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    controller_manager_msgs,
    srv,
    SwitchController
  ),
  &controller_manager_msgs__srv__SwitchController__get_type_hash,
  &controller_manager_msgs__srv__SwitchController__get_type_description,
  &controller_manager_msgs__srv__SwitchController__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace controller_manager_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, controller_manager_msgs, srv, SwitchController)() {
  return &::controller_manager_msgs::srv::rosidl_typesupport_c::SwitchController_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
