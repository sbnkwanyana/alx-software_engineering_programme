#include "main.h"

/**
 * _pow_recursion - calculate the power of a given number recursively
 * @x: base number
 * @y: eponent value
 * Return: int power
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}
