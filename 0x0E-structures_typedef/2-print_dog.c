#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print a dog class
 *
 * @d: structure to print
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d)
	{

		printf("Name: %s\n", d->name ? d->name : "(nil)");
		if (d->age)
			printf("Age: %.6f\n", d->age);
		else
			printf("Age: %.6f\n", 0.0);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
