#include "main.h"
/**
 * _islower - cheks lowercase letters!.
 *
 *@c: character.
 *
 * Return: 0 on success
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
