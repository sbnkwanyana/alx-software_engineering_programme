#include <stdio.h>
#include "main.h"

/**
 * print_square - print square on terminal
 * @n: sides
 * Return: void
 */

void print_square(int n)
{
	int i = 0, x = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i < n)
		{
			while (x < n)
			{
				_putchar(35);
				x++;
			}
			i++;
			x = 0;
			_putchar('\n');
		}
	}
}
