#include <stdio.h>

/**
 * main - program entry that prints arguments followed by new line
 * @argc: unused arguments count
 * @argv: argument array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	(void)argc;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
