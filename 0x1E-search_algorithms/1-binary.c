#include "search_algos.h"
#include <stdio.h>

/**
 * binary_search - a function to search an array using binary search
 * @array: array to search
 * @size: size of the array
 * @value: value to search for
 * Return: index of the value or -1 if not found
*/
int binary_search(int *array, size_t size, int value)
{
	int low, mid, high;

	if (array == NULL)
	{
		return (-1);
	}

	low = 0;
	high = size - 1;

	while (low <= high)
	{
		mid = (low + high) / 2;
		print_array(array, low, high);

		if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			high = mid - 1;
		else
			return (mid);
	}
	return (-1);
}



/**
 * print_array - a function to print the array to search
 * @array: array to print
 * @size: size of the array
 * @start: index to start from
*/

void print_array(int *array, size_t start, size_t size)
{
	size_t i;

	printf("Searching in array: ");
	for (i = start; i < size; i++)
	{
		printf("%d, ", *(array + i));
	}
	printf("%d\n", *(array + size));
}
