#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the diagonals of a square matrix of int
 * @a: pointer to the first element of the matrix
 * @size: size of a matrix
 */
void print_diagsums(int *a, int size)
{
	int i = 0, sum1 = 0, sum2 = 0;

	do {
		sum1 += a[i]; /*sum of elements of diagonal 1 */
		sum2 += a[size - 1 + i]; /* sum of diagonal 2 */
		i += size + 1; /* moves to the next element of diagonal 1 */
	} while (i < size * size);

	printf("%d, %d\n, sum1, sum2);
}
