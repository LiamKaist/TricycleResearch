// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from radar_conti_ars408_msgs:msg/ObjectExtended.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "radar_conti_ars408_msgs/msg/detail/object_extended__struct.h"
#include "radar_conti_ars408_msgs/msg/detail/object_extended__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__float64__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__float64__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__float64__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__float64__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__string__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__string__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__float64__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__float64__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__float64__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__float64__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__float64__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__float64__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool radar_conti_ars408_msgs__msg__object_extended__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[60];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("radar_conti_ars408_msgs.msg._object_extended.ObjectExtended", full_classname_dest, 59) == 0);
  }
  radar_conti_ars408_msgs__msg__ObjectExtended * ros_message = _ros_message;
  {  // obj_arellong
    PyObject * field = PyObject_GetAttrString(_pymsg, "obj_arellong");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__float64__convert_from_py(field, &ros_message->obj_arellong)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // obj_arellat
    PyObject * field = PyObject_GetAttrString(_pymsg, "obj_arellat");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__float64__convert_from_py(field, &ros_message->obj_arellat)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // obj_class
    PyObject * field = PyObject_GetAttrString(_pymsg, "obj_class");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__string__convert_from_py(field, &ros_message->obj_class)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // obj_orientationangle
    PyObject * field = PyObject_GetAttrString(_pymsg, "obj_orientationangle");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__float64__convert_from_py(field, &ros_message->obj_orientationangle)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // obj_length
    PyObject * field = PyObject_GetAttrString(_pymsg, "obj_length");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__float64__convert_from_py(field, &ros_message->obj_length)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // obj_width
    PyObject * field = PyObject_GetAttrString(_pymsg, "obj_width");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__float64__convert_from_py(field, &ros_message->obj_width)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * radar_conti_ars408_msgs__msg__object_extended__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ObjectExtended */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("radar_conti_ars408_msgs.msg._object_extended");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ObjectExtended");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  radar_conti_ars408_msgs__msg__ObjectExtended * ros_message = (radar_conti_ars408_msgs__msg__ObjectExtended *)raw_ros_message;
  {  // obj_arellong
    PyObject * field = NULL;
    field = std_msgs__msg__float64__convert_to_py(&ros_message->obj_arellong);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "obj_arellong", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // obj_arellat
    PyObject * field = NULL;
    field = std_msgs__msg__float64__convert_to_py(&ros_message->obj_arellat);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "obj_arellat", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // obj_class
    PyObject * field = NULL;
    field = std_msgs__msg__string__convert_to_py(&ros_message->obj_class);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "obj_class", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // obj_orientationangle
    PyObject * field = NULL;
    field = std_msgs__msg__float64__convert_to_py(&ros_message->obj_orientationangle);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "obj_orientationangle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // obj_length
    PyObject * field = NULL;
    field = std_msgs__msg__float64__convert_to_py(&ros_message->obj_length);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "obj_length", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // obj_width
    PyObject * field = NULL;
    field = std_msgs__msg__float64__convert_to_py(&ros_message->obj_width);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "obj_width", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
