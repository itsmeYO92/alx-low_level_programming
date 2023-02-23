#include <stdio.h>
#include "main.h"
/**
 * print_square - Entry point
 * Description: print a square
 * @n: size of the square
 * Return: void
 */
void print_square(int n)
{
	int i, j;

	for (i = 0; i < n ; i++)
	{
		for (j = 0; j < n; j++)
			_putchar('#');
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}

