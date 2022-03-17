#include "main.h"
/**
 * print_sign - cheks lowercase letters!.
 *
 *@c: input to be tested.
 *
 * Return: 0 on success
 */
int print_sign(int c)
{
	if (c > 0)
	{

		_putchar('+');
		return (1);
	}
	else if (c == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (c < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
