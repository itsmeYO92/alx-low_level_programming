#include "search_algos.h"
#include <stdio.h>

/**
 * linear_search - a function to search an array using linear search
 * @array: array to search
 * @size: size of the array
 * @value: value to search for
 * Return: index of the value or -1 if not found
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, *(array + i));
		if (value == *(array + i))
		{
			return (i);
		}
	}

	return (-1);
}
