#include "main.h"
/**
 * puts_half - return half of string.
 *
 *@str: input string.
 */
void puts_half(char *str)
{
	unsigned int i = 0;
	int n = 0;

	while (str[i])
	{
		i++;
	}
	if (i % 2 != 0)
	{
		n = (i + 1) / 2;
	}
	else
	{
		n = i / 2;
	}
	while (str[n])
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
