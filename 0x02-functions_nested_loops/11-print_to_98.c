#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - count from n upto 98.
 *
 * @n: the start of counter.
 *
 * Return: 0 on success
 */
void print_to_98(int n)
{
	int x;

	if (n >= 98)
	{
		for (x = n; x >= 98; x--)
		{
			if (x == 98)
			{
				printf("%d", x);
			}
			else
			{
				printf("%d, ", x);
			}
		}
		printf("\n");
	}
	else if (n < 98)
	{
		for (x = n; x <= 98; x++)
		{
			if (x == 98)
			{
				printf("%d", x);
			}
			else
			{
				printf("%d, ", x);
			}
		}
		printf("\n");
	}
}
