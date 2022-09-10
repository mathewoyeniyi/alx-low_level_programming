#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'the program..'
 * Return: 0 Aways (success)
 */

int main(void)
{
	int i, j;

	fot (i = 0; i < 100; i++)
	{
		for (p = 0; p < 100; p++)
		{
			if (p > i)
			{
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');purchar(' ');
				putchar((p / 10) + '0');
				putchar((p % 10) + '0');
				if (i != 98)
				{
					putchar(',');
					putchar('');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
