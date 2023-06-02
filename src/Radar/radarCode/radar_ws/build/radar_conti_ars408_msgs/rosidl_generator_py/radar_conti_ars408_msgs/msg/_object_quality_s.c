// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from radar_conti_ars408_msgs:msg/ObjectQuality.idl
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
#include "radar_conti_ars408_msgs/msg/detail/object_quality__struct.h"
#include "radar_conti_ars408_msgs/msg/detail/object_quality__functions.h"

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

ROSIDL_GENERATOR_C_EXPORT
bool radar_conti_ars408_msgs__msg__object_quality__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("radar_conti_ars408_msgs.msg._object_quality.ObjectQuality", full_classname_dest, 57) == 0);
  }
  radar_conti_ars408_msgs__msg__ObjectQuality * ros_message = _ros_message;
  {  // obj_distlong_rms
    PyObject * field = PyObject_GetAttrString(_pymsg, "obj_distlong_rms");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__float64__convert_from_py(field, &ros_message->obj_distlong_rms)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // obj_distlat_rms
    PyObject * field = PyObject_GetAttrString(_pymsg, "obj_distlat_rms");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__float64__convert_from_py(field, &ros_message->obj_distlat_rms)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // obj_vrellong_rms
    PyObject * field = PyObject_GetAttrString(_pymsg, "obj_vrellong_rms");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__float64__convert_from_py(field, &ros_message->obj_vrellong_rms)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // obj_vrellat_rms
    PyObject * field = PyObject_GetAttrString(_pymsg, "obj_vrellat_rms");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__float64__convert_from_py(field, &ros_message->obj_vrellat_rms)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // obj_arellong_rms
    PyObject * field = PyObject_GetAttrString(_pymsg, "obj_arellong_rms");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__float64__convert_from_py(field, &ros_message->obj_arellong_rms)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // obj_arellat_rms
    PyObject * field = PyObject_GetAttrString(_pymsg, "obj_arellat_rms");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__float64__convert_from_py(field, &ros_message->obj_arellat_rms)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // obj_orientation_rms
    PyObject * field = PyObject_GetAttrString(_pymsg, "obj_orientation_rms");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__float64__convert_from_py(field, &ros_message->obj_orientation_rms)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // obj_probofexist
    PyObject * field = PyObject_GetAttrString(_pymsg, "obj_probofexist");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__float64__convert_from_py(field, &ros_message->obj_probofexist)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // obj_measstate
    PyObject * field = PyObject_GetAttrString(_pymsg, "obj_measstate");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__string__convert_from_py(field, &ros_message->obj_measstate)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * radar_conti_ars408_msgs__msg__object_quality__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ObjectQuality */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("radar_conti_ars408_msgs.msg._object_quality");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ObjectQuality");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  radar_conti_ars408_msgs__msg__ObjectQuality * ros_message = (radar_conti_ars408_msgs__msg__ObjectQuality *)raw_ros_message;
  {  // obj_distlong_rms
    PyObject * field = NULL;
    field = std_msgs__msg__float64__convert_to_py(&ros_message->obj_distlong_rms);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "obj_distlong_rms", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // obj_distlat_rms
    PyObject * field = NULL;
    field = std_msgs__msg__float64__convert_to_py(&ros_message->obj_distlat_rms);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "obj_distlat_rms", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // obj_vrellong_rms
    PyObject * field = NULL;
    field = std_msgs__msg__float64__convert_to_py(&ros_message->obj_vrellong_rms);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "obj_vrellong_rms", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // obj_vrellat_rms
    PyObject * field = NULL;
    field = std_msgs__msg__float64__convert_to_py(&ros_message->obj_vrellat_rms);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "obj_vrellat_rms", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // obj_arellong_rms
    PyObject * field = NULL;
    field = std_msgs__msg__float64__convert_to_py(&ros_message->obj_arellong_rms);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "obj_arellong_rms", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // obj_arellat_rms
    PyObject * field = NULL;
    field = std_msgs__msg__float64__convert_to_py(&ros_message->obj_arellat_rms);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "obj_arellat_rms", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // obj_orientation_rms
    PyObject * field = NULL;
    field = std_msgs__msg__float64__convert_to_py(&ros_message->obj_orientation_rms);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "obj_orientation_rms", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // obj_probofexist
    PyObject * field = NULL;
    field = std_msgs__msg__float64__convert_to_py(&ros_message->obj_probofexist);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "obj_probofexist", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // obj_measstate
    PyObject * field = NULL;
    field = std_msgs__msg__string__convert_to_py(&ros_message->obj_measstate);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "obj_measstate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
