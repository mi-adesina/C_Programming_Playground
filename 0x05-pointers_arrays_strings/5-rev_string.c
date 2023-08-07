#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: the required string.
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	int i = 0;
	int j;
	char a;

	while (s[i] != '\0')
	{
		i++;
	}
	for (j = 0; i > j; i--, j++)
	{
		a = s[i - 1];
		s[i - 1] = s[j];
		s[j] = a;
	}

}
