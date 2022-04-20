#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - check and exit if failure happens.
 * @b: input variable.
 * Return: void.
 */

void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);
	if (mem == NULL)
	{
		exit(98);
	}
	return (mem);
}
