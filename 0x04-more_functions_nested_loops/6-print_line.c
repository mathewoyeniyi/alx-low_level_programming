#include "main.h"

/**
 * print_line -  Write a function that draws a straight line in the terminal
 *
 * @n: the int used
 *
 *
 */

void print_line(int n)
{
	int count;

	if (n >= 1)
	{
		for (count = 1; count <= n; count++)
		{
			_putchar(95);
		}
	}
	_putchar('\n');
}
