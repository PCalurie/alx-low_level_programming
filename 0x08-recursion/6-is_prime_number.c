#include "main.h"
#include <stdio.h>
/**
 * primeaid - checks if a number is a prime number recursively
 * @a: guessed number
 * @x: number to check
 * Return: 1 success or else 0 error
 */
int primeaid(int x, int a);
/**
 * is_prime_number - checks if a number is a prime number
 * @x: the number to check
 * Return: 1 on success and 0 on error
 */
int is_prime_number(int x)
{
	if (x <= 1) /* prime numbers are greater than 1 */
	return (0);

	if (x % 2 == 0) /* any prime number except 2 is prime */
	return (0);

	return (primeaid(x, 3)); /* start checking odd no. from 3 */
}
/**
 * primeaid - checks if a number is a prime number recursively
 * @a: guessed number
 * @x: number to check
 * Return: 1 success or else 0 error
 */
int primeaid(int x, int a)
{
	if (a * a > x) /* if we've checked all square roots untill x */
	return (1);

	if (x % a == 0) /* x is divissible by a, so its not prime */
	return (0);

	return (primeaid(x, a + 2)); /*avoid even no. and check next odd */
}
