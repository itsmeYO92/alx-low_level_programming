#include <stdio.h>
#include "main.h"

/**
 * print_triangle - print triangle
 * @size: size of the triangle
 * Return: nothing
 */
void print_triangle(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1 - i; j++)
			_putchar(' ');
		for (j = size - 1 - i; j < size; j++)
			_putchar('#');
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
