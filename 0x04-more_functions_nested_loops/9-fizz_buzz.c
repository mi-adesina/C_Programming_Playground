#include "main.h"

/**
 * main - prints the numbers from 1 to 100, followed by a new line.
 *        But for multiples of three print Fizz instead of the number
 *        and for the multiples of five print Buzz. For numbers which
 *        are multiples of both three and five print FizzBuzz.
 *
 * Return: 0 (always success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz ");
			continue;
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
			continue;
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	putchar('\n');

	return (0);
}
