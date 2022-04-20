#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - creates copy of a string.
 * @str: input string.
 * Return: char
 */

char *_strdup(char *str)
{
	unsigned int i, j;
	char *s;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		;
	i++;
	s = malloc(i * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		s[j] = str[j];
	}
	return (s);
}
