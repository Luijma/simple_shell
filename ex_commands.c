#include "holberton.h"

/**
 * Execute_Commands - function
 * @args: parameter
 */
void Execute_Commands(char **args)
{
	pid_t pid = fork();
	int status;

	if (pid == 0)
	{
		if (execve(args[0], args, NULL) == -1)
		{
			perror("Error");
		}
	}
	else
	{
		wait(&status);
	}
}
