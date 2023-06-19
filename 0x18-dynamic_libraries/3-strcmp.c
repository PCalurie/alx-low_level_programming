#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: 0 if equal, difference of ASCII values of char deffernce
 */
int _strcmp(char *s1, char *s2)
{
	int x = 0;

/* loop untill the end of the string or first non matching char */
	while (s1[x] != '\0' && s2[x] != '\0' && s1[x] == s2[x])
		x++;
/* return ASCII value differnce of first non-matching char */
	return (s1[x] - s2[x]);
}
