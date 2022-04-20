#include "main.h"
/**
 * st_len - get the string length.
 *@s: input string.
 *
 *Return: length of the string.
 */
int st_len(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + st_len(s + 1));
}

/**
 * check - checks if it is palindrome.
 *@s: input string.
 *@l: to set the left pointer.
 *@r: to set the right pointer.
 *Return: 1 if it is palindrome unless 0.
 */
int check(char *s, int l, int r)
{
	if (l >= r)
	{
		return (1);
	}
	if (s[l] != s[r])
	{
		return (0);
	}
	return (check(s, l + 1, r - 1));
}

/**
 * is_palindrome - checks if the string is palindrome.
 *@s: input string.
 *
 *Return: 1 if it is palindrome unless 0.
 */
int is_palindrome(char *s)
{
	int r = st_len(s) - 1;

	return (check(s, 0, r));
}

