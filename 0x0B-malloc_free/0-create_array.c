#include <stdlib.h>

/**
 * create_array - creat array in the memory
 * @size: size of the array
 * @c: charachter to init the array with
 *
 * Return: pointer to the array or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	int i;

	if (size == 0)
		return (NULL);
	p = (char *)malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
		*(p + i) = c;
	return (p);
}
