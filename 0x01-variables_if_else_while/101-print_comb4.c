#include<stdio.h>

/**
 * main - prints all possible different combinations of three digits.
 *
 * Return: 0 (success always)
 */
int main(void)
{
	char i;
	char j;
	char k;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (k = '0'; k <= '9'; k++)
				if ((k > j) && (j > i))
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i == '7' && j == '8' && k == '9')
				{
					continue;
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
