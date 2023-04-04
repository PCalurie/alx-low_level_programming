#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the diagonals of a square matrix of int
 * @a: pointer to the first element of the matrix
 * @size: size of a matrix
 */
void print_diagsums(int *a, int size)
{
	int i, sum0 = 0, sum1 = 0;

	for (i = 0; i < size; i++)
	{
		sum0 += a[(size + 1) * i];
		sum1 += a[(size - 1) * (i + 1)];
	}

	printf("%d, %d\n", sum0, sum1);
}
