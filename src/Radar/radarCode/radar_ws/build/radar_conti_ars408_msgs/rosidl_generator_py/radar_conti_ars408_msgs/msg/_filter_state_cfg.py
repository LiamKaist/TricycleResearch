# generated from rosidl_generator_py/resource/_idl.py.em
# with input from radar_conti_ars408_msgs:msg/FilterStateCfg.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_FilterStateCfg(type):
    """Metaclass of message 'FilterStateCfg'."""

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
                'radar_conti_ars408_msgs.msg.FilterStateCfg')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__filter_state_cfg
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__filter_state_cfg
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__filter_state_cfg
            cls._TYPE_SUPPORT = module.type_support_msg__msg__filter_state_cfg
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__filter_state_cfg

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


class FilterStateCfg(metaclass=Metaclass_FilterStateCfg):
    """Message class 'FilterStateCfg'."""

    __slots__ = [
        '_header',
        '_filtercfg_valid',
        '_filtercfg_active',
        '_filtercfg_index',
        '_filtercfg_type',
        '_filtercfg_min_nofobj',
        '_filtercfg_min_distance',
        '_filtercfg_min_azimuth',
        '_filtercfg_min_vreloncome',
        '_filtercfg_min_vreldepart',
        '_filtercfg_min_rcs',
        '_filtercfg_min_lifetime',
        '_filtercfg_min_size',
        '_filtercfg_min_probexists',
        '_filtercfg_min_y',
        '_filtercfg_min_x',
        '_filtercfg_min_vyrightleft',
        '_filtercfg_min_vxoncome',
        '_filtercfg_min_vyleftright',
        '_filtercfg_min_vxdepart',
        '_filtercfg_min_object_class',
        '_filtercfg_max_nofobj',
        '_filtercfg_max_distance',
        '_filtercfg_max_azimuth',
        '_filtercfg_max_vreloncome',
        '_filtercfg_max_vreldepart',
        '_filtercfg_max_rcs',
        '_filtercfg_max_lifetime',
        '_filtercfg_max_size',
        '_filtercfg_max_probexists',
        '_filtercfg_max_y',
        '_filtercfg_max_x',
        '_filtercfg_max_vyrightleft',
        '_filtercfg_max_vxoncome',
        '_filtercfg_max_vyleftright',
        '_filtercfg_max_vxdepart',
        '_filtercfg_max_object_class',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'filtercfg_valid': 'std_msgs/UInt8',
        'filtercfg_active': 'std_msgs/UInt8',
        'filtercfg_index': 'std_msgs/UInt8',
        'filtercfg_type': 'std_msgs/UInt8',
        'filtercfg_min_nofobj': 'std_msgs/UInt8',
        'filtercfg_min_distance': 'std_msgs/UInt8',
        'filtercfg_min_azimuth': 'std_msgs/UInt8',
        'filtercfg_min_vreloncome': 'std_msgs/UInt8',
        'filtercfg_min_vreldepart': 'std_msgs/UInt8',
        'filtercfg_min_rcs': 'std_msgs/UInt8',
        'filtercfg_min_lifetime': 'std_msgs/UInt8',
        'filtercfg_min_size': 'std_msgs/UInt8',
        'filtercfg_min_probexists': 'std_msgs/UInt8',
        'filtercfg_min_y': 'std_msgs/UInt8',
        'filtercfg_min_x': 'std_msgs/UInt8',
        'filtercfg_min_vyrightleft': 'std_msgs/UInt8',
        'filtercfg_min_vxoncome': 'std_msgs/UInt8',
        'filtercfg_min_vyleftright': 'std_msgs/UInt8',
        'filtercfg_min_vxdepart': 'std_msgs/UInt8',
        'filtercfg_min_object_class': 'std_msgs/UInt8',
        'filtercfg_max_nofobj': 'std_msgs/UInt8',
        'filtercfg_max_distance': 'std_msgs/UInt8',
        'filtercfg_max_azimuth': 'std_msgs/UInt8',
        'filtercfg_max_vreloncome': 'std_msgs/UInt8',
        'filtercfg_max_vreldepart': 'std_msgs/UInt8',
        'filtercfg_max_rcs': 'std_msgs/UInt8',
        'filtercfg_max_lifetime': 'std_msgs/UInt8',
        'filtercfg_max_size': 'std_msgs/UInt8',
        'filtercfg_max_probexists': 'std_msgs/UInt8',
        'filtercfg_max_y': 'std_msgs/UInt8',
        'filtercfg_max_x': 'std_msgs/UInt8',
        'filtercfg_max_vyrightleft': 'std_msgs/UInt8',
        'filtercfg_max_vxoncome': 'std_msgs/UInt8',
        'filtercfg_max_vyleftright': 'std_msgs/UInt8',
        'filtercfg_max_vxdepart': 'std_msgs/UInt8',
        'filtercfg_max_object_class': 'std_msgs/UInt8',
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
        self.filtercfg_valid = kwargs.get('filtercfg_valid', UInt8())
        from std_msgs.msg import UInt8
        self.filtercfg_active = kwargs.get('filtercfg_active', UInt8())
        from std_msgs.msg import UInt8
        self.filtercfg_index = kwargs.get('filtercfg_index', UInt8())
        from std_msgs.msg import UInt8
        self.filtercfg_type = kwargs.get('filtercfg_type', UInt8())
        from std_msgs.msg import UInt8
        self.filtercfg_min_nofobj = kwargs.get('filtercfg_min_nofobj', UInt8())
        from std_msgs.msg import UInt8
        self.filtercfg_min_distance = kwargs.get('filtercfg_min_distance', UInt8())
        from std_msgs.msg import UInt8
        self.filtercfg_min_azimuth = kwargs.get('filtercfg_min_azimuth', UInt8())
        from std_msgs.msg import UInt8
        self.filtercfg_min_vreloncome = kwargs.get('filtercfg_min_vreloncome', UInt8())
        from std_msgs.msg import UInt8
        self.filtercfg_min_vreldepart = kwargs.get('filtercfg_min_vreldepart', UInt8())
        from std_msgs.msg import UInt8
        self.filtercfg_min_rcs = kwargs.get('filtercfg_min_rcs', UInt8())
        from std_msgs.msg import UInt8
        self.filtercfg_min_lifetime = kwargs.get('filtercfg_min_lifetime', UInt8())
        from std_msgs.msg import UInt8
        self.filtercfg_min_size = kwargs.get('filtercfg_min_size', UInt8())
        from std_msgs.msg import UInt8
        self.filtercfg_min_probexists = kwargs.get('filtercfg_min_probexists', UInt8())
        from std_msgs.msg import UInt8
        self.filtercfg_min_y = kwargs.get('filtercfg_min_y', UInt8())
        from std_msgs.msg import UInt8
        self.filtercfg_min_x = kwargs.get('filtercfg_min_x', UInt8())
        from std_msgs.msg import UInt8
        self.filtercfg_min_vyrightleft = kwargs.get('filtercfg_min_vyrightleft', UInt8())
        from std_msgs.msg import UInt8
        self.filtercfg_min_vxoncome = kwargs.get('filtercfg_min_vxoncome', UInt8())
        from std_msgs.msg import UInt8
        self.filtercfg_min_vyleftright = kwargs.get('filtercfg_min_vyleftright', UInt8())
        from std_msgs.msg import UInt8
        self.filtercfg_min_vxdepart = kwargs.get('filtercfg_min_vxdepart', UInt8())
        from std_msgs.msg import UInt8
        self.filtercfg_min_object_class = kwargs.get('filtercfg_min_object_class', UInt8())
        from std_msgs.msg import UInt8
        self.filtercfg_max_nofobj = kwargs.get('filtercfg_max_nofobj', UInt8())
        from std_msgs.msg import UInt8
        self.filtercfg_max_distance = kwargs.get('filtercfg_max_distance', UInt8())
        from std_msgs.msg import UInt8
        self.filtercfg_max_azimuth = kwargs.get('filtercfg_max_azimuth', UInt8())
        from std_msgs.msg import UInt8
        self.filtercfg_max_vreloncome = kwargs.get('filtercfg_max_vreloncome', UInt8())
        from std_msgs.msg import UInt8
        self.filtercfg_max_vreldepart = kwargs.get('filtercfg_max_vreldepart', UInt8())
        from std_msgs.msg import UInt8
        self.filtercfg_max_rcs = kwargs.get('filtercfg_max_rcs', UInt8())
        from std_msgs.msg import UInt8
        self.filtercfg_max_lifetime = kwargs.get('filtercfg_max_lifetime', UInt8())
        from std_msgs.msg import UInt8
        self.filtercfg_max_size = kwargs.get('filtercfg_max_size', UInt8())
        from std_msgs.msg import UInt8
        self.filtercfg_max_probexists = kwargs.get('filtercfg_max_probexists', UInt8())
        from std_msgs.msg import UInt8
        self.filtercfg_max_y = kwargs.get('filtercfg_max_y', UInt8())
        from std_msgs.msg import UInt8
        self.filtercfg_max_x = kwargs.get('filtercfg_max_x', UInt8())
        from std_msgs.msg import UInt8
        self.filtercfg_max_vyrightleft = kwargs.get('filtercfg_max_vyrightleft', UInt8())
        from std_msgs.msg import UInt8
        self.filtercfg_max_vxoncome = kwargs.get('filtercfg_max_vxoncome', UInt8())
        from std_msgs.msg import UInt8
        self.filtercfg_max_vyleftright = kwargs.get('filtercfg_max_vyleftright', UInt8())
        from std_msgs.msg import UInt8
        self.filtercfg_max_vxdepart = kwargs.get('filtercfg_max_vxdepart', UInt8())
        from std_msgs.msg import UInt8
        self.filtercfg_max_object_class = kwargs.get('filtercfg_max_object_class', UInt8())

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
        if self.filtercfg_valid != other.filtercfg_valid:
            return False
        if self.filtercfg_active != other.filtercfg_active:
            return False
        if self.filtercfg_index != other.filtercfg_index:
            return False
        if self.filtercfg_type != other.filtercfg_type:
            return False
        if self.filtercfg_min_nofobj != other.filtercfg_min_nofobj:
            return False
        if self.filtercfg_min_distance != other.filtercfg_min_distance:
            return False
        if self.filtercfg_min_azimuth != other.filtercfg_min_azimuth:
            return False
        if self.filtercfg_min_vreloncome != other.filtercfg_min_vreloncome:
            return False
        if self.filtercfg_min_vreldepart != other.filtercfg_min_vreldepart:
            return False
        if self.filtercfg_min_rcs != other.filtercfg_min_rcs:
            return False
        if self.filtercfg_min_lifetime != other.filtercfg_min_lifetime:
            return False
        if self.filtercfg_min_size != other.filtercfg_min_size:
            return False
        if self.filtercfg_min_probexists != other.filtercfg_min_probexists:
            return False
        if self.filtercfg_min_y != other.filtercfg_min_y:
            return False
        if self.filtercfg_min_x != other.filtercfg_min_x:
            return False
        if self.filtercfg_min_vyrightleft != other.filtercfg_min_vyrightleft:
            return False
        if self.filtercfg_min_vxoncome != other.filtercfg_min_vxoncome:
            return False
        if self.filtercfg_min_vyleftright != other.filtercfg_min_vyleftright:
            return False
        if self.filtercfg_min_vxdepart != other.filtercfg_min_vxdepart:
            return False
        if self.filtercfg_min_object_class != other.filtercfg_min_object_class:
            return False
        if self.filtercfg_max_nofobj != other.filtercfg_max_nofobj:
            return False
        if self.filtercfg_max_distance != other.filtercfg_max_distance:
            return False
        if self.filtercfg_max_azimuth != other.filtercfg_max_azimuth:
            return False
        if self.filtercfg_max_vreloncome != other.filtercfg_max_vreloncome:
            return False
        if self.filtercfg_max_vreldepart != other.filtercfg_max_vreldepart:
            return False
        if self.filtercfg_max_rcs != other.filtercfg_max_rcs:
            return False
        if self.filtercfg_max_lifetime != other.filtercfg_max_lifetime:
            return False
        if self.filtercfg_max_size != other.filtercfg_max_size:
            return False
        if self.filtercfg_max_probexists != other.filtercfg_max_probexists:
            return False
        if self.filtercfg_max_y != other.filtercfg_max_y:
            return False
        if self.filtercfg_max_x != other.filtercfg_max_x:
            return False
        if self.filtercfg_max_vyrightleft != other.filtercfg_max_vyrightleft:
            return False
        if self.filtercfg_max_vxoncome != other.filtercfg_max_vxoncome:
            return False
        if self.filtercfg_max_vyleftright != other.filtercfg_max_vyleftright:
            return False
        if self.filtercfg_max_vxdepart != other.filtercfg_max_vxdepart:
            return False
        if self.filtercfg_max_object_class != other.filtercfg_max_object_class:
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
    def filtercfg_valid(self):
        """Message field 'filtercfg_valid'."""
        return self._filtercfg_valid

    @filtercfg_valid.setter
    def filtercfg_valid(self, value):
        if __debug__:
            from std_msgs.msg import UInt8
            assert \
                isinstance(value, UInt8), \
                "The 'filtercfg_valid' field must be a sub message of type 'UInt8'"
        self._filtercfg_valid = value

    @builtins.property
    def filtercfg_active(self):
        """Message field 'filtercfg_active'."""
        return self._filtercfg_active

    @filtercfg_active.setter
    def filtercfg_active(self, value):
        if __debug__:
            from std_msgs.msg import UInt8
            assert \
                isinstance(value, UInt8), \
                "The 'filtercfg_active' field must be a sub message of type 'UInt8'"
        self._filtercfg_active = value

    @builtins.property
    def filtercfg_index(self):
        """Message field 'filtercfg_index'."""
        return self._filtercfg_index

    @filtercfg_index.setter
    def filtercfg_index(self, value):
        if __debug__:
            from std_msgs.msg import UInt8
            assert \
                isinstance(value, UInt8), \
                "The 'filtercfg_index' field must be a sub message of type 'UInt8'"
        self._filtercfg_index = value

    @builtins.property
    def filtercfg_type(self):
        """Message field 'filtercfg_type'."""
        return self._filtercfg_type

    @filtercfg_type.setter
    def filtercfg_type(self, value):
        if __debug__:
            from std_msgs.msg import UInt8
            assert \
                isinstance(value, UInt8), \
                "The 'filtercfg_type' field must be a sub message of type 'UInt8'"
        self._filtercfg_type = value

    @builtins.property
    def filtercfg_min_nofobj(self):
        """Message field 'filtercfg_min_nofobj'."""
        return self._filtercfg_min_nofobj

    @filtercfg_min_nofobj.setter
    def filtercfg_min_nofobj(self, value):
        if __debug__:
            from std_msgs.msg import UInt8
            assert \
                isinstance(value, UInt8), \
                "The 'filtercfg_min_nofobj' field must be a sub message of type 'UInt8'"
        self._filtercfg_min_nofobj = value

    @builtins.property
    def filtercfg_min_distance(self):
        """Message field 'filtercfg_min_distance'."""
        return self._filtercfg_min_distance

    @filtercfg_min_distance.setter
    def filtercfg_min_distance(self, value):
        if __debug__:
            from std_msgs.msg import UInt8
            assert \
                isinstance(value, UInt8), \
                "The 'filtercfg_min_distance' field must be a sub message of type 'UInt8'"
        self._filtercfg_min_distance = value

    @builtins.property
    def filtercfg_min_azimuth(self):
        """Message field 'filtercfg_min_azimuth'."""
        return self._filtercfg_min_azimuth

    @filtercfg_min_azimuth.setter
    def filtercfg_min_azimuth(self, value):
        if __debug__:
            from std_msgs.msg import UInt8
            assert \
                isinstance(value, UInt8), \
                "The 'filtercfg_min_azimuth' field must be a sub message of type 'UInt8'"
        self._filtercfg_min_azimuth = value

    @builtins.property
    def filtercfg_min_vreloncome(self):
        """Message field 'filtercfg_min_vreloncome'."""
        return self._filtercfg_min_vreloncome

    @filtercfg_min_vreloncome.setter
    def filtercfg_min_vreloncome(self, value):
        if __debug__:
            from std_msgs.msg import UInt8
            assert \
                isinstance(value, UInt8), \
                "The 'filtercfg_min_vreloncome' field must be a sub message of type 'UInt8'"
        self._filtercfg_min_vreloncome = value

    @builtins.property
    def filtercfg_min_vreldepart(self):
        """Message field 'filtercfg_min_vreldepart'."""
        return self._filtercfg_min_vreldepart

    @filtercfg_min_vreldepart.setter
    def filtercfg_min_vreldepart(self, value):
        if __debug__:
            from std_msgs.msg import UInt8
            assert \
                isinstance(value, UInt8), \
                "The 'filtercfg_min_vreldepart' field must be a sub message of type 'UInt8'"
        self._filtercfg_min_vreldepart = value

    @builtins.property
    def filtercfg_min_rcs(self):
        """Message field 'filtercfg_min_rcs'."""
        return self._filtercfg_min_rcs

    @filtercfg_min_rcs.setter
    def filtercfg_min_rcs(self, value):
        if __debug__:
            from std_msgs.msg import UInt8
            assert \
                isinstance(value, UInt8), \
                "The 'filtercfg_min_rcs' field must be a sub message of type 'UInt8'"
        self._filtercfg_min_rcs = value

    @builtins.property
    def filtercfg_min_lifetime(self):
        """Message field 'filtercfg_min_lifetime'."""
        return self._filtercfg_min_lifetime

    @filtercfg_min_lifetime.setter
    def filtercfg_min_lifetime(self, value):
        if __debug__:
            from std_msgs.msg import UInt8
            assert \
                isinstance(value, UInt8), \
                "The 'filtercfg_min_lifetime' field must be a sub message of type 'UInt8'"
        self._filtercfg_min_lifetime = value

    @builtins.property
    def filtercfg_min_size(self):
        """Message field 'filtercfg_min_size'."""
        return self._filtercfg_min_size

    @filtercfg_min_size.setter
    def filtercfg_min_size(self, value):
        if __debug__:
            from std_msgs.msg import UInt8
            assert \
                isinstance(value, UInt8), \
                "The 'filtercfg_min_size' field must be a sub message of type 'UInt8'"
        self._filtercfg_min_size = value

    @builtins.property
    def filtercfg_min_probexists(self):
        """Message field 'filtercfg_min_probexists'."""
        return self._filtercfg_min_probexists

    @filtercfg_min_probexists.setter
    def filtercfg_min_probexists(self, value):
        if __debug__:
            from std_msgs.msg import UInt8
            assert \
                isinstance(value, UInt8), \
                "The 'filtercfg_min_probexists' field must be a sub message of type 'UInt8'"
        self._filtercfg_min_probexists = value

    @builtins.property
    def filtercfg_min_y(self):
        """Message field 'filtercfg_min_y'."""
        return self._filtercfg_min_y

    @filtercfg_min_y.setter
    def filtercfg_min_y(self, value):
        if __debug__:
            from std_msgs.msg import UInt8
            assert \
                isinstance(value, UInt8), \
                "The 'filtercfg_min_y' field must be a sub message of type 'UInt8'"
        self._filtercfg_min_y = value

    @builtins.property
    def filtercfg_min_x(self):
        """Message field 'filtercfg_min_x'."""
        return self._filtercfg_min_x

    @filtercfg_min_x.setter
    def filtercfg_min_x(self, value):
        if __debug__:
            from std_msgs.msg import UInt8
            assert \
                isinstance(value, UInt8), \
                "The 'filtercfg_min_x' field must be a sub message of type 'UInt8'"
        self._filtercfg_min_x = value

    @builtins.property
    def filtercfg_min_vyrightleft(self):
        """Message field 'filtercfg_min_vyrightleft'."""
        return self._filtercfg_min_vyrightleft

    @filtercfg_min_vyrightleft.setter
    def filtercfg_min_vyrightleft(self, value):
        if __debug__:
            from std_msgs.msg import UInt8
            assert \
                isinstance(value, UInt8), \
                "The 'filtercfg_min_vyrightleft' field must be a sub message of type 'UInt8'"
        self._filtercfg_min_vyrightleft = value

    @builtins.property
    def filtercfg_min_vxoncome(self):
        """Message field 'filtercfg_min_vxoncome'."""
        return self._filtercfg_min_vxoncome

    @filtercfg_min_vxoncome.setter
    def filtercfg_min_vxoncome(self, value):
        if __debug__:
            from std_msgs.msg import UInt8
            assert \
                isinstance(value, UInt8), \
                "The 'filtercfg_min_vxoncome' field must be a sub message of type 'UInt8'"
        self._filtercfg_min_vxoncome = value

    @builtins.property
    def filtercfg_min_vyleftright(self):
        """Message field 'filtercfg_min_vyleftright'."""
        return self._filtercfg_min_vyleftright

    @filtercfg_min_vyleftright.setter
    def filtercfg_min_vyleftright(self, value):
        if __debug__:
            from std_msgs.msg import UInt8
            assert \
                isinstance(value, UInt8), \
                "The 'filtercfg_min_vyleftright' field must be a sub message of type 'UInt8'"
        self._filtercfg_min_vyleftright = value

    @builtins.property
    def filtercfg_min_vxdepart(self):
        """Message field 'filtercfg_min_vxdepart'."""
        return self._filtercfg_min_vxdepart

    @filtercfg_min_vxdepart.setter
    def filtercfg_min_vxdepart(self, value):
        if __debug__:
            from std_msgs.msg import UInt8
            assert \
                isinstance(value, UInt8), \
                "The 'filtercfg_min_vxdepart' field must be a sub message of type 'UInt8'"
        self._filtercfg_min_vxdepart = value

    @builtins.property
    def filtercfg_min_object_class(self):
        """Message field 'filtercfg_min_object_class'."""
        return self._filtercfg_min_object_class

    @filtercfg_min_object_class.setter
    def filtercfg_min_object_class(self, value):
        if __debug__:
            from std_msgs.msg import UInt8
            assert \
                isinstance(value, UInt8), \
                "The 'filtercfg_min_object_class' field must be a sub message of type 'UInt8'"
        self._filtercfg_min_object_class = value

    @builtins.property
    def filtercfg_max_nofobj(self):
        """Message field 'filtercfg_max_nofobj'."""
        return self._filtercfg_max_nofobj

    @filtercfg_max_nofobj.setter
    def filtercfg_max_nofobj(self, value):
        if __debug__:
            from std_msgs.msg import UInt8
            assert \
                isinstance(value, UInt8), \
                "The 'filtercfg_max_nofobj' field must be a sub message of type 'UInt8'"
        self._filtercfg_max_nofobj = value

    @builtins.property
    def filtercfg_max_distance(self):
        """Message field 'filtercfg_max_distance'."""
        return self._filtercfg_max_distance

    @filtercfg_max_distance.setter
    def filtercfg_max_distance(self, value):
        if __debug__:
            from std_msgs.msg import UInt8
            assert \
                isinstance(value, UInt8), \
                "The 'filtercfg_max_distance' field must be a sub message of type 'UInt8'"
        self._filtercfg_max_distance = value

    @builtins.property
    def filtercfg_max_azimuth(self):
        """Message field 'filtercfg_max_azimuth'."""
        return self._filtercfg_max_azimuth

    @filtercfg_max_azimuth.setter
    def filtercfg_max_azimuth(self, value):
        if __debug__:
            from std_msgs.msg import UInt8
            assert \
                isinstance(value, UInt8), \
                "The 'filtercfg_max_azimuth' field must be a sub message of type 'UInt8'"
        self._filtercfg_max_azimuth = value

    @builtins.property
    def filtercfg_max_vreloncome(self):
        """Message field 'filtercfg_max_vreloncome'."""
        return self._filtercfg_max_vreloncome

    @filtercfg_max_vreloncome.setter
    def filtercfg_max_vreloncome(self, value):
        if __debug__:
            from std_msgs.msg import UInt8
            assert \
                isinstance(value, UInt8), \
                "The 'filtercfg_max_vreloncome' field must be a sub message of type 'UInt8'"
        self._filtercfg_max_vreloncome = value

    @builtins.property
    def filtercfg_max_vreldepart(self):
        """Message field 'filtercfg_max_vreldepart'."""
        return self._filtercfg_max_vreldepart

    @filtercfg_max_vreldepart.setter
    def filtercfg_max_vreldepart(self, value):
        if __debug__:
            from std_msgs.msg import UInt8
            assert \
                isinstance(value, UInt8), \
                "The 'filtercfg_max_vreldepart' field must be a sub message of type 'UInt8'"
        self._filtercfg_max_vreldepart = value

    @builtins.property
    def filtercfg_max_rcs(self):
        """Message field 'filtercfg_max_rcs'."""
        return self._filtercfg_max_rcs

    @filtercfg_max_rcs.setter
    def filtercfg_max_rcs(self, value):
        if __debug__:
            from std_msgs.msg import UInt8
            assert \
                isinstance(value, UInt8), \
                "The 'filtercfg_max_rcs' field must be a sub message of type 'UInt8'"
        self._filtercfg_max_rcs = value

    @builtins.property
    def filtercfg_max_lifetime(self):
        """Message field 'filtercfg_max_lifetime'."""
        return self._filtercfg_max_lifetime

    @filtercfg_max_lifetime.setter
    def filtercfg_max_lifetime(self, value):
        if __debug__:
            from std_msgs.msg import UInt8
            assert \
                isinstance(value, UInt8), \
                "The 'filtercfg_max_lifetime' field must be a sub message of type 'UInt8'"
        self._filtercfg_max_lifetime = value

    @builtins.property
    def filtercfg_max_size(self):
        """Message field 'filtercfg_max_size'."""
        return self._filtercfg_max_size

    @filtercfg_max_size.setter
    def filtercfg_max_size(self, value):
        if __debug__:
            from std_msgs.msg import UInt8
            assert \
                isinstance(value, UInt8), \
                "The 'filtercfg_max_size' field must be a sub message of type 'UInt8'"
        self._filtercfg_max_size = value

    @builtins.property
    def filtercfg_max_probexists(self):
        """Message field 'filtercfg_max_probexists'."""
        return self._filtercfg_max_probexists

    @filtercfg_max_probexists.setter
    def filtercfg_max_probexists(self, value):
        if __debug__:
            from std_msgs.msg import UInt8
            assert \
                isinstance(value, UInt8), \
                "The 'filtercfg_max_probexists' field must be a sub message of type 'UInt8'"
        self._filtercfg_max_probexists = value

    @builtins.property
    def filtercfg_max_y(self):
        """Message field 'filtercfg_max_y'."""
        return self._filtercfg_max_y

    @filtercfg_max_y.setter
    def filtercfg_max_y(self, value):
        if __debug__:
            from std_msgs.msg import UInt8
            assert \
                isinstance(value, UInt8), \
                "The 'filtercfg_max_y' field must be a sub message of type 'UInt8'"
        self._filtercfg_max_y = value

    @builtins.property
    def filtercfg_max_x(self):
        """Message field 'filtercfg_max_x'."""
        return self._filtercfg_max_x

    @filtercfg_max_x.setter
    def filtercfg_max_x(self, value):
        if __debug__:
            from std_msgs.msg import UInt8
            assert \
                isinstance(value, UInt8), \
                "The 'filtercfg_max_x' field must be a sub message of type 'UInt8'"
        self._filtercfg_max_x = value

    @builtins.property
    def filtercfg_max_vyrightleft(self):
        """Message field 'filtercfg_max_vyrightleft'."""
        return self._filtercfg_max_vyrightleft

    @filtercfg_max_vyrightleft.setter
    def filtercfg_max_vyrightleft(self, value):
        if __debug__:
            from std_msgs.msg import UInt8
            assert \
                isinstance(value, UInt8), \
                "The 'filtercfg_max_vyrightleft' field must be a sub message of type 'UInt8'"
        self._filtercfg_max_vyrightleft = value

    @builtins.property
    def filtercfg_max_vxoncome(self):
        """Message field 'filtercfg_max_vxoncome'."""
        return self._filtercfg_max_vxoncome

    @filtercfg_max_vxoncome.setter
    def filtercfg_max_vxoncome(self, value):
        if __debug__:
            from std_msgs.msg import UInt8
            assert \
                isinstance(value, UInt8), \
                "The 'filtercfg_max_vxoncome' field must be a sub message of type 'UInt8'"
        self._filtercfg_max_vxoncome = value

    @builtins.property
    def filtercfg_max_vyleftright(self):
        """Message field 'filtercfg_max_vyleftright'."""
        return self._filtercfg_max_vyleftright

    @filtercfg_max_vyleftright.setter
    def filtercfg_max_vyleftright(self, value):
        if __debug__:
            from std_msgs.msg import UInt8
            assert \
                isinstance(value, UInt8), \
                "The 'filtercfg_max_vyleftright' field must be a sub message of type 'UInt8'"
        self._filtercfg_max_vyleftright = value

    @builtins.property
    def filtercfg_max_vxdepart(self):
        """Message field 'filtercfg_max_vxdepart'."""
        return self._filtercfg_max_vxdepart

    @filtercfg_max_vxdepart.setter
    def filtercfg_max_vxdepart(self, value):
        if __debug__:
            from std_msgs.msg import UInt8
            assert \
                isinstance(value, UInt8), \
                "The 'filtercfg_max_vxdepart' field must be a sub message of type 'UInt8'"
        self._filtercfg_max_vxdepart = value

    @builtins.property
    def filtercfg_max_object_class(self):
        """Message field 'filtercfg_max_object_class'."""
        return self._filtercfg_max_object_class

    @filtercfg_max_object_class.setter
    def filtercfg_max_object_class(self, value):
        if __debug__:
            from std_msgs.msg import UInt8
            assert \
                isinstance(value, UInt8), \
                "The 'filtercfg_max_object_class' field must be a sub message of type 'UInt8'"
        self._filtercfg_max_object_class = value
