# generated from rosidl_generator_py/resource/_idl.py.em
# with input from radar_conti_ars408_msgs:msg/VersionID.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VersionID(type):
    """Metaclass of message 'VersionID'."""

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
                'radar_conti_ars408_msgs.msg.VersionID')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__version_id
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__version_id
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__version_id
            cls._TYPE_SUPPORT = module.type_support_msg__msg__version_id
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__version_id

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

            from std_msgs.msg import Int32
            if Int32.__class__._TYPE_SUPPORT is None:
                Int32.__class__.__import_type_support__()

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


class VersionID(metaclass=Metaclass_VersionID):
    """Message class 'VersionID'."""

    __slots__ = [
        '_header',
        '_version_majorrelease',
        '_version_minorrelease',
        '_version_patchlevel',
        '_version_extendedrange',
        '_version_countrycode',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'version_majorrelease': 'std_msgs/Int32',
        'version_minorrelease': 'std_msgs/Int32',
        'version_patchlevel': 'std_msgs/Int32',
        'version_extendedrange': 'std_msgs/String',
        'version_countrycode': 'std_msgs/String',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Int32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Int32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Int32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'String'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'String'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from std_msgs.msg import Int32
        self.version_majorrelease = kwargs.get('version_majorrelease', Int32())
        from std_msgs.msg import Int32
        self.version_minorrelease = kwargs.get('version_minorrelease', Int32())
        from std_msgs.msg import Int32
        self.version_patchlevel = kwargs.get('version_patchlevel', Int32())
        from std_msgs.msg import String
        self.version_extendedrange = kwargs.get('version_extendedrange', String())
        from std_msgs.msg import String
        self.version_countrycode = kwargs.get('version_countrycode', String())

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
        if self.version_majorrelease != other.version_majorrelease:
            return False
        if self.version_minorrelease != other.version_minorrelease:
            return False
        if self.version_patchlevel != other.version_patchlevel:
            return False
        if self.version_extendedrange != other.version_extendedrange:
            return False
        if self.version_countrycode != other.version_countrycode:
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
    def version_majorrelease(self):
        """Message field 'version_majorrelease'."""
        return self._version_majorrelease

    @version_majorrelease.setter
    def version_majorrelease(self, value):
        if __debug__:
            from std_msgs.msg import Int32
            assert \
                isinstance(value, Int32), \
                "The 'version_majorrelease' field must be a sub message of type 'Int32'"
        self._version_majorrelease = value

    @builtins.property
    def version_minorrelease(self):
        """Message field 'version_minorrelease'."""
        return self._version_minorrelease

    @version_minorrelease.setter
    def version_minorrelease(self, value):
        if __debug__:
            from std_msgs.msg import Int32
            assert \
                isinstance(value, Int32), \
                "The 'version_minorrelease' field must be a sub message of type 'Int32'"
        self._version_minorrelease = value

    @builtins.property
    def version_patchlevel(self):
        """Message field 'version_patchlevel'."""
        return self._version_patchlevel

    @version_patchlevel.setter
    def version_patchlevel(self, value):
        if __debug__:
            from std_msgs.msg import Int32
            assert \
                isinstance(value, Int32), \
                "The 'version_patchlevel' field must be a sub message of type 'Int32'"
        self._version_patchlevel = value

    @builtins.property
    def version_extendedrange(self):
        """Message field 'version_extendedrange'."""
        return self._version_extendedrange

    @version_extendedrange.setter
    def version_extendedrange(self, value):
        if __debug__:
            from std_msgs.msg import String
            assert \
                isinstance(value, String), \
                "The 'version_extendedrange' field must be a sub message of type 'String'"
        self._version_extendedrange = value

    @builtins.property
    def version_countrycode(self):
        """Message field 'version_countrycode'."""
        return self._version_countrycode

    @version_countrycode.setter
    def version_countrycode(self, value):
        if __debug__:
            from std_msgs.msg import String
            assert \
                isinstance(value, String), \
                "The 'version_countrycode' field must be a sub message of type 'String'"
        self._version_countrycode = value
