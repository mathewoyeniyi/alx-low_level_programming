#include "main.h"

/**
 * _memset - Write a function that fills memory with a constant byte
 * The _memset() function fills the first n bytes of the memory area pointed to
 * by s with the constant byte b
 *
 * @s: This is the output and the return
 * @b: This is the this is the input string
 * @n:unsigned int
 *
 * Return: car
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (count = 0; count < n ; count++)
	{
		for (i = 0; i < n; i++)
			s[i] = b;
	}
	return (s);
}
