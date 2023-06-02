# generated from rosidl_generator_py/resource/_idl.py.em
# with input from radar_conti_ars408_msgs:msg/ObjectGeneral.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ObjectGeneral(type):
    """Metaclass of message 'ObjectGeneral'."""

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
                'radar_conti_ars408_msgs.msg.ObjectGeneral')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__object_general
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__object_general
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__object_general
            cls._TYPE_SUPPORT = module.type_support_msg__msg__object_general
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__object_general

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


class ObjectGeneral(metaclass=Metaclass_ObjectGeneral):
    """Message class 'ObjectGeneral'."""

    __slots__ = [
        '_obj_distlong',
        '_obj_distlat',
        '_obj_vrellong',
        '_obj_vrellat',
        '_obj_dynprop',
        '_obj_rcs',
    ]

    _fields_and_field_types = {
        'obj_distlong': 'std_msgs/Float64',
        'obj_distlat': 'std_msgs/Float64',
        'obj_vrellong': 'std_msgs/Float64',
        'obj_vrellat': 'std_msgs/Float64',
        'obj_dynprop': 'std_msgs/String',
        'obj_rcs': 'std_msgs/Float64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'String'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Float64
        self.obj_distlong = kwargs.get('obj_distlong', Float64())
        from std_msgs.msg import Float64
        self.obj_distlat = kwargs.get('obj_distlat', Float64())
        from std_msgs.msg import Float64
        self.obj_vrellong = kwargs.get('obj_vrellong', Float64())
        from std_msgs.msg import Float64
        self.obj_vrellat = kwargs.get('obj_vrellat', Float64())
        from std_msgs.msg import String
        self.obj_dynprop = kwargs.get('obj_dynprop', String())
        from std_msgs.msg import Float64
        self.obj_rcs = kwargs.get('obj_rcs', Float64())

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
        if self.obj_distlong != other.obj_distlong:
            return False
        if self.obj_distlat != other.obj_distlat:
            return False
        if self.obj_vrellong != other.obj_vrellong:
            return False
        if self.obj_vrellat != other.obj_vrellat:
            return False
        if self.obj_dynprop != other.obj_dynprop:
            return False
        if self.obj_rcs != other.obj_rcs:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def obj_distlong(self):
        """Message field 'obj_distlong'."""
        return self._obj_distlong

    @obj_distlong.setter
    def obj_distlong(self, value):
        if __debug__:
            from std_msgs.msg import Float64
            assert \
                isinstance(value, Float64), \
                "The 'obj_distlong' field must be a sub message of type 'Float64'"
        self._obj_distlong = value

    @builtins.property
    def obj_distlat(self):
        """Message field 'obj_distlat'."""
        return self._obj_distlat

    @obj_distlat.setter
    def obj_distlat(self, value):
        if __debug__:
            from std_msgs.msg import Float64
            assert \
                isinstance(value, Float64), \
                "The 'obj_distlat' field must be a sub message of type 'Float64'"
        self._obj_distlat = value

    @builtins.property
    def obj_vrellong(self):
        """Message field 'obj_vrellong'."""
        return self._obj_vrellong

    @obj_vrellong.setter
    def obj_vrellong(self, value):
        if __debug__:
            from std_msgs.msg import Float64
            assert \
                isinstance(value, Float64), \
                "The 'obj_vrellong' field must be a sub message of type 'Float64'"
        self._obj_vrellong = value

    @builtins.property
    def obj_vrellat(self):
        """Message field 'obj_vrellat'."""
        return self._obj_vrellat

    @obj_vrellat.setter
    def obj_vrellat(self, value):
        if __debug__:
            from std_msgs.msg import Float64
            assert \
                isinstance(value, Float64), \
                "The 'obj_vrellat' field must be a sub message of type 'Float64'"
        self._obj_vrellat = value

    @builtins.property
    def obj_dynprop(self):
        """Message field 'obj_dynprop'."""
        return self._obj_dynprop

    @obj_dynprop.setter
    def obj_dynprop(self, value):
        if __debug__:
            from std_msgs.msg import String
            assert \
                isinstance(value, String), \
                "The 'obj_dynprop' field must be a sub message of type 'String'"
        self._obj_dynprop = value

    @builtins.property
    def obj_rcs(self):
        """Message field 'obj_rcs'."""
        return self._obj_rcs

    @obj_rcs.setter
    def obj_rcs(self, value):
        if __debug__:
            from std_msgs.msg import Float64
            assert \
                isinstance(value, Float64), \
                "The 'obj_rcs' field must be a sub message of type 'Float64'"
        self._obj_rcs = value
