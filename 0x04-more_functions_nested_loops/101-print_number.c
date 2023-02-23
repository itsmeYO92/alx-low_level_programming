#include <stdio.h>
#include "main.h"

/**
 * print_number - fizz buzz
 * @n: number to print
 * Return: 0 if successfull.
 */
void print_number(int n)
{
	int i = 10000;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	while (i > 1)
	{
		if (n / i != 0)
		{
			_putchar(n / i + '0');
			n = n - (n / i) * i;
		}
		i = i / 10;
	}
	_putchar(n % 10 + '0');

}
