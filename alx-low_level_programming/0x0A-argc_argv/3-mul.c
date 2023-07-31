#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - program entry that prints out the number of arguments
 * @argc: arguments count
 * @argv: argument array list
 * Return: 0 is success, 1 if error
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
