#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src,
 *            including the terminating null byte (\0),
 *            to the buffer pointed to by dest.
 * @dest: the buffer that will hold our copied string.
 * @src: the string whose value is to be copied.
 *
 * Return: dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i] != '\0';)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
