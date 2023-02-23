#include <stdio.h>
#include "main.h"

/**
 * print_number - fizz buzz
 * @n: number to print
 * Return: 0 if successfull.
 */
void print_number(int n)
{

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10 != 0)
		print_number(n / 10);
	_putchar(n % 10 + '0');

}
