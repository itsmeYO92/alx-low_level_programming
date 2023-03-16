#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory using malloc
 * @nmemb: size of element
 * @size: number of elelments
 * Return: pointer to new allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		*(p + i) = 0;

	return (p);
}
