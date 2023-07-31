#include <ctype.h>
#include <stdio.h>

/**
 * _isalpha - uses isalpha function from ctype header
 * @c: value to check input
 * Return: int
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
