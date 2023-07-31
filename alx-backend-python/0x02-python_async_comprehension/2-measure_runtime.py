#!/usr/bin/env python3
"""
Module contains function that times the execution time
of calling a list of async functions
"""
import asyncio
from time import perf_counter

async_comprehension = __import__('1-async_comprehension').async_comprehension


async def measure_runtime() -> float:
    """
    function measures the performance of calling a list of async functions
    """
    start = perf_counter()
    await asyncio.gather(*(async_comprehension() for _ in range(4)))
    stop = perf_counter()
    return stop - start
