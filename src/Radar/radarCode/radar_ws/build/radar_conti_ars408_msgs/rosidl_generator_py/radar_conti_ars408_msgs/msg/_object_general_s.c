// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from radar_conti_ars408_msgs:msg/ObjectGeneral.idl
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
#include "radar_conti_ars408_msgs/msg/detail/object_general__struct.h"
#include "radar_conti_ars408_msgs/msg/detail/object_general__functions.h"

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

ROSIDL_GENERATOR_C_EXPORT
bool radar_conti_ars408_msgs__msg__object_general__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[58];
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
    assert(strncmp("radar_conti_ars408_msgs.msg._object_general.ObjectGeneral", full_classname_dest, 57) == 0);
  }
  radar_conti_ars408_msgs__msg__ObjectGeneral * ros_message = _ros_message;
  {  // obj_distlong
    PyObject * field = PyObject_GetAttrString(_pymsg, "obj_distlong");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__float64__convert_from_py(field, &ros_message->obj_distlong)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // obj_distlat
    PyObject * field = PyObject_GetAttrString(_pymsg, "obj_distlat");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__float64__convert_from_py(field, &ros_message->obj_distlat)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // obj_vrellong
    PyObject * field = PyObject_GetAttrString(_pymsg, "obj_vrellong");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__float64__convert_from_py(field, &ros_message->obj_vrellong)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // obj_vrellat
    PyObject * field = PyObject_GetAttrString(_pymsg, "obj_vrellat");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__float64__convert_from_py(field, &ros_message->obj_vrellat)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // obj_dynprop
    PyObject * field = PyObject_GetAttrString(_pymsg, "obj_dynprop");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__string__convert_from_py(field, &ros_message->obj_dynprop)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // obj_rcs
    PyObject * field = PyObject_GetAttrString(_pymsg, "obj_rcs");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__float64__convert_from_py(field, &ros_message->obj_rcs)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * radar_conti_ars408_msgs__msg__object_general__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ObjectGeneral */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("radar_conti_ars408_msgs.msg._object_general");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ObjectGeneral");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  radar_conti_ars408_msgs__msg__ObjectGeneral * ros_message = (radar_conti_ars408_msgs__msg__ObjectGeneral *)raw_ros_message;
  {  // obj_distlong
    PyObject * field = NULL;
    field = std_msgs__msg__float64__convert_to_py(&ros_message->obj_distlong);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "obj_distlong", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // obj_distlat
    PyObject * field = NULL;
    field = std_msgs__msg__float64__convert_to_py(&ros_message->obj_distlat);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "obj_distlat", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // obj_vrellong
    PyObject * field = NULL;
    field = std_msgs__msg__float64__convert_to_py(&ros_message->obj_vrellong);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "obj_vrellong", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // obj_vrellat
    PyObject * field = NULL;
    field = std_msgs__msg__float64__convert_to_py(&ros_message->obj_vrellat);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "obj_vrellat", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // obj_dynprop
    PyObject * field = NULL;
    field = std_msgs__msg__string__convert_to_py(&ros_message->obj_dynprop);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "obj_dynprop", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // obj_rcs
    PyObject * field = NULL;
    field = std_msgs__msg__float64__convert_to_py(&ros_message->obj_rcs);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "obj_rcs", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
