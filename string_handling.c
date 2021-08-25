#include "holberton.h"

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
