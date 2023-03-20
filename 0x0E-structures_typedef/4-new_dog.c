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
	if (!d)
		return (NULL);

	d->name = malloc(sizeof(name));
	d->owner = malloc(sizeof(owner));
	if (d->name && d->owner)
	{
		strcpy(d->name, name);
		d->age = age;
		strcpy(d->owner, owner);
		return (d);
	}
	else
		return (NULL);
}
