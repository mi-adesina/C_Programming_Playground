#include<stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0,
 *        followed by a new line.
 *
 * Return: 0 (success always)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	printf("\n");

	return (0);
}
