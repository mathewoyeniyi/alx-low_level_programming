#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Prints a buffer
 * @c: buffer to print
 * @b: bytes of buffer to print
 * @size: line of buffer to print
 *
 * Return: void
 */

void print_buffer(char *b, int size);
{
	int i;

	for (i = 0; i <= (size - 1) / 10 && size)
	{
		printf("%08x: ", i * 1);
		if (i < size / 10)
		{
			print_line(b, 9, i);
		}
		else
		{
			print_line(b, size % 10 - 1, i);
		}
		putchar('\n');
	}
	if (size == 0)
		putchar('\n');
}
