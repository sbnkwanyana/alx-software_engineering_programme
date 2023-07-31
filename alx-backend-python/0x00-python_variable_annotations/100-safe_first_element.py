#!/usr/bin/env python3
"""This module has the correct duck-typed annotations."""


from typing import Sequence, Union, Any


def safe_first_element(lst: Sequence[Any]) -> Union[Any, None]:
    """Returns the correct duck-typed annotations."""

    if lst:
        return lst[0]
    else:
        return None
