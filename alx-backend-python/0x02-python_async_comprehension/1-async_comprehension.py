#!/usr/bin/env python3
"""
Module contains function that returns a list of randonly generated values
from imported generator function
"""
from typing import List


async_generator = __import__('0-async_generator').async_generator


async def async_comprehension() -> List[float]:
    """
    Function uses async comprehension using async for to create and
    return a list of randomly generated values
    """
    return [random_value async for random_value in async_generator()]
