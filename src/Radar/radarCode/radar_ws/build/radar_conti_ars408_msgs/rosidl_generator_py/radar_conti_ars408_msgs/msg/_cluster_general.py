# generated from rosidl_generator_py/resource/_idl.py.em
# with input from radar_conti_ars408_msgs:msg/ClusterGeneral.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ClusterGeneral(type):
    """Metaclass of message 'ClusterGeneral'."""

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
                'radar_conti_ars408_msgs.msg.ClusterGeneral')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__cluster_general
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__cluster_general
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__cluster_general
            cls._TYPE_SUPPORT = module.type_support_msg__msg__cluster_general
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__cluster_general

            from std_msgs.msg import Float64
            if Float64.__class__._TYPE_SUPPORT is None:
                Float64.__class__.__import_type_support__()

            from std_msgs.msg import Int32
            if Int32.__class__._TYPE_SUPPORT is None:
                Int32.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ClusterGeneral(metaclass=Metaclass_ClusterGeneral):
    """Message class 'ClusterGeneral'."""

    __slots__ = [
        '_cluster_distlong',
        '_cluster_distlat',
        '_cluster_vrellong',
        '_cluster_vrellat',
        '_cluster_dynprop',
        '_cluster_rcs',
    ]

    _fields_and_field_types = {
        'cluster_distlong': 'std_msgs/Float64',
        'cluster_distlat': 'std_msgs/Float64',
        'cluster_vrellong': 'std_msgs/Float64',
        'cluster_vrellat': 'std_msgs/Float64',
        'cluster_dynprop': 'std_msgs/Int32',
        'cluster_rcs': 'std_msgs/Float64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Int32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Float64
        self.cluster_distlong = kwargs.get('cluster_distlong', Float64())
        from std_msgs.msg import Float64
        self.cluster_distlat = kwargs.get('cluster_distlat', Float64())
        from std_msgs.msg import Float64
        self.cluster_vrellong = kwargs.get('cluster_vrellong', Float64())
        from std_msgs.msg import Float64
        self.cluster_vrellat = kwargs.get('cluster_vrellat', Float64())
        from std_msgs.msg import Int32
        self.cluster_dynprop = kwargs.get('cluster_dynprop', Int32())
        from std_msgs.msg import Float64
        self.cluster_rcs = kwargs.get('cluster_rcs', Float64())

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
        if self.cluster_distlong != other.cluster_distlong:
            return False
        if self.cluster_distlat != other.cluster_distlat:
            return False
        if self.cluster_vrellong != other.cluster_vrellong:
            return False
        if self.cluster_vrellat != other.cluster_vrellat:
            return False
        if self.cluster_dynprop != other.cluster_dynprop:
            return False
        if self.cluster_rcs != other.cluster_rcs:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def cluster_distlong(self):
        """Message field 'cluster_distlong'."""
        return self._cluster_distlong

    @cluster_distlong.setter
    def cluster_distlong(self, value):
        if __debug__:
            from std_msgs.msg import Float64
            assert \
                isinstance(value, Float64), \
                "The 'cluster_distlong' field must be a sub message of type 'Float64'"
        self._cluster_distlong = value

    @builtins.property
    def cluster_distlat(self):
        """Message field 'cluster_distlat'."""
        return self._cluster_distlat

    @cluster_distlat.setter
    def cluster_distlat(self, value):
        if __debug__:
            from std_msgs.msg import Float64
            assert \
                isinstance(value, Float64), \
                "The 'cluster_distlat' field must be a sub message of type 'Float64'"
        self._cluster_distlat = value

    @builtins.property
    def cluster_vrellong(self):
        """Message field 'cluster_vrellong'."""
        return self._cluster_vrellong

    @cluster_vrellong.setter
    def cluster_vrellong(self, value):
        if __debug__:
            from std_msgs.msg import Float64
            assert \
                isinstance(value, Float64), \
                "The 'cluster_vrellong' field must be a sub message of type 'Float64'"
        self._cluster_vrellong = value

    @builtins.property
    def cluster_vrellat(self):
        """Message field 'cluster_vrellat'."""
        return self._cluster_vrellat

    @cluster_vrellat.setter
    def cluster_vrellat(self, value):
        if __debug__:
            from std_msgs.msg import Float64
            assert \
                isinstance(value, Float64), \
                "The 'cluster_vrellat' field must be a sub message of type 'Float64'"
        self._cluster_vrellat = value

    @builtins.property
    def cluster_dynprop(self):
        """Message field 'cluster_dynprop'."""
        return self._cluster_dynprop

    @cluster_dynprop.setter
    def cluster_dynprop(self, value):
        if __debug__:
            from std_msgs.msg import Int32
            assert \
                isinstance(value, Int32), \
                "The 'cluster_dynprop' field must be a sub message of type 'Int32'"
        self._cluster_dynprop = value

    @builtins.property
    def cluster_rcs(self):
        """Message field 'cluster_rcs'."""
        return self._cluster_rcs

    @cluster_rcs.setter
    def cluster_rcs(self, value):
        if __debug__:
            from std_msgs.msg import Float64
            assert \
                isinstance(value, Float64), \
                "The 'cluster_rcs' field must be a sub message of type 'Float64'"
        self._cluster_rcs = value
