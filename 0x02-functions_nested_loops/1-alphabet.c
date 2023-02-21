#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - Entry point
 *
 * Description: Print the lowercase alphabets
 *
 * Return: nothing
*/
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i < 'z' + 1; i++)
	{
		_putchar(i);
	}
	putchar('\n');
}

