#include <stdio.h>
/**
 * main - entry point
 * description: Patience, persistence and perspiration
 * make an unbeatable combination for success
 * Return: 0
 */

int main(void)
{
	int x = 0, y = 0;

	while (x < 10)
	{
		while (y < 10)
		{
			if (x == y)
			{
				y++;
				continue;
			}
			putchar((x % 10)  + '0');
			putchar((y % 10)  + '0');
			putchar(',');
			putchar(' ');
			y++;
		}
		y = 0;
		x++;
	}
	putchar('\n');

	return (0);
}
