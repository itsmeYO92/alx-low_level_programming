#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct that stores some info about dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner of the dog
 *
 * Description: struct that stores the name, the age and the owner of a dog
*/

struct dog
{
	char *name;
	char *owner;
	float age;
};



#endif