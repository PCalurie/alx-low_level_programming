#include "dog.h"
#include <stdio.h>
/**
 * print_dog - function prints a struct dog
 * @d: dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "(nil)";

	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("NAME:%s\nAGE:%f\nOWNER:%s\n", d->name, d->age, d->owner);
}
