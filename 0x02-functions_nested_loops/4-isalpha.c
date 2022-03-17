#include "main.h"
/**
 * _isalpha - cheks alphabet letters!.
 *
 *@c: character.
 *
 * Return: 0 on success
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
