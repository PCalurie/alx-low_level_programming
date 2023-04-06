#include "main.h"
/**
 * _strlen_recursion - prints the length of a string
 * @s: string to count
 * Return: 0 Always success
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0') /* if string is empty */
	return (0);

	s++; /* increament the func with next char (ext calculation) */
/* recursively call the function with the next char and add 1 */
	return (1 + _strlen_recursion(s)); /* returns an integer and not an agument */
}
