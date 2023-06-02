# generated from rosidl_generator_py/resource/_idl.py.em
# with input from radar_conti_ars408_msgs:msg/ObjectExtended.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ObjectExtended(type):
    """Metaclass of message 'ObjectExtended'."""

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
                'radar_conti_ars408_msgs.msg.ObjectExtended')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__object_extended
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__object_extended
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__object_extended
            cls._TYPE_SUPPORT = module.type_support_msg__msg__object_extended
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__object_extended

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


class ObjectExtended(metaclass=Metaclass_ObjectExtended):
    """Message class 'ObjectExtended'."""

    __slots__ = [
        '_obj_arellong',
        '_obj_arellat',
        '_obj_class',
        '_obj_orientationangle',
        '_obj_length',
        '_obj_width',
    ]

    _fields_and_field_types = {
        'obj_arellong': 'std_msgs/Float64',
        'obj_arellat': 'std_msgs/Float64',
        'obj_class': 'std_msgs/String',
        'obj_orientationangle': 'std_msgs/Float64',
        'obj_length': 'std_msgs/Float64',
        'obj_width': 'std_msgs/Float64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'String'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Float64
        self.obj_arellong = kwargs.get('obj_arellong', Float64())
        from std_msgs.msg import Float64
        self.obj_arellat = kwargs.get('obj_arellat', Float64())
        from std_msgs.msg import String
        self.obj_class = kwargs.get('obj_class', String())
        from std_msgs.msg import Float64
        self.obj_orientationangle = kwargs.get('obj_orientationangle', Float64())
        from std_msgs.msg import Float64
        self.obj_length = kwargs.get('obj_length', Float64())
        from std_msgs.msg import Float64
        self.obj_width = kwargs.get('obj_width', Float64())

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
        if self.obj_arellong != other.obj_arellong:
            return False
        if self.obj_arellat != other.obj_arellat:
            return False
        if self.obj_class != other.obj_class:
            return False
        if self.obj_orientationangle != other.obj_orientationangle:
            return False
        if self.obj_length != other.obj_length:
            return False
        if self.obj_width != other.obj_width:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def obj_arellong(self):
        """Message field 'obj_arellong'."""
        return self._obj_arellong

    @obj_arellong.setter
    def obj_arellong(self, value):
        if __debug__:
            from std_msgs.msg import Float64
            assert \
                isinstance(value, Float64), \
                "The 'obj_arellong' field must be a sub message of type 'Float64'"
        self._obj_arellong = value

    @builtins.property
    def obj_arellat(self):
        """Message field 'obj_arellat'."""
        return self._obj_arellat

    @obj_arellat.setter
    def obj_arellat(self, value):
        if __debug__:
            from std_msgs.msg import Float64
            assert \
                isinstance(value, Float64), \
                "The 'obj_arellat' field must be a sub message of type 'Float64'"
        self._obj_arellat = value

    @builtins.property
    def obj_class(self):
        """Message field 'obj_class'."""
        return self._obj_class

    @obj_class.setter
    def obj_class(self, value):
        if __debug__:
            from std_msgs.msg import String
            assert \
                isinstance(value, String), \
                "The 'obj_class' field must be a sub message of type 'String'"
        self._obj_class = value

    @builtins.property
    def obj_orientationangle(self):
        """Message field 'obj_orientationangle'."""
        return self._obj_orientationangle

    @obj_orientationangle.setter
    def obj_orientationangle(self, value):
        if __debug__:
            from std_msgs.msg import Float64
            assert \
                isinstance(value, Float64), \
                "The 'obj_orientationangle' field must be a sub message of type 'Float64'"
        self._obj_orientationangle = value

    @builtins.property
    def obj_length(self):
        """Message field 'obj_length'."""
        return self._obj_length

    @obj_length.setter
    def obj_length(self, value):
        if __debug__:
            from std_msgs.msg import Float64
            assert \
                isinstance(value, Float64), \
                "The 'obj_length' field must be a sub message of type 'Float64'"
        self._obj_length = value

    @builtins.property
    def obj_width(self):
        """Message field 'obj_width'."""
        return self._obj_width

    @obj_width.setter
    def obj_width(self, value):
        if __debug__:
            from std_msgs.msg import Float64
            assert \
                isinstance(value, Float64), \
                "The 'obj_width' field must be a sub message of type 'Float64'"
        self._obj_width = value
