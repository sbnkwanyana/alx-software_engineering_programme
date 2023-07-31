#!/usr/bin/env python3
"""
Module imports a function from another module and measures it runtime
"""
import time
import asyncio


wait_n = __import__('1-concurrent_coroutines').wait_n


def measure_time(n: int, max_delay: int) -> float:
    """
    function measures the amount of time it takes to run the wait_n function
    """
    start = time.time()
    asyncio.run(wait_n(n, max_delay))
    total = time.time() - start
    return total / n
