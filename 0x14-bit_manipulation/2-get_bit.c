#include "main.h"

/**
 * get_bit - get value of bit by index
 * @n: int to print as binary
 * @index: index
 * Return: bit value
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i, size = sizeof(n);

	if (n == 0 && index < size)
		return (0);
	for (i = 0; i <= size - 1; i++)
	{
		if (index == i)
			return (n & 1);
		n = n >> 1;
	}
	return (-1);
}

