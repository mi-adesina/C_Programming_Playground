#include<stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers.
 *
 * Return: 0 (success always)
 */
int main(void)
{
	char i;
	char j;
	char k;
	char l;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			putchar(i);
			putchar(j);
			putchar(' ');
			for (k = '0'; k <= '9'; k++)
			{
				for (l = '0'; l <= '9'; k++)
				{
					if (k == '0' && l == '0')
					{
						continue;
					}
					else
					{
						putchar(k);
						putchar(l);
						putchar(',');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
