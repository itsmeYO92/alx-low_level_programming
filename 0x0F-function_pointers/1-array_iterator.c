#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - function that prints a name
 * @array: array to iterrat
 * @action: function for what to do to array element
 * @size:size of the array
 * Return: nothing
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
