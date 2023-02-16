#include <stdio.h>

/**
 * main -Entry point
 *
 * Description: entry point of the program
 *
 * Return: 0 if seccussful
 */

int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	
	fprintf(stderr, "%s", str);

	return (1);
}
