#include "hash_tables.h"
/**
 * hash_djb2 - implementation of the djb2 algorithm
 * @str: string used to generate hash value
 *
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		/* multiplies the hash value by 33 and then
		 * adds ASCII value of the current character
		 * to the hash calculation */
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
