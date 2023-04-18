#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - fonction  initialize dog struct.
 * @d: The strictur to initialize.
 * @name : name
 * @age: age
 *@owner: owner
 * return: nothing
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t d;
	d = malloc (sizeof(dog_t);
	if (d != NULL)
	{
		d->name = malloc(sizeof(char) * (_strlen(name) + 1));
	       if (d->name != NULL)	
			d->name = name;
		d->age = age;
		d->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
		if (d->owner != NULL)
			d->owner = owner;
	}
	return (d);
}
