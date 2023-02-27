#include <stdio.h>
#include "main.h"

/**
 * puts2 - print a "half" strin
 *
 * @str: string to print
 *
 * Return: nothing
 */

void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str = str + 2;
	}

	_putchar('\n');

}
