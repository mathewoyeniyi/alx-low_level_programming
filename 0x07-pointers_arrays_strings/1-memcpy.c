#include "main.h"

/**
 * _memcpy - Copies @n bytes from the memory area pointed
 *
 * @dest: char
 * @src: char
 * @n: int
 *
 * Return: char pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
