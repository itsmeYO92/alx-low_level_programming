#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_to_98 - Entry point
 * @a : number 1
 *
 * Description: print to 98
 *
 * Return: void
 */
void print_to_98(int a)
{
	int i;

	if (a < 98)
	{
		for (i = a; i < 98; i++)
		{
			printf("%d, ", i);
		}
	}
	else
	{
		for (i = a; i > 98; i--)
		{
			printf("%d, ", i);
		}
	}
	printf("%d", a);
}

