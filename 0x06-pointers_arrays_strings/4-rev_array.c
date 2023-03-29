#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: the array of integers to be reversed
 * @n: the number of elements in the array
 *
 */

void reverse_array(int *a, int n)
{
	int tmp;
	int i = 0;/*first element*/
	int j = n - 1;/*last element*/

	while (i < j)/*swap i and j until i >= j*/
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		i++;
		j--;
	}
}
