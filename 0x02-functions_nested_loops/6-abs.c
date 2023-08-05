#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 * @n: the required integer
 *
 * Return: the absolut value of n.
 */
int _abs(int n)
{
	if (n < 0)
		return (-1 * n);
	else
		return (n);
}
