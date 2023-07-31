#!/usr/bin/env python3
"""
Module imports a function and contains a function (task_wait_n)
that compiles a list of sorted task results
"""
from typing import List


task_wait_random = __import__('3-tasks').task_wait_random


async def task_wait_n(n: int, max_delay: int) -> List[float]:
    """
    function returns a list of task results
    """
    task_results = [await(task_wait_random(max_delay)) for _ in range(n)]
    return sorted(task_results)
