// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from mirs_msgs:action/ParameterTrigger.idl
// generated code does not contain a copyright notice

#ifndef MIRS_MSGS__ACTION__DETAIL__PARAMETER_TRIGGER__FUNCTIONS_H_
#define MIRS_MSGS__ACTION__DETAIL__PARAMETER_TRIGGER__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "mirs_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "mirs_msgs/action/detail/parameter_trigger__struct.h"

/// Initialize action/ParameterTrigger message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mirs_msgs__action__ParameterTrigger_Goal
 * )) before or use
 * mirs_msgs__action__ParameterTrigger_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mirs_msgs
bool
mirs_msgs__action__ParameterTrigger_Goal__init(mirs_msgs__action__ParameterTrigger_Goal * msg);

/// Finalize action/ParameterTrigger message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mirs_msgs
void
mirs_msgs__action__ParameterTrigger_Goal__fini(mirs_msgs__action__ParameterTrigger_Goal * msg);

/// Create action/ParameterTrigger message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mirs_msgs__action__ParameterTrigger_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mirs_msgs
mirs_msgs__action__ParameterTrigger_Goal *
mirs_msgs__action__ParameterTrigger_Goal__create();

/// Destroy action/ParameterTrigger message.
/**
 * It calls
 * mirs_msgs__action__ParameterTrigger_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mirs_msgs
void
mirs_msgs__action__ParameterTrigger_Goal__destroy(mirs_msgs__action__ParameterTrigger_Goal * msg);

/// Check for action/ParameterTrigger message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mirs_msgs
bool
mirs_msgs__action__ParameterTrigger_Goal__are_equal(const mirs_msgs__action__ParameterTrigger_Goal * lhs, const mirs_msgs__action__ParameterTrigger_Goal * rhs);

/// Copy a action/ParameterTrigger message.
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
ROSIDL_GENERATOR_C_PUBLIC_mirs_msgs
bool
mirs_msgs__action__ParameterTrigger_Goal__copy(
  const mirs_msgs__action__ParameterTrigger_Goal * input,
  mirs_msgs__action__ParameterTrigger_Goal * output);

/// Initialize array of action/ParameterTrigger messages.
/**
 * It allocates the memory for the number of elements and calls
 * mirs_msgs__action__ParameterTrigger_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mirs_msgs
bool
mirs_msgs__action__ParameterTrigger_Goal__Sequence__init(mirs_msgs__action__ParameterTrigger_Goal__Sequence * array, size_t size);

/// Finalize array of action/ParameterTrigger messages.
/**
 * It calls
 * mirs_msgs__action__ParameterTrigger_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mirs_msgs
void
mirs_msgs__action__ParameterTrigger_Goal__Sequence__fini(mirs_msgs__action__ParameterTrigger_Goal__Sequence * array);

/// Create array of action/ParameterTrigger messages.
/**
 * It allocates the memory for the array and calls
 * mirs_msgs__action__ParameterTrigger_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mirs_msgs
mirs_msgs__action__ParameterTrigger_Goal__Sequence *
mirs_msgs__action__ParameterTrigger_Goal__Sequence__create(size_t size);

/// Destroy array of action/ParameterTrigger messages.
/**
 * It calls
 * mirs_msgs__action__ParameterTrigger_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mirs_msgs
void
mirs_msgs__action__ParameterTrigger_Goal__Sequence__destroy(mirs_msgs__action__ParameterTrigger_Goal__Sequence * array);

/// Check for action/ParameterTrigger message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mirs_msgs
bool
mirs_msgs__action__ParameterTrigger_Goal__Sequence__are_equal(const mirs_msgs__action__ParameterTrigger_Goal__Sequence * lhs, const mirs_msgs__action__ParameterTrigger_Goal__Sequence * rhs);

/// Copy an array of action/ParameterTrigger messages.
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
ROSIDL_GENERATOR_C_PUBLIC_mirs_msgs
bool
mirs_msgs__action__ParameterTrigger_Goal__Sequence__copy(
  const mirs_msgs__action__ParameterTrigger_Goal__Sequence * input,
  mirs_msgs__action__ParameterTrigger_Goal__Sequence * output);

/// Initialize action/ParameterTrigger message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mirs_msgs__action__ParameterTrigger_Result
 * )) before or use
 * mirs_msgs__action__ParameterTrigger_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mirs_msgs
bool
mirs_msgs__action__ParameterTrigger_Result__init(mirs_msgs__action__ParameterTrigger_Result * msg);

/// Finalize action/ParameterTrigger message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mirs_msgs
void
mirs_msgs__action__ParameterTrigger_Result__fini(mirs_msgs__action__ParameterTrigger_Result * msg);

/// Create action/ParameterTrigger message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mirs_msgs__action__ParameterTrigger_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mirs_msgs
mirs_msgs__action__ParameterTrigger_Result *
mirs_msgs__action__ParameterTrigger_Result__create();

/// Destroy action/ParameterTrigger message.
/**
 * It calls
 * mirs_msgs__action__ParameterTrigger_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mirs_msgs
void
mirs_msgs__action__ParameterTrigger_Result__destroy(mirs_msgs__action__ParameterTrigger_Result * msg);

/// Check for action/ParameterTrigger message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mirs_msgs
bool
mirs_msgs__action__ParameterTrigger_Result__are_equal(const mirs_msgs__action__ParameterTrigger_Result * lhs, const mirs_msgs__action__ParameterTrigger_Result * rhs);

/// Copy a action/ParameterTrigger message.
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
ROSIDL_GENERATOR_C_PUBLIC_mirs_msgs
bool
mirs_msgs__action__ParameterTrigger_Result__copy(
  const mirs_msgs__action__ParameterTrigger_Result * input,
  mirs_msgs__action__ParameterTrigger_Result * output);

/// Initialize array of action/ParameterTrigger messages.
/**
 * It allocates the memory for the number of elements and calls
 * mirs_msgs__action__ParameterTrigger_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mirs_msgs
bool
mirs_msgs__action__ParameterTrigger_Result__Sequence__init(mirs_msgs__action__ParameterTrigger_Result__Sequence * array, size_t size);

/// Finalize array of action/ParameterTrigger messages.
/**
 * It calls
 * mirs_msgs__action__ParameterTrigger_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mirs_msgs
void
mirs_msgs__action__ParameterTrigger_Result__Sequence__fini(mirs_msgs__action__ParameterTrigger_Result__Sequence * array);

/// Create array of action/ParameterTrigger messages.
/**
 * It allocates the memory for the array and calls
 * mirs_msgs__action__ParameterTrigger_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mirs_msgs
mirs_msgs__action__ParameterTrigger_Result__Sequence *
mirs_msgs__action__ParameterTrigger_Result__Sequence__create(size_t size);

/// Destroy array of action/ParameterTrigger messages.
/**
 * It calls
 * mirs_msgs__action__ParameterTrigger_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mirs_msgs
void
mirs_msgs__action__ParameterTrigger_Result__Sequence__destroy(mirs_msgs__action__ParameterTrigger_Result__Sequence * array);

/// Check for action/ParameterTrigger message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mirs_msgs
bool
mirs_msgs__action__ParameterTrigger_Result__Sequence__are_equal(const mirs_msgs__action__ParameterTrigger_Result__Sequence * lhs, const mirs_msgs__action__ParameterTrigger_Result__Sequence * rhs);

/// Copy an array of action/ParameterTrigger messages.
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
ROSIDL_GENERATOR_C_PUBLIC_mirs_msgs
bool
mirs_msgs__action__ParameterTrigger_Result__Sequence__copy(
  const mirs_msgs__action__ParameterTrigger_Result__Sequence * input,
  mirs_msgs__action__ParameterTrigger_Result__Sequence * output);

/// Initialize action/ParameterTrigger message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mirs_msgs__action__ParameterTrigger_Feedback
 * )) before or use
 * mirs_msgs__action__ParameterTrigger_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mirs_msgs
bool
mirs_msgs__action__ParameterTrigger_Feedback__init(mirs_msgs__action__ParameterTrigger_Feedback * msg);

/// Finalize action/ParameterTrigger message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mirs_msgs
void
mirs_msgs__action__ParameterTrigger_Feedback__fini(mirs_msgs__action__ParameterTrigger_Feedback * msg);

/// Create action/ParameterTrigger message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mirs_msgs__action__ParameterTrigger_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mirs_msgs
mirs_msgs__action__ParameterTrigger_Feedback *
mirs_msgs__action__ParameterTrigger_Feedback__create();

/// Destroy action/ParameterTrigger message.
/**
 * It calls
 * mirs_msgs__action__ParameterTrigger_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mirs_msgs
void
mirs_msgs__action__ParameterTrigger_Feedback__destroy(mirs_msgs__action__ParameterTrigger_Feedback * msg);

/// Check for action/ParameterTrigger message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mirs_msgs
bool
mirs_msgs__action__ParameterTrigger_Feedback__are_equal(const mirs_msgs__action__ParameterTrigger_Feedback * lhs, const mirs_msgs__action__ParameterTrigger_Feedback * rhs);

/// Copy a action/ParameterTrigger message.
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
ROSIDL_GENERATOR_C_PUBLIC_mirs_msgs
bool
mirs_msgs__action__ParameterTrigger_Feedback__copy(
  const mirs_msgs__action__ParameterTrigger_Feedback * input,
  mirs_msgs__action__ParameterTrigger_Feedback * output);

/// Initialize array of action/ParameterTrigger messages.
/**
 * It allocates the memory for the number of elements and calls
 * mirs_msgs__action__ParameterTrigger_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mirs_msgs
bool
mirs_msgs__action__ParameterTrigger_Feedback__Sequence__init(mirs_msgs__action__ParameterTrigger_Feedback__Sequence * array, size_t size);

/// Finalize array of action/ParameterTrigger messages.
/**
 * It calls
 * mirs_msgs__action__ParameterTrigger_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mirs_msgs
void
mirs_msgs__action__ParameterTrigger_Feedback__Sequence__fini(mirs_msgs__action__ParameterTrigger_Feedback__Sequence * array);

/// Create array of action/ParameterTrigger messages.
/**
 * It allocates the memory for the array and calls
 * mirs_msgs__action__ParameterTrigger_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mirs_msgs
mirs_msgs__action__ParameterTrigger_Feedback__Sequence *
mirs_msgs__action__ParameterTrigger_Feedback__Sequence__create(size_t size);

/// Destroy array of action/ParameterTrigger messages.
/**
 * It calls
 * mirs_msgs__action__ParameterTrigger_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mirs_msgs
void
mirs_msgs__action__ParameterTrigger_Feedback__Sequence__destroy(mirs_msgs__action__ParameterTrigger_Feedback__Sequence * array);

/// Check for action/ParameterTrigger message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mirs_msgs
bool
mirs_msgs__action__ParameterTrigger_Feedback__Sequence__are_equal(const mirs_msgs__action__ParameterTrigger_Feedback__Sequence * lhs, const mirs_msgs__action__ParameterTrigger_Feedback__Sequence * rhs);

/// Copy an array of action/ParameterTrigger messages.
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
ROSIDL_GENERATOR_C_PUBLIC_mirs_msgs
bool
mirs_msgs__action__ParameterTrigger_Feedback__Sequence__copy(
  const mirs_msgs__action__ParameterTrigger_Feedback__Sequence * input,
  mirs_msgs__action__ParameterTrigger_Feedback__Sequence * output);

/// Initialize action/ParameterTrigger message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mirs_msgs__action__ParameterTrigger_SendGoal_Request
 * )) before or use
 * mirs_msgs__action__ParameterTrigger_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mirs_msgs
bool
mirs_msgs__action__ParameterTrigger_SendGoal_Request__init(mirs_msgs__action__ParameterTrigger_SendGoal_Request * msg);

/// Finalize action/ParameterTrigger message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mirs_msgs
void
mirs_msgs__action__ParameterTrigger_SendGoal_Request__fini(mirs_msgs__action__ParameterTrigger_SendGoal_Request * msg);

/// Create action/ParameterTrigger message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mirs_msgs__action__ParameterTrigger_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mirs_msgs
mirs_msgs__action__ParameterTrigger_SendGoal_Request *
mirs_msgs__action__ParameterTrigger_SendGoal_Request__create();

/// Destroy action/ParameterTrigger message.
/**
 * It calls
 * mirs_msgs__action__ParameterTrigger_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mirs_msgs
void
mirs_msgs__action__ParameterTrigger_SendGoal_Request__destroy(mirs_msgs__action__ParameterTrigger_SendGoal_Request * msg);

/// Check for action/ParameterTrigger message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mirs_msgs
bool
mirs_msgs__action__ParameterTrigger_SendGoal_Request__are_equal(const mirs_msgs__action__ParameterTrigger_SendGoal_Request * lhs, const mirs_msgs__action__ParameterTrigger_SendGoal_Request * rhs);

/// Copy a action/ParameterTrigger message.
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
ROSIDL_GENERATOR_C_PUBLIC_mirs_msgs
bool
mirs_msgs__action__ParameterTrigger_SendGoal_Request__copy(
  const mirs_msgs__action__ParameterTrigger_SendGoal_Request * input,
  mirs_msgs__action__ParameterTrigger_SendGoal_Request * output);

/// Initialize array of action/ParameterTrigger messages.
/**
 * It allocates the memory for the number of elements and calls
 * mirs_msgs__action__ParameterTrigger_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mirs_msgs
bool
mirs_msgs__action__ParameterTrigger_SendGoal_Request__Sequence__init(mirs_msgs__action__ParameterTrigger_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/ParameterTrigger messages.
/**
 * It calls
 * mirs_msgs__action__ParameterTrigger_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mirs_msgs
void
mirs_msgs__action__ParameterTrigger_SendGoal_Request__Sequence__fini(mirs_msgs__action__ParameterTrigger_SendGoal_Request__Sequence * array);

/// Create array of action/ParameterTrigger messages.
/**
 * It allocates the memory for the array and calls
 * mirs_msgs__action__ParameterTrigger_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mirs_msgs
mirs_msgs__action__ParameterTrigger_SendGoal_Request__Sequence *
mirs_msgs__action__ParameterTrigger_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/ParameterTrigger messages.
/**
 * It calls
 * mirs_msgs__action__ParameterTrigger_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mirs_msgs
void
mirs_msgs__action__ParameterTrigger_SendGoal_Request__Sequence__destroy(mirs_msgs__action__ParameterTrigger_SendGoal_Request__Sequence * array);

/// Check for action/ParameterTrigger message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mirs_msgs
bool
mirs_msgs__action__ParameterTrigger_SendGoal_Request__Sequence__are_equal(const mirs_msgs__action__ParameterTrigger_SendGoal_Request__Sequence * lhs, const mirs_msgs__action__ParameterTrigger_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/ParameterTrigger messages.
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
ROSIDL_GENERATOR_C_PUBLIC_mirs_msgs
bool
mirs_msgs__action__ParameterTrigger_SendGoal_Request__Sequence__copy(
  const mirs_msgs__action__ParameterTrigger_SendGoal_Request__Sequence * input,
  mirs_msgs__action__ParameterTrigger_SendGoal_Request__Sequence * output);

/// Initialize action/ParameterTrigger message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mirs_msgs__action__ParameterTrigger_SendGoal_Response
 * )) before or use
 * mirs_msgs__action__ParameterTrigger_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mirs_msgs
bool
mirs_msgs__action__ParameterTrigger_SendGoal_Response__init(mirs_msgs__action__ParameterTrigger_SendGoal_Response * msg);

/// Finalize action/ParameterTrigger message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mirs_msgs
void
mirs_msgs__action__ParameterTrigger_SendGoal_Response__fini(mirs_msgs__action__ParameterTrigger_SendGoal_Response * msg);

/// Create action/ParameterTrigger message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mirs_msgs__action__ParameterTrigger_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mirs_msgs
mirs_msgs__action__ParameterTrigger_SendGoal_Response *
mirs_msgs__action__ParameterTrigger_SendGoal_Response__create();

/// Destroy action/ParameterTrigger message.
/**
 * It calls
 * mirs_msgs__action__ParameterTrigger_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mirs_msgs
void
mirs_msgs__action__ParameterTrigger_SendGoal_Response__destroy(mirs_msgs__action__ParameterTrigger_SendGoal_Response * msg);

/// Check for action/ParameterTrigger message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mirs_msgs
bool
mirs_msgs__action__ParameterTrigger_SendGoal_Response__are_equal(const mirs_msgs__action__ParameterTrigger_SendGoal_Response * lhs, const mirs_msgs__action__ParameterTrigger_SendGoal_Response * rhs);

/// Copy a action/ParameterTrigger message.
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
ROSIDL_GENERATOR_C_PUBLIC_mirs_msgs
bool
mirs_msgs__action__ParameterTrigger_SendGoal_Response__copy(
  const mirs_msgs__action__ParameterTrigger_SendGoal_Response * input,
  mirs_msgs__action__ParameterTrigger_SendGoal_Response * output);

/// Initialize array of action/ParameterTrigger messages.
/**
 * It allocates the memory for the number of elements and calls
 * mirs_msgs__action__ParameterTrigger_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mirs_msgs
bool
mirs_msgs__action__ParameterTrigger_SendGoal_Response__Sequence__init(mirs_msgs__action__ParameterTrigger_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/ParameterTrigger messages.
/**
 * It calls
 * mirs_msgs__action__ParameterTrigger_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mirs_msgs
void
mirs_msgs__action__ParameterTrigger_SendGoal_Response__Sequence__fini(mirs_msgs__action__ParameterTrigger_SendGoal_Response__Sequence * array);

/// Create array of action/ParameterTrigger messages.
/**
 * It allocates the memory for the array and calls
 * mirs_msgs__action__ParameterTrigger_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mirs_msgs
mirs_msgs__action__ParameterTrigger_SendGoal_Response__Sequence *
mirs_msgs__action__ParameterTrigger_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/ParameterTrigger messages.
/**
 * It calls
 * mirs_msgs__action__ParameterTrigger_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mirs_msgs
void
mirs_msgs__action__ParameterTrigger_SendGoal_Response__Sequence__destroy(mirs_msgs__action__ParameterTrigger_SendGoal_Response__Sequence * array);

/// Check for action/ParameterTrigger message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mirs_msgs
bool
mirs_msgs__action__ParameterTrigger_SendGoal_Response__Sequence__are_equal(const mirs_msgs__action__ParameterTrigger_SendGoal_Response__Sequence * lhs, const mirs_msgs__action__ParameterTrigger_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/ParameterTrigger messages.
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
ROSIDL_GENERATOR_C_PUBLIC_mirs_msgs
bool
mirs_msgs__action__ParameterTrigger_SendGoal_Response__Sequence__copy(
  const mirs_msgs__action__ParameterTrigger_SendGoal_Response__Sequence * input,
  mirs_msgs__action__ParameterTrigger_SendGoal_Response__Sequence * output);

/// Initialize action/ParameterTrigger message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mirs_msgs__action__ParameterTrigger_GetResult_Request
 * )) before or use
 * mirs_msgs__action__ParameterTrigger_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mirs_msgs
bool
mirs_msgs__action__ParameterTrigger_GetResult_Request__init(mirs_msgs__action__ParameterTrigger_GetResult_Request * msg);

/// Finalize action/ParameterTrigger message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mirs_msgs
void
mirs_msgs__action__ParameterTrigger_GetResult_Request__fini(mirs_msgs__action__ParameterTrigger_GetResult_Request * msg);

/// Create action/ParameterTrigger message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mirs_msgs__action__ParameterTrigger_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mirs_msgs
mirs_msgs__action__ParameterTrigger_GetResult_Request *
mirs_msgs__action__ParameterTrigger_GetResult_Request__create();

/// Destroy action/ParameterTrigger message.
/**
 * It calls
 * mirs_msgs__action__ParameterTrigger_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mirs_msgs
void
mirs_msgs__action__ParameterTrigger_GetResult_Request__destroy(mirs_msgs__action__ParameterTrigger_GetResult_Request * msg);

/// Check for action/ParameterTrigger message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mirs_msgs
bool
mirs_msgs__action__ParameterTrigger_GetResult_Request__are_equal(const mirs_msgs__action__ParameterTrigger_GetResult_Request * lhs, const mirs_msgs__action__ParameterTrigger_GetResult_Request * rhs);

/// Copy a action/ParameterTrigger message.
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
ROSIDL_GENERATOR_C_PUBLIC_mirs_msgs
bool
mirs_msgs__action__ParameterTrigger_GetResult_Request__copy(
  const mirs_msgs__action__ParameterTrigger_GetResult_Request * input,
  mirs_msgs__action__ParameterTrigger_GetResult_Request * output);

/// Initialize array of action/ParameterTrigger messages.
/**
 * It allocates the memory for the number of elements and calls
 * mirs_msgs__action__ParameterTrigger_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mirs_msgs
bool
mirs_msgs__action__ParameterTrigger_GetResult_Request__Sequence__init(mirs_msgs__action__ParameterTrigger_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/ParameterTrigger messages.
/**
 * It calls
 * mirs_msgs__action__ParameterTrigger_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mirs_msgs
void
mirs_msgs__action__ParameterTrigger_GetResult_Request__Sequence__fini(mirs_msgs__action__ParameterTrigger_GetResult_Request__Sequence * array);

/// Create array of action/ParameterTrigger messages.
/**
 * It allocates the memory for the array and calls
 * mirs_msgs__action__ParameterTrigger_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mirs_msgs
mirs_msgs__action__ParameterTrigger_GetResult_Request__Sequence *
mirs_msgs__action__ParameterTrigger_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/ParameterTrigger messages.
/**
 * It calls
 * mirs_msgs__action__ParameterTrigger_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mirs_msgs
void
mirs_msgs__action__ParameterTrigger_GetResult_Request__Sequence__destroy(mirs_msgs__action__ParameterTrigger_GetResult_Request__Sequence * array);

/// Check for action/ParameterTrigger message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mirs_msgs
bool
mirs_msgs__action__ParameterTrigger_GetResult_Request__Sequence__are_equal(const mirs_msgs__action__ParameterTrigger_GetResult_Request__Sequence * lhs, const mirs_msgs__action__ParameterTrigger_GetResult_Request__Sequence * rhs);

/// Copy an array of action/ParameterTrigger messages.
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
ROSIDL_GENERATOR_C_PUBLIC_mirs_msgs
bool
mirs_msgs__action__ParameterTrigger_GetResult_Request__Sequence__copy(
  const mirs_msgs__action__ParameterTrigger_GetResult_Request__Sequence * input,
  mirs_msgs__action__ParameterTrigger_GetResult_Request__Sequence * output);

/// Initialize action/ParameterTrigger message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mirs_msgs__action__ParameterTrigger_GetResult_Response
 * )) before or use
 * mirs_msgs__action__ParameterTrigger_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mirs_msgs
bool
mirs_msgs__action__ParameterTrigger_GetResult_Response__init(mirs_msgs__action__ParameterTrigger_GetResult_Response * msg);

/// Finalize action/ParameterTrigger message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mirs_msgs
void
mirs_msgs__action__ParameterTrigger_GetResult_Response__fini(mirs_msgs__action__ParameterTrigger_GetResult_Response * msg);

/// Create action/ParameterTrigger message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mirs_msgs__action__ParameterTrigger_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mirs_msgs
mirs_msgs__action__ParameterTrigger_GetResult_Response *
mirs_msgs__action__ParameterTrigger_GetResult_Response__create();

/// Destroy action/ParameterTrigger message.
/**
 * It calls
 * mirs_msgs__action__ParameterTrigger_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mirs_msgs
void
mirs_msgs__action__ParameterTrigger_GetResult_Response__destroy(mirs_msgs__action__ParameterTrigger_GetResult_Response * msg);

/// Check for action/ParameterTrigger message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mirs_msgs
bool
mirs_msgs__action__ParameterTrigger_GetResult_Response__are_equal(const mirs_msgs__action__ParameterTrigger_GetResult_Response * lhs, const mirs_msgs__action__ParameterTrigger_GetResult_Response * rhs);

/// Copy a action/ParameterTrigger message.
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
ROSIDL_GENERATOR_C_PUBLIC_mirs_msgs
bool
mirs_msgs__action__ParameterTrigger_GetResult_Response__copy(
  const mirs_msgs__action__ParameterTrigger_GetResult_Response * input,
  mirs_msgs__action__ParameterTrigger_GetResult_Response * output);

/// Initialize array of action/ParameterTrigger messages.
/**
 * It allocates the memory for the number of elements and calls
 * mirs_msgs__action__ParameterTrigger_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mirs_msgs
bool
mirs_msgs__action__ParameterTrigger_GetResult_Response__Sequence__init(mirs_msgs__action__ParameterTrigger_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/ParameterTrigger messages.
/**
 * It calls
 * mirs_msgs__action__ParameterTrigger_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mirs_msgs
void
mirs_msgs__action__ParameterTrigger_GetResult_Response__Sequence__fini(mirs_msgs__action__ParameterTrigger_GetResult_Response__Sequence * array);

/// Create array of action/ParameterTrigger messages.
/**
 * It allocates the memory for the array and calls
 * mirs_msgs__action__ParameterTrigger_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mirs_msgs
mirs_msgs__action__ParameterTrigger_GetResult_Response__Sequence *
mirs_msgs__action__ParameterTrigger_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/ParameterTrigger messages.
/**
 * It calls
 * mirs_msgs__action__ParameterTrigger_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mirs_msgs
void
mirs_msgs__action__ParameterTrigger_GetResult_Response__Sequence__destroy(mirs_msgs__action__ParameterTrigger_GetResult_Response__Sequence * array);

/// Check for action/ParameterTrigger message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mirs_msgs
bool
mirs_msgs__action__ParameterTrigger_GetResult_Response__Sequence__are_equal(const mirs_msgs__action__ParameterTrigger_GetResult_Response__Sequence * lhs, const mirs_msgs__action__ParameterTrigger_GetResult_Response__Sequence * rhs);

/// Copy an array of action/ParameterTrigger messages.
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
ROSIDL_GENERATOR_C_PUBLIC_mirs_msgs
bool
mirs_msgs__action__ParameterTrigger_GetResult_Response__Sequence__copy(
  const mirs_msgs__action__ParameterTrigger_GetResult_Response__Sequence * input,
  mirs_msgs__action__ParameterTrigger_GetResult_Response__Sequence * output);

/// Initialize action/ParameterTrigger message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mirs_msgs__action__ParameterTrigger_FeedbackMessage
 * )) before or use
 * mirs_msgs__action__ParameterTrigger_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mirs_msgs
bool
mirs_msgs__action__ParameterTrigger_FeedbackMessage__init(mirs_msgs__action__ParameterTrigger_FeedbackMessage * msg);

/// Finalize action/ParameterTrigger message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mirs_msgs
void
mirs_msgs__action__ParameterTrigger_FeedbackMessage__fini(mirs_msgs__action__ParameterTrigger_FeedbackMessage * msg);

/// Create action/ParameterTrigger message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mirs_msgs__action__ParameterTrigger_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mirs_msgs
mirs_msgs__action__ParameterTrigger_FeedbackMessage *
mirs_msgs__action__ParameterTrigger_FeedbackMessage__create();

/// Destroy action/ParameterTrigger message.
/**
 * It calls
 * mirs_msgs__action__ParameterTrigger_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mirs_msgs
void
mirs_msgs__action__ParameterTrigger_FeedbackMessage__destroy(mirs_msgs__action__ParameterTrigger_FeedbackMessage * msg);

/// Check for action/ParameterTrigger message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mirs_msgs
bool
mirs_msgs__action__ParameterTrigger_FeedbackMessage__are_equal(const mirs_msgs__action__ParameterTrigger_FeedbackMessage * lhs, const mirs_msgs__action__ParameterTrigger_FeedbackMessage * rhs);

/// Copy a action/ParameterTrigger message.
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
ROSIDL_GENERATOR_C_PUBLIC_mirs_msgs
bool
mirs_msgs__action__ParameterTrigger_FeedbackMessage__copy(
  const mirs_msgs__action__ParameterTrigger_FeedbackMessage * input,
  mirs_msgs__action__ParameterTrigger_FeedbackMessage * output);

/// Initialize array of action/ParameterTrigger messages.
/**
 * It allocates the memory for the number of elements and calls
 * mirs_msgs__action__ParameterTrigger_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mirs_msgs
bool
mirs_msgs__action__ParameterTrigger_FeedbackMessage__Sequence__init(mirs_msgs__action__ParameterTrigger_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/ParameterTrigger messages.
/**
 * It calls
 * mirs_msgs__action__ParameterTrigger_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mirs_msgs
void
mirs_msgs__action__ParameterTrigger_FeedbackMessage__Sequence__fini(mirs_msgs__action__ParameterTrigger_FeedbackMessage__Sequence * array);

/// Create array of action/ParameterTrigger messages.
/**
 * It allocates the memory for the array and calls
 * mirs_msgs__action__ParameterTrigger_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mirs_msgs
mirs_msgs__action__ParameterTrigger_FeedbackMessage__Sequence *
mirs_msgs__action__ParameterTrigger_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/ParameterTrigger messages.
/**
 * It calls
 * mirs_msgs__action__ParameterTrigger_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mirs_msgs
void
mirs_msgs__action__ParameterTrigger_FeedbackMessage__Sequence__destroy(mirs_msgs__action__ParameterTrigger_FeedbackMessage__Sequence * array);

/// Check for action/ParameterTrigger message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mirs_msgs
bool
mirs_msgs__action__ParameterTrigger_FeedbackMessage__Sequence__are_equal(const mirs_msgs__action__ParameterTrigger_FeedbackMessage__Sequence * lhs, const mirs_msgs__action__ParameterTrigger_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/ParameterTrigger messages.
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
ROSIDL_GENERATOR_C_PUBLIC_mirs_msgs
bool
mirs_msgs__action__ParameterTrigger_FeedbackMessage__Sequence__copy(
  const mirs_msgs__action__ParameterTrigger_FeedbackMessage__Sequence * input,
  mirs_msgs__action__ParameterTrigger_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MIRS_MSGS__ACTION__DETAIL__PARAMETER_TRIGGER__FUNCTIONS_H_
