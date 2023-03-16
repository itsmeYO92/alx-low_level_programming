#include <stdlib.h>
#include <string.h>

/**
 * _realloc - reallocates memory using malloc
 * @ptr: ptr to previously allocated memroy
 * @old_size: size of ptr
 * @new_size: size of the new array
 * Return: pointer to new allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		ptr = malloc(new_size);

	if (new_size == old_size)
		return (ptr);

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
