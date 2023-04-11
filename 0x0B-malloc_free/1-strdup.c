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
	unsigned int i,
	unsigned int len = 0;
	char *new_str;

	if (*str == NULL)
		return (NULL);

	while (str[len])
		len++;

	new_str = malloc(sizeof(char) * (len + 1))

	if (new_str == NULL)
		return (NULL);

	for (i = 0; i <= str; i++)
		new_str[i] = str[i];

	return (new_str);
}
