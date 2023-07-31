#!/usr/bin/python3
"""
Returns a bool value if the lockbox can be unlocked or not
"""


def canUnlockAll(boxes):
    """Returns a bool value if the lockbox can be unlocked or not."""

    unlocked = [0]
    for box_id, box in enumerate(boxes):
        if not box:
            continue
        for key in box:
            if key < len(boxes) and key not in unlocked and key != box_id:
                unlocked.append(key)
    if len(unlocked) == len(boxes):
        return True
    return False
