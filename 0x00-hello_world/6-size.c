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
	puts("Size of a char: %d byte(s)\n",sizeof(char));
	puts("Size of an int: %d byte(s)\n",sizeof(int));
	puts("Size of a long int: %d byte(s)\n",sizeof(long int));
	puts("Size of a long long int: %d byte(s)\n",sizeof(long long int));
	puts("Size of a float: %d byte(s)\n",sizeof(float));

	return (0);
}
