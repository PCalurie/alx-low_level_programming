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

	for (i = 0; str[i] != '\0'; i++)
		return (i);
}
/**
 * str_cpy - function copys a str
 * @src: source file
 * @dest: destination file
 * Return: pointer to dest
 */
char str_cpy(char *src, char *dest)
{
	int _len, i;

	for (_len = 0; src[_len] != '\0'; _len++)
		;

	for (i = 0; i < _len; i++)
		dest[i] = src[i];

	dest[i] = '\0';
	return (dest);
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

	dog->name = malloc(sizeof(char) * _len1 + 1);
	if (dog->name == NULL)
		fee(dog);
		return (NULL);

	dog->owner = malloc(sizeof(char) * _len2 + 1);
	if (dog->owner == NULL)
		free(dog);
		fee(dog->name);
		return (NULL);

	str_cpy(dog->name, name);
	str_cpy(dog->owner, owner);
	dog->age = age;

	return (d);
}
