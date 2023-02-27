#include <stdio.h>
#include "main.h"

/**
 * print_array - print n element of an array
 *
 * @a: array to print
 *
 * @n: number of elements to print
 *
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
		{
			printf("%d, ", *(a + i));
		}
		else
		{
			printf("%d", *(a + i));
		}
	}
	putchar('\n');


}
