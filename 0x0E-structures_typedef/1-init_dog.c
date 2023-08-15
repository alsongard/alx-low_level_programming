#include "dog.h"
#include <stdio.h>
/**
 * init_dog - function that will assign values of struct dog
 * @d: pointer to variable used for accessing struct elements
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 * Return: (void)
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		(*d).age = age;
		d->owner = owner;
	}
}
