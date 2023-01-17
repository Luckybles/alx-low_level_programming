#include "dog.h"
#include <stdio.h>
/**
 * init_dog - initailize a varible oft struct dog
 * @d: the dog to ve initailize
 * @name: the name of the dog
 * @age: the age of th dog
 * @owner:the owner of the dog
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

