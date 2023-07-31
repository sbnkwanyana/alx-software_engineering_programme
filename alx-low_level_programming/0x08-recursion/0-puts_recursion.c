#include "main.h"

/**
 * _puts_recursion - uses putchaar to print a string array recursively
 * @s: string array
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
}
