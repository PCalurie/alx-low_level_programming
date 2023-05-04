#include "main.h"
/**
 * flip_bits - counts the number of bits needed to flip to get from one number
 *             to another
 * @n: the first number
 * @m: the second number
 *
 * Return: the number of bits that must be flipped to convert n to m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int count = 0;

	while (xor)
	{
		count += (xor & 1);
		xor >>= 1;
	}

	return (count);
}
