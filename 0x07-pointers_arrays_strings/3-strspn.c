#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: the required string.
 * @accept: the required substring.
 *
 * Return: the number of bytes in the initial segment of s
 *         which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j, count = 0;

	while (*(s + i) != ' ')
	{
		for (j = 0; *(accept + j); j++)
		{
			if (accept[j] == s[i])
				count++;
		}
		i++;
	}
	return (count);
}
