#include "main.h"
/**
 * _strchr - a function that locates a character in a string.
 * @s: memory tobe filled.
 * @c:  check if the character is present.
 *
 * Return: a pointer when gets c.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
		return (s);
	return (0);
}
