#!/usr/bin/env python3
"""
Module imports wait_random from another module and uses it to
compile a list of run times that are returned as a sorted list
"""
import asyncio
from typing import List


wait_random = __import__('0-basic_async_syntax').wait_random


async def wait_n(n: int, max_delay: int) -> List[float]:
    """
    function creates a list of tasks to run and returns it a list
    of the values of the results of each function call in the list
    """
    task_list = [asyncio.create_task(wait_random(max_delay)) for _ in range(n)]
    return sorted(await asyncio.gather(*task_list))
