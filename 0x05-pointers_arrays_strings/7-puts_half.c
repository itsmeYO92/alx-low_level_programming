#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * puts_half - print last half string
 *
 * @str: string to print
 *
 * Return: nothing
 */

void puts_half(char *str)
{
	int start;
	int tmp = strlen(str);

	if (tmp % 2 == 0)
		start = tmp / 2;
	else
		start = (tmp - 1) / 2 + 1;
	for (int i = start; i < tmp; i++)
		_putchar(*(str + i));
	_putchar('\n');
}
