# generated from rosidl_generator_py/resource/_idl.py.em
# with input from radar_conti_ars408_msgs:msg/ClusterQuality.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ClusterQuality(type):
    """Metaclass of message 'ClusterQuality'."""

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
                'radar_conti_ars408_msgs.msg.ClusterQuality')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__cluster_quality
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__cluster_quality
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__cluster_quality
            cls._TYPE_SUPPORT = module.type_support_msg__msg__cluster_quality
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__cluster_quality

            from std_msgs.msg import Float64
            if Float64.__class__._TYPE_SUPPORT is None:
                Float64.__class__.__import_type_support__()

            from std_msgs.msg import String
            if String.__class__._TYPE_SUPPORT is None:
                String.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ClusterQuality(metaclass=Metaclass_ClusterQuality):
    """Message class 'ClusterQuality'."""

    __slots__ = [
        '_cluster_distlong_rms',
        '_cluster_distlat_rms',
        '_cluster_vrellong_rms',
        '_cluster_vrellat_rms',
        '_cluster_pdh0',
        '_cluster_invalidstate',
        '_cluster_ambigstate',
    ]

    _fields_and_field_types = {
        'cluster_distlong_rms': 'std_msgs/Float64',
        'cluster_distlat_rms': 'std_msgs/Float64',
        'cluster_vrellong_rms': 'std_msgs/Float64',
        'cluster_vrellat_rms': 'std_msgs/Float64',
        'cluster_pdh0': 'std_msgs/String',
        'cluster_invalidstate': 'std_msgs/String',
        'cluster_ambigstate': 'std_msgs/String',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'String'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'String'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'String'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Float64
        self.cluster_distlong_rms = kwargs.get('cluster_distlong_rms', Float64())
        from std_msgs.msg import Float64
        self.cluster_distlat_rms = kwargs.get('cluster_distlat_rms', Float64())
        from std_msgs.msg import Float64
        self.cluster_vrellong_rms = kwargs.get('cluster_vrellong_rms', Float64())
        from std_msgs.msg import Float64
        self.cluster_vrellat_rms = kwargs.get('cluster_vrellat_rms', Float64())
        from std_msgs.msg import String
        self.cluster_pdh0 = kwargs.get('cluster_pdh0', String())
        from std_msgs.msg import String
        self.cluster_invalidstate = kwargs.get('cluster_invalidstate', String())
        from std_msgs.msg import String
        self.cluster_ambigstate = kwargs.get('cluster_ambigstate', String())

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
        if self.cluster_distlong_rms != other.cluster_distlong_rms:
            return False
        if self.cluster_distlat_rms != other.cluster_distlat_rms:
            return False
        if self.cluster_vrellong_rms != other.cluster_vrellong_rms:
            return False
        if self.cluster_vrellat_rms != other.cluster_vrellat_rms:
            return False
        if self.cluster_pdh0 != other.cluster_pdh0:
            return False
        if self.cluster_invalidstate != other.cluster_invalidstate:
            return False
        if self.cluster_ambigstate != other.cluster_ambigstate:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def cluster_distlong_rms(self):
        """Message field 'cluster_distlong_rms'."""
        return self._cluster_distlong_rms

    @cluster_distlong_rms.setter
    def cluster_distlong_rms(self, value):
        if __debug__:
            from std_msgs.msg import Float64
            assert \
                isinstance(value, Float64), \
                "The 'cluster_distlong_rms' field must be a sub message of type 'Float64'"
        self._cluster_distlong_rms = value

    @builtins.property
    def cluster_distlat_rms(self):
        """Message field 'cluster_distlat_rms'."""
        return self._cluster_distlat_rms

    @cluster_distlat_rms.setter
    def cluster_distlat_rms(self, value):
        if __debug__:
            from std_msgs.msg import Float64
            assert \
                isinstance(value, Float64), \
                "The 'cluster_distlat_rms' field must be a sub message of type 'Float64'"
        self._cluster_distlat_rms = value

    @builtins.property
    def cluster_vrellong_rms(self):
        """Message field 'cluster_vrellong_rms'."""
        return self._cluster_vrellong_rms

    @cluster_vrellong_rms.setter
    def cluster_vrellong_rms(self, value):
        if __debug__:
            from std_msgs.msg import Float64
            assert \
                isinstance(value, Float64), \
                "The 'cluster_vrellong_rms' field must be a sub message of type 'Float64'"
        self._cluster_vrellong_rms = value

    @builtins.property
    def cluster_vrellat_rms(self):
        """Message field 'cluster_vrellat_rms'."""
        return self._cluster_vrellat_rms

    @cluster_vrellat_rms.setter
    def cluster_vrellat_rms(self, value):
        if __debug__:
            from std_msgs.msg import Float64
            assert \
                isinstance(value, Float64), \
                "The 'cluster_vrellat_rms' field must be a sub message of type 'Float64'"
        self._cluster_vrellat_rms = value

    @builtins.property
    def cluster_pdh0(self):
        """Message field 'cluster_pdh0'."""
        return self._cluster_pdh0

    @cluster_pdh0.setter
    def cluster_pdh0(self, value):
        if __debug__:
            from std_msgs.msg import String
            assert \
                isinstance(value, String), \
                "The 'cluster_pdh0' field must be a sub message of type 'String'"
        self._cluster_pdh0 = value

    @builtins.property
    def cluster_invalidstate(self):
        """Message field 'cluster_invalidstate'."""
        return self._cluster_invalidstate

    @cluster_invalidstate.setter
    def cluster_invalidstate(self, value):
        if __debug__:
            from std_msgs.msg import String
            assert \
                isinstance(value, String), \
                "The 'cluster_invalidstate' field must be a sub message of type 'String'"
        self._cluster_invalidstate = value

    @builtins.property
    def cluster_ambigstate(self):
        """Message field 'cluster_ambigstate'."""
        return self._cluster_ambigstate

    @cluster_ambigstate.setter
    def cluster_ambigstate(self, value):
        if __debug__:
            from std_msgs.msg import String
            assert \
                isinstance(value, String), \
                "The 'cluster_ambigstate' field must be a sub message of type 'String'"
        self._cluster_ambigstate = value
