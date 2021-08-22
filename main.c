#include "holberton.h"
/**
 * main - entry point for simple_shell program
 * Return: 0 on success
 */
int main(void)
{
	char *input;
	char **arguments;
	
	do
	{
		input = Take_Input();
		arguments = Process_Input(input);
		Execute_Commands(arguments);
		
	} while(true);

	return (0);
}
