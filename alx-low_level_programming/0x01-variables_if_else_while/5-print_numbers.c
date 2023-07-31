#include <stdio.h>
/**
 * main - entry point
 * description print numbers 0 - 9
 * Return: 0
 */
int main(void)
{
	int number = 0;

	while (number <= 9)
	{
		printf("%i", number);
		number++;
	}
	putchar('\n');
	return (0);
}
