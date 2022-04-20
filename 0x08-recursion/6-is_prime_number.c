#include "main.h"
/**
 * pr - detect prime.
 *@n: input nummber.
 *@j: start from 2.
 *
 *Return: 1 when prime and 0 if not.
 */

int pr(int n, int j)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		if (j < n)
		{
			if (n % j == 0)
			{
				return (0);
			}
			return (pr(n, j + 1));
		}
		return (1);
	}
}

/**
 * is_prime_number - detect prime number.
 *@n: input nummber.
 *
 *Return: 1 is prime and 0 if not.
 */
int is_prime_number(int n)
{
	return (pr(n, 2));
}
