#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>

/**
 * rec - calculate the number of pieces
 *
 * @a : int to check
 *
 * Return: number of pieces
*/
int rec(int a)
{
	if (a < 0)
		return (0);
	if (a == 0)
		return (0);
	else if (a - 25 >= 0)
		return (1 + rec(a - 25));
	else if (a - 10 >= 0)
		return (1 + rec(a - 10));
	else if (a - 5 >= 0)
		return (1 + rec(a - 5));
	else if (a - 2 >= 0)
		return (1 + rec(a - 2));
	else if (a - 1 >= 0)
		return (1 + rec(a - 1));

	return (0);

}


/**
 * main - Entry point
 *
 * @argc: number of parametres
 *
 * @argv: array with parameters
 *
 * Return: 0 if successful
*/
int main(int argc, char **argv)
{
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		n = atoi(argv[1]);
		printf("%d\n", rec(n));
	}

	return (0);

}

