#include "main.h"
/**
 * sq - calculate sqrt.
 *@n: input nummber.
 *@j: start from 0.
 *
 *Return: square root.
 */

int sq(int n, int j)
{
	if (n == 1)
	{
		return (1);
	}
	else
	{
		if (j < n / 2)
		{
			if (j * j == n)
			{
				return (j);
			}
			return (sq(n, j + 1));
		}
	}
	return (-1);
}

/**
 * _sqrt_recursion - square root.
 *@n: input nummber.
 *
 *Return: power.
 */
int _sqrt_recursion(int n)
{
	return (sq(n, 0));
}
