#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print all natual numbers to 98
 * @n: start at value n
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		for (n = n ; n > 97; n--)
		{
			if(n < 100)
			{
				_putchar('0' + n / 10);
				_putchar('0' + n % 10);
			}
			else
			{
				_putchar('0' + n / 100);
				_putchar('0' + n / 10);
				_putchar('0' + n % 10);
			}
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		for (n = n ; n < 99; n++)
		{
			if (n < -9 || n > 9)
			{
				_putchar('0' + n / 10);
				_putchar('0' + n % 10);
			}
			else if (n < -99)
			{
				_putchar('0' + n / 100);
				_putchar('0' + n / 10);
				_putchar('0' + n % 10);
			}
			else
			{
				_putchar('0' + n);
			}
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
