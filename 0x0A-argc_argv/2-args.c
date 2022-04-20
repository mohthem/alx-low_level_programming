#include <stdio.h>

/**
 * main - prints all the arguments.
 * @argc: number of arguments passed to the function
 * @argv: argument vector of pointers to strings
 *
 * Return: always 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	int count  = 0;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
