#include "main.h"

/**
 * set_bit - add a bit to index
 * @n: int to print as binary
 * @index: index
 * Return: 1 or -1 if it failed
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int size = sizeof(*n);

	if (index > size - 1)
		return (-1);
	*n |= 1 << index;
	return (1);
}

