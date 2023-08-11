#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @s: the required string.
 *
 * Return: the encoded string.
 */
char *leet(char *s)
{
	char letter[] = "aAeEoOtTlL";
	char number[] = "4433007711";
	int i = 0;

	for (i = 0; *(s + i); i++)
	{
		int j = 0;

		while (j <= 9)
		{
			if (s[i] == letter[j])
				s[i] = number[j];
			j++;
		}
	}
	return (s);
}
