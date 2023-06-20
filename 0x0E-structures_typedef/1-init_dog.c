#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - start a variable of type struct dog
 * @d: pointer to struct dog to initialize
 * @name: name to commence
 * @age: age to commence
 * @owner: owner to start
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
