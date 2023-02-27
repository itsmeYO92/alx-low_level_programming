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
	int i = 0;

	while (*str != '\0')
	{
		if (i % 2 == 0)
			_putchar(*str);
		str = str + 1;
		i++;
	}

	_putchar('\n');

}
