#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a string to a newly allocated a memory
 * which contains a string given as a parameter
 * @str: string to duplicate
 * Return: pointer to the string, NULL if string is NULL or mem fail
 */
char *_strdup(char *str)
{
	unsigned int i;
	char *new_str;

	if (*str == 0)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	new_str = malloc(sizeof(char) * i);

	if (new_str == 0)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		new_str[i] = str[i];

	str[i] = '\0';

	return (new_str);
}
