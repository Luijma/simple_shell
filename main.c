#include "holberton.h"
/**
 * main - entry point for simple_shell program
 * @ac: argument counter parameter
 * @av: argument vector parameter
 * Return: 0 on success
 */
int main(int ac, char **av)
{
	char *input;
	char **arguments;
	int flag = 1;

	(void)ac;
	(void)av;

	while (flag)
	{
		Display_Prompt();
		input = Take_Input();
		if (strcmp(input, "EOF") == 0)
		{
			_putchar('\n');
			exit(0);
		}
		if (strcmp(input, "exit") == 0)
		{
			flag = 0;
			exit(0);
		}
		arguments = Process_Input(input);
		Execute_Commands(arguments);
	}

	return (0);
}
/**
 * Display_Prompt - function displays prompt message
 */
void Display_Prompt(void)
{
	int idx;
	char *prompt = "$ ";

	for (idx = 0 ; prompt[idx] != '\0' ; idx++)
	{
		_putchar(prompt[idx]);
	}
}
