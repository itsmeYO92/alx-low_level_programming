#include "main.h"

/**
 * flip_bits - print a binary to stdout
 * @n: first number
 * @m: second number
 * Return: number of bits to change
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int result = 0, size = sizeof(n) * 8;

	while (size > 0)
	{
		if ((m & 1) != (n & 1))
			result++;
		n = n >> 1;
		m = m >> 1;
		size--;
	}
	return (result);
}
