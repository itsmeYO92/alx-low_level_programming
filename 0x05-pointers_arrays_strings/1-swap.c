#include <stdio.h>
#include "main.h"

/**
 * swap_int - swap the value of 2 int
 *
 * @a: first int
 *
 * @b: second int
 *
 * return: nothing
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
