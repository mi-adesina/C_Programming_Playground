#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: the required string.
 * @c: the character to be looked for.
 *
 * Return: pointer to the first occurrence of the character c in the string s,
 *         NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	int i = 0, j = 0;

	while (*(s + j))
	{
		j++;
	}
	for (i = 0; i < j; i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	return (NULL);
}
