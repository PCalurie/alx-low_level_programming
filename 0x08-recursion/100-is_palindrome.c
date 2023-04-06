#include "main.h"
/**
 * strlen_recursion - returns the length of the string
 * @s: the string
 * Return: the legth of the string
 */
int strlen_recursion(char *s)
{
	if (*s == '\0')
	return (0);

	return (1 + strlen_recursion(s + 1));
}
/**
 * _is_palidrome - helper function to check for palidrome strn
 * @s: string to check
 * @start: starting index for the string
 * @end: ending index of the string
 * Return: 1 if palidrome, 0 otherwise
 */
int _is_palidrome(char *s, int start, int end)
{
	if (start >= end)
	return (1);

	if (s[start] != s[end])
	return (0);

	return (_is_palidrome(s, start + 1, end - 1));
}
/**
 * is_palidrome - checks if a string is a palidrome
 * @s: string to be checked
 * Return: 0 success or else -1
 */
int is_palidrome(char *s)
{
	int len;

	len = strlen_recursion(s);
	return (_is_palidrome(s, 0, len - 1));
}
