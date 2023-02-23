#include <stdio.h>
#include "main.h"
/**
 * more_numbers - Entry point
 * Description: print numbers from 0 to 14
 *
 * Return: void
 */
void more_numbers(void)
{
	int i;

	for (i = 0; i <= 14; i++)
	{
		if (i / 10 != 0)
		{
			_putchar(i / 10 + '0');
		}
		_putchar(i % 10 + '0');
	}
	_putchar('\n');

}

