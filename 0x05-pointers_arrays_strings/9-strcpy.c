#include "main.h"
/**
 * _strcpy - making a copy.
 *@dest: high copy.
 *@src: main.
 *Return: copy.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = '\0';
	return (dest);
}
