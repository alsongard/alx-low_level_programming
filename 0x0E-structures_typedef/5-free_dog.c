#include "dog.h"
#include <stdio.h>
/**
 * free_dog - Free memory of pointer t
 * @t: pointer to structure
 * Return: (void)
 */
void free_dog(dog_t *t)
{
	if (d == NULL)
	{
		return;
	}
	free(d->owner);
	free(d->name);
	free(d);
}
