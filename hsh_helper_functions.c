#include "hsh_header.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
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
 * Return: 0 if the strings are equal
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

/**
 * _strncmp - function compares num amount of chars in a string
 * @s1: first string to be compared
 * @s2: second string to be compared
 * @num: number of chars to be compared
 * Return: 0 on success, 1 on failure to compare
 */
int _strncmp(char *s1, char *s2, int num)
{
	int itr;

	for (itr = 0 ; itr < num ; itr++)
	{
		if (s1[itr] != s2[itr])
		{
			return (1);
		}
	}

	return (0);
}

/**
 * str_concat - function concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: newstr
 */
char *str_concat(char *s1, char *s2)
{
	char *newstr;
	int newSize = 0;
	int i = 0;
	int j = 0;

	while (s1 && s1[i])
	{
		newSize++;
		i++;
	}

	while (s2 && s2[j])
	{
		newSize++;
		j++;
	}

	i = 0;
	j = 0;
	newSize++;

	newstr = malloc(sizeof(char) * newSize);

	if (newstr == NULL)
		return (NULL);
	while (s1 && s1[i])
	{
		newstr[i] = s1[i];
		i++;
	}
	while (s2 && s2[j])
	{
		newstr[i] = s2[j];
		i++;
		j++;
	}

	newstr[i] = '\0';
	return (newstr);
}
