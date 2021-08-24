#include "holberton.h"

void Execute_Commands(char **args)
{
	int pid = fork();
	int status;

	if (!pid)
	{
		if (execve("/bin/sh", args, NULL) == -1)
		{
			perror("Error:");
		}
	}
	else
	{
		wait(&status);
	}
}
