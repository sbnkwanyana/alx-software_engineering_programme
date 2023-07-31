#include <stdio.h>
#include "main.h"

/**
 * times_table - print 9 times table
 * Return: void
 */

void times_table(void)
{
	int times, by, equals;

	for (times = 0; times < 10; times++)
	{
		for (by = 0; by < 10; by++)
		{
			equals = times * by;
			if (equals > 9)
			{
				_putchar('0' + equals / 10);
				_putchar('0' + equals % 10);
			}
			else
			{
				_putchar(' ');
				_putchar('0' + equals);
			}
			if (by != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
