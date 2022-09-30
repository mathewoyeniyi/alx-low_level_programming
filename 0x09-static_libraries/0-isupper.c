#include "main.h"
#include <stdio.h>

/**
 * _isupper - If is uppercase return 1, if not return 0
 *
 * @c: this is th entry
 * Return: Always 0.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
