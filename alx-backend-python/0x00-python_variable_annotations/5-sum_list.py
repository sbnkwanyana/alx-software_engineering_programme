#!/usr/bin/env python3
"""
Module contains function sum_list that takes a list of floats
and returns the sum of all elements as a float
"""
from typing import List


def sum_list(input_list: List[float]) -> float:
    """
    sum_list() -> float: type-annotated function takes float List (input_list)
    and returns the sum of all elements.
    """
    return float(sum(input_list))
