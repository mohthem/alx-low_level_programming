#include "variadic_functions.h"
#include<stdarg.h>
#include<stdio.h>

/**
 * print_numbers - print numbers followed by special character
 * @separator: the special character.
 * @n: number of arguments.
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int x;
	unsigned int i;

	va_list lst;

	va_start(lst, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(lst, int);
		printf("%d", x);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(lst);
}
