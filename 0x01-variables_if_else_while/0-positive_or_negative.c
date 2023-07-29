#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints a random number and states whether it is
 *        positive, or negative, or zero.
 *
 * Return: always 0.
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d", n);
	if (n > 0)
	{
		printf(" is positive");
	}
	else if (n == 0)
	{
		printf(" is zero");
	}
	else
	{
		printf(" is negative");
	}
	printf("\n");

	return (0);
}
