#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - the last digit of a number
 * @n: input
 * Return: int
 */

int print_last_digit(int n)
{
	int x;

	if (n < 0)
	{
		x = (n % 10) * -1;
	}
	else
	{
		x = (n % 10);
	}
	_putchar(x + '0');
	return (x);
}
