#include <stdio.h>
#include "main.h"

/**
 * main - prints _putchar, followed by a new line.
 *
 * Return: 0 (success always).
 */
int main(void)
{
	char str[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		_putchar(str[i]);
	_putchar('\n');

	return (0);
}
