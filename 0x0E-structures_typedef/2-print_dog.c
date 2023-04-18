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

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", (*d).name);
		if (d->age == NULL)
			printf("Age: (nil)\n");
		else
                        printf("Name: %f\n", (*d).age);
		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
                        printf("Name: %s\n", (*d).owner);

	}
	else
		printf("(nil)");
}
