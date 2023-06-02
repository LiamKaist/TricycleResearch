# generated from rosidl_generator_py/resource/_idl.py.em
# with input from radar_conti_ars408_msgs:msg/Cluster.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Cluster(type):
    """Metaclass of message 'Cluster'."""

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
                'radar_conti_ars408_msgs.msg.Cluster')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__cluster
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__cluster
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__cluster
            cls._TYPE_SUPPORT = module.type_support_msg__msg__cluster
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__cluster

            from radar_conti_ars408_msgs.msg import ClusterGeneral
            if ClusterGeneral.__class__._TYPE_SUPPORT is None:
                ClusterGeneral.__class__.__import_type_support__()

            from radar_conti_ars408_msgs.msg import ClusterQuality
            if ClusterQuality.__class__._TYPE_SUPPORT is None:
                ClusterQuality.__class__.__import_type_support__()

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


class Cluster(metaclass=Metaclass_Cluster):
    """Message class 'Cluster'."""

    __slots__ = [
        '_cluster_id',
        '_cluster_general',
        '_cluster_quality',
    ]

    _fields_and_field_types = {
        'cluster_id': 'std_msgs/Int32',
        'cluster_general': 'radar_conti_ars408_msgs/ClusterGeneral',
        'cluster_quality': 'radar_conti_ars408_msgs/ClusterQuality',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Int32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['radar_conti_ars408_msgs', 'msg'], 'ClusterGeneral'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['radar_conti_ars408_msgs', 'msg'], 'ClusterQuality'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Int32
        self.cluster_id = kwargs.get('cluster_id', Int32())
        from radar_conti_ars408_msgs.msg import ClusterGeneral
        self.cluster_general = kwargs.get('cluster_general', ClusterGeneral())
        from radar_conti_ars408_msgs.msg import ClusterQuality
        self.cluster_quality = kwargs.get('cluster_quality', ClusterQuality())

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
        if self.cluster_id != other.cluster_id:
            return False
        if self.cluster_general != other.cluster_general:
            return False
        if self.cluster_quality != other.cluster_quality:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def cluster_id(self):
        """Message field 'cluster_id'."""
        return self._cluster_id

    @cluster_id.setter
    def cluster_id(self, value):
        if __debug__:
            from std_msgs.msg import Int32
            assert \
                isinstance(value, Int32), \
                "The 'cluster_id' field must be a sub message of type 'Int32'"
        self._cluster_id = value

    @builtins.property
    def cluster_general(self):
        """Message field 'cluster_general'."""
        return self._cluster_general

    @cluster_general.setter
    def cluster_general(self, value):
        if __debug__:
            from radar_conti_ars408_msgs.msg import ClusterGeneral
            assert \
                isinstance(value, ClusterGeneral), \
                "The 'cluster_general' field must be a sub message of type 'ClusterGeneral'"
        self._cluster_general = value

    @builtins.property
    def cluster_quality(self):
        """Message field 'cluster_quality'."""
        return self._cluster_quality

    @cluster_quality.setter
    def cluster_quality(self, value):
        if __debug__:
            from radar_conti_ars408_msgs.msg import ClusterQuality
            assert \
                isinstance(value, ClusterQuality), \
                "The 'cluster_quality' field must be a sub message of type 'ClusterQuality'"
        self._cluster_quality = value
