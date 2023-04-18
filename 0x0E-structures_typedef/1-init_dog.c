#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - fonction  initialize dog struct.
 * @d: The strictur to initialize.
 * @name : name
 * @age: age
 *@owner: owner
 * return: nothing
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
