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
	int size = 0, i = 1;
	char *new_str;

	if (str == NULL)
		return (NULL);

	while (str[i])
		i++;

	new_str = malloc((sizeof(char) * i) + 1);

	if (new_str == NULL)
		return (NULL);

	for (; str[size] != '\0'; size++)
		new_str[size] = str[size];

	new_str[size] = '\0';

	return (new_str);
}
