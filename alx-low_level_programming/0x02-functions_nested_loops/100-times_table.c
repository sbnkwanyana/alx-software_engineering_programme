#include <stdio.h>
#include "main.h"

/**
 * print_times_table - print n times table
 * @n: how many times table
 * Return: void
 */

void print_times_table(int n)
{
	int times, by, equals;

	if (n < 0)
	{
	}
	else if (n == 0)
	{
		_putchar('0');
		_putchar('\n');
	}
	else if (n > 15)
	{
	}
	else
	{
		for (times = 0; times <= n; times++)
		{
			for (by = 0; by <= n; by++)
			{
				equals = times * by;
				if (equals > 9)
				{
					_putchar('0' + equals / 10);
					_putchar('0' + equals % 10);
				}
				else
				{
					_putchar('0' + equals);
				}
				if (by != n)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
