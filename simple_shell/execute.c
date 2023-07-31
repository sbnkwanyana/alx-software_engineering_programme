#include "simple_shell.h"

/**
 * execution - execute given command
 * @args: prepared command and arguments
 * Return: 0 for success
 */
int execution(char **args)
{
	pid_t child_pid;
	int status;

	child_pid = fork();

	if (child_pid == 0)
	{
		if (execve(args[0], args, NULL) == -1)
			exit(EXIT_FAILURE);
	}
	else
	{
		wait(&status);
	}
	return (0);
}
