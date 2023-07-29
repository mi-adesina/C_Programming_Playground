#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints a random number and states whether it is
 *        positive, or negative, or zero.
 * Note: this is the assignment from ALX and it is done as
 *       requested but it is not efficient because if the
 *       integer division gives a number less than 0, the
 *       output expression is wrong.
 * Return: always 0.
 */

int main(void)
{
	int n;
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	x = n % 10;
	printf("Last digit of %d is %d", n, x);
	if (x > 5)
	{
		printf(" and is greater then 5");
	}
	else if (x == 0)
	{
		printf(" and is 0");
	}
	else if (x < 6 && !0)
	{
		printf(" and is less than 6 and not 0");
	}
	printf("\n");

	return (0);
}
