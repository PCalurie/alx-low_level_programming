#include "main.h"
/**
 * _isupper - checks for uppercase letters
 * @c: char to check
 * Return: 1 if c is upper or 0 otherwise
 */
int _isupper(int c)
{
/* ternary operator used to return 0/1 */
	return ((c >= 'A' && c <= 'Z') ? 1 : 0);
}
