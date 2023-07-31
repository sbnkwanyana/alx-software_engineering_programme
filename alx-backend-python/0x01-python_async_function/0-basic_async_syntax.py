#!/usr/bin/env python3
"""
Module contains an async function that accepts a max delay time
"""
import asyncio
import random


async def wait_random(max_delay: int = 10) -> float:
    """
    function waits for a random amount of time and returns the time it waited
    """
    delay = random.random() * max_delay
    await asyncio.sleep(delay)
    return delay
