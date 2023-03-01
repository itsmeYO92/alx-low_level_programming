#include "main.h"
#include <string.h>

/**
 * reverse_array - reverse array
 *
 * @a: array to reverse to reverse
 *
 * @n: lenght of the array
 *
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int i, j;
	int tmp;

	for (i = 0, j = n - 1; j >= 0 && i < j; i++, j--)
	{
		tmp = *(a + i);
		*(a + i) = *(a + j);
		*(a + j) = tmp;
	}
}

