#include "hsh_header.h"

/**
 * take_input - gets input from the user
 * Return: returns user input
 */
char *take_input(void)
{
	int length = 0;
	char *input = NULL;
	size_t bufsize = 0;

	display_prompt();

	length = getline(&input, &bufsize, stdin);

	if (length == EOF)
		exit(0);

	input[length - 1] = '\0';

	return (input);
}

/**
 * process_input - takes input string, locates spaces
 * in the string and creates an array of strings
 * @input: input to be split into array of strings
 * @separator: character(s) strtok will use
 * Return: argument list based on input
 */
char **process_input(char *input, char *separator)
{
	char *token;
	char **input_array;
	int idx;

	input_array = malloc(sizeof(input_array) * 100);

	token = strtok(input, separator);

	for (idx = 0 ; token != NULL ; idx++)
	{
		input_array[idx] = malloc(sizeof(char) * 50);

		input_array[idx] = token;
		token = strtok(NULL, separator);
	}
	input_array[idx] = NULL;

	return (input_array);
}

/**
 * path_convert - function will use env output to obtain PATH
 * directories and use them to execute commands
 * @env: 2D array to be processed
 * Return: path
 */
char **path_convert(char **env)
{
	int idx1;
	char *full_path, *token, *delim = ": =";
	char **path;

	for (idx1 = 0 ; env[idx1] != NULL ; idx1++)
	{
		if (_strncmp("PATH", env[idx1], 4) == 0)
		{
			full_path = env[idx1];
			break;
		}
	}

	path = malloc(sizeof(char **) * 100);

	token = strtok(full_path, delim);
	token = strtok(NULL, delim);

	for (idx1 = 0 ; token != NULL ; idx1++)
	{
		path[idx1] = malloc(sizeof(char *) * 100);

		path[idx1] = strdup(token);
		token = strtok(NULL, delim);
	}
	path[idx1] = NULL;

	return (path);
}

/**
 * display_prompt - function displays prompt message
 */
void display_prompt(void)
{
	int idx;
	char *prompt = "$ ";

	for (idx = 0 ; prompt[idx] != '\0' ; idx++)
	{
		_putchar(prompt[idx]);
	}
}
