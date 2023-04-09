#include "main.h"
#include <stddef.h>
/**
 * _strstr - checks the first occurence of a string
 * @needle: the string to search
 * @haystack: the string to search through
 * Return: string to the first occurence
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *beginning = haystack;
		char *pattern = needle;

		while (*haystack && *pattern && *haystack == *pattern)
		{
			haystack++;
			pattern++;
		}

		if (!*pattern)
			return (beginning);
/* reset the haystack to try with the next char */
		haystack = beginning + 1;
	}
	return (NULL);
}
