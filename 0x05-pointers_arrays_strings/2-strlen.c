#include "main.h"
/**
 * _strlen - return length of string.
 *
 *Return: 0
 *
 *@s: input string.
 */
int _strlen(char *s)
{
	unsigned int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
