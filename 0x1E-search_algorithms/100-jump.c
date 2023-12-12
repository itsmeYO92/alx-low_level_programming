#include "search_algos.h"
#include <stdio.h>

/**
 * jump_search - a function to search an array using jump search
 * @array: array to search
 * @size: size of the array
 * @value: value to search for
 * Return: index of the value or -1 if not found
*/
int jump_search(int *array, size_t size, int value)
{
	size_t step, last = 0, current = 0;

	if (!array)
		return (-1);

	step = sqrt(size);

	while (current < size && value >= *(array + current))
	{
		printf("Value checked array[%ld] = [%d]\n", current, *(array + current));
		last = current;
		current += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", last, current);
	while (last <= current && last < size)
	{
		printf("Value checked array[%ld] = [%d]\n", last, *(array + last));
		if (*(array + last) == value)
			return (last);
		last++;
	}
	return (-1);
}
