#include <stdio.h>
#include "main.h"
/**
 * print_line - Entry point
 * Description: print a line
 *
 * Return: void
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n ; i++)
		_putchar('_');
	_putchar('\n');
}

