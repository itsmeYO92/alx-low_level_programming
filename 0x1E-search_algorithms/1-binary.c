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
	size_t middle;

	if (!array || (size == 1 && *array != value))
		return (-1);

	print_array(array, size);
	if (size % 2 == 0)
		middle = size / 2 - 1;
	else
		middle = size / 2;

	if (*(array + middle) == value)
		return (middle);

	if (*(array + middle) > value)
		return (binary_search(array, middle - 1, value));
	if (*(array + middle) < value)
		return (binary_search(array + middle, size - middle, value));
	return (-1);
}



/**
 * print_array - a function to print the array to search
 * @array: array to print
 * @size: size of the array
*/

void print_array(int *array, size_t size)
{
	size_t i;

	printf("Searching in array: ");
	for (i = 0; i < size - 1; i++)
	{
		printf("%d, ", *(array + i));
	}
	printf("%d\n", *(array + size - 1));
}
