#include "main.h"

/**
 * print_array - prints n elements of an array of integers,
 *               followed by a new line.
 * @a: the required array.
 * @n: the amount of element to be printed.
 *
 * Return: nothing.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n - 1; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("%d\n", a[n - 1]);
}
