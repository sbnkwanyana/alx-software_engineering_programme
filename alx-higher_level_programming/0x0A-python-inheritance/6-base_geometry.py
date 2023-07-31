#!/usr/bin/python3
"""
This module contains a Base class for a geometry object
with non implemented function definition for calculating the area
"""


class BaseGeometry():
    """
    BaseGeometry contains a non implemented area function
    that throws and exception
    """
    def area(self):
        raise Exception("area() is not implemented")
