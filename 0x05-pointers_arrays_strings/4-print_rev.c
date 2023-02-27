#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * print_rev - print a string in reverse
 *
 * @s: string to print
 *
 * Return: nothing
 */

void print_rev(char *s)
{
	int length, i;

	length = strlen(s);
	for (i = length - 1; i >= 0; i--)
		_putchar(*(s + i));
	_putchar('\n');

}
