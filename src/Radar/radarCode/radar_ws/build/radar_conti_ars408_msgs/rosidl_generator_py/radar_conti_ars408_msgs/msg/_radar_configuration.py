# generated from rosidl_generator_py/resource/_idl.py.em
# with input from radar_conti_ars408_msgs:msg/RadarConfiguration.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RadarConfiguration(type):
    """Metaclass of message 'RadarConfiguration'."""

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
                'radar_conti_ars408_msgs.msg.RadarConfiguration')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__radar_configuration
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__radar_configuration
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__radar_configuration
            cls._TYPE_SUPPORT = module.type_support_msg__msg__radar_configuration
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__radar_configuration

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


class RadarConfiguration(metaclass=Metaclass_RadarConfiguration):
    """Message class 'RadarConfiguration'."""

    __slots__ = [
        '_header',
        '_radarcfg_storeinnvm_valid',
        '_radarcfg_sortindex_valid',
        '_radarcfg_sendextinfo_valid',
        '_radarcfg_sendquality_valid',
        '_radarcfg_outputtype_valid',
        '_radarcfg_radarpower_valid',
        '_radarcfg_sensorid_valid',
        '_radarcfg_maxdistance_valid',
        '_radarcfg_maxdistance',
        '_radarcfg_radarpower',
        '_radarcfg_outputtype',
        '_radarcfg_sensorid',
        '_radarcfg_storeinnvm',
        '_radarcfg_sortindex',
        '_radarcfg_sendextinfo',
        '_radarcfg_sendquality',
        '_radarcfg_ctrlrelay',
        '_radarcfg_ctrlrelay_valid',
        '_radarcfg_rcs_threshold',
        '_radarcfg_rcs_threshold_valid',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'radarcfg_storeinnvm_valid': 'std_msgs/UInt8',
        'radarcfg_sortindex_valid': 'std_msgs/UInt8',
        'radarcfg_sendextinfo_valid': 'std_msgs/UInt8',
        'radarcfg_sendquality_valid': 'std_msgs/UInt8',
        'radarcfg_outputtype_valid': 'std_msgs/UInt8',
        'radarcfg_radarpower_valid': 'std_msgs/UInt8',
        'radarcfg_sensorid_valid': 'std_msgs/UInt8',
        'radarcfg_maxdistance_valid': 'std_msgs/UInt8',
        'radarcfg_maxdistance': 'std_msgs/UInt8',
        'radarcfg_radarpower': 'std_msgs/UInt8',
        'radarcfg_outputtype': 'std_msgs/UInt8',
        'radarcfg_sensorid': 'std_msgs/UInt8',
        'radarcfg_storeinnvm': 'std_msgs/UInt8',
        'radarcfg_sortindex': 'std_msgs/UInt8',
        'radarcfg_sendextinfo': 'std_msgs/UInt8',
        'radarcfg_sendquality': 'std_msgs/UInt8',
        'radarcfg_ctrlrelay': 'std_msgs/UInt8',
        'radarcfg_ctrlrelay_valid': 'std_msgs/UInt8',
        'radarcfg_rcs_threshold': 'std_msgs/UInt8',
        'radarcfg_rcs_threshold_valid': 'std_msgs/UInt8',
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
        self.radarcfg_storeinnvm_valid = kwargs.get('radarcfg_storeinnvm_valid', UInt8())
        from std_msgs.msg import UInt8
        self.radarcfg_sortindex_valid = kwargs.get('radarcfg_sortindex_valid', UInt8())
        from std_msgs.msg import UInt8
        self.radarcfg_sendextinfo_valid = kwargs.get('radarcfg_sendextinfo_valid', UInt8())
        from std_msgs.msg import UInt8
        self.radarcfg_sendquality_valid = kwargs.get('radarcfg_sendquality_valid', UInt8())
        from std_msgs.msg import UInt8
        self.radarcfg_outputtype_valid = kwargs.get('radarcfg_outputtype_valid', UInt8())
        from std_msgs.msg import UInt8
        self.radarcfg_radarpower_valid = kwargs.get('radarcfg_radarpower_valid', UInt8())
        from std_msgs.msg import UInt8
        self.radarcfg_sensorid_valid = kwargs.get('radarcfg_sensorid_valid', UInt8())
        from std_msgs.msg import UInt8
        self.radarcfg_maxdistance_valid = kwargs.get('radarcfg_maxdistance_valid', UInt8())
        from std_msgs.msg import UInt8
        self.radarcfg_maxdistance = kwargs.get('radarcfg_maxdistance', UInt8())
        from std_msgs.msg import UInt8
        self.radarcfg_radarpower = kwargs.get('radarcfg_radarpower', UInt8())
        from std_msgs.msg import UInt8
        self.radarcfg_outputtype = kwargs.get('radarcfg_outputtype', UInt8())
        from std_msgs.msg import UInt8
        self.radarcfg_sensorid = kwargs.get('radarcfg_sensorid', UInt8())
        from std_msgs.msg import UInt8
        self.radarcfg_storeinnvm = kwargs.get('radarcfg_storeinnvm', UInt8())
        from std_msgs.msg import UInt8
        self.radarcfg_sortindex = kwargs.get('radarcfg_sortindex', UInt8())
        from std_msgs.msg import UInt8
        self.radarcfg_sendextinfo = kwargs.get('radarcfg_sendextinfo', UInt8())
        from std_msgs.msg import UInt8
        self.radarcfg_sendquality = kwargs.get('radarcfg_sendquality', UInt8())
        from std_msgs.msg import UInt8
        self.radarcfg_ctrlrelay = kwargs.get('radarcfg_ctrlrelay', UInt8())
        from std_msgs.msg import UInt8
        self.radarcfg_ctrlrelay_valid = kwargs.get('radarcfg_ctrlrelay_valid', UInt8())
        from std_msgs.msg import UInt8
        self.radarcfg_rcs_threshold = kwargs.get('radarcfg_rcs_threshold', UInt8())
        from std_msgs.msg import UInt8
        self.radarcfg_rcs_threshold_valid = kwargs.get('radarcfg_rcs_threshold_valid', UInt8())

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
        if self.radarcfg_storeinnvm_valid != other.radarcfg_storeinnvm_valid:
            return False
        if self.radarcfg_sortindex_valid != other.radarcfg_sortindex_valid:
            return False
        if self.radarcfg_sendextinfo_valid != other.radarcfg_sendextinfo_valid:
            return False
        if self.radarcfg_sendquality_valid != other.radarcfg_sendquality_valid:
            return False
        if self.radarcfg_outputtype_valid != other.radarcfg_outputtype_valid:
            return False
        if self.radarcfg_radarpower_valid != other.radarcfg_radarpower_valid:
            return False
        if self.radarcfg_sensorid_valid != other.radarcfg_sensorid_valid:
            return False
        if self.radarcfg_maxdistance_valid != other.radarcfg_maxdistance_valid:
            return False
        if self.radarcfg_maxdistance != other.radarcfg_maxdistance:
            return False
        if self.radarcfg_radarpower != other.radarcfg_radarpower:
            return False
        if self.radarcfg_outputtype != other.radarcfg_outputtype:
            return False
        if self.radarcfg_sensorid != other.radarcfg_sensorid:
            return False
        if self.radarcfg_storeinnvm != other.radarcfg_storeinnvm:
            return False
        if self.radarcfg_sortindex != other.radarcfg_sortindex:
            return False
        if self.radarcfg_sendextinfo != other.radarcfg_sendextinfo:
            return False
        if self.radarcfg_sendquality != other.radarcfg_sendquality:
            return False
        if self.radarcfg_ctrlrelay != other.radarcfg_ctrlrelay:
            return False
        if self.radarcfg_ctrlrelay_valid != other.radarcfg_ctrlrelay_valid:
            return False
        if self.radarcfg_rcs_threshold != other.radarcfg_rcs_threshold:
            return False
        if self.radarcfg_rcs_threshold_valid != other.radarcfg_rcs_threshold_valid:
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
    def radarcfg_storeinnvm_valid(self):
        """Message field 'radarcfg_storeinnvm_valid'."""
        return self._radarcfg_storeinnvm_valid

    @radarcfg_storeinnvm_valid.setter
    def radarcfg_storeinnvm_valid(self, value):
        if __debug__:
            from std_msgs.msg import UInt8
            assert \
                isinstance(value, UInt8), \
                "The 'radarcfg_storeinnvm_valid' field must be a sub message of type 'UInt8'"
        self._radarcfg_storeinnvm_valid = value

    @builtins.property
    def radarcfg_sortindex_valid(self):
        """Message field 'radarcfg_sortindex_valid'."""
        return self._radarcfg_sortindex_valid

    @radarcfg_sortindex_valid.setter
    def radarcfg_sortindex_valid(self, value):
        if __debug__:
            from std_msgs.msg import UInt8
            assert \
                isinstance(value, UInt8), \
                "The 'radarcfg_sortindex_valid' field must be a sub message of type 'UInt8'"
        self._radarcfg_sortindex_valid = value

    @builtins.property
    def radarcfg_sendextinfo_valid(self):
        """Message field 'radarcfg_sendextinfo_valid'."""
        return self._radarcfg_sendextinfo_valid

    @radarcfg_sendextinfo_valid.setter
    def radarcfg_sendextinfo_valid(self, value):
        if __debug__:
            from std_msgs.msg import UInt8
            assert \
                isinstance(value, UInt8), \
                "The 'radarcfg_sendextinfo_valid' field must be a sub message of type 'UInt8'"
        self._radarcfg_sendextinfo_valid = value

    @builtins.property
    def radarcfg_sendquality_valid(self):
        """Message field 'radarcfg_sendquality_valid'."""
        return self._radarcfg_sendquality_valid

    @radarcfg_sendquality_valid.setter
    def radarcfg_sendquality_valid(self, value):
        if __debug__:
            from std_msgs.msg import UInt8
            assert \
                isinstance(value, UInt8), \
                "The 'radarcfg_sendquality_valid' field must be a sub message of type 'UInt8'"
        self._radarcfg_sendquality_valid = value

    @builtins.property
    def radarcfg_outputtype_valid(self):
        """Message field 'radarcfg_outputtype_valid'."""
        return self._radarcfg_outputtype_valid

    @radarcfg_outputtype_valid.setter
    def radarcfg_outputtype_valid(self, value):
        if __debug__:
            from std_msgs.msg import UInt8
            assert \
                isinstance(value, UInt8), \
                "The 'radarcfg_outputtype_valid' field must be a sub message of type 'UInt8'"
        self._radarcfg_outputtype_valid = value

    @builtins.property
    def radarcfg_radarpower_valid(self):
        """Message field 'radarcfg_radarpower_valid'."""
        return self._radarcfg_radarpower_valid

    @radarcfg_radarpower_valid.setter
    def radarcfg_radarpower_valid(self, value):
        if __debug__:
            from std_msgs.msg import UInt8
            assert \
                isinstance(value, UInt8), \
                "The 'radarcfg_radarpower_valid' field must be a sub message of type 'UInt8'"
        self._radarcfg_radarpower_valid = value

    @builtins.property
    def radarcfg_sensorid_valid(self):
        """Message field 'radarcfg_sensorid_valid'."""
        return self._radarcfg_sensorid_valid

    @radarcfg_sensorid_valid.setter
    def radarcfg_sensorid_valid(self, value):
        if __debug__:
            from std_msgs.msg import UInt8
            assert \
                isinstance(value, UInt8), \
                "The 'radarcfg_sensorid_valid' field must be a sub message of type 'UInt8'"
        self._radarcfg_sensorid_valid = value

    @builtins.property
    def radarcfg_maxdistance_valid(self):
        """Message field 'radarcfg_maxdistance_valid'."""
        return self._radarcfg_maxdistance_valid

    @radarcfg_maxdistance_valid.setter
    def radarcfg_maxdistance_valid(self, value):
        if __debug__:
            from std_msgs.msg import UInt8
            assert \
                isinstance(value, UInt8), \
                "The 'radarcfg_maxdistance_valid' field must be a sub message of type 'UInt8'"
        self._radarcfg_maxdistance_valid = value

    @builtins.property
    def radarcfg_maxdistance(self):
        """Message field 'radarcfg_maxdistance'."""
        return self._radarcfg_maxdistance

    @radarcfg_maxdistance.setter
    def radarcfg_maxdistance(self, value):
        if __debug__:
            from std_msgs.msg import UInt8
            assert \
                isinstance(value, UInt8), \
                "The 'radarcfg_maxdistance' field must be a sub message of type 'UInt8'"
        self._radarcfg_maxdistance = value

    @builtins.property
    def radarcfg_radarpower(self):
        """Message field 'radarcfg_radarpower'."""
        return self._radarcfg_radarpower

    @radarcfg_radarpower.setter
    def radarcfg_radarpower(self, value):
        if __debug__:
            from std_msgs.msg import UInt8
            assert \
                isinstance(value, UInt8), \
                "The 'radarcfg_radarpower' field must be a sub message of type 'UInt8'"
        self._radarcfg_radarpower = value

    @builtins.property
    def radarcfg_outputtype(self):
        """Message field 'radarcfg_outputtype'."""
        return self._radarcfg_outputtype

    @radarcfg_outputtype.setter
    def radarcfg_outputtype(self, value):
        if __debug__:
            from std_msgs.msg import UInt8
            assert \
                isinstance(value, UInt8), \
                "The 'radarcfg_outputtype' field must be a sub message of type 'UInt8'"
        self._radarcfg_outputtype = value

    @builtins.property
    def radarcfg_sensorid(self):
        """Message field 'radarcfg_sensorid'."""
        return self._radarcfg_sensorid

    @radarcfg_sensorid.setter
    def radarcfg_sensorid(self, value):
        if __debug__:
            from std_msgs.msg import UInt8
            assert \
                isinstance(value, UInt8), \
                "The 'radarcfg_sensorid' field must be a sub message of type 'UInt8'"
        self._radarcfg_sensorid = value

    @builtins.property
    def radarcfg_storeinnvm(self):
        """Message field 'radarcfg_storeinnvm'."""
        return self._radarcfg_storeinnvm

    @radarcfg_storeinnvm.setter
    def radarcfg_storeinnvm(self, value):
        if __debug__:
            from std_msgs.msg import UInt8
            assert \
                isinstance(value, UInt8), \
                "The 'radarcfg_storeinnvm' field must be a sub message of type 'UInt8'"
        self._radarcfg_storeinnvm = value

    @builtins.property
    def radarcfg_sortindex(self):
        """Message field 'radarcfg_sortindex'."""
        return self._radarcfg_sortindex

    @radarcfg_sortindex.setter
    def radarcfg_sortindex(self, value):
        if __debug__:
            from std_msgs.msg import UInt8
            assert \
                isinstance(value, UInt8), \
                "The 'radarcfg_sortindex' field must be a sub message of type 'UInt8'"
        self._radarcfg_sortindex = value

    @builtins.property
    def radarcfg_sendextinfo(self):
        """Message field 'radarcfg_sendextinfo'."""
        return self._radarcfg_sendextinfo

    @radarcfg_sendextinfo.setter
    def radarcfg_sendextinfo(self, value):
        if __debug__:
            from std_msgs.msg import UInt8
            assert \
                isinstance(value, UInt8), \
                "The 'radarcfg_sendextinfo' field must be a sub message of type 'UInt8'"
        self._radarcfg_sendextinfo = value

    @builtins.property
    def radarcfg_sendquality(self):
        """Message field 'radarcfg_sendquality'."""
        return self._radarcfg_sendquality

    @radarcfg_sendquality.setter
    def radarcfg_sendquality(self, value):
        if __debug__:
            from std_msgs.msg import UInt8
            assert \
                isinstance(value, UInt8), \
                "The 'radarcfg_sendquality' field must be a sub message of type 'UInt8'"
        self._radarcfg_sendquality = value

    @builtins.property
    def radarcfg_ctrlrelay(self):
        """Message field 'radarcfg_ctrlrelay'."""
        return self._radarcfg_ctrlrelay

    @radarcfg_ctrlrelay.setter
    def radarcfg_ctrlrelay(self, value):
        if __debug__:
            from std_msgs.msg import UInt8
            assert \
                isinstance(value, UInt8), \
                "The 'radarcfg_ctrlrelay' field must be a sub message of type 'UInt8'"
        self._radarcfg_ctrlrelay = value

    @builtins.property
    def radarcfg_ctrlrelay_valid(self):
        """Message field 'radarcfg_ctrlrelay_valid'."""
        return self._radarcfg_ctrlrelay_valid

    @radarcfg_ctrlrelay_valid.setter
    def radarcfg_ctrlrelay_valid(self, value):
        if __debug__:
            from std_msgs.msg import UInt8
            assert \
                isinstance(value, UInt8), \
                "The 'radarcfg_ctrlrelay_valid' field must be a sub message of type 'UInt8'"
        self._radarcfg_ctrlrelay_valid = value

    @builtins.property
    def radarcfg_rcs_threshold(self):
        """Message field 'radarcfg_rcs_threshold'."""
        return self._radarcfg_rcs_threshold

    @radarcfg_rcs_threshold.setter
    def radarcfg_rcs_threshold(self, value):
        if __debug__:
            from std_msgs.msg import UInt8
            assert \
                isinstance(value, UInt8), \
                "The 'radarcfg_rcs_threshold' field must be a sub message of type 'UInt8'"
        self._radarcfg_rcs_threshold = value

    @builtins.property
    def radarcfg_rcs_threshold_valid(self):
        """Message field 'radarcfg_rcs_threshold_valid'."""
        return self._radarcfg_rcs_threshold_valid

    @radarcfg_rcs_threshold_valid.setter
    def radarcfg_rcs_threshold_valid(self, value):
        if __debug__:
            from std_msgs.msg import UInt8
            assert \
                isinstance(value, UInt8), \
                "The 'radarcfg_rcs_threshold_valid' field must be a sub message of type 'UInt8'"
        self._radarcfg_rcs_threshold_valid = value
