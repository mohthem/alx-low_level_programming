#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Last Digit Checker.
(*
 * Return: 0 on success
 */
int main(void)
{
	int n;
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	x = n % 10;
	if (x > 5)
	{
		printf("Last digit of %d is %d %s\n", n, x, "and is greater than 5");
	}
	if (x == 0)
	{
		printf("Last digit of %d is %d %s\n", n, x, "and is 0");
	}
	if (x < 6 && x != 0)
	{
		printf("Last digit of %d is %d %s\n", n, x, "and is less than 6 and not 0");
	}
	return (0);
}

