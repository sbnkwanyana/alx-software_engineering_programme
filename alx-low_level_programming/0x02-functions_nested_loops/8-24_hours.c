#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - print every minute of the day
 * Return: void
 */

void jack_bauer(void)
{
	int minutes, hours;

	for (hours = 0; hours < 24; hours++)
	{
		for (minutes = 0; minutes < 60; minutes++)
		{
			_putchar('0' + hours / 10);
			_putchar('0' + hours % 10);
			_putchar(':');
			_putchar('0' + minutes / 10);
			_putchar('0' + minutes % 10);
			_putchar('\n');
		}
	}
}
