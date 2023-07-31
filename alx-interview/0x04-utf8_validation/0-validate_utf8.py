#!/usr/bin/python3
"""
AI generated validates UTF8 script.
"""


def validUTF8(data):
    """
    This implementation checks each integer in the data list
    to see if it represents a valid UTF-8 character.
    It does so by counting the number of leading 1s in the
    binary representation of each integer.
    If this is the start of a new UTF-8 character,
    it checks that there are no more than 4 bytes
    in this character and that it starts with the correct number
    of leading 1s. If this is not the start of a new UTF-8 character
    it checks that this byte is a continuation byte.
    Finally, it checks that there are no bytes left
    in any current UTF-8 characters.
    """
    # Number of bytes in the current UTF-8 character.
    num_bytes = 0
    # For each integer in the data list.
    for i in data:
        # Get the binary representation of the integer.
        bin_rep = format(i, '#010b')[-8:]
    # If this is the start of a new UTF-8 character.
        if num_bytes == 0:
    # Count the number of leading 1s in the binary representation.
            for bit in bin_rep:
                if bit == '0':
                    break
                num_bytes += 1
    # If this is not a valid start byte for a UTF-8 character.
            if num_bytes == 0:
                continue
    # If this is a multi-byte character with more than 4 bytes.
            if num_bytes > 4 or num_bytes == 1:
                return False
    # If this is not the start of a new UTF-8 character.
        else:
    # If this byte is not a continuation byte.
            if bin_rep[0] != '1' or bin_rep[1] != '0':
                return False
    # Decrement the number of bytes left in this UTF-8 character
        num_bytes -= 1
    # If there are still bytes left in the current UTF-8 character.
    if num_bytes != 0:
        return False
    return True
