#include "holberton.h"

/**
 * Execute_Commands - function
 * @args: parameter
 */
void Execute_Commands(char **args)
{
	int pid = fork();
	int status;

	if (!pid)
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
