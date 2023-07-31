#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * _isdigit - return 1 is c is a digit or 0 if not
 * @c: input
 * Return: int
 */

int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
