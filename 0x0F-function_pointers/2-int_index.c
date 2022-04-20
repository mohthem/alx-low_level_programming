#include "function_pointers.h"

/**
 * int_index - prints elements of an array
 * @size: size of an array
 * @array: an input array tobe compared
 * @cmp: function used to compare the values
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;
	int temp;

	if (array != NULL && cmp != NULL)
	{

		if (size <= 0)
			return (-1);
		if (cmp)
		{
			for (i = 0; i < size; i++)
			{
				temp = cmp(array[i]);
				if (temp)
					break;
			}
			if (temp == 0)
				return (-1);
			return (i);
		}
	}
	return (-1);
}
