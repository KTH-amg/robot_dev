// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from control_interfaces:srv/DetectHandle.idl
// generated code does not contain a copyright notice
#include "control_interfaces/srv/detail/detect_handle__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
control_interfaces__srv__DetectHandle_Request__init(control_interfaces__srv__DetectHandle_Request * msg)
{
  if (!msg) {
    return false;
  }
  // left_angle
  // right_angle
  return true;
}

void
control_interfaces__srv__DetectHandle_Request__fini(control_interfaces__srv__DetectHandle_Request * msg)
{
  if (!msg) {
    return;
  }
  // left_angle
  // right_angle
}

bool
control_interfaces__srv__DetectHandle_Request__are_equal(const control_interfaces__srv__DetectHandle_Request * lhs, const control_interfaces__srv__DetectHandle_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // left_angle
  if (lhs->left_angle != rhs->left_angle) {
    return false;
  }
  // right_angle
  if (lhs->right_angle != rhs->right_angle) {
    return false;
  }
  return true;
}

bool
control_interfaces__srv__DetectHandle_Request__copy(
  const control_interfaces__srv__DetectHandle_Request * input,
  control_interfaces__srv__DetectHandle_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // left_angle
  output->left_angle = input->left_angle;
  // right_angle
  output->right_angle = input->right_angle;
  return true;
}

control_interfaces__srv__DetectHandle_Request *
control_interfaces__srv__DetectHandle_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_interfaces__srv__DetectHandle_Request * msg = (control_interfaces__srv__DetectHandle_Request *)allocator.allocate(sizeof(control_interfaces__srv__DetectHandle_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(control_interfaces__srv__DetectHandle_Request));
  bool success = control_interfaces__srv__DetectHandle_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
control_interfaces__srv__DetectHandle_Request__destroy(control_interfaces__srv__DetectHandle_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    control_interfaces__srv__DetectHandle_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
control_interfaces__srv__DetectHandle_Request__Sequence__init(control_interfaces__srv__DetectHandle_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_interfaces__srv__DetectHandle_Request * data = NULL;

  if (size) {
    data = (control_interfaces__srv__DetectHandle_Request *)allocator.zero_allocate(size, sizeof(control_interfaces__srv__DetectHandle_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = control_interfaces__srv__DetectHandle_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        control_interfaces__srv__DetectHandle_Request__fini(&data[i - 1]);
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
control_interfaces__srv__DetectHandle_Request__Sequence__fini(control_interfaces__srv__DetectHandle_Request__Sequence * array)
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
      control_interfaces__srv__DetectHandle_Request__fini(&array->data[i]);
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

control_interfaces__srv__DetectHandle_Request__Sequence *
control_interfaces__srv__DetectHandle_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_interfaces__srv__DetectHandle_Request__Sequence * array = (control_interfaces__srv__DetectHandle_Request__Sequence *)allocator.allocate(sizeof(control_interfaces__srv__DetectHandle_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = control_interfaces__srv__DetectHandle_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
control_interfaces__srv__DetectHandle_Request__Sequence__destroy(control_interfaces__srv__DetectHandle_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    control_interfaces__srv__DetectHandle_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
control_interfaces__srv__DetectHandle_Request__Sequence__are_equal(const control_interfaces__srv__DetectHandle_Request__Sequence * lhs, const control_interfaces__srv__DetectHandle_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!control_interfaces__srv__DetectHandle_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
control_interfaces__srv__DetectHandle_Request__Sequence__copy(
  const control_interfaces__srv__DetectHandle_Request__Sequence * input,
  control_interfaces__srv__DetectHandle_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(control_interfaces__srv__DetectHandle_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    control_interfaces__srv__DetectHandle_Request * data =
      (control_interfaces__srv__DetectHandle_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!control_interfaces__srv__DetectHandle_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          control_interfaces__srv__DetectHandle_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!control_interfaces__srv__DetectHandle_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `flag`
#include "rosidl_runtime_c/string_functions.h"

bool
control_interfaces__srv__DetectHandle_Response__init(control_interfaces__srv__DetectHandle_Response * msg)
{
  if (!msg) {
    return false;
  }
  // flag
  if (!rosidl_runtime_c__String__init(&msg->flag)) {
    control_interfaces__srv__DetectHandle_Response__fini(msg);
    return false;
  }
  return true;
}

void
control_interfaces__srv__DetectHandle_Response__fini(control_interfaces__srv__DetectHandle_Response * msg)
{
  if (!msg) {
    return;
  }
  // flag
  rosidl_runtime_c__String__fini(&msg->flag);
}

bool
control_interfaces__srv__DetectHandle_Response__are_equal(const control_interfaces__srv__DetectHandle_Response * lhs, const control_interfaces__srv__DetectHandle_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // flag
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->flag), &(rhs->flag)))
  {
    return false;
  }
  return true;
}

bool
control_interfaces__srv__DetectHandle_Response__copy(
  const control_interfaces__srv__DetectHandle_Response * input,
  control_interfaces__srv__DetectHandle_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // flag
  if (!rosidl_runtime_c__String__copy(
      &(input->flag), &(output->flag)))
  {
    return false;
  }
  return true;
}

control_interfaces__srv__DetectHandle_Response *
control_interfaces__srv__DetectHandle_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_interfaces__srv__DetectHandle_Response * msg = (control_interfaces__srv__DetectHandle_Response *)allocator.allocate(sizeof(control_interfaces__srv__DetectHandle_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(control_interfaces__srv__DetectHandle_Response));
  bool success = control_interfaces__srv__DetectHandle_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
control_interfaces__srv__DetectHandle_Response__destroy(control_interfaces__srv__DetectHandle_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    control_interfaces__srv__DetectHandle_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
control_interfaces__srv__DetectHandle_Response__Sequence__init(control_interfaces__srv__DetectHandle_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_interfaces__srv__DetectHandle_Response * data = NULL;

  if (size) {
    data = (control_interfaces__srv__DetectHandle_Response *)allocator.zero_allocate(size, sizeof(control_interfaces__srv__DetectHandle_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = control_interfaces__srv__DetectHandle_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        control_interfaces__srv__DetectHandle_Response__fini(&data[i - 1]);
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
control_interfaces__srv__DetectHandle_Response__Sequence__fini(control_interfaces__srv__DetectHandle_Response__Sequence * array)
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
      control_interfaces__srv__DetectHandle_Response__fini(&array->data[i]);
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

control_interfaces__srv__DetectHandle_Response__Sequence *
control_interfaces__srv__DetectHandle_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_interfaces__srv__DetectHandle_Response__Sequence * array = (control_interfaces__srv__DetectHandle_Response__Sequence *)allocator.allocate(sizeof(control_interfaces__srv__DetectHandle_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = control_interfaces__srv__DetectHandle_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
control_interfaces__srv__DetectHandle_Response__Sequence__destroy(control_interfaces__srv__DetectHandle_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    control_interfaces__srv__DetectHandle_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
control_interfaces__srv__DetectHandle_Response__Sequence__are_equal(const control_interfaces__srv__DetectHandle_Response__Sequence * lhs, const control_interfaces__srv__DetectHandle_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!control_interfaces__srv__DetectHandle_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
control_interfaces__srv__DetectHandle_Response__Sequence__copy(
  const control_interfaces__srv__DetectHandle_Response__Sequence * input,
  control_interfaces__srv__DetectHandle_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(control_interfaces__srv__DetectHandle_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    control_interfaces__srv__DetectHandle_Response * data =
      (control_interfaces__srv__DetectHandle_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!control_interfaces__srv__DetectHandle_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          control_interfaces__srv__DetectHandle_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!control_interfaces__srv__DetectHandle_Response__copy(
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
// #include "control_interfaces/srv/detail/detect_handle__functions.h"

bool
control_interfaces__srv__DetectHandle_Event__init(control_interfaces__srv__DetectHandle_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    control_interfaces__srv__DetectHandle_Event__fini(msg);
    return false;
  }
  // request
  if (!control_interfaces__srv__DetectHandle_Request__Sequence__init(&msg->request, 0)) {
    control_interfaces__srv__DetectHandle_Event__fini(msg);
    return false;
  }
  // response
  if (!control_interfaces__srv__DetectHandle_Response__Sequence__init(&msg->response, 0)) {
    control_interfaces__srv__DetectHandle_Event__fini(msg);
    return false;
  }
  return true;
}

void
control_interfaces__srv__DetectHandle_Event__fini(control_interfaces__srv__DetectHandle_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  control_interfaces__srv__DetectHandle_Request__Sequence__fini(&msg->request);
  // response
  control_interfaces__srv__DetectHandle_Response__Sequence__fini(&msg->response);
}

bool
control_interfaces__srv__DetectHandle_Event__are_equal(const control_interfaces__srv__DetectHandle_Event * lhs, const control_interfaces__srv__DetectHandle_Event * rhs)
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
  if (!control_interfaces__srv__DetectHandle_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!control_interfaces__srv__DetectHandle_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
control_interfaces__srv__DetectHandle_Event__copy(
  const control_interfaces__srv__DetectHandle_Event * input,
  control_interfaces__srv__DetectHandle_Event * output)
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
  if (!control_interfaces__srv__DetectHandle_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!control_interfaces__srv__DetectHandle_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

control_interfaces__srv__DetectHandle_Event *
control_interfaces__srv__DetectHandle_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_interfaces__srv__DetectHandle_Event * msg = (control_interfaces__srv__DetectHandle_Event *)allocator.allocate(sizeof(control_interfaces__srv__DetectHandle_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(control_interfaces__srv__DetectHandle_Event));
  bool success = control_interfaces__srv__DetectHandle_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
control_interfaces__srv__DetectHandle_Event__destroy(control_interfaces__srv__DetectHandle_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    control_interfaces__srv__DetectHandle_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
control_interfaces__srv__DetectHandle_Event__Sequence__init(control_interfaces__srv__DetectHandle_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_interfaces__srv__DetectHandle_Event * data = NULL;

  if (size) {
    data = (control_interfaces__srv__DetectHandle_Event *)allocator.zero_allocate(size, sizeof(control_interfaces__srv__DetectHandle_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = control_interfaces__srv__DetectHandle_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        control_interfaces__srv__DetectHandle_Event__fini(&data[i - 1]);
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
control_interfaces__srv__DetectHandle_Event__Sequence__fini(control_interfaces__srv__DetectHandle_Event__Sequence * array)
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
      control_interfaces__srv__DetectHandle_Event__fini(&array->data[i]);
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

control_interfaces__srv__DetectHandle_Event__Sequence *
control_interfaces__srv__DetectHandle_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_interfaces__srv__DetectHandle_Event__Sequence * array = (control_interfaces__srv__DetectHandle_Event__Sequence *)allocator.allocate(sizeof(control_interfaces__srv__DetectHandle_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = control_interfaces__srv__DetectHandle_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
control_interfaces__srv__DetectHandle_Event__Sequence__destroy(control_interfaces__srv__DetectHandle_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    control_interfaces__srv__DetectHandle_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
control_interfaces__srv__DetectHandle_Event__Sequence__are_equal(const control_interfaces__srv__DetectHandle_Event__Sequence * lhs, const control_interfaces__srv__DetectHandle_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!control_interfaces__srv__DetectHandle_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
control_interfaces__srv__DetectHandle_Event__Sequence__copy(
  const control_interfaces__srv__DetectHandle_Event__Sequence * input,
  control_interfaces__srv__DetectHandle_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(control_interfaces__srv__DetectHandle_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    control_interfaces__srv__DetectHandle_Event * data =
      (control_interfaces__srv__DetectHandle_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!control_interfaces__srv__DetectHandle_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          control_interfaces__srv__DetectHandle_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!control_interfaces__srv__DetectHandle_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
