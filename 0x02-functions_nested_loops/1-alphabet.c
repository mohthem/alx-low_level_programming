#include "main.h"
/**
 * print_alphabet - Lowercase alphabet Letters!.
(*
 * Return: 0 on success
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
