#include <stdio.h>

/**
 * main - program entry that prints out the number of arguments
 * @argc: argument count including app name
 * @argv: unused arguments array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
