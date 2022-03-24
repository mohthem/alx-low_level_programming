#include "main.h"
/**
 * _strncpy - making a copy.
 *@dest: high copy.
 *@src: main.
 *@n: print upto this.
 *Return: copy.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] && i < n)
	{
		dest[i] = src[i];
		++i;
	}
	for ( ; i < n; ++i)
		dest[i] = '\0';
	return (dest);
}
