/*
 * File: 0-memset.c
 * Auth: Brennan D Baraban
 */

#include "main.h"

/**
 * _memset - fill memory with a constant byte
 * @s: char
 * @b: char
 * @n: unsigned int
 * Return: A pointer to the filled memory area @s.
 *
 */

void *_memset(void *s, int c, size_t n)
{
	unsigned int index;
	unsigned char *memory = s, value = c;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}

