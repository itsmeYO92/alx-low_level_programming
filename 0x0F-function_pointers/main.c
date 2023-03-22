#include <stddef.h>
#include "3-calc.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * main - entry point
 * @ac: number of arguments
 * @av: arguments
 * Return: always 0
*/

int main(int ac, char **av)
{
	int a, b;

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}


	a = atoi(av[1]);
	b = atoi(av[3]);

	if ((strcmp(av[2], "/") == 0 || strcmp(av[2], "%") == 0) && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	if (!get_op_func(av[2]))
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", get_op_func(av[2])(a, b));
	return (0);
}
