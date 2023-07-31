#!/usr/bin/env python3
"""
Module imports a function and returns a task to be able to run the function
"""
import asyncio


wait_random = __import__('0-basic_async_syntax').wait_random


def task_wait_random(max_delay: int) -> asyncio.Task:
    """
    function returns a Task containing a function to run
    """
    return asyncio.create_task(wait_random(max_delay))
