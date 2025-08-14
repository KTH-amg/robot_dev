// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from control_interfaces:msg/DetectedObstacle.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "control_interfaces/msg/detected_obstacle.h"


#ifndef CONTROL_INTERFACES__MSG__DETAIL__DETECTED_OBSTACLE__STRUCT_H_
#define CONTROL_INTERFACES__MSG__DETAIL__DETECTED_OBSTACLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/DetectedObstacle in the package control_interfaces.
/**
  * 장애물 감지 정보 메시지
  * 로봇이 라이다로 감지한 장애물의 위치 정보
 */
typedef struct control_interfaces__msg__DetectedObstacle
{
  /// 장애물의 로컬 좌표계 위치 (미터)
  float x;
  float y;
  /// 장애물 방향 (도, 로봇 기준)
  float yaw;
} control_interfaces__msg__DetectedObstacle;

// Struct for a sequence of control_interfaces__msg__DetectedObstacle.
typedef struct control_interfaces__msg__DetectedObstacle__Sequence
{
  control_interfaces__msg__DetectedObstacle * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_interfaces__msg__DetectedObstacle__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CONTROL_INTERFACES__MSG__DETAIL__DETECTED_OBSTACLE__STRUCT_H_
