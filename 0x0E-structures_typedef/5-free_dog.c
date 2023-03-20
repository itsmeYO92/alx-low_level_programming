#include <string.h>
#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - free a dog struct
 *
 * @d: pointer to the dog
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
