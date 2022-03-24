#include "main.h"
/**
 * _puts - return length of string.
 *
 *@str: input string.
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
