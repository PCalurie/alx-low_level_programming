#include "main.h"
/**
 * clear_bit - sets the value of a bit at a given index to 0
 * @n: pointer to the unsigned long int containing the bit to clear
 * @index: index of the bit to clear
 *
 * Return: 1 on success, or -1 if an error occurs
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n &= ~(1UL << index);

	return (1);
}
