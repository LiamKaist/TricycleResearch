// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from radar_conti_ars408_msgs:msg/ClusterQuality.idl
// generated code does not contain a copyright notice

#ifndef RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__CLUSTER_QUALITY__FUNCTIONS_H_
#define RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__CLUSTER_QUALITY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "radar_conti_ars408_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "radar_conti_ars408_msgs/msg/detail/cluster_quality__struct.h"

/// Initialize msg/ClusterQuality message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * radar_conti_ars408_msgs__msg__ClusterQuality
 * )) before or use
 * radar_conti_ars408_msgs__msg__ClusterQuality__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_radar_conti_ars408_msgs
bool
radar_conti_ars408_msgs__msg__ClusterQuality__init(radar_conti_ars408_msgs__msg__ClusterQuality * msg);

/// Finalize msg/ClusterQuality message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_radar_conti_ars408_msgs
void
radar_conti_ars408_msgs__msg__ClusterQuality__fini(radar_conti_ars408_msgs__msg__ClusterQuality * msg);

/// Create msg/ClusterQuality message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * radar_conti_ars408_msgs__msg__ClusterQuality__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_radar_conti_ars408_msgs
radar_conti_ars408_msgs__msg__ClusterQuality *
radar_conti_ars408_msgs__msg__ClusterQuality__create();

/// Destroy msg/ClusterQuality message.
/**
 * It calls
 * radar_conti_ars408_msgs__msg__ClusterQuality__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_radar_conti_ars408_msgs
void
radar_conti_ars408_msgs__msg__ClusterQuality__destroy(radar_conti_ars408_msgs__msg__ClusterQuality * msg);

/// Check for msg/ClusterQuality message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_radar_conti_ars408_msgs
bool
radar_conti_ars408_msgs__msg__ClusterQuality__are_equal(const radar_conti_ars408_msgs__msg__ClusterQuality * lhs, const radar_conti_ars408_msgs__msg__ClusterQuality * rhs);

/// Copy a msg/ClusterQuality message.
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
radar_conti_ars408_msgs__msg__ClusterQuality__copy(
  const radar_conti_ars408_msgs__msg__ClusterQuality * input,
  radar_conti_ars408_msgs__msg__ClusterQuality * output);

/// Initialize array of msg/ClusterQuality messages.
/**
 * It allocates the memory for the number of elements and calls
 * radar_conti_ars408_msgs__msg__ClusterQuality__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_radar_conti_ars408_msgs
bool
radar_conti_ars408_msgs__msg__ClusterQuality__Sequence__init(radar_conti_ars408_msgs__msg__ClusterQuality__Sequence * array, size_t size);

/// Finalize array of msg/ClusterQuality messages.
/**
 * It calls
 * radar_conti_ars408_msgs__msg__ClusterQuality__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_radar_conti_ars408_msgs
void
radar_conti_ars408_msgs__msg__ClusterQuality__Sequence__fini(radar_conti_ars408_msgs__msg__ClusterQuality__Sequence * array);

/// Create array of msg/ClusterQuality messages.
/**
 * It allocates the memory for the array and calls
 * radar_conti_ars408_msgs__msg__ClusterQuality__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_radar_conti_ars408_msgs
radar_conti_ars408_msgs__msg__ClusterQuality__Sequence *
radar_conti_ars408_msgs__msg__ClusterQuality__Sequence__create(size_t size);

/// Destroy array of msg/ClusterQuality messages.
/**
 * It calls
 * radar_conti_ars408_msgs__msg__ClusterQuality__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_radar_conti_ars408_msgs
void
radar_conti_ars408_msgs__msg__ClusterQuality__Sequence__destroy(radar_conti_ars408_msgs__msg__ClusterQuality__Sequence * array);

/// Check for msg/ClusterQuality message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_radar_conti_ars408_msgs
bool
radar_conti_ars408_msgs__msg__ClusterQuality__Sequence__are_equal(const radar_conti_ars408_msgs__msg__ClusterQuality__Sequence * lhs, const radar_conti_ars408_msgs__msg__ClusterQuality__Sequence * rhs);

/// Copy an array of msg/ClusterQuality messages.
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
radar_conti_ars408_msgs__msg__ClusterQuality__Sequence__copy(
  const radar_conti_ars408_msgs__msg__ClusterQuality__Sequence * input,
  radar_conti_ars408_msgs__msg__ClusterQuality__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__CLUSTER_QUALITY__FUNCTIONS_H_
