#include <stdio.h>

/**
 * main -Entry point
 *
 * Description: entry point of the program
 *
 * Return: return 1 if successful
 */

int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fprintf(stderr, "%s", str);

	return (1);
}
