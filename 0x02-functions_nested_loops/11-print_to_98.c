#include <stdio.h>
#include <st#include "main.h"

/**
 * print_to_98 - Write a fn that prints all natural numbers from n to 98, \n
 *
 * @n: the number to begin the counting at
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
