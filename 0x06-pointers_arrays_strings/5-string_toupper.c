#include "main.h"
/**
 *string_toupper - change to uppercase.
 *@a: input parameter.
 *Return: uppercase string.
 */
char *string_toupper(char *a)
{
	int offset, i = 0;

	offset = 'a' - 'A';
	while (a[i] != '\0')
	{
		if (a[i] <= 'z' && a[i] >= 'a')
		{
			a[i] = a[i] - offset;
		}
		i++;
	}
	return (a);
}
