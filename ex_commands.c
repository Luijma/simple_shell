#include "holberton.h"

void Execute_Commands(char **args)
{
	int pid = fork();
	int status;


	if (!pid)
	{
		if (execve(args[0], args, NULL) == -1)
		{
			perror("MY Error:");
		}
	} else
	{
		wait(&status);
	}
}
