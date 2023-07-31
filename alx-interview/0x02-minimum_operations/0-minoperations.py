#!/usr/bin/python3
"""
In a text file, there is a single character H.
Your text editor can execute only two operations in this file:
Copy All and Paste.
Given a number n, write a method that calculates the fewest
number of operations needed to result in exactly n H characters in the file.

    Prototype: def minOperations(n)
    Returns an integer
    If n is impossible to achieve, return 0

n = 9

H => Copy All => Paste => HH => Paste =>HHH => Copy All => Paste
    => HHHHHH => Paste => HHHHHHHHH

Number of operations: 6
"""


def minOperations(n):
    if n == 1:
        return 0
    operations = 0
    currHs = 1
    buffer = 0
    while currHs < n:
        if n % currHs == 0:
            buffer = currHs
        currHs += buffer
        operations += 1
    return 
