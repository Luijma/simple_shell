#include "hsh_header.h"

/**
 * main - entry point for simple_shell program
 * @ac: argument counter parameter
 * @av: argument vector parameter
 * @env: enviroment parameter that contains PATH
 * Return: 0 on success
 */
int main(int ac, char **av, char **env)
{
	char *input, **arguments, **path_list, *file_name;

	(void)ac;
	(void)av;

	path_list = path_convert(env);

	while (1)
	{
		input = take_input();

		if (_strcmp(input, "EOF") == 0)
		{
			free(input);
			continue;
		}
		if (_strcmp(input, "exit") == 0)
		{
			free(input);
			exit(0);
		}
		arguments = process_input(input, " ");

		file_name = get_path(arguments[0], path_list);

		execute(file_name, arguments);
	}

	return (0);
}
