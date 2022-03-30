#include "main.h"
/**
 * _memcpy - fills memory with an n memory byte
 * @dest: memory tobe filled.
 * @src:  what is copied.
 * @n: number of bytes to fill.
 *
 * Return: a pointer to memory area.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; ++i)
	{
		dest[i] = src[i];
	}
	return (dest);
}
