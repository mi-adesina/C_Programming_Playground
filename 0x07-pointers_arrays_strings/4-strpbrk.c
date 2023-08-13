#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: the required string string to be searched.
 * @accept: the other string.
 * Description: The _strpbrk() function locates the first
 * occurrence in the string s of any of the bytes in the
 * string accept
 *
 * Return: a pointer to the byte in s that matches one of
 *         the bytes in accept, or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; *(accept + j); j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return ("NULL");
}
