#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: the requied array of integer.
 * @n: the number of elements in the array
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int i = 0, j = n - 1;

	while (i < j)
	{
		a[i] += a[j];
		a[j] = a[i] - a[j];
		a[i] -= a[j];
		i++;
		j--;
	}
}
