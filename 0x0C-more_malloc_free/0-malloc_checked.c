#include <stdlib.h>
#include <string.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory
 * Return: pointer to the the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	if (b == 0)
		exit(98);

	p = malloc(b);
	if (p == NULL)
		exit(98);


	return (p);
}
