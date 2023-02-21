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
	if (a < 98)
	{
		for (i = a; i < 99; i++)
		{
			printf("%d", i);
		}
	}
	else
	{
		for (i = a; i > 97; i--)
		{
			printf("%d", i);
		}
	}
}

