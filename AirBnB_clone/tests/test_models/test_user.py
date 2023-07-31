#!/usr/bin/python3

"""
Module should contain the tests for user module
"""


import unittest
import pycodestyle
from models.user import User
from models.base_model import BaseModel

class TestUser(unittest.TestCase):
    """
    Test class for User
    """
    def test_user_compliance(self):
        """
        Function tests pycodestyle compliance of User model and tests
        """
        style = pycodestyle.StyleGuide()
        result = style.check_files(
            ["models/user.py", "tests/test_models/test_user.py"])
        self.assertEqual(
            result.total_errors, 0, "Style errors in user.py or user tests"
            )

    def test_user_is_a_subclass_of_basemodel(self):
        u = User()
        self.assertTrue(issubclass(type(u), BaseModel))

    def test_class_attrs(self):
        u = User()
        self.assertIs(type(u.first_name), str)
        self.assertIs(type(u.last_name), str)
        self.assertTrue(u.first_name == "")
        self.assertTrue(u.last_name == "")

    def test_attrs_are_class_attrs(self):
        u = User()
        # test that it is a class attribute
        self.assertTrue(hasattr(User, "first_name")
                        and hasattr(User, "last_name"))


if '__name__' == '__main__':
    unittest.main()
