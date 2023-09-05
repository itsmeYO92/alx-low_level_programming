#include "main.h"

/**
 * _memset - fills the first n bytes in memory with constant byte
 *
 * @s: pointer to memory
 *
 * @b: constant to be filled with
 *
 * @n: number of bytes to be filled
 *
 * Return: pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}

	return (s);
}
