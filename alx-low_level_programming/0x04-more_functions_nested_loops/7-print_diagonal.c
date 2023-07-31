#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - print diagonal line on terminal
 * @n: number of lines
 * Return: void
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (i = 1; i < n ; i++)
		{
			_putchar('\\');
			_putchar('\n');
			for (j = 0; j < n; j++)
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
