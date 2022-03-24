#include "main.h"
/**
 * reverse_array - return reverse.
 *@n: size tobe reversed.
 *@a: input array.
 */
void reverse_array(int *a, int n)
{
	int i = 0, j = 0, temp;

	i = n - 1;
	while (j < i)
	{
		temp = a[i];
		a[i--] = a[j];
		a[j++] = temp;
	}
}
