#include "main.h"
/**
 * _isdigit - cheks uppercase letters!.
 *
 *@c: character.
 *
 * Return: 0 on success
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
