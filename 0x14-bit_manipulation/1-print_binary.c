#include "main.h"

/**
 * print_binary_recursion - print a binary to stdout
 * @n: int to print as binary
*/
void print_binary_recursion(unsigned long int n)
{
	char to_print;

	if (n == 1)
		_putchar('1');
	if (n > 1)
	{
		to_print = (n & 1) + '0';
		print_binary(n >> 1);
		_putchar(to_print);
	}
}

/**
 * print_binary - print a binary to stdout
 * @n: int to print as binary
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
		print_binary_recursion(n);
}
