#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_last_digit - Entry point
 *
 * @n : int to be checked
 *
 * Description: return the last digit
 *
 * Return: last digit
*/
int print_last_digit(int n)
{
	int r = abs(n) % 10;

	_putchar(r + '0');
	return (r);

}

