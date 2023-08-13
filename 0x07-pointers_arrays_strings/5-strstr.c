#include "main.h"

/**
 * _strstr - locates a substring.
 * @haystack: The require dstring to be searched.
 * @needle: the test string.
 * Description: The _strstr() function finds the first occurrence
 *              of the substring needle in the string haystack.
 *              The terminating null bytes (\0) are not compared.
 *
 * Return: a pointer to the beginning of the located substring,
 *         or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j = 0, k = 0;

	while (*(needle + j - 1))
	{
		j++;
	}
	for (i = 0; *(haystack + i); i++)
	{
		if (haystack[i] == needle[0])
		{
			for (k = 0; haystack[i + k] == needle[k]; k++)
			{
				if (k == j)
					return (haystack + i);
			}
		}
	}
	return ("NULL");
}
