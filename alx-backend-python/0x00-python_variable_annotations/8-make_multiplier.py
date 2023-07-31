#!/usr/bin/env python3
"""
Module contains function make_multiplier float and returns a function
"""
from typing import Callable


def make_multiplier(multiplier: float) -> Callable[[float], float]:
    """
    make_multiplier() -> Callable: function takes float(multiplier)
    and returns a function that multiplies the multiplier with a float.
    """
    return lambda x: x * multiplier
