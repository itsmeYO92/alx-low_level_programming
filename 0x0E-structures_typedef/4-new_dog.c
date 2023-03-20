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

	d = malloc(sizeof(dog_t));
	if (!d || !name || !owner)
	{
		free(d);
		return (NULL);
	}
	d->name = malloc(sizeof(name));
	d->owner = malloc(sizeof(owner));
	if (!d->name)
	{
		free(d);
		free(d->name);
		return (NULL);
	}
	if (!d->owner)
	{
		free(d->name);
		free(d->owner);
		free(d);
		return (NULL);
	}
	strcpy(d->name, name);
	strcpy(d->owner, owner);
	d->age = age;

	return (d);

}
