// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from control_msgs:action/ParallelGripperCommand.idl
// generated code does not contain a copyright notice
#include "control_msgs/action/detail/parallel_gripper_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `command`
#include "sensor_msgs/msg/detail/joint_state__functions.h"

bool
control_msgs__action__ParallelGripperCommand_Goal__init(control_msgs__action__ParallelGripperCommand_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // command
  if (!sensor_msgs__msg__JointState__init(&msg->command)) {
    control_msgs__action__ParallelGripperCommand_Goal__fini(msg);
    return false;
  }
  return true;
}

void
control_msgs__action__ParallelGripperCommand_Goal__fini(control_msgs__action__ParallelGripperCommand_Goal * msg)
{
  if (!msg) {
    return;
  }
  // command
  sensor_msgs__msg__JointState__fini(&msg->command);
}

bool
control_msgs__action__ParallelGripperCommand_Goal__are_equal(const control_msgs__action__ParallelGripperCommand_Goal * lhs, const control_msgs__action__ParallelGripperCommand_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // command
  if (!sensor_msgs__msg__JointState__are_equal(
      &(lhs->command), &(rhs->command)))
  {
    return false;
  }
  return true;
}

bool
control_msgs__action__ParallelGripperCommand_Goal__copy(
  const control_msgs__action__ParallelGripperCommand_Goal * input,
  control_msgs__action__ParallelGripperCommand_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // command
  if (!sensor_msgs__msg__JointState__copy(
      &(input->command), &(output->command)))
  {
    return false;
  }
  return true;
}

control_msgs__action__ParallelGripperCommand_Goal *
control_msgs__action__ParallelGripperCommand_Goal__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_msgs__action__ParallelGripperCommand_Goal * msg = (control_msgs__action__ParallelGripperCommand_Goal *)allocator.allocate(sizeof(control_msgs__action__ParallelGripperCommand_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(control_msgs__action__ParallelGripperCommand_Goal));
  bool success = control_msgs__action__ParallelGripperCommand_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
control_msgs__action__ParallelGripperCommand_Goal__destroy(control_msgs__action__ParallelGripperCommand_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    control_msgs__action__ParallelGripperCommand_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
control_msgs__action__ParallelGripperCommand_Goal__Sequence__init(control_msgs__action__ParallelGripperCommand_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_msgs__action__ParallelGripperCommand_Goal * data = NULL;

  if (size) {
    data = (control_msgs__action__ParallelGripperCommand_Goal *)allocator.zero_allocate(size, sizeof(control_msgs__action__ParallelGripperCommand_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = control_msgs__action__ParallelGripperCommand_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        control_msgs__action__ParallelGripperCommand_Goal__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
control_msgs__action__ParallelGripperCommand_Goal__Sequence__fini(control_msgs__action__ParallelGripperCommand_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      control_msgs__action__ParallelGripperCommand_Goal__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

control_msgs__action__ParallelGripperCommand_Goal__Sequence *
control_msgs__action__ParallelGripperCommand_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_msgs__action__ParallelGripperCommand_Goal__Sequence * array = (control_msgs__action__ParallelGripperCommand_Goal__Sequence *)allocator.allocate(sizeof(control_msgs__action__ParallelGripperCommand_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = control_msgs__action__ParallelGripperCommand_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
control_msgs__action__ParallelGripperCommand_Goal__Sequence__destroy(control_msgs__action__ParallelGripperCommand_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    control_msgs__action__ParallelGripperCommand_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
control_msgs__action__ParallelGripperCommand_Goal__Sequence__are_equal(const control_msgs__action__ParallelGripperCommand_Goal__Sequence * lhs, const control_msgs__action__ParallelGripperCommand_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!control_msgs__action__ParallelGripperCommand_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
control_msgs__action__ParallelGripperCommand_Goal__Sequence__copy(
  const control_msgs__action__ParallelGripperCommand_Goal__Sequence * input,
  control_msgs__action__ParallelGripperCommand_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(control_msgs__action__ParallelGripperCommand_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    control_msgs__action__ParallelGripperCommand_Goal * data =
      (control_msgs__action__ParallelGripperCommand_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!control_msgs__action__ParallelGripperCommand_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          control_msgs__action__ParallelGripperCommand_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!control_msgs__action__ParallelGripperCommand_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `state`
// already included above
// #include "sensor_msgs/msg/detail/joint_state__functions.h"

bool
control_msgs__action__ParallelGripperCommand_Result__init(control_msgs__action__ParallelGripperCommand_Result * msg)
{
  if (!msg) {
    return false;
  }
  // state
  if (!sensor_msgs__msg__JointState__init(&msg->state)) {
    control_msgs__action__ParallelGripperCommand_Result__fini(msg);
    return false;
  }
  // stalled
  // reached_goal
  return true;
}

void
control_msgs__action__ParallelGripperCommand_Result__fini(control_msgs__action__ParallelGripperCommand_Result * msg)
{
  if (!msg) {
    return;
  }
  // state
  sensor_msgs__msg__JointState__fini(&msg->state);
  // stalled
  // reached_goal
}

bool
control_msgs__action__ParallelGripperCommand_Result__are_equal(const control_msgs__action__ParallelGripperCommand_Result * lhs, const control_msgs__action__ParallelGripperCommand_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // state
  if (!sensor_msgs__msg__JointState__are_equal(
      &(lhs->state), &(rhs->state)))
  {
    return false;
  }
  // stalled
  if (lhs->stalled != rhs->stalled) {
    return false;
  }
  // reached_goal
  if (lhs->reached_goal != rhs->reached_goal) {
    return false;
  }
  return true;
}

bool
control_msgs__action__ParallelGripperCommand_Result__copy(
  const control_msgs__action__ParallelGripperCommand_Result * input,
  control_msgs__action__ParallelGripperCommand_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // state
  if (!sensor_msgs__msg__JointState__copy(
      &(input->state), &(output->state)))
  {
    return false;
  }
  // stalled
  output->stalled = input->stalled;
  // reached_goal
  output->reached_goal = input->reached_goal;
  return true;
}

control_msgs__action__ParallelGripperCommand_Result *
control_msgs__action__ParallelGripperCommand_Result__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_msgs__action__ParallelGripperCommand_Result * msg = (control_msgs__action__ParallelGripperCommand_Result *)allocator.allocate(sizeof(control_msgs__action__ParallelGripperCommand_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(control_msgs__action__ParallelGripperCommand_Result));
  bool success = control_msgs__action__ParallelGripperCommand_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
control_msgs__action__ParallelGripperCommand_Result__destroy(control_msgs__action__ParallelGripperCommand_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    control_msgs__action__ParallelGripperCommand_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
control_msgs__action__ParallelGripperCommand_Result__Sequence__init(control_msgs__action__ParallelGripperCommand_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_msgs__action__ParallelGripperCommand_Result * data = NULL;

  if (size) {
    data = (control_msgs__action__ParallelGripperCommand_Result *)allocator.zero_allocate(size, sizeof(control_msgs__action__ParallelGripperCommand_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = control_msgs__action__ParallelGripperCommand_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        control_msgs__action__ParallelGripperCommand_Result__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
control_msgs__action__ParallelGripperCommand_Result__Sequence__fini(control_msgs__action__ParallelGripperCommand_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      control_msgs__action__ParallelGripperCommand_Result__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

control_msgs__action__ParallelGripperCommand_Result__Sequence *
control_msgs__action__ParallelGripperCommand_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_msgs__action__ParallelGripperCommand_Result__Sequence * array = (control_msgs__action__ParallelGripperCommand_Result__Sequence *)allocator.allocate(sizeof(control_msgs__action__ParallelGripperCommand_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = control_msgs__action__ParallelGripperCommand_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
control_msgs__action__ParallelGripperCommand_Result__Sequence__destroy(control_msgs__action__ParallelGripperCommand_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    control_msgs__action__ParallelGripperCommand_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
control_msgs__action__ParallelGripperCommand_Result__Sequence__are_equal(const control_msgs__action__ParallelGripperCommand_Result__Sequence * lhs, const control_msgs__action__ParallelGripperCommand_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!control_msgs__action__ParallelGripperCommand_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
control_msgs__action__ParallelGripperCommand_Result__Sequence__copy(
  const control_msgs__action__ParallelGripperCommand_Result__Sequence * input,
  control_msgs__action__ParallelGripperCommand_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(control_msgs__action__ParallelGripperCommand_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    control_msgs__action__ParallelGripperCommand_Result * data =
      (control_msgs__action__ParallelGripperCommand_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!control_msgs__action__ParallelGripperCommand_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          control_msgs__action__ParallelGripperCommand_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!control_msgs__action__ParallelGripperCommand_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `state`
// already included above
// #include "sensor_msgs/msg/detail/joint_state__functions.h"

bool
control_msgs__action__ParallelGripperCommand_Feedback__init(control_msgs__action__ParallelGripperCommand_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // state
  if (!sensor_msgs__msg__JointState__init(&msg->state)) {
    control_msgs__action__ParallelGripperCommand_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
control_msgs__action__ParallelGripperCommand_Feedback__fini(control_msgs__action__ParallelGripperCommand_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // state
  sensor_msgs__msg__JointState__fini(&msg->state);
}

bool
control_msgs__action__ParallelGripperCommand_Feedback__are_equal(const control_msgs__action__ParallelGripperCommand_Feedback * lhs, const control_msgs__action__ParallelGripperCommand_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // state
  if (!sensor_msgs__msg__JointState__are_equal(
      &(lhs->state), &(rhs->state)))
  {
    return false;
  }
  return true;
}

bool
control_msgs__action__ParallelGripperCommand_Feedback__copy(
  const control_msgs__action__ParallelGripperCommand_Feedback * input,
  control_msgs__action__ParallelGripperCommand_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // state
  if (!sensor_msgs__msg__JointState__copy(
      &(input->state), &(output->state)))
  {
    return false;
  }
  return true;
}

control_msgs__action__ParallelGripperCommand_Feedback *
control_msgs__action__ParallelGripperCommand_Feedback__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_msgs__action__ParallelGripperCommand_Feedback * msg = (control_msgs__action__ParallelGripperCommand_Feedback *)allocator.allocate(sizeof(control_msgs__action__ParallelGripperCommand_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(control_msgs__action__ParallelGripperCommand_Feedback));
  bool success = control_msgs__action__ParallelGripperCommand_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
control_msgs__action__ParallelGripperCommand_Feedback__destroy(control_msgs__action__ParallelGripperCommand_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    control_msgs__action__ParallelGripperCommand_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
control_msgs__action__ParallelGripperCommand_Feedback__Sequence__init(control_msgs__action__ParallelGripperCommand_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_msgs__action__ParallelGripperCommand_Feedback * data = NULL;

  if (size) {
    data = (control_msgs__action__ParallelGripperCommand_Feedback *)allocator.zero_allocate(size, sizeof(control_msgs__action__ParallelGripperCommand_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = control_msgs__action__ParallelGripperCommand_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        control_msgs__action__ParallelGripperCommand_Feedback__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
control_msgs__action__ParallelGripperCommand_Feedback__Sequence__fini(control_msgs__action__ParallelGripperCommand_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      control_msgs__action__ParallelGripperCommand_Feedback__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

control_msgs__action__ParallelGripperCommand_Feedback__Sequence *
control_msgs__action__ParallelGripperCommand_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_msgs__action__ParallelGripperCommand_Feedback__Sequence * array = (control_msgs__action__ParallelGripperCommand_Feedback__Sequence *)allocator.allocate(sizeof(control_msgs__action__ParallelGripperCommand_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = control_msgs__action__ParallelGripperCommand_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
control_msgs__action__ParallelGripperCommand_Feedback__Sequence__destroy(control_msgs__action__ParallelGripperCommand_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    control_msgs__action__ParallelGripperCommand_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
control_msgs__action__ParallelGripperCommand_Feedback__Sequence__are_equal(const control_msgs__action__ParallelGripperCommand_Feedback__Sequence * lhs, const control_msgs__action__ParallelGripperCommand_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!control_msgs__action__ParallelGripperCommand_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
control_msgs__action__ParallelGripperCommand_Feedback__Sequence__copy(
  const control_msgs__action__ParallelGripperCommand_Feedback__Sequence * input,
  control_msgs__action__ParallelGripperCommand_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(control_msgs__action__ParallelGripperCommand_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    control_msgs__action__ParallelGripperCommand_Feedback * data =
      (control_msgs__action__ParallelGripperCommand_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!control_msgs__action__ParallelGripperCommand_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          control_msgs__action__ParallelGripperCommand_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!control_msgs__action__ParallelGripperCommand_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "control_msgs/action/detail/parallel_gripper_command__functions.h"

bool
control_msgs__action__ParallelGripperCommand_SendGoal_Request__init(control_msgs__action__ParallelGripperCommand_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    control_msgs__action__ParallelGripperCommand_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!control_msgs__action__ParallelGripperCommand_Goal__init(&msg->goal)) {
    control_msgs__action__ParallelGripperCommand_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
control_msgs__action__ParallelGripperCommand_SendGoal_Request__fini(control_msgs__action__ParallelGripperCommand_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  control_msgs__action__ParallelGripperCommand_Goal__fini(&msg->goal);
}

bool
control_msgs__action__ParallelGripperCommand_SendGoal_Request__are_equal(const control_msgs__action__ParallelGripperCommand_SendGoal_Request * lhs, const control_msgs__action__ParallelGripperCommand_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!control_msgs__action__ParallelGripperCommand_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
control_msgs__action__ParallelGripperCommand_SendGoal_Request__copy(
  const control_msgs__action__ParallelGripperCommand_SendGoal_Request * input,
  control_msgs__action__ParallelGripperCommand_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!control_msgs__action__ParallelGripperCommand_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

control_msgs__action__ParallelGripperCommand_SendGoal_Request *
control_msgs__action__ParallelGripperCommand_SendGoal_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_msgs__action__ParallelGripperCommand_SendGoal_Request * msg = (control_msgs__action__ParallelGripperCommand_SendGoal_Request *)allocator.allocate(sizeof(control_msgs__action__ParallelGripperCommand_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(control_msgs__action__ParallelGripperCommand_SendGoal_Request));
  bool success = control_msgs__action__ParallelGripperCommand_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
control_msgs__action__ParallelGripperCommand_SendGoal_Request__destroy(control_msgs__action__ParallelGripperCommand_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    control_msgs__action__ParallelGripperCommand_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
control_msgs__action__ParallelGripperCommand_SendGoal_Request__Sequence__init(control_msgs__action__ParallelGripperCommand_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_msgs__action__ParallelGripperCommand_SendGoal_Request * data = NULL;

  if (size) {
    data = (control_msgs__action__ParallelGripperCommand_SendGoal_Request *)allocator.zero_allocate(size, sizeof(control_msgs__action__ParallelGripperCommand_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = control_msgs__action__ParallelGripperCommand_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        control_msgs__action__ParallelGripperCommand_SendGoal_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
control_msgs__action__ParallelGripperCommand_SendGoal_Request__Sequence__fini(control_msgs__action__ParallelGripperCommand_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      control_msgs__action__ParallelGripperCommand_SendGoal_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

control_msgs__action__ParallelGripperCommand_SendGoal_Request__Sequence *
control_msgs__action__ParallelGripperCommand_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_msgs__action__ParallelGripperCommand_SendGoal_Request__Sequence * array = (control_msgs__action__ParallelGripperCommand_SendGoal_Request__Sequence *)allocator.allocate(sizeof(control_msgs__action__ParallelGripperCommand_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = control_msgs__action__ParallelGripperCommand_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
control_msgs__action__ParallelGripperCommand_SendGoal_Request__Sequence__destroy(control_msgs__action__ParallelGripperCommand_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    control_msgs__action__ParallelGripperCommand_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
control_msgs__action__ParallelGripperCommand_SendGoal_Request__Sequence__are_equal(const control_msgs__action__ParallelGripperCommand_SendGoal_Request__Sequence * lhs, const control_msgs__action__ParallelGripperCommand_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!control_msgs__action__ParallelGripperCommand_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
control_msgs__action__ParallelGripperCommand_SendGoal_Request__Sequence__copy(
  const control_msgs__action__ParallelGripperCommand_SendGoal_Request__Sequence * input,
  control_msgs__action__ParallelGripperCommand_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(control_msgs__action__ParallelGripperCommand_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    control_msgs__action__ParallelGripperCommand_SendGoal_Request * data =
      (control_msgs__action__ParallelGripperCommand_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!control_msgs__action__ParallelGripperCommand_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          control_msgs__action__ParallelGripperCommand_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!control_msgs__action__ParallelGripperCommand_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
control_msgs__action__ParallelGripperCommand_SendGoal_Response__init(control_msgs__action__ParallelGripperCommand_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    control_msgs__action__ParallelGripperCommand_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
control_msgs__action__ParallelGripperCommand_SendGoal_Response__fini(control_msgs__action__ParallelGripperCommand_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
control_msgs__action__ParallelGripperCommand_SendGoal_Response__are_equal(const control_msgs__action__ParallelGripperCommand_SendGoal_Response * lhs, const control_msgs__action__ParallelGripperCommand_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
control_msgs__action__ParallelGripperCommand_SendGoal_Response__copy(
  const control_msgs__action__ParallelGripperCommand_SendGoal_Response * input,
  control_msgs__action__ParallelGripperCommand_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

control_msgs__action__ParallelGripperCommand_SendGoal_Response *
control_msgs__action__ParallelGripperCommand_SendGoal_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_msgs__action__ParallelGripperCommand_SendGoal_Response * msg = (control_msgs__action__ParallelGripperCommand_SendGoal_Response *)allocator.allocate(sizeof(control_msgs__action__ParallelGripperCommand_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(control_msgs__action__ParallelGripperCommand_SendGoal_Response));
  bool success = control_msgs__action__ParallelGripperCommand_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
control_msgs__action__ParallelGripperCommand_SendGoal_Response__destroy(control_msgs__action__ParallelGripperCommand_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    control_msgs__action__ParallelGripperCommand_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
control_msgs__action__ParallelGripperCommand_SendGoal_Response__Sequence__init(control_msgs__action__ParallelGripperCommand_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_msgs__action__ParallelGripperCommand_SendGoal_Response * data = NULL;

  if (size) {
    data = (control_msgs__action__ParallelGripperCommand_SendGoal_Response *)allocator.zero_allocate(size, sizeof(control_msgs__action__ParallelGripperCommand_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = control_msgs__action__ParallelGripperCommand_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        control_msgs__action__ParallelGripperCommand_SendGoal_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
control_msgs__action__ParallelGripperCommand_SendGoal_Response__Sequence__fini(control_msgs__action__ParallelGripperCommand_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      control_msgs__action__ParallelGripperCommand_SendGoal_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

control_msgs__action__ParallelGripperCommand_SendGoal_Response__Sequence *
control_msgs__action__ParallelGripperCommand_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_msgs__action__ParallelGripperCommand_SendGoal_Response__Sequence * array = (control_msgs__action__ParallelGripperCommand_SendGoal_Response__Sequence *)allocator.allocate(sizeof(control_msgs__action__ParallelGripperCommand_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = control_msgs__action__ParallelGripperCommand_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
control_msgs__action__ParallelGripperCommand_SendGoal_Response__Sequence__destroy(control_msgs__action__ParallelGripperCommand_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    control_msgs__action__ParallelGripperCommand_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
control_msgs__action__ParallelGripperCommand_SendGoal_Response__Sequence__are_equal(const control_msgs__action__ParallelGripperCommand_SendGoal_Response__Sequence * lhs, const control_msgs__action__ParallelGripperCommand_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!control_msgs__action__ParallelGripperCommand_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
control_msgs__action__ParallelGripperCommand_SendGoal_Response__Sequence__copy(
  const control_msgs__action__ParallelGripperCommand_SendGoal_Response__Sequence * input,
  control_msgs__action__ParallelGripperCommand_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(control_msgs__action__ParallelGripperCommand_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    control_msgs__action__ParallelGripperCommand_SendGoal_Response * data =
      (control_msgs__action__ParallelGripperCommand_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!control_msgs__action__ParallelGripperCommand_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          control_msgs__action__ParallelGripperCommand_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!control_msgs__action__ParallelGripperCommand_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "control_msgs/action/detail/parallel_gripper_command__functions.h"

bool
control_msgs__action__ParallelGripperCommand_SendGoal_Event__init(control_msgs__action__ParallelGripperCommand_SendGoal_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    control_msgs__action__ParallelGripperCommand_SendGoal_Event__fini(msg);
    return false;
  }
  // request
  if (!control_msgs__action__ParallelGripperCommand_SendGoal_Request__Sequence__init(&msg->request, 0)) {
    control_msgs__action__ParallelGripperCommand_SendGoal_Event__fini(msg);
    return false;
  }
  // response
  if (!control_msgs__action__ParallelGripperCommand_SendGoal_Response__Sequence__init(&msg->response, 0)) {
    control_msgs__action__ParallelGripperCommand_SendGoal_Event__fini(msg);
    return false;
  }
  return true;
}

void
control_msgs__action__ParallelGripperCommand_SendGoal_Event__fini(control_msgs__action__ParallelGripperCommand_SendGoal_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  control_msgs__action__ParallelGripperCommand_SendGoal_Request__Sequence__fini(&msg->request);
  // response
  control_msgs__action__ParallelGripperCommand_SendGoal_Response__Sequence__fini(&msg->response);
}

bool
control_msgs__action__ParallelGripperCommand_SendGoal_Event__are_equal(const control_msgs__action__ParallelGripperCommand_SendGoal_Event * lhs, const control_msgs__action__ParallelGripperCommand_SendGoal_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!control_msgs__action__ParallelGripperCommand_SendGoal_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!control_msgs__action__ParallelGripperCommand_SendGoal_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
control_msgs__action__ParallelGripperCommand_SendGoal_Event__copy(
  const control_msgs__action__ParallelGripperCommand_SendGoal_Event * input,
  control_msgs__action__ParallelGripperCommand_SendGoal_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!control_msgs__action__ParallelGripperCommand_SendGoal_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!control_msgs__action__ParallelGripperCommand_SendGoal_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

control_msgs__action__ParallelGripperCommand_SendGoal_Event *
control_msgs__action__ParallelGripperCommand_SendGoal_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_msgs__action__ParallelGripperCommand_SendGoal_Event * msg = (control_msgs__action__ParallelGripperCommand_SendGoal_Event *)allocator.allocate(sizeof(control_msgs__action__ParallelGripperCommand_SendGoal_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(control_msgs__action__ParallelGripperCommand_SendGoal_Event));
  bool success = control_msgs__action__ParallelGripperCommand_SendGoal_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
control_msgs__action__ParallelGripperCommand_SendGoal_Event__destroy(control_msgs__action__ParallelGripperCommand_SendGoal_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    control_msgs__action__ParallelGripperCommand_SendGoal_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
control_msgs__action__ParallelGripperCommand_SendGoal_Event__Sequence__init(control_msgs__action__ParallelGripperCommand_SendGoal_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_msgs__action__ParallelGripperCommand_SendGoal_Event * data = NULL;

  if (size) {
    data = (control_msgs__action__ParallelGripperCommand_SendGoal_Event *)allocator.zero_allocate(size, sizeof(control_msgs__action__ParallelGripperCommand_SendGoal_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = control_msgs__action__ParallelGripperCommand_SendGoal_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        control_msgs__action__ParallelGripperCommand_SendGoal_Event__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
control_msgs__action__ParallelGripperCommand_SendGoal_Event__Sequence__fini(control_msgs__action__ParallelGripperCommand_SendGoal_Event__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      control_msgs__action__ParallelGripperCommand_SendGoal_Event__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

control_msgs__action__ParallelGripperCommand_SendGoal_Event__Sequence *
control_msgs__action__ParallelGripperCommand_SendGoal_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_msgs__action__ParallelGripperCommand_SendGoal_Event__Sequence * array = (control_msgs__action__ParallelGripperCommand_SendGoal_Event__Sequence *)allocator.allocate(sizeof(control_msgs__action__ParallelGripperCommand_SendGoal_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = control_msgs__action__ParallelGripperCommand_SendGoal_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
control_msgs__action__ParallelGripperCommand_SendGoal_Event__Sequence__destroy(control_msgs__action__ParallelGripperCommand_SendGoal_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    control_msgs__action__ParallelGripperCommand_SendGoal_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
control_msgs__action__ParallelGripperCommand_SendGoal_Event__Sequence__are_equal(const control_msgs__action__ParallelGripperCommand_SendGoal_Event__Sequence * lhs, const control_msgs__action__ParallelGripperCommand_SendGoal_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!control_msgs__action__ParallelGripperCommand_SendGoal_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
control_msgs__action__ParallelGripperCommand_SendGoal_Event__Sequence__copy(
  const control_msgs__action__ParallelGripperCommand_SendGoal_Event__Sequence * input,
  control_msgs__action__ParallelGripperCommand_SendGoal_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(control_msgs__action__ParallelGripperCommand_SendGoal_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    control_msgs__action__ParallelGripperCommand_SendGoal_Event * data =
      (control_msgs__action__ParallelGripperCommand_SendGoal_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!control_msgs__action__ParallelGripperCommand_SendGoal_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          control_msgs__action__ParallelGripperCommand_SendGoal_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!control_msgs__action__ParallelGripperCommand_SendGoal_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
control_msgs__action__ParallelGripperCommand_GetResult_Request__init(control_msgs__action__ParallelGripperCommand_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    control_msgs__action__ParallelGripperCommand_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
control_msgs__action__ParallelGripperCommand_GetResult_Request__fini(control_msgs__action__ParallelGripperCommand_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
control_msgs__action__ParallelGripperCommand_GetResult_Request__are_equal(const control_msgs__action__ParallelGripperCommand_GetResult_Request * lhs, const control_msgs__action__ParallelGripperCommand_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
control_msgs__action__ParallelGripperCommand_GetResult_Request__copy(
  const control_msgs__action__ParallelGripperCommand_GetResult_Request * input,
  control_msgs__action__ParallelGripperCommand_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

control_msgs__action__ParallelGripperCommand_GetResult_Request *
control_msgs__action__ParallelGripperCommand_GetResult_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_msgs__action__ParallelGripperCommand_GetResult_Request * msg = (control_msgs__action__ParallelGripperCommand_GetResult_Request *)allocator.allocate(sizeof(control_msgs__action__ParallelGripperCommand_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(control_msgs__action__ParallelGripperCommand_GetResult_Request));
  bool success = control_msgs__action__ParallelGripperCommand_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
control_msgs__action__ParallelGripperCommand_GetResult_Request__destroy(control_msgs__action__ParallelGripperCommand_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    control_msgs__action__ParallelGripperCommand_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
control_msgs__action__ParallelGripperCommand_GetResult_Request__Sequence__init(control_msgs__action__ParallelGripperCommand_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_msgs__action__ParallelGripperCommand_GetResult_Request * data = NULL;

  if (size) {
    data = (control_msgs__action__ParallelGripperCommand_GetResult_Request *)allocator.zero_allocate(size, sizeof(control_msgs__action__ParallelGripperCommand_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = control_msgs__action__ParallelGripperCommand_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        control_msgs__action__ParallelGripperCommand_GetResult_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
control_msgs__action__ParallelGripperCommand_GetResult_Request__Sequence__fini(control_msgs__action__ParallelGripperCommand_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      control_msgs__action__ParallelGripperCommand_GetResult_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

control_msgs__action__ParallelGripperCommand_GetResult_Request__Sequence *
control_msgs__action__ParallelGripperCommand_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_msgs__action__ParallelGripperCommand_GetResult_Request__Sequence * array = (control_msgs__action__ParallelGripperCommand_GetResult_Request__Sequence *)allocator.allocate(sizeof(control_msgs__action__ParallelGripperCommand_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = control_msgs__action__ParallelGripperCommand_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
control_msgs__action__ParallelGripperCommand_GetResult_Request__Sequence__destroy(control_msgs__action__ParallelGripperCommand_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    control_msgs__action__ParallelGripperCommand_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
control_msgs__action__ParallelGripperCommand_GetResult_Request__Sequence__are_equal(const control_msgs__action__ParallelGripperCommand_GetResult_Request__Sequence * lhs, const control_msgs__action__ParallelGripperCommand_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!control_msgs__action__ParallelGripperCommand_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
control_msgs__action__ParallelGripperCommand_GetResult_Request__Sequence__copy(
  const control_msgs__action__ParallelGripperCommand_GetResult_Request__Sequence * input,
  control_msgs__action__ParallelGripperCommand_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(control_msgs__action__ParallelGripperCommand_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    control_msgs__action__ParallelGripperCommand_GetResult_Request * data =
      (control_msgs__action__ParallelGripperCommand_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!control_msgs__action__ParallelGripperCommand_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          control_msgs__action__ParallelGripperCommand_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!control_msgs__action__ParallelGripperCommand_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "control_msgs/action/detail/parallel_gripper_command__functions.h"

bool
control_msgs__action__ParallelGripperCommand_GetResult_Response__init(control_msgs__action__ParallelGripperCommand_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!control_msgs__action__ParallelGripperCommand_Result__init(&msg->result)) {
    control_msgs__action__ParallelGripperCommand_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
control_msgs__action__ParallelGripperCommand_GetResult_Response__fini(control_msgs__action__ParallelGripperCommand_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  control_msgs__action__ParallelGripperCommand_Result__fini(&msg->result);
}

bool
control_msgs__action__ParallelGripperCommand_GetResult_Response__are_equal(const control_msgs__action__ParallelGripperCommand_GetResult_Response * lhs, const control_msgs__action__ParallelGripperCommand_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!control_msgs__action__ParallelGripperCommand_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
control_msgs__action__ParallelGripperCommand_GetResult_Response__copy(
  const control_msgs__action__ParallelGripperCommand_GetResult_Response * input,
  control_msgs__action__ParallelGripperCommand_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!control_msgs__action__ParallelGripperCommand_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

control_msgs__action__ParallelGripperCommand_GetResult_Response *
control_msgs__action__ParallelGripperCommand_GetResult_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_msgs__action__ParallelGripperCommand_GetResult_Response * msg = (control_msgs__action__ParallelGripperCommand_GetResult_Response *)allocator.allocate(sizeof(control_msgs__action__ParallelGripperCommand_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(control_msgs__action__ParallelGripperCommand_GetResult_Response));
  bool success = control_msgs__action__ParallelGripperCommand_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
control_msgs__action__ParallelGripperCommand_GetResult_Response__destroy(control_msgs__action__ParallelGripperCommand_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    control_msgs__action__ParallelGripperCommand_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
control_msgs__action__ParallelGripperCommand_GetResult_Response__Sequence__init(control_msgs__action__ParallelGripperCommand_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_msgs__action__ParallelGripperCommand_GetResult_Response * data = NULL;

  if (size) {
    data = (control_msgs__action__ParallelGripperCommand_GetResult_Response *)allocator.zero_allocate(size, sizeof(control_msgs__action__ParallelGripperCommand_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = control_msgs__action__ParallelGripperCommand_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        control_msgs__action__ParallelGripperCommand_GetResult_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
control_msgs__action__ParallelGripperCommand_GetResult_Response__Sequence__fini(control_msgs__action__ParallelGripperCommand_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      control_msgs__action__ParallelGripperCommand_GetResult_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

control_msgs__action__ParallelGripperCommand_GetResult_Response__Sequence *
control_msgs__action__ParallelGripperCommand_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_msgs__action__ParallelGripperCommand_GetResult_Response__Sequence * array = (control_msgs__action__ParallelGripperCommand_GetResult_Response__Sequence *)allocator.allocate(sizeof(control_msgs__action__ParallelGripperCommand_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = control_msgs__action__ParallelGripperCommand_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
control_msgs__action__ParallelGripperCommand_GetResult_Response__Sequence__destroy(control_msgs__action__ParallelGripperCommand_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    control_msgs__action__ParallelGripperCommand_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
control_msgs__action__ParallelGripperCommand_GetResult_Response__Sequence__are_equal(const control_msgs__action__ParallelGripperCommand_GetResult_Response__Sequence * lhs, const control_msgs__action__ParallelGripperCommand_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!control_msgs__action__ParallelGripperCommand_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
control_msgs__action__ParallelGripperCommand_GetResult_Response__Sequence__copy(
  const control_msgs__action__ParallelGripperCommand_GetResult_Response__Sequence * input,
  control_msgs__action__ParallelGripperCommand_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(control_msgs__action__ParallelGripperCommand_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    control_msgs__action__ParallelGripperCommand_GetResult_Response * data =
      (control_msgs__action__ParallelGripperCommand_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!control_msgs__action__ParallelGripperCommand_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          control_msgs__action__ParallelGripperCommand_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!control_msgs__action__ParallelGripperCommand_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
// already included above
// #include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "control_msgs/action/detail/parallel_gripper_command__functions.h"

bool
control_msgs__action__ParallelGripperCommand_GetResult_Event__init(control_msgs__action__ParallelGripperCommand_GetResult_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    control_msgs__action__ParallelGripperCommand_GetResult_Event__fini(msg);
    return false;
  }
  // request
  if (!control_msgs__action__ParallelGripperCommand_GetResult_Request__Sequence__init(&msg->request, 0)) {
    control_msgs__action__ParallelGripperCommand_GetResult_Event__fini(msg);
    return false;
  }
  // response
  if (!control_msgs__action__ParallelGripperCommand_GetResult_Response__Sequence__init(&msg->response, 0)) {
    control_msgs__action__ParallelGripperCommand_GetResult_Event__fini(msg);
    return false;
  }
  return true;
}

void
control_msgs__action__ParallelGripperCommand_GetResult_Event__fini(control_msgs__action__ParallelGripperCommand_GetResult_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  control_msgs__action__ParallelGripperCommand_GetResult_Request__Sequence__fini(&msg->request);
  // response
  control_msgs__action__ParallelGripperCommand_GetResult_Response__Sequence__fini(&msg->response);
}

bool
control_msgs__action__ParallelGripperCommand_GetResult_Event__are_equal(const control_msgs__action__ParallelGripperCommand_GetResult_Event * lhs, const control_msgs__action__ParallelGripperCommand_GetResult_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!control_msgs__action__ParallelGripperCommand_GetResult_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!control_msgs__action__ParallelGripperCommand_GetResult_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
control_msgs__action__ParallelGripperCommand_GetResult_Event__copy(
  const control_msgs__action__ParallelGripperCommand_GetResult_Event * input,
  control_msgs__action__ParallelGripperCommand_GetResult_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!control_msgs__action__ParallelGripperCommand_GetResult_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!control_msgs__action__ParallelGripperCommand_GetResult_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

control_msgs__action__ParallelGripperCommand_GetResult_Event *
control_msgs__action__ParallelGripperCommand_GetResult_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_msgs__action__ParallelGripperCommand_GetResult_Event * msg = (control_msgs__action__ParallelGripperCommand_GetResult_Event *)allocator.allocate(sizeof(control_msgs__action__ParallelGripperCommand_GetResult_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(control_msgs__action__ParallelGripperCommand_GetResult_Event));
  bool success = control_msgs__action__ParallelGripperCommand_GetResult_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
control_msgs__action__ParallelGripperCommand_GetResult_Event__destroy(control_msgs__action__ParallelGripperCommand_GetResult_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    control_msgs__action__ParallelGripperCommand_GetResult_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
control_msgs__action__ParallelGripperCommand_GetResult_Event__Sequence__init(control_msgs__action__ParallelGripperCommand_GetResult_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_msgs__action__ParallelGripperCommand_GetResult_Event * data = NULL;

  if (size) {
    data = (control_msgs__action__ParallelGripperCommand_GetResult_Event *)allocator.zero_allocate(size, sizeof(control_msgs__action__ParallelGripperCommand_GetResult_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = control_msgs__action__ParallelGripperCommand_GetResult_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        control_msgs__action__ParallelGripperCommand_GetResult_Event__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
control_msgs__action__ParallelGripperCommand_GetResult_Event__Sequence__fini(control_msgs__action__ParallelGripperCommand_GetResult_Event__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      control_msgs__action__ParallelGripperCommand_GetResult_Event__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

control_msgs__action__ParallelGripperCommand_GetResult_Event__Sequence *
control_msgs__action__ParallelGripperCommand_GetResult_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_msgs__action__ParallelGripperCommand_GetResult_Event__Sequence * array = (control_msgs__action__ParallelGripperCommand_GetResult_Event__Sequence *)allocator.allocate(sizeof(control_msgs__action__ParallelGripperCommand_GetResult_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = control_msgs__action__ParallelGripperCommand_GetResult_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
control_msgs__action__ParallelGripperCommand_GetResult_Event__Sequence__destroy(control_msgs__action__ParallelGripperCommand_GetResult_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    control_msgs__action__ParallelGripperCommand_GetResult_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
control_msgs__action__ParallelGripperCommand_GetResult_Event__Sequence__are_equal(const control_msgs__action__ParallelGripperCommand_GetResult_Event__Sequence * lhs, const control_msgs__action__ParallelGripperCommand_GetResult_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!control_msgs__action__ParallelGripperCommand_GetResult_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
control_msgs__action__ParallelGripperCommand_GetResult_Event__Sequence__copy(
  const control_msgs__action__ParallelGripperCommand_GetResult_Event__Sequence * input,
  control_msgs__action__ParallelGripperCommand_GetResult_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(control_msgs__action__ParallelGripperCommand_GetResult_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    control_msgs__action__ParallelGripperCommand_GetResult_Event * data =
      (control_msgs__action__ParallelGripperCommand_GetResult_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!control_msgs__action__ParallelGripperCommand_GetResult_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          control_msgs__action__ParallelGripperCommand_GetResult_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!control_msgs__action__ParallelGripperCommand_GetResult_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "control_msgs/action/detail/parallel_gripper_command__functions.h"

bool
control_msgs__action__ParallelGripperCommand_FeedbackMessage__init(control_msgs__action__ParallelGripperCommand_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    control_msgs__action__ParallelGripperCommand_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!control_msgs__action__ParallelGripperCommand_Feedback__init(&msg->feedback)) {
    control_msgs__action__ParallelGripperCommand_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
control_msgs__action__ParallelGripperCommand_FeedbackMessage__fini(control_msgs__action__ParallelGripperCommand_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  control_msgs__action__ParallelGripperCommand_Feedback__fini(&msg->feedback);
}

bool
control_msgs__action__ParallelGripperCommand_FeedbackMessage__are_equal(const control_msgs__action__ParallelGripperCommand_FeedbackMessage * lhs, const control_msgs__action__ParallelGripperCommand_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!control_msgs__action__ParallelGripperCommand_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
control_msgs__action__ParallelGripperCommand_FeedbackMessage__copy(
  const control_msgs__action__ParallelGripperCommand_FeedbackMessage * input,
  control_msgs__action__ParallelGripperCommand_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!control_msgs__action__ParallelGripperCommand_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

control_msgs__action__ParallelGripperCommand_FeedbackMessage *
control_msgs__action__ParallelGripperCommand_FeedbackMessage__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_msgs__action__ParallelGripperCommand_FeedbackMessage * msg = (control_msgs__action__ParallelGripperCommand_FeedbackMessage *)allocator.allocate(sizeof(control_msgs__action__ParallelGripperCommand_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(control_msgs__action__ParallelGripperCommand_FeedbackMessage));
  bool success = control_msgs__action__ParallelGripperCommand_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
control_msgs__action__ParallelGripperCommand_FeedbackMessage__destroy(control_msgs__action__ParallelGripperCommand_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    control_msgs__action__ParallelGripperCommand_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
control_msgs__action__ParallelGripperCommand_FeedbackMessage__Sequence__init(control_msgs__action__ParallelGripperCommand_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_msgs__action__ParallelGripperCommand_FeedbackMessage * data = NULL;

  if (size) {
    data = (control_msgs__action__ParallelGripperCommand_FeedbackMessage *)allocator.zero_allocate(size, sizeof(control_msgs__action__ParallelGripperCommand_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = control_msgs__action__ParallelGripperCommand_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        control_msgs__action__ParallelGripperCommand_FeedbackMessage__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
control_msgs__action__ParallelGripperCommand_FeedbackMessage__Sequence__fini(control_msgs__action__ParallelGripperCommand_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      control_msgs__action__ParallelGripperCommand_FeedbackMessage__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

control_msgs__action__ParallelGripperCommand_FeedbackMessage__Sequence *
control_msgs__action__ParallelGripperCommand_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_msgs__action__ParallelGripperCommand_FeedbackMessage__Sequence * array = (control_msgs__action__ParallelGripperCommand_FeedbackMessage__Sequence *)allocator.allocate(sizeof(control_msgs__action__ParallelGripperCommand_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = control_msgs__action__ParallelGripperCommand_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
control_msgs__action__ParallelGripperCommand_FeedbackMessage__Sequence__destroy(control_msgs__action__ParallelGripperCommand_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    control_msgs__action__ParallelGripperCommand_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
control_msgs__action__ParallelGripperCommand_FeedbackMessage__Sequence__are_equal(const control_msgs__action__ParallelGripperCommand_FeedbackMessage__Sequence * lhs, const control_msgs__action__ParallelGripperCommand_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!control_msgs__action__ParallelGripperCommand_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
control_msgs__action__ParallelGripperCommand_FeedbackMessage__Sequence__copy(
  const control_msgs__action__ParallelGripperCommand_FeedbackMessage__Sequence * input,
  control_msgs__action__ParallelGripperCommand_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(control_msgs__action__ParallelGripperCommand_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    control_msgs__action__ParallelGripperCommand_FeedbackMessage * data =
      (control_msgs__action__ParallelGripperCommand_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!control_msgs__action__ParallelGripperCommand_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          control_msgs__action__ParallelGripperCommand_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!control_msgs__action__ParallelGripperCommand_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
