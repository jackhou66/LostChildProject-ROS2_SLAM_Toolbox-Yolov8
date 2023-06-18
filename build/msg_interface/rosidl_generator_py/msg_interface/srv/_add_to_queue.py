# generated from rosidl_generator_py/resource/_idl.py.em
# with input from msg_interface:srv/AddToQueue.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AddToQueue_Request(type):
    """Metaclass of message 'AddToQueue_Request'."""

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
            module = import_type_support('msg_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'msg_interface.srv.AddToQueue_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__add_to_queue__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__add_to_queue__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__add_to_queue__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__add_to_queue__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__add_to_queue__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AddToQueue_Request(metaclass=Metaclass_AddToQueue_Request):
    """Message class 'AddToQueue_Request'."""

    __slots__ = [
        '_input_string',
    ]

    _fields_and_field_types = {
        'input_string': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.input_string = kwargs.get('input_string', str())

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
        if self.input_string != other.input_string:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def input_string(self):
        """Message field 'input_string'."""
        return self._input_string

    @input_string.setter
    def input_string(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'input_string' field must be of type 'str'"
        self._input_string = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_AddToQueue_Response(type):
    """Metaclass of message 'AddToQueue_Response'."""

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
            module = import_type_support('msg_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'msg_interface.srv.AddToQueue_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__add_to_queue__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__add_to_queue__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__add_to_queue__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__add_to_queue__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__add_to_queue__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AddToQueue_Response(metaclass=Metaclass_AddToQueue_Response):
    """Message class 'AddToQueue_Response'."""

    __slots__ = [
        '_success',
        '_string_list',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'string_list': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        self.string_list = kwargs.get('string_list', str())

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
        if self.success != other.success:
            return False
        if self.string_list != other.string_list:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value

    @property
    def string_list(self):
        """Message field 'string_list'."""
        return self._string_list

    @string_list.setter
    def string_list(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'string_list' field must be of type 'str'"
        self._string_list = value


class Metaclass_AddToQueue(type):
    """Metaclass of service 'AddToQueue'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('msg_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'msg_interface.srv.AddToQueue')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__add_to_queue

            from msg_interface.srv import _add_to_queue
            if _add_to_queue.Metaclass_AddToQueue_Request._TYPE_SUPPORT is None:
                _add_to_queue.Metaclass_AddToQueue_Request.__import_type_support__()
            if _add_to_queue.Metaclass_AddToQueue_Response._TYPE_SUPPORT is None:
                _add_to_queue.Metaclass_AddToQueue_Response.__import_type_support__()


class AddToQueue(metaclass=Metaclass_AddToQueue):
    from msg_interface.srv._add_to_queue import AddToQueue_Request as Request
    from msg_interface.srv._add_to_queue import AddToQueue_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
