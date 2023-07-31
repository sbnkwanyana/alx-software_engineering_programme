#!/usr/bin/env python3
"""This module adds annotations to a function below."""


from typing import Union, Any, Mapping, TypeVar

U = Union
A = Any
M = Mapping
T = TypeVar("T")


def safely_get_value(dct: M, key: A, default: U[T, None]) -> U[A, T]:
    """Has correctly typed duck annotations."""

    if key in dct:
        return dct[key]
    else:
        return default
