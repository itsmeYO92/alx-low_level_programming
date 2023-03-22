#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - function that search for an int
 * @array: array to iterrat
 * @cmp: function to compare elements
 * @size:size of the array
 * Return: index of first occurence or -1 if no element match
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (cmp)
		for (i = 0; i < size; i++)
			if (cmp(array[i]) != 0)
				return (i);

	return (-1);
}
