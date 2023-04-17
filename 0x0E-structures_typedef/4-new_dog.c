#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_len - function returns the lenth of a str
 * @str: string to check
 * Return: length of the str
 */
int str_len(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}
/**
 * str_cpy - function copys a str
 * @src: source file
 * @dest: destination file
 */
void str_cpy(char *src, char *dest)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];

	dest[i] = '\0';
}
/**
 * new_dog - this function creates a new do profile
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner to initialize
 * Return: pointer to dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int _len1, _len2;

	_len1 = str_len(name);
	_len2 = str_len(owner);

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->name = malloc(sizeof(char) * (_len1 + 1));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	d->owner = malloc(sizeof(char) * (_len2 + 1));
	if (d->owner == NULL)
	{
		free(d);
		free(d->name);
		return (NULL);
	}

	str_cpy(name, d->name);
	str_cpy(owner, d->owner);
	d->age = age;

	return (d);
}
