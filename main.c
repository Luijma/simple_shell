#include "holberton.h"
/**
 * main - entry point for simple_shell program
 * Return: 0 on success
 */
int main(void)
{
	char *input;
	char **arguments;
	int flag = 1;

	while (flag)
	{
		Display_Prompt();
		input = Take_Input();
		if (strncmp(input, "exit", 4) == 0)
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
	printf("$ ");
}
