#include "main.h"
#include <stddef.h>
/**
 * _strstr - locates a substring
 * @haystack: pointer to string containing needle
 * @needle: pointer to the substring
 * Return: pointer to substring or else NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int needle_len = 0;
/* compute the length of the needle*/
	while (needle[needle_len] != '\0')
		needle_len++;

	do {
		int i;
/* Check if the current haystack substring matches the needle */
		for (i = 0; needle[i] != '\0'; i++)
		{
			if (haystack[i] != needle[i])
				break;
		}
/* if a match is found return the pointer to the beginning of the substring */
		if (needle[i] == '\0')
			return (haystack);
/* move to the next character in the haystack */
		haystack++;

	} while (*haystack != '\0');
/* if no match, return NULL */
	return (NULL);
}
