#include <stdio.h>
#include "main.h"
/**
 * print_sign - Entry point
 *
 * @n : int to be checked
 *
 * Description: print the sign of an int
 *
 * Return: 1 if positive 0 if 0 -1 if negative
*/
int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}

}

