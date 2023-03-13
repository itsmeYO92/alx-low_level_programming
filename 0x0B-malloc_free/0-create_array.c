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
	if (size == 0)
		return NULL
	else
		return ((*int)malloc(sizeof(char) * size));
}
