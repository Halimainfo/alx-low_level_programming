#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - Frees dogs.
 * @d: The dog to be freed.
 * @name : name
 * @age: age
 *@owner: owner
 * return: nothing
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->owner);
	free(d->name);
	free(d);
}
