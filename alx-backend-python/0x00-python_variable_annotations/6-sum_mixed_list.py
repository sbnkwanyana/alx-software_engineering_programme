#!/usr/bin/env python3
"""
Module contains function sum_mixed_list that takes a list of floats and ints
and returns the sum of all elements as a float
"""
from typing import List, Union


def sum_mixed_list(mxd_lst: List[Union[int, float]]) -> float:
    """
    sum_mixed_list() -> float: type-annotated function takes union (mxd_lst)
    and returns the sum of all elements.
    """
    return float(sum(mxd_lst))
