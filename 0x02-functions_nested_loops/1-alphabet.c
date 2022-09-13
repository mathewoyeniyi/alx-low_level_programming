#include "main.h"

/**
 * main - point
 *
 * description: alphabet in lowercase, followed by a new line.
 * Return: 0 Always
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);

	}

	_putchar('\n');

}
