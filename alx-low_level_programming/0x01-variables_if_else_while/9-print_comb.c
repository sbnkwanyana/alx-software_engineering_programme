#include <stdio.h>
/**
 * main - entry point
 * description: Patience, persistence and perspiration
 * make an unbeatable combination for success
 * Return: 0
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		if (i == 9)
		{
			break;
		}
		putchar(',');
		putchar(' ');
		i++;
	}
	putchar('\n');

	return (0);
}
