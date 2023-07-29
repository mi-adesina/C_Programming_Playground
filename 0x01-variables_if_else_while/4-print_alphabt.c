#include<stdio.h>

/**
 * main - Print all the letters except q and e
 *
 * Return: 0 (success always)
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != 'e' && i != 'q')
		{
			putchar(i);
		}
		else
		{
			continue;
		}
	}
	putchar('\n');

	return (0);
}
