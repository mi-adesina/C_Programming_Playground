#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x: the base integer.
 * @y: the power.
 *
 * Return: x to the power of why, or -1 if n is less than 0.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return ( x * _pow_recursion(x, y - 1));
}
