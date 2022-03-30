#include "main.h"
/**
 *is_valid_separator - check if the character is valid separator.
 *@ch: input parameter.
 *Return: 1 succesfuly and 0 failed.
 */

int is_valid_separator(char ch)
{
	int i = 0;
	char separator[13];

	separator[0] = ',';
	separator[1] = '.';
	separator[2] = ';';
	separator[3] = '!';
	separator[4] = '?';
	separator[5] = '\"';
	separator[6] = '{';
	separator[7] = '}';
	separator[8] = '(';
	separator[9] = ')';
	separator[10] = ' ';
	separator[11] = '\n';
	separator[12] = '\t';
	while (separator[i])
	{
		if (ch == separator[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

/**
 *cap_string - capitalaize the first letter in a word.
 *@a: input parameter.
 *Return: the correct string.
 */
char *cap_string(char *a)
{
	int offset, i = 0;

	offset = 'a' - 'A';
	while (a[i] != '\0')
	{
		if (a[i + 1] <= 'z' && a[i + 1] >= 'a' && is_valid_separator(a[i]))
		{
			a[i + 1] = a[i + 1] - offset;
		}
		if (i == 0 && a[i] <= 'z' && a[i] >= 'a')
		{
			a[i] = a[i] - offset;
		}
		i++;
	}
	return (a);
}
