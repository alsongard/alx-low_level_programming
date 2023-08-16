#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - Free memory of pointer t
 * @d: pointer to structure
 * Return: (void)
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	free(d->owner);
	free(d->name);
	free(d);
}
