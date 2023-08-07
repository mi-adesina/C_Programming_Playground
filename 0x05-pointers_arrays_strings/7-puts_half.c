#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: the required string.
 *
 * Return: nothing.
 */
void puts_half(char *str)
{
	int i = 0;
	int j;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 != 0)
		i++;
	for (j = 0; j <= i; j++)
	{
		if (j >= (i / 2))
			_putchar(str[j]);
	}
	_putchar('\n');
}
