#include <string.h>
#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - create a dog struct
 *
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(*d));
	if (!d || !name || !owner)
	{
		free(d);
		return (NULL);
	}
	d->name = malloc(strlen(name) + 1);
	d->owner = malloc(strlen(owner) + 1);
	if (!(d->name) || !(d->owner))
	{
		free(d);
		free(d->owner);
		free(d->name);
		return (NULL);
	}
	strcpy(d->name, name);
	strcpy(d->owner, owner);
	d->age = age;

	return (d);

}
