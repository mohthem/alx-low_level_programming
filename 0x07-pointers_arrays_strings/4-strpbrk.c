#include "main.h"
/**
 * _strpbrk - that returns the length of matching strings.
 * @s: substring.
 * @accept: string.
 *
 * Return: a pointer when gets c.
 */
char *_strpbrk(char *s, char *accept)
{
	for (; *s != '\0'; s++)
	{
		char *temp = accept;

		for (; *accept != '\0'; accept++)
		{
			if (*s == *accept)
			{
				return (s);
			}
		}
		accept = temp;
	}
	return (0);
}
