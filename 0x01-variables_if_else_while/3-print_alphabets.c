#include<stdio.h>

/**
 * main -rints the alphabet in lowercase, and then in uppercase,
 *       followed by a new line.
 *
 * Return: 0 (success always)
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	for (i = 'A'; i <= 'Z'; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
