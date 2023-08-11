#include "main.h"

/**
 * _memcpy - copies memory area.
 * @dest: paste location.
 * @src: copy location.
 * @n:the amount of bytes to be copied
 *
 * Description: _memcpy() function copies n bytes from memory
 *              area src to memory area dest.
 *
 * Return: a pointer to dest,
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
