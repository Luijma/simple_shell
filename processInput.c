#include "holberton.h"

/**
 * Take_Input - gets input from the user
 * Return: returns user input
 */
char *Take_Input(void)
{
	char *input = NULL;
	int length = 0;
	size_t bufsize = 0;

	length = getline(&input, &bufsize, stdin);
	input[length - 1] = '\0';

	return (input);
}

/**
 * Process_Input - takes input string, locates spaces
 * in the string and creates an array of strings
 * @input: input to be split into array of strings
 * Return: argument list based on input
 */
char **Process_Input(char *input)
{
	char *token;
	char **input_array;
	int idx, length;
	int counter = 0;

	for (idx = 0 ; input[idx] != '\0' ; idx++)
	{
		if (input[idx] != ' ')
			counter++;
	}

	input_array = malloc(sizeof(char) * counter);

	token = strtok(input, " ");

	for (idx = 0 ; token != NULL ; idx++)
	{
		length = _strlen(token);
		input_array[idx] = malloc(sizeof(char) * length);

		input_array[idx] = token;
		token = strtok(NULL, " ");
	}
	input_array[idx + 1] = NULL;

	return (input_array);
}

/**
 * _strlen - function counts the length of a given string
 * @s: string to be counter
 * Return: index
 */
int _strlen(char *s)
{
	int index = 0;

	while (s[index] != '\0')
	{
		index++;
	}

	return (index);
}

/**
 * _strcmp - function compares two strings
 * @s1: first string to be compared
 * @s2: second string to be compared
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int itr;

	for (itr = 0 ; s1[itr] != '\0' && s2[itr] != '\0' ; itr++)
	{
		if (s1[itr] != s2[itr])
		{
			return (s1[itr] - s2[itr]);
		}
	}

	return (0);
}
