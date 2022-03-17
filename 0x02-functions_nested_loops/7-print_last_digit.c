#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 *
 *@a: input to be tested.
 *
 * Return: 0 on success
 */
int print_last_digit(int a)
{
	int d;

	d = a % 10;
	if (d < 0)
		d = d * -1;
	_putchar(d + '0');
	return (d);
}
