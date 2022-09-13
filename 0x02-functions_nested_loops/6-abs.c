#include "main.h"

/**
 * _abs - Write a function that computes the absolute value of an integer
 *
 * @c: Number pass to the integer
 * Return: Aways 0.
 */

int _abs(int c)
{
	if (c > 0 || c == 0)
	{
		return (c);
	}
	else
	return (c * -1);
}
