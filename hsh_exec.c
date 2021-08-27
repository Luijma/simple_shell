#include "hsh_header.h"

/**
 * execute - function
 * @file_name: parameter
 * @args: parameter
 */
void execute(char *file_name, char **args)
{
	pid_t pid;
	int status;

	pid = fork();
	if (pid == 0)
	{
		if (execve(file_name, args, NULL) == -1)
		{
			perror("Error");
		}
	}
	else
	{
		wait(&status);
	}
}
/**
 * get_path - verifies if command exists
 * @arg: string that holds executable name
 * @env: string that will get path
 * Return: full path to command, NULL if nonexistant
 */
char *get_path(char *arg, char **env)
{
	int i;
	char *commandPath;
	char *fullPath;

	for (i = 0; env[i] != NULL; i++)
	{
		if (check_if_path(arg) == 0)
		{
			commandPath = str_concat(env[i], "/");
			fullPath = str_concat(commandPath, arg);
			if (access(fullPath, X_OK) == 0)
				return (fullPath);
		}
		else
		{
			if (access(arg, X_OK) == 0)
				return (arg);
		}
	}
	return (NULL);
}

/**
 * check_if_path - function checks use of PATH directory
 * @command: directory in use
 * Return: 0
 */
int check_if_path(char *command)
{
	int count;

	for (count = 0 ; command[count] != '\0' ; count++)
	{
		if (command[count] == '/')
			return (1);
	}
	return (0);
}
