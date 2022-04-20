#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars.
 * @size: gives size of input.
 * @c: iput chracter.
 * Return: void
 */

char *create_array(unsigned int size, char c)
{
	char *ch_array;
	unsigned int i;

	ch_array = malloc(sizeof(char) * size);
	if (size == 0 || ch_array == NULL)
	{
		return (0);
	}
	for (i = 0; i < size; i++)
	{
		ch_array[i] = c;
	}
	return (ch_array);
}
