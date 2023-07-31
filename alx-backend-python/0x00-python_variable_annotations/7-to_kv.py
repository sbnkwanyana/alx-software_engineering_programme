#!/usr/bin/env python3
"""
Module contains function to_kv that takes a key(string) and value(float or int)
and returns the key/value pair in a Tuple having replaced value with its square
"""
from typing import Tuple, Union


def to_kv(k: str, v: Union[int, float]) -> Tuple[str, float]:
    """
    to_kv() -> Tuple: type-annotated function takes union List (mxd_lst)
    and returns the sum of all elements.
    """
    return (k, float(v**2))
