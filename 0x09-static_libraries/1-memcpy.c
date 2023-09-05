#include "main.h"

/**
 * _memcpy - fills the first n bytes in memory with constant byte
 *
 * @dest: pointer to memory
 *
 * @src: constant to be filled with
 *
 * @n: number of bytes to be filled
 *
 * Return: pointer to the memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}
