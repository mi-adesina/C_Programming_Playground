#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: The required string.
 *
 * Return: the length of string *s.
 */
int _strlen(char *s)
{
	int len = 0;
	int i = 0;

	while (*(s + i) != '\0')
	{
		len++;
		i++;
	}

	return (len);
}
