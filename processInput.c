#include "holberton.h"

char **Process_Input(char *input)
{
	const char sep = " ";
	int i = 0;
	char *token;
	char **args;

	token = strtok(input, sep);

	while (token)
	{
		args[i] = token;
		token = strok(NULL, sep);
		i++;
	}
	return (args);
}
char *Take_Input()
{
	char *input = NULL;
	ssize_t bufsize = 0;/* With getline() it should set a bufsize for us */

	if(getline(&input, &bufsize, stdin) == -1)
	{

	}

}
