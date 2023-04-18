#include "dog.h"

/**
 * _puts_recursion - fonction (Puts with recursion).
 * @s: The string to print.
 * return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = *name;
	d->age = *age;
	d->owner = *owner;
}
