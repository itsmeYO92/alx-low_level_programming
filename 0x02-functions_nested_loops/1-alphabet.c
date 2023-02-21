#include <stdio.h>
/**
 * print_alphabet - Entry point
 *
 * Description: Print the lowercase alphabets
 *
 * Return: nothing
*/
void print_alphabet(void)
{
	for (int i = 'a'; i < 'z' + 1; i++)
	{
		putchar(i);
	}
	putchar('\n');
}

