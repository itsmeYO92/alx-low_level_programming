#include <stdlib.h>

/**
 * array_range - creat array of int
 * @min: first int
 * @max: last int
 * Return: pointer to new allocated memory
 */
int *array_range(int min, int max)
{
	int *p;
	unsigned int i, l;

	if (max - min < 0)
		return (NULL);

	l = max - min + 1;

	p = malloc(l * sizeof(int));

	if (p == NULL)
		return (NULL);
	for (i = 0; i < l; i++)
		*(p + i) = min + i;

	return (p);
}
