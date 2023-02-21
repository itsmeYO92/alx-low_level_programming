#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - Entry point
 *
 * Description: Print the lowercase alphabets
 *
 * Return: nothing
*/
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		print_alphabet();
	}
	_putchar('\n');
}

