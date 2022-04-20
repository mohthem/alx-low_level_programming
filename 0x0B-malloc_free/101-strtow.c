#include <stdlib.h>
#include "main.h"
/**
 * word_count - return the number of words in string.
 * @str: The string
 *
 * Return: number of words
 */
int word_count(char *str)
{
	int i, word_on, word_cnt;

	word_on = 1;
	word_cnt = 0;
	for (i = 0; str[i] != '\0'; ++i)
	{
		if (str[i] != ' ' && word_on == 1)
		{
			++word_cnt;
			word_on = 0;
		}
		else if (str[i] == ' ' && word_on == 0)
		{
			word_on = 1;
		}
	}
	return (word_cnt);
}
/**
 * strtow - splits a string into words
 * @str: the string to be split up by the various words
 *
 * Return: an array of strings.  Each string is allocated based on its length.
 */
char **strtow(char *str)
{
	char **arr;
	int i, j, k, words, start, cnt;

	if (str == NULL || *str == '\0')
		return (NULL);
	words = word_count(str);
	if (words == 0)
		return (NULL);
	arr = malloc((words + 1) * sizeof(char *));
	if (arr == NULL)
		return (NULL);
	for (j = 0, i = 0; i < words; ++i)
	{
		cnt = 0;
		for ( ; str[j] != '\0'; ++j)
		{
			if (cnt > 0 && str[j] == ' ')
				break;
			else if (str[j] != ' ')
				++cnt;
		}
		arr[i] = malloc(cnt * sizeof(char) + 1);
		if (arr[i] == NULL)
		{
			for ( ; i >= 0; --i)
				free(arr[i]);
			free(arr);
			return (NULL);
		}
		start = j - cnt;
		for (k = 0; start < j; k++, start++)
			arr[i][k] = str[start];
		arr[i][k] = '\0';
	}
	arr[i] = NULL;
	return (arr);
}
