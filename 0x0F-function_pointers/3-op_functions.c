#include "3-cal.h"
/**
 * op_add - adds two ints
 * @a: int a
 * @b: int b
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - substracts one int from another
 * @a: int a
 * @b: int b
 * Return: substraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multplication of integers
 * @a: int a
 * @b: int b
 * Return: multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides two ints
 * @a: int a
 * @b: int b
 * Return: division
 */
int op_div(int a, int b)
{
	if (!b)
		printf("Error\n");
		exit(100);

	return (a / b);
}
/**
 * op_mod - checks for remainder in divission
 * @a: int 1
 * @b: int 2
 * Return: remainder
 */
int op_mod(int a, int b)
{
	if (!b)
		printf("Error\n");
		exit(100);

	return (a % b);
}
