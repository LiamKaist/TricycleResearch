// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from radar_conti_ars408_msgs:msg/RadarState.idl
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
#include "radar_conti_ars408_msgs/msg/detail/radar_state__struct.h"
#include "radar_conti_ars408_msgs/msg/detail/radar_state__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__u_int8__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__u_int8__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__u_int8__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__u_int8__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__u_int8__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__u_int8__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__u_int8__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__u_int8__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__u_int8__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__u_int8__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__u_int8__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__u_int8__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__u_int8__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__u_int8__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__u_int8__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__u_int8__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__u_int8__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__u_int8__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__u_int8__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__u_int8__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__u_int8__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__u_int8__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__u_int8__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__u_int8__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__u_int8__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__u_int8__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__u_int8__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__u_int8__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__u_int8__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__u_int8__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__u_int8__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__u_int8__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__u_int8__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__u_int8__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool radar_conti_ars408_msgs__msg__radar_state__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[52];
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
    assert(strncmp("radar_conti_ars408_msgs.msg._radar_state.RadarState", full_classname_dest, 51) == 0);
  }
  radar_conti_ars408_msgs__msg__RadarState * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // radarstate_nvmwritestatus
    PyObject * field = PyObject_GetAttrString(_pymsg, "radarstate_nvmwritestatus");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__u_int8__convert_from_py(field, &ros_message->radarstate_nvmwritestatus)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // radarstate_nvmreadstatus
    PyObject * field = PyObject_GetAttrString(_pymsg, "radarstate_nvmreadstatus");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__u_int8__convert_from_py(field, &ros_message->radarstate_nvmreadstatus)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // radarstate_maxdistancecfg
    PyObject * field = PyObject_GetAttrString(_pymsg, "radarstate_maxdistancecfg");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__u_int8__convert_from_py(field, &ros_message->radarstate_maxdistancecfg)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // radarstate_persistent_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "radarstate_persistent_error");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__u_int8__convert_from_py(field, &ros_message->radarstate_persistent_error)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // radarstate_interference
    PyObject * field = PyObject_GetAttrString(_pymsg, "radarstate_interference");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__u_int8__convert_from_py(field, &ros_message->radarstate_interference)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // radarstate_temperature_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "radarstate_temperature_error");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__u_int8__convert_from_py(field, &ros_message->radarstate_temperature_error)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // radarstate_temporary_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "radarstate_temporary_error");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__u_int8__convert_from_py(field, &ros_message->radarstate_temporary_error)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // radarstate_voltage_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "radarstate_voltage_error");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__u_int8__convert_from_py(field, &ros_message->radarstate_voltage_error)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // radarstate_radarpowercfg
    PyObject * field = PyObject_GetAttrString(_pymsg, "radarstate_radarpowercfg");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__u_int8__convert_from_py(field, &ros_message->radarstate_radarpowercfg)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // radarstate_sortindex
    PyObject * field = PyObject_GetAttrString(_pymsg, "radarstate_sortindex");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__u_int8__convert_from_py(field, &ros_message->radarstate_sortindex)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // radarstate_sensorid
    PyObject * field = PyObject_GetAttrString(_pymsg, "radarstate_sensorid");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__u_int8__convert_from_py(field, &ros_message->radarstate_sensorid)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // radarstate_motionrxstate
    PyObject * field = PyObject_GetAttrString(_pymsg, "radarstate_motionrxstate");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__u_int8__convert_from_py(field, &ros_message->radarstate_motionrxstate)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // radarstate_sendextinfocfg
    PyObject * field = PyObject_GetAttrString(_pymsg, "radarstate_sendextinfocfg");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__u_int8__convert_from_py(field, &ros_message->radarstate_sendextinfocfg)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // radarstate_sendqualitycfg
    PyObject * field = PyObject_GetAttrString(_pymsg, "radarstate_sendqualitycfg");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__u_int8__convert_from_py(field, &ros_message->radarstate_sendqualitycfg)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // radarstate_outputtypecfg
    PyObject * field = PyObject_GetAttrString(_pymsg, "radarstate_outputtypecfg");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__u_int8__convert_from_py(field, &ros_message->radarstate_outputtypecfg)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // radarstate_ctrlrelaycfg
    PyObject * field = PyObject_GetAttrString(_pymsg, "radarstate_ctrlrelaycfg");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__u_int8__convert_from_py(field, &ros_message->radarstate_ctrlrelaycfg)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // radarstate_rcs_threshold
    PyObject * field = PyObject_GetAttrString(_pymsg, "radarstate_rcs_threshold");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__u_int8__convert_from_py(field, &ros_message->radarstate_rcs_threshold)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * radar_conti_ars408_msgs__msg__radar_state__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RadarState */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("radar_conti_ars408_msgs.msg._radar_state");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RadarState");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  radar_conti_ars408_msgs__msg__RadarState * ros_message = (radar_conti_ars408_msgs__msg__RadarState *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // radarstate_nvmwritestatus
    PyObject * field = NULL;
    field = std_msgs__msg__u_int8__convert_to_py(&ros_message->radarstate_nvmwritestatus);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "radarstate_nvmwritestatus", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // radarstate_nvmreadstatus
    PyObject * field = NULL;
    field = std_msgs__msg__u_int8__convert_to_py(&ros_message->radarstate_nvmreadstatus);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "radarstate_nvmreadstatus", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // radarstate_maxdistancecfg
    PyObject * field = NULL;
    field = std_msgs__msg__u_int8__convert_to_py(&ros_message->radarstate_maxdistancecfg);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "radarstate_maxdistancecfg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // radarstate_persistent_error
    PyObject * field = NULL;
    field = std_msgs__msg__u_int8__convert_to_py(&ros_message->radarstate_persistent_error);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "radarstate_persistent_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // radarstate_interference
    PyObject * field = NULL;
    field = std_msgs__msg__u_int8__convert_to_py(&ros_message->radarstate_interference);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "radarstate_interference", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // radarstate_temperature_error
    PyObject * field = NULL;
    field = std_msgs__msg__u_int8__convert_to_py(&ros_message->radarstate_temperature_error);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "radarstate_temperature_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // radarstate_temporary_error
    PyObject * field = NULL;
    field = std_msgs__msg__u_int8__convert_to_py(&ros_message->radarstate_temporary_error);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "radarstate_temporary_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // radarstate_voltage_error
    PyObject * field = NULL;
    field = std_msgs__msg__u_int8__convert_to_py(&ros_message->radarstate_voltage_error);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "radarstate_voltage_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // radarstate_radarpowercfg
    PyObject * field = NULL;
    field = std_msgs__msg__u_int8__convert_to_py(&ros_message->radarstate_radarpowercfg);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "radarstate_radarpowercfg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // radarstate_sortindex
    PyObject * field = NULL;
    field = std_msgs__msg__u_int8__convert_to_py(&ros_message->radarstate_sortindex);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "radarstate_sortindex", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // radarstate_sensorid
    PyObject * field = NULL;
    field = std_msgs__msg__u_int8__convert_to_py(&ros_message->radarstate_sensorid);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "radarstate_sensorid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // radarstate_motionrxstate
    PyObject * field = NULL;
    field = std_msgs__msg__u_int8__convert_to_py(&ros_message->radarstate_motionrxstate);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "radarstate_motionrxstate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // radarstate_sendextinfocfg
    PyObject * field = NULL;
    field = std_msgs__msg__u_int8__convert_to_py(&ros_message->radarstate_sendextinfocfg);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "radarstate_sendextinfocfg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // radarstate_sendqualitycfg
    PyObject * field = NULL;
    field = std_msgs__msg__u_int8__convert_to_py(&ros_message->radarstate_sendqualitycfg);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "radarstate_sendqualitycfg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // radarstate_outputtypecfg
    PyObject * field = NULL;
    field = std_msgs__msg__u_int8__convert_to_py(&ros_message->radarstate_outputtypecfg);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "radarstate_outputtypecfg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // radarstate_ctrlrelaycfg
    PyObject * field = NULL;
    field = std_msgs__msg__u_int8__convert_to_py(&ros_message->radarstate_ctrlrelaycfg);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "radarstate_ctrlrelaycfg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // radarstate_rcs_threshold
    PyObject * field = NULL;
    field = std_msgs__msg__u_int8__convert_to_py(&ros_message->radarstate_rcs_threshold);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "radarstate_rcs_threshold", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
