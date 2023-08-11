#include "main.h"

/**
 * cap_string - changes all lowercase letters of a string to uppercase.
 * @s: the required string.
 *
 * Return: the processed string.
 */
char *cap_string(char *s)
{
	int i = 0;

	while (*(s + i))
	{
		if (*(s + i) == ' ' || *(s + i) == '\t' || *(s + i) == '\n'
				|| *(s + i) == ',' || *(s + i) == ';'
				|| *(s + i) == '.' || *(s + i) == '!'
				|| *(s + i) == '?' || *(s + i) == '"'
				|| *(s + i) == '(' || *(s + i) == ')'
				|| *(s + i) == '{' || *(s + i) == '}')
		{
			if (*(s + i + 1) >= 'a' && *(s + i + 1) <= 'z')
				*(s + i + 1) -= 'a' - 'A';
		}
		i++;
	}
	return (s);
}
