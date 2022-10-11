#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Funtion that intialize an object dog
 * @d: The object being initialized
 * @name: Name atribute of the dog
 * @age: Age atribute of the dog.
 * @owner: The owner of the dog.
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
