#include "main.h"

/**
 * print_triangle - prints a triangle followed by a new line.
 * @size: the size of the triangle.
 *
 * Return: nothing
 */
void print_triangle(int size)
{
	int i;
	int j;
	int k;

	for (i = 0; i < size; i++)
	{
		for (j = i; j < size; j++)
		{
			_putchar(' ');
		}
		for (k = 0; k < (i + 1); k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
