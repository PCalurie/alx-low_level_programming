#include <stdlib.h>
#include "dog.h"
#include <stdio.h>
/**
 * free_dog - function frees memory of the dog
 * @d: struct dog to free
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
