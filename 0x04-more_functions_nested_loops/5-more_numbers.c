#include "main.h"

/**
 * avoid_putchar - print its input argument.
 * @i: the argument to be printed.
 *
 * Return: nothing
 */
void avoid_putchar(int i)
{
	_putchar(i);
}

/**
 * more_numbers -  prints 10 times the numbers, from 0 to 14,
 *                 followed by a new line.
 *
 * Return: nothing
 */
void more_numbers(void)
{
	int i;
	int j;

	for (j = '0'; j <= '9'; j++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			avoid_putchar(i);
		}
		for (i = '0'; i < '5'; i++)
		{
			_putchar('1');
			avoid_putchar(i);
		}
		_putchar('\n');
	}
}
