# generated from rosidl_generator_py/resource/_idl.py.em
# with input from radar_conti_ars408_msgs:msg/RadarState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RadarState(type):
    """Metaclass of message 'RadarState'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('radar_conti_ars408_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'radar_conti_ars408_msgs.msg.RadarState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__radar_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__radar_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__radar_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__radar_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__radar_state

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

            from std_msgs.msg import UInt8
            if UInt8.__class__._TYPE_SUPPORT is None:
                UInt8.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RadarState(metaclass=Metaclass_RadarState):
    """Message class 'RadarState'."""

    __slots__ = [
        '_header',
        '_radarstate_nvmwritestatus',
        '_radarstate_nvmreadstatus',
        '_radarstate_maxdistancecfg',
        '_radarstate_persistent_error',
        '_radarstate_interference',
        '_radarstate_temperature_error',
        '_radarstate_temporary_error',
        '_radarstate_voltage_error',
        '_radarstate_radarpowercfg',
        '_radarstate_sortindex',
        '_radarstate_sensorid',
        '_radarstate_motionrxstate',
        '_radarstate_sendextinfocfg',
        '_radarstate_sendqualitycfg',
        '_radarstate_outputtypecfg',
        '_radarstate_ctrlrelaycfg',
        '_radarstate_rcs_threshold',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'radarstate_nvmwritestatus': 'std_msgs/UInt8',
        'radarstate_nvmreadstatus': 'std_msgs/UInt8',
        'radarstate_maxdistancecfg': 'std_msgs/UInt8',
        'radarstate_persistent_error': 'std_msgs/UInt8',
        'radarstate_interference': 'std_msgs/UInt8',
        'radarstate_temperature_error': 'std_msgs/UInt8',
        'radarstate_temporary_error': 'std_msgs/UInt8',
        'radarstate_voltage_error': 'std_msgs/UInt8',
        'radarstate_radarpowercfg': 'std_msgs/UInt8',
        'radarstate_sortindex': 'std_msgs/UInt8',
        'radarstate_sensorid': 'std_msgs/UInt8',
        'radarstate_motionrxstate': 'std_msgs/UInt8',
        'radarstate_sendextinfocfg': 'std_msgs/UInt8',
        'radarstate_sendqualitycfg': 'std_msgs/UInt8',
        'radarstate_outputtypecfg': 'std_msgs/UInt8',
        'radarstate_ctrlrelaycfg': 'std_msgs/UInt8',
        'radarstate_rcs_threshold': 'std_msgs/UInt8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'UInt8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'UInt8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'UInt8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'UInt8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'UInt8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'UInt8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'UInt8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'UInt8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'UInt8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'UInt8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'UInt8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'UInt8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'UInt8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'UInt8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'UInt8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'UInt8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'UInt8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from std_msgs.msg import UInt8
        self.radarstate_nvmwritestatus = kwargs.get('radarstate_nvmwritestatus', UInt8())
        from std_msgs.msg import UInt8
        self.radarstate_nvmreadstatus = kwargs.get('radarstate_nvmreadstatus', UInt8())
        from std_msgs.msg import UInt8
        self.radarstate_maxdistancecfg = kwargs.get('radarstate_maxdistancecfg', UInt8())
        from std_msgs.msg import UInt8
        self.radarstate_persistent_error = kwargs.get('radarstate_persistent_error', UInt8())
        from std_msgs.msg import UInt8
        self.radarstate_interference = kwargs.get('radarstate_interference', UInt8())
        from std_msgs.msg import UInt8
        self.radarstate_temperature_error = kwargs.get('radarstate_temperature_error', UInt8())
        from std_msgs.msg import UInt8
        self.radarstate_temporary_error = kwargs.get('radarstate_temporary_error', UInt8())
        from std_msgs.msg import UInt8
        self.radarstate_voltage_error = kwargs.get('radarstate_voltage_error', UInt8())
        from std_msgs.msg import UInt8
        self.radarstate_radarpowercfg = kwargs.get('radarstate_radarpowercfg', UInt8())
        from std_msgs.msg import UInt8
        self.radarstate_sortindex = kwargs.get('radarstate_sortindex', UInt8())
        from std_msgs.msg import UInt8
        self.radarstate_sensorid = kwargs.get('radarstate_sensorid', UInt8())
        from std_msgs.msg import UInt8
        self.radarstate_motionrxstate = kwargs.get('radarstate_motionrxstate', UInt8())
        from std_msgs.msg import UInt8
        self.radarstate_sendextinfocfg = kwargs.get('radarstate_sendextinfocfg', UInt8())
        from std_msgs.msg import UInt8
        self.radarstate_sendqualitycfg = kwargs.get('radarstate_sendqualitycfg', UInt8())
        from std_msgs.msg import UInt8
        self.radarstate_outputtypecfg = kwargs.get('radarstate_outputtypecfg', UInt8())
        from std_msgs.msg import UInt8
        self.radarstate_ctrlrelaycfg = kwargs.get('radarstate_ctrlrelaycfg', UInt8())
        from std_msgs.msg import UInt8
        self.radarstate_rcs_threshold = kwargs.get('radarstate_rcs_threshold', UInt8())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.header != other.header:
            return False
        if self.radarstate_nvmwritestatus != other.radarstate_nvmwritestatus:
            return False
        if self.radarstate_nvmreadstatus != other.radarstate_nvmreadstatus:
            return False
        if self.radarstate_maxdistancecfg != other.radarstate_maxdistancecfg:
            return False
        if self.radarstate_persistent_error != other.radarstate_persistent_error:
            return False
        if self.radarstate_interference != other.radarstate_interference:
            return False
        if self.radarstate_temperature_error != other.radarstate_temperature_error:
            return False
        if self.radarstate_temporary_error != other.radarstate_temporary_error:
            return False
        if self.radarstate_voltage_error != other.radarstate_voltage_error:
            return False
        if self.radarstate_radarpowercfg != other.radarstate_radarpowercfg:
            return False
        if self.radarstate_sortindex != other.radarstate_sortindex:
            return False
        if self.radarstate_sensorid != other.radarstate_sensorid:
            return False
        if self.radarstate_motionrxstate != other.radarstate_motionrxstate:
            return False
        if self.radarstate_sendextinfocfg != other.radarstate_sendextinfocfg:
            return False
        if self.radarstate_sendqualitycfg != other.radarstate_sendqualitycfg:
            return False
        if self.radarstate_outputtypecfg != other.radarstate_outputtypecfg:
            return False
        if self.radarstate_ctrlrelaycfg != other.radarstate_ctrlrelaycfg:
            return False
        if self.radarstate_rcs_threshold != other.radarstate_rcs_threshold:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def radarstate_nvmwritestatus(self):
        """Message field 'radarstate_nvmwritestatus'."""
        return self._radarstate_nvmwritestatus

    @radarstate_nvmwritestatus.setter
    def radarstate_nvmwritestatus(self, value):
        if __debug__:
            from std_msgs.msg import UInt8
            assert \
                isinstance(value, UInt8), \
                "The 'radarstate_nvmwritestatus' field must be a sub message of type 'UInt8'"
        self._radarstate_nvmwritestatus = value

    @builtins.property
    def radarstate_nvmreadstatus(self):
        """Message field 'radarstate_nvmreadstatus'."""
        return self._radarstate_nvmreadstatus

    @radarstate_nvmreadstatus.setter
    def radarstate_nvmreadstatus(self, value):
        if __debug__:
            from std_msgs.msg import UInt8
            assert \
                isinstance(value, UInt8), \
                "The 'radarstate_nvmreadstatus' field must be a sub message of type 'UInt8'"
        self._radarstate_nvmreadstatus = value

    @builtins.property
    def radarstate_maxdistancecfg(self):
        """Message field 'radarstate_maxdistancecfg'."""
        return self._radarstate_maxdistancecfg

    @radarstate_maxdistancecfg.setter
    def radarstate_maxdistancecfg(self, value):
        if __debug__:
            from std_msgs.msg import UInt8
            assert \
                isinstance(value, UInt8), \
                "The 'radarstate_maxdistancecfg' field must be a sub message of type 'UInt8'"
        self._radarstate_maxdistancecfg = value

    @builtins.property
    def radarstate_persistent_error(self):
        """Message field 'radarstate_persistent_error'."""
        return self._radarstate_persistent_error

    @radarstate_persistent_error.setter
    def radarstate_persistent_error(self, value):
        if __debug__:
            from std_msgs.msg import UInt8
            assert \
                isinstance(value, UInt8), \
                "The 'radarstate_persistent_error' field must be a sub message of type 'UInt8'"
        self._radarstate_persistent_error = value

    @builtins.property
    def radarstate_interference(self):
        """Message field 'radarstate_interference'."""
        return self._radarstate_interference

    @radarstate_interference.setter
    def radarstate_interference(self, value):
        if __debug__:
            from std_msgs.msg import UInt8
            assert \
                isinstance(value, UInt8), \
                "The 'radarstate_interference' field must be a sub message of type 'UInt8'"
        self._radarstate_interference = value

    @builtins.property
    def radarstate_temperature_error(self):
        """Message field 'radarstate_temperature_error'."""
        return self._radarstate_temperature_error

    @radarstate_temperature_error.setter
    def radarstate_temperature_error(self, value):
        if __debug__:
            from std_msgs.msg import UInt8
            assert \
                isinstance(value, UInt8), \
                "The 'radarstate_temperature_error' field must be a sub message of type 'UInt8'"
        self._radarstate_temperature_error = value

    @builtins.property
    def radarstate_temporary_error(self):
        """Message field 'radarstate_temporary_error'."""
        return self._radarstate_temporary_error

    @radarstate_temporary_error.setter
    def radarstate_temporary_error(self, value):
        if __debug__:
            from std_msgs.msg import UInt8
            assert \
                isinstance(value, UInt8), \
                "The 'radarstate_temporary_error' field must be a sub message of type 'UInt8'"
        self._radarstate_temporary_error = value

    @builtins.property
    def radarstate_voltage_error(self):
        """Message field 'radarstate_voltage_error'."""
        return self._radarstate_voltage_error

    @radarstate_voltage_error.setter
    def radarstate_voltage_error(self, value):
        if __debug__:
            from std_msgs.msg import UInt8
            assert \
                isinstance(value, UInt8), \
                "The 'radarstate_voltage_error' field must be a sub message of type 'UInt8'"
        self._radarstate_voltage_error = value

    @builtins.property
    def radarstate_radarpowercfg(self):
        """Message field 'radarstate_radarpowercfg'."""
        return self._radarstate_radarpowercfg

    @radarstate_radarpowercfg.setter
    def radarstate_radarpowercfg(self, value):
        if __debug__:
            from std_msgs.msg import UInt8
            assert \
                isinstance(value, UInt8), \
                "The 'radarstate_radarpowercfg' field must be a sub message of type 'UInt8'"
        self._radarstate_radarpowercfg = value

    @builtins.property
    def radarstate_sortindex(self):
        """Message field 'radarstate_sortindex'."""
        return self._radarstate_sortindex

    @radarstate_sortindex.setter
    def radarstate_sortindex(self, value):
        if __debug__:
            from std_msgs.msg import UInt8
            assert \
                isinstance(value, UInt8), \
                "The 'radarstate_sortindex' field must be a sub message of type 'UInt8'"
        self._radarstate_sortindex = value

    @builtins.property
    def radarstate_sensorid(self):
        """Message field 'radarstate_sensorid'."""
        return self._radarstate_sensorid

    @radarstate_sensorid.setter
    def radarstate_sensorid(self, value):
        if __debug__:
            from std_msgs.msg import UInt8
            assert \
                isinstance(value, UInt8), \
                "The 'radarstate_sensorid' field must be a sub message of type 'UInt8'"
        self._radarstate_sensorid = value

    @builtins.property
    def radarstate_motionrxstate(self):
        """Message field 'radarstate_motionrxstate'."""
        return self._radarstate_motionrxstate

    @radarstate_motionrxstate.setter
    def radarstate_motionrxstate(self, value):
        if __debug__:
            from std_msgs.msg import UInt8
            assert \
                isinstance(value, UInt8), \
                "The 'radarstate_motionrxstate' field must be a sub message of type 'UInt8'"
        self._radarstate_motionrxstate = value

    @builtins.property
    def radarstate_sendextinfocfg(self):
        """Message field 'radarstate_sendextinfocfg'."""
        return self._radarstate_sendextinfocfg

    @radarstate_sendextinfocfg.setter
    def radarstate_sendextinfocfg(self, value):
        if __debug__:
            from std_msgs.msg import UInt8
            assert \
                isinstance(value, UInt8), \
                "The 'radarstate_sendextinfocfg' field must be a sub message of type 'UInt8'"
        self._radarstate_sendextinfocfg = value

    @builtins.property
    def radarstate_sendqualitycfg(self):
        """Message field 'radarstate_sendqualitycfg'."""
        return self._radarstate_sendqualitycfg

    @radarstate_sendqualitycfg.setter
    def radarstate_sendqualitycfg(self, value):
        if __debug__:
            from std_msgs.msg import UInt8
            assert \
                isinstance(value, UInt8), \
                "The 'radarstate_sendqualitycfg' field must be a sub message of type 'UInt8'"
        self._radarstate_sendqualitycfg = value

    @builtins.property
    def radarstate_outputtypecfg(self):
        """Message field 'radarstate_outputtypecfg'."""
        return self._radarstate_outputtypecfg

    @radarstate_outputtypecfg.setter
    def radarstate_outputtypecfg(self, value):
        if __debug__:
            from std_msgs.msg import UInt8
            assert \
                isinstance(value, UInt8), \
                "The 'radarstate_outputtypecfg' field must be a sub message of type 'UInt8'"
        self._radarstate_outputtypecfg = value

    @builtins.property
    def radarstate_ctrlrelaycfg(self):
        """Message field 'radarstate_ctrlrelaycfg'."""
        return self._radarstate_ctrlrelaycfg

    @radarstate_ctrlrelaycfg.setter
    def radarstate_ctrlrelaycfg(self, value):
        if __debug__:
            from std_msgs.msg import UInt8
            assert \
                isinstance(value, UInt8), \
                "The 'radarstate_ctrlrelaycfg' field must be a sub message of type 'UInt8'"
        self._radarstate_ctrlrelaycfg = value

    @builtins.property
    def radarstate_rcs_threshold(self):
        """Message field 'radarstate_rcs_threshold'."""
        return self._radarstate_rcs_threshold

    @radarstate_rcs_threshold.setter
    def radarstate_rcs_threshold(self, value):
        if __debug__:
            from std_msgs.msg import UInt8
            assert \
                isinstance(value, UInt8), \
                "The 'radarstate_rcs_threshold' field must be a sub message of type 'UInt8'"
        self._radarstate_rcs_threshold = value
