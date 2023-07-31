#include <stdio.h>
#include "main.h"

/**
 * more_numbers - print numbers from 0 - 14 10 times
 * Return: void
 */

void more_numbers(void)
{
	int i, x;

	for (i = 0; i < 10; i++)
	{
		for (x = 0; x < 15; x++)
		{
			if (x > 9)
			{
				_putchar(49);
			}
			_putchar(48 + (x % 10));
		}
		_putchar('\n');
	}
}
