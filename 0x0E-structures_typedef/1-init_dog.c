#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize a variable of type dog
 * @d: struct dog
 * @name: char type pointer
 * @age: float type variable
 * @owner: char type pointer
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
