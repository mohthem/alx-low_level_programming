#include <stdio.h>

/**
 * print_diagsums - adds the diagonal elements of mat.
 * @a: is the 2D array;
 * @size: the size variable.
 * Return: nothing.
 */

void print_diagsums(int *a, int size)
{
	int ptr, i, sum1, sum2;

	sum1 = 0;
	sum2 = 0;
	for (i = 0; i < size; i++)
	{
		ptr = (i * size) + i;
		sum1 += a[ptr];
	}
	for (i = 0; i < size; i++)
	{
		ptr = (i * size) + size - (i + 1);
		sum2 += a[ptr];
	}
	printf("%d, %d\n", sum1, sum2);
}

