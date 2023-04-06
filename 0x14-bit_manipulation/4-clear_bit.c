#include "main.h"

/**
 * clear_bit - clear bit at index
 * @n: int to print as binary
 * @index: index
 * Return: 1 or -1 if it failed
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}

