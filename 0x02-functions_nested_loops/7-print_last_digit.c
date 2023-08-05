#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n: the required number whose last number  will be printed.
 *
 * Return: the value of the last digit.
 */
int print_last_digit(int n)
{
	int lst_dgt;

	lst_dgt = n % 10;
	if (n < 0)
		lst_dgt *= -1;
	_putchar(lst_dgt + '0');

	return (lst_dgt);
}
