#include "holberton.h"
/**
 * Process_Input - takes input string, locates spaces
 * in the string and creates an array of strings
 * @input: input to be split into array of strings
 * Return: argument list based on input
 */
char **Process_Input(char *input)
{
	/*
	const char sep = " ";
	char *token; */
	/* Placeholder Code */
	char **args = malloc(4 * sizeof(char*));

	args[0] = "/bin/sh";
	args[1] = input;
	args[2] = NULL;
	

	return (args);
}
/**
 * Take_Input - gets input from the user
 * Return: returns user input
 */
char *Take_Input()
{
	char *input = NULL;
	ssize_t bufsize = 0;

	input = malloc(bufsize * sizeof(char));
	if (!input)
	{
		printf("Memory Allocation Error!\n");
		exit(EXIT_FAILURE);
	}
	getline(&input, &bufsize, stdin);

	return (input);
}
