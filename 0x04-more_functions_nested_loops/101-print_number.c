#include <stdio.h>
#include "main.h"

/**
 * print_number - fizz buzz
 * @n: number to print
 * Return: 0 if successfull.
 */
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}
	if (n / 10 != 0)
		print_number(num / 10);
	_putchar(num % 10 + '0');

}
