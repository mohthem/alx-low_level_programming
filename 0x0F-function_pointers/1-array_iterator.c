#include "function_pointers.h"

/**
 * array_iterator - prints elements of an array
 * @size: size of an array
 * @action: function to array_itrator
 * @array: an input array
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int long i = 0;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
