#include "main.h"

/**
 * _islower - function that checks for lower abc
 * @c: is te int that will use for the arguement of the function
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
