#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of characters and initializes it with a
 * specific char
 * @size: size of char
 * @c: character
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;
/* check for invalid size */
	if (size <= 0)
		return (NULL);

/* allocate memory for the array */
	s = malloc(size * sizeof(char));
/* check if allocation was successful */
	if (s == 0)
		return (NULL);
/* fill the array with the given char */
	for (i = 0; i < size; i++)
		*s[i] = c;

/* add a null terminator at the end of the array */
	*s[i] = '\0';

	return (s);
}
