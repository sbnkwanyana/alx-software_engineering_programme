#include <stdio.h>
#include <stdlib.h>

/**
 * main - program entry that prints out the number of arguments
 * @argc: arguments count
 * @argv: argument array list
 * Return: 0 is success, 1 if error
 */

int main(int argc, char *argv[])
{
	int i;
	int sum;
	char *endptr;

	sum = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			sum += strtol(argv[i], &endptr, 10);
			if (*endptr != '\0')
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
