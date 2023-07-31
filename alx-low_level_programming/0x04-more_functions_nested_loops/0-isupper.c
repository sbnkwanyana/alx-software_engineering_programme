#include <ctype.h>
/**
 * _isupper - return 1 if c is uppercase and 0 if not
 * @c: input
 * Return: int
 */

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
