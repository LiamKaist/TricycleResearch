# generated from rosidl_generator_py/resource/_idl.py.em
# with input from radar_conti_ars408_msgs:msg/ObjectStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ObjectStatus(type):
    """Metaclass of message 'ObjectStatus'."""

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
                'radar_conti_ars408_msgs.msg.ObjectStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__object_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__object_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__object_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__object_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__object_status

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


class ObjectStatus(metaclass=Metaclass_ObjectStatus):
    """Message class 'ObjectStatus'."""

    __slots__ = [
        '_obj_nofobjects',
        '_obj_meascounter',
        '_obj_interfaceversion',
    ]

    _fields_and_field_types = {
        'obj_nofobjects': 'std_msgs/Int32',
        'obj_meascounter': 'std_msgs/Int32',
        'obj_interfaceversion': 'std_msgs/Int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Int32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Int32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Int32
        self.obj_nofobjects = kwargs.get('obj_nofobjects', Int32())
        from std_msgs.msg import Int32
        self.obj_meascounter = kwargs.get('obj_meascounter', Int32())
        from std_msgs.msg import Int32
        self.obj_interfaceversion = kwargs.get('obj_interfaceversion', Int32())

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
        if self.obj_nofobjects != other.obj_nofobjects:
            return False
        if self.obj_meascounter != other.obj_meascounter:
            return False
        if self.obj_interfaceversion != other.obj_interfaceversion:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def obj_nofobjects(self):
        """Message field 'obj_nofobjects'."""
        return self._obj_nofobjects

    @obj_nofobjects.setter
    def obj_nofobjects(self, value):
        if __debug__:
            from std_msgs.msg import Int32
            assert \
                isinstance(value, Int32), \
                "The 'obj_nofobjects' field must be a sub message of type 'Int32'"
        self._obj_nofobjects = value

    @builtins.property
    def obj_meascounter(self):
        """Message field 'obj_meascounter'."""
        return self._obj_meascounter

    @obj_meascounter.setter
    def obj_meascounter(self, value):
        if __debug__:
            from std_msgs.msg import Int32
            assert \
                isinstance(value, Int32), \
                "The 'obj_meascounter' field must be a sub message of type 'Int32'"
        self._obj_meascounter = value

    @builtins.property
    def obj_interfaceversion(self):
        """Message field 'obj_interfaceversion'."""
        return self._obj_interfaceversion

    @obj_interfaceversion.setter
    def obj_interfaceversion(self, value):
        if __debug__:
            from std_msgs.msg import Int32
            assert \
                isinstance(value, Int32), \
                "The 'obj_interfaceversion' field must be a sub message of type 'Int32'"
        self._obj_interfaceversion = value
