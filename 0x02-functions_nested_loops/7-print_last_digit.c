#include <stdio.h>
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
	_putchar(n % 10 + '0');
	return (n % 10);

}

