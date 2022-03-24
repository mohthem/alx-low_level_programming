#include "main.h"
/**
 * _strncat - making string concatination upto the lenght.
 *@dest: main.
 *@src: to be concatenated.
 *@n: length to be printed
 *Return: full string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; ++i)
		;
	for (j = 0; src[j] != '\0' && j < n; ++j, ++i)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';

	return (dest);
}
