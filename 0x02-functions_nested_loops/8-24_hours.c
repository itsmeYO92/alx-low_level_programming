#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * jack_bauer  - Entry point
 *
 * Description: print every minute of the day
 *
 * Return: 0 if seccessful
*/
void jack_bauer(void)
{
	int i;
	int j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60 ; j++)
		{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			_putchar(':');
			_putchar(j / 10 + '0');
			_putchar(i % 10 + '0');
			_putchar('\n');
		}
	}
	return (0);

}

