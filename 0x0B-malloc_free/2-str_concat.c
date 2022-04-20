#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_len - calculate the string length.
 * @s1: input string1.
 * @s2: input string2
 * Return: char
 */


int str_len(char *s1, char *s2)
{
	unsigned int i, j, tot;

	for (i = 0; s1[i]; i++)
		;
	for (j = 0; s2[j]; j++)
		;
	j++;
	tot = i + j;
	return (tot);
}

/**
 * str_concat - creates a concatination string.
 * @s1: input string1.
 * @s2: input string2
 * Return: char
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, size, j;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	size = str_len(s1, s2);
	s = malloc(size * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i]; i++)
	{
		s[i] = s1[i];
	}
	for (j = 0; s2[j]; j++, i++)
	{
		s[i] = s2[j];
	}
	return (s);
}
