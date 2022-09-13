#include "main.h"

/**
 * print_sign - Write a function that prints the sign of a number
 *
 * @n: Number to pass to print sign
 * Return: Always 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
		else if (n < 0)
		{
			_purchar('-');
			return (-1);
		}
		else 
		{
			_putchar('0');
			return (0);
		}
	}
