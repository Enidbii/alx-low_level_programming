#include "dog.h"
#include <stdlib>

/**
 * init_dog - initialize a variable of struct dog
 * struct dog d: structure
 * @d: initialised structure
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	*d = malloc(sizeof(struct dog));
	if (d == NULL)
		return;
	else
	{
		d->name = name;
		d.age = age;
		d->owner = owner;
	}
}
