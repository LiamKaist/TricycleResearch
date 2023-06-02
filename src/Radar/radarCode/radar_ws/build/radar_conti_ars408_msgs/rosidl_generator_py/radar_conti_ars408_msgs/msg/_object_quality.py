# generated from rosidl_generator_py/resource/_idl.py.em
# with input from radar_conti_ars408_msgs:msg/ObjectQuality.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ObjectQuality(type):
    """Metaclass of message 'ObjectQuality'."""

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
                'radar_conti_ars408_msgs.msg.ObjectQuality')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__object_quality
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__object_quality
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__object_quality
            cls._TYPE_SUPPORT = module.type_support_msg__msg__object_quality
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__object_quality

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


class ObjectQuality(metaclass=Metaclass_ObjectQuality):
    """Message class 'ObjectQuality'."""

    __slots__ = [
        '_obj_distlong_rms',
        '_obj_distlat_rms',
        '_obj_vrellong_rms',
        '_obj_vrellat_rms',
        '_obj_arellong_rms',
        '_obj_arellat_rms',
        '_obj_orientation_rms',
        '_obj_probofexist',
        '_obj_measstate',
    ]

    _fields_and_field_types = {
        'obj_distlong_rms': 'std_msgs/Float64',
        'obj_distlat_rms': 'std_msgs/Float64',
        'obj_vrellong_rms': 'std_msgs/Float64',
        'obj_vrellat_rms': 'std_msgs/Float64',
        'obj_arellong_rms': 'std_msgs/Float64',
        'obj_arellat_rms': 'std_msgs/Float64',
        'obj_orientation_rms': 'std_msgs/Float64',
        'obj_probofexist': 'std_msgs/Float64',
        'obj_measstate': 'std_msgs/String',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'String'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Float64
        self.obj_distlong_rms = kwargs.get('obj_distlong_rms', Float64())
        from std_msgs.msg import Float64
        self.obj_distlat_rms = kwargs.get('obj_distlat_rms', Float64())
        from std_msgs.msg import Float64
        self.obj_vrellong_rms = kwargs.get('obj_vrellong_rms', Float64())
        from std_msgs.msg import Float64
        self.obj_vrellat_rms = kwargs.get('obj_vrellat_rms', Float64())
        from std_msgs.msg import Float64
        self.obj_arellong_rms = kwargs.get('obj_arellong_rms', Float64())
        from std_msgs.msg import Float64
        self.obj_arellat_rms = kwargs.get('obj_arellat_rms', Float64())
        from std_msgs.msg import Float64
        self.obj_orientation_rms = kwargs.get('obj_orientation_rms', Float64())
        from std_msgs.msg import Float64
        self.obj_probofexist = kwargs.get('obj_probofexist', Float64())
        from std_msgs.msg import String
        self.obj_measstate = kwargs.get('obj_measstate', String())

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
        if self.obj_distlong_rms != other.obj_distlong_rms:
            return False
        if self.obj_distlat_rms != other.obj_distlat_rms:
            return False
        if self.obj_vrellong_rms != other.obj_vrellong_rms:
            return False
        if self.obj_vrellat_rms != other.obj_vrellat_rms:
            return False
        if self.obj_arellong_rms != other.obj_arellong_rms:
            return False
        if self.obj_arellat_rms != other.obj_arellat_rms:
            return False
        if self.obj_orientation_rms != other.obj_orientation_rms:
            return False
        if self.obj_probofexist != other.obj_probofexist:
            return False
        if self.obj_measstate != other.obj_measstate:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def obj_distlong_rms(self):
        """Message field 'obj_distlong_rms'."""
        return self._obj_distlong_rms

    @obj_distlong_rms.setter
    def obj_distlong_rms(self, value):
        if __debug__:
            from std_msgs.msg import Float64
            assert \
                isinstance(value, Float64), \
                "The 'obj_distlong_rms' field must be a sub message of type 'Float64'"
        self._obj_distlong_rms = value

    @builtins.property
    def obj_distlat_rms(self):
        """Message field 'obj_distlat_rms'."""
        return self._obj_distlat_rms

    @obj_distlat_rms.setter
    def obj_distlat_rms(self, value):
        if __debug__:
            from std_msgs.msg import Float64
            assert \
                isinstance(value, Float64), \
                "The 'obj_distlat_rms' field must be a sub message of type 'Float64'"
        self._obj_distlat_rms = value

    @builtins.property
    def obj_vrellong_rms(self):
        """Message field 'obj_vrellong_rms'."""
        return self._obj_vrellong_rms

    @obj_vrellong_rms.setter
    def obj_vrellong_rms(self, value):
        if __debug__:
            from std_msgs.msg import Float64
            assert \
                isinstance(value, Float64), \
                "The 'obj_vrellong_rms' field must be a sub message of type 'Float64'"
        self._obj_vrellong_rms = value

    @builtins.property
    def obj_vrellat_rms(self):
        """Message field 'obj_vrellat_rms'."""
        return self._obj_vrellat_rms

    @obj_vrellat_rms.setter
    def obj_vrellat_rms(self, value):
        if __debug__:
            from std_msgs.msg import Float64
            assert \
                isinstance(value, Float64), \
                "The 'obj_vrellat_rms' field must be a sub message of type 'Float64'"
        self._obj_vrellat_rms = value

    @builtins.property
    def obj_arellong_rms(self):
        """Message field 'obj_arellong_rms'."""
        return self._obj_arellong_rms

    @obj_arellong_rms.setter
    def obj_arellong_rms(self, value):
        if __debug__:
            from std_msgs.msg import Float64
            assert \
                isinstance(value, Float64), \
                "The 'obj_arellong_rms' field must be a sub message of type 'Float64'"
        self._obj_arellong_rms = value

    @builtins.property
    def obj_arellat_rms(self):
        """Message field 'obj_arellat_rms'."""
        return self._obj_arellat_rms

    @obj_arellat_rms.setter
    def obj_arellat_rms(self, value):
        if __debug__:
            from std_msgs.msg import Float64
            assert \
                isinstance(value, Float64), \
                "The 'obj_arellat_rms' field must be a sub message of type 'Float64'"
        self._obj_arellat_rms = value

    @builtins.property
    def obj_orientation_rms(self):
        """Message field 'obj_orientation_rms'."""
        return self._obj_orientation_rms

    @obj_orientation_rms.setter
    def obj_orientation_rms(self, value):
        if __debug__:
            from std_msgs.msg import Float64
            assert \
                isinstance(value, Float64), \
                "The 'obj_orientation_rms' field must be a sub message of type 'Float64'"
        self._obj_orientation_rms = value

    @builtins.property
    def obj_probofexist(self):
        """Message field 'obj_probofexist'."""
        return self._obj_probofexist

    @obj_probofexist.setter
    def obj_probofexist(self, value):
        if __debug__:
            from std_msgs.msg import Float64
            assert \
                isinstance(value, Float64), \
                "The 'obj_probofexist' field must be a sub message of type 'Float64'"
        self._obj_probofexist = value

    @builtins.property
    def obj_measstate(self):
        """Message field 'obj_measstate'."""
        return self._obj_measstate

    @obj_measstate.setter
    def obj_measstate(self, value):
        if __debug__:
            from std_msgs.msg import String
            assert \
                isinstance(value, String), \
                "The 'obj_measstate' field must be a sub message of type 'String'"
        self._obj_measstate = value
