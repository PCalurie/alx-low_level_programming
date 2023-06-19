#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: pointer to the memory to be filled
 * @b: value of memory to be filled
 * @n: number of mem byte to be filled
 * Return: pinter to the address memory block
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;
/* n-- is iterarted through s and records new values of byte in b */
	while (n--)
		*p++ = b;
	return (s); /* poinetr to the starting address */
}
