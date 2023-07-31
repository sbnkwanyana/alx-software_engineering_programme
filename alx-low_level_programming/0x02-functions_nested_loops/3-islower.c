#include <ctype.h>

/**
 * _islower - uses islower function from ctype header
 *  @c: value to check
 * Return: int
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
