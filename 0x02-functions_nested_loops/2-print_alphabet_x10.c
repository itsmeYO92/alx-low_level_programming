#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * Description: Print the lowercase alphabets 10 times
 *
 * Return: nothing
*/
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j < 'z' + 1; j++)
		{
			_putchar(j);
		}

	_putchar('\n');
	}
}

