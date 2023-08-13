#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: required integer.
 *
 * Return: n! or -1 when n is less than zero.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
