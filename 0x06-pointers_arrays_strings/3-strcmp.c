#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: First string.
 * @s2: Second string.
 *
 * Return: 0 if s1 = s2,
 *         positve int if s1 > s2,
 *         negative int otherwise.
 */
int _strcmp(char *s1, char *s2)
{
	return (*s1 - *s2);
}
