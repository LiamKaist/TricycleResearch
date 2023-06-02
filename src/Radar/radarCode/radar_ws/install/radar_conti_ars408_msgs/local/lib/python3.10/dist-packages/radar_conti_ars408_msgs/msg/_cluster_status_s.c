// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from radar_conti_ars408_msgs:msg/ClusterStatus.idl
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
#include "radar_conti_ars408_msgs/msg/detail/cluster_status__struct.h"
#include "radar_conti_ars408_msgs/msg/detail/cluster_status__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__int32__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__int32__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__int32__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__int32__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__int32__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__int32__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__int32__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__int32__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool radar_conti_ars408_msgs__msg__cluster_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("radar_conti_ars408_msgs.msg._cluster_status.ClusterStatus", full_classname_dest, 57) == 0);
  }
  radar_conti_ars408_msgs__msg__ClusterStatus * ros_message = _ros_message;
  {  // cluster_nofclustersnear
    PyObject * field = PyObject_GetAttrString(_pymsg, "cluster_nofclustersnear");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__int32__convert_from_py(field, &ros_message->cluster_nofclustersnear)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // cluster_nofclustersfar
    PyObject * field = PyObject_GetAttrString(_pymsg, "cluster_nofclustersfar");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__int32__convert_from_py(field, &ros_message->cluster_nofclustersfar)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // cluster_meascounter
    PyObject * field = PyObject_GetAttrString(_pymsg, "cluster_meascounter");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__int32__convert_from_py(field, &ros_message->cluster_meascounter)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // cluster_interfaceversion
    PyObject * field = PyObject_GetAttrString(_pymsg, "cluster_interfaceversion");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__int32__convert_from_py(field, &ros_message->cluster_interfaceversion)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * radar_conti_ars408_msgs__msg__cluster_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ClusterStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("radar_conti_ars408_msgs.msg._cluster_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ClusterStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  radar_conti_ars408_msgs__msg__ClusterStatus * ros_message = (radar_conti_ars408_msgs__msg__ClusterStatus *)raw_ros_message;
  {  // cluster_nofclustersnear
    PyObject * field = NULL;
    field = std_msgs__msg__int32__convert_to_py(&ros_message->cluster_nofclustersnear);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "cluster_nofclustersnear", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cluster_nofclustersfar
    PyObject * field = NULL;
    field = std_msgs__msg__int32__convert_to_py(&ros_message->cluster_nofclustersfar);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "cluster_nofclustersfar", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cluster_meascounter
    PyObject * field = NULL;
    field = std_msgs__msg__int32__convert_to_py(&ros_message->cluster_meascounter);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "cluster_meascounter", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cluster_interfaceversion
    PyObject * field = NULL;
    field = std_msgs__msg__int32__convert_to_py(&ros_message->cluster_interfaceversion);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "cluster_interfaceversion", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
