// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from radar_conti_ars408_msgs:msg/ClusterGeneral.idl
// generated code does not contain a copyright notice

#ifndef RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__CLUSTER_GENERAL__FUNCTIONS_H_
#define RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__CLUSTER_GENERAL__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "radar_conti_ars408_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "radar_conti_ars408_msgs/msg/detail/cluster_general__struct.h"

/// Initialize msg/ClusterGeneral message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * radar_conti_ars408_msgs__msg__ClusterGeneral
 * )) before or use
 * radar_conti_ars408_msgs__msg__ClusterGeneral__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_radar_conti_ars408_msgs
bool
radar_conti_ars408_msgs__msg__ClusterGeneral__init(radar_conti_ars408_msgs__msg__ClusterGeneral * msg);

/// Finalize msg/ClusterGeneral message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_radar_conti_ars408_msgs
void
radar_conti_ars408_msgs__msg__ClusterGeneral__fini(radar_conti_ars408_msgs__msg__ClusterGeneral * msg);

/// Create msg/ClusterGeneral message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * radar_conti_ars408_msgs__msg__ClusterGeneral__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_radar_conti_ars408_msgs
radar_conti_ars408_msgs__msg__ClusterGeneral *
radar_conti_ars408_msgs__msg__ClusterGeneral__create();

/// Destroy msg/ClusterGeneral message.
/**
 * It calls
 * radar_conti_ars408_msgs__msg__ClusterGeneral__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_radar_conti_ars408_msgs
void
radar_conti_ars408_msgs__msg__ClusterGeneral__destroy(radar_conti_ars408_msgs__msg__ClusterGeneral * msg);

/// Check for msg/ClusterGeneral message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_radar_conti_ars408_msgs
bool
radar_conti_ars408_msgs__msg__ClusterGeneral__are_equal(const radar_conti_ars408_msgs__msg__ClusterGeneral * lhs, const radar_conti_ars408_msgs__msg__ClusterGeneral * rhs);

/// Copy a msg/ClusterGeneral message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_radar_conti_ars408_msgs
bool
radar_conti_ars408_msgs__msg__ClusterGeneral__copy(
  const radar_conti_ars408_msgs__msg__ClusterGeneral * input,
  radar_conti_ars408_msgs__msg__ClusterGeneral * output);

/// Initialize array of msg/ClusterGeneral messages.
/**
 * It allocates the memory for the number of elements and calls
 * radar_conti_ars408_msgs__msg__ClusterGeneral__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_radar_conti_ars408_msgs
bool
radar_conti_ars408_msgs__msg__ClusterGeneral__Sequence__init(radar_conti_ars408_msgs__msg__ClusterGeneral__Sequence * array, size_t size);

/// Finalize array of msg/ClusterGeneral messages.
/**
 * It calls
 * radar_conti_ars408_msgs__msg__ClusterGeneral__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_radar_conti_ars408_msgs
void
radar_conti_ars408_msgs__msg__ClusterGeneral__Sequence__fini(radar_conti_ars408_msgs__msg__ClusterGeneral__Sequence * array);

/// Create array of msg/ClusterGeneral messages.
/**
 * It allocates the memory for the array and calls
 * radar_conti_ars408_msgs__msg__ClusterGeneral__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_radar_conti_ars408_msgs
radar_conti_ars408_msgs__msg__ClusterGeneral__Sequence *
radar_conti_ars408_msgs__msg__ClusterGeneral__Sequence__create(size_t size);

/// Destroy array of msg/ClusterGeneral messages.
/**
 * It calls
 * radar_conti_ars408_msgs__msg__ClusterGeneral__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_radar_conti_ars408_msgs
void
radar_conti_ars408_msgs__msg__ClusterGeneral__Sequence__destroy(radar_conti_ars408_msgs__msg__ClusterGeneral__Sequence * array);

/// Check for msg/ClusterGeneral message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_radar_conti_ars408_msgs
bool
radar_conti_ars408_msgs__msg__ClusterGeneral__Sequence__are_equal(const radar_conti_ars408_msgs__msg__ClusterGeneral__Sequence * lhs, const radar_conti_ars408_msgs__msg__ClusterGeneral__Sequence * rhs);

/// Copy an array of msg/ClusterGeneral messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_radar_conti_ars408_msgs
bool
radar_conti_ars408_msgs__msg__ClusterGeneral__Sequence__copy(
  const radar_conti_ars408_msgs__msg__ClusterGeneral__Sequence * input,
  radar_conti_ars408_msgs__msg__ClusterGeneral__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__CLUSTER_GENERAL__FUNCTIONS_H_
