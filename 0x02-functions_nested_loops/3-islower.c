#include "main.h"

/**
 * _islower - function that checks for lower abc
 *
 * Return: 0 Always
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
