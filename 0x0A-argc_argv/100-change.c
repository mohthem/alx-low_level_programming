#include <stdio.h>
#include <stdlib.h>

/**
 * main - calculate coins.
 * @argc: number of arguments passed to the function
 * @argv: argument vector of pointers to strings
 *
 * Return: 1 if not number or negative char otherwise 0.
 */
int main(int argc, char *argv[])
{
	int i, num, rem, coins;
	int arr[5] = {25, 10, 5, 2, 1};

	coins = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (0);
	}

	num = atoi(argv[1]);
	if (num <= 0)
	{
		printf("0\n");
	}
	else
	{
		for (i = 0; i < 5; ++i)
		{
			if (num == 0)
				break;
			if (num >= arr[i])
			{
				rem = num % arr[i];
				coins += num / arr[i];
				num = rem;
			}
		}
		printf("%d\n", coins);
	}
	return (0);
}
