#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * Description: multiples of 3 or 5, we get 3, 5, 6 and 9
 *
 * Return: Always 0.
 */

int main(void)
{
	int i;
	int sum = 0;
	
	for (i = 0; i < 1024; i++)
		{
			if ((i % 3) == 0 || (i % 5) == 0)
				sum += i;
		}
		printf("%d\n", sum);
		return (0);
}
