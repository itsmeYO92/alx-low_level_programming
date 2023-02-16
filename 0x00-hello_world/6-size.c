#include <stdio.h>

/**
 * main -Entry point
 *
 * Description: entry point of the program
 *
 * Return: 0 if seccussful
 */

int main(void) /* The main function is the strating point of the program */
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", sizeof(float));

	return (0);
}
