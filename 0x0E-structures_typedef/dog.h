#ifndef dogh
#define dogh

/**
 * struct dog - structur dog.
 * @name: the dog name.
 * @age: the dog age.
 * @owner: the dog owner.
 *
 * Description: Longer description
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
t

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif

