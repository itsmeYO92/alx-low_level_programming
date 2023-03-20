#include <stdio.h>

/**
 * main - print the name of the file the program was compiled from
 *
 * Return: Always 0.
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
