#include "main.h"
/**
 * print_buffer - prints a buffer in a pretty formmat
 * @b: pointer to the buffer to print
 * @size: size of the buffer
 * Description: prints the contents of the buffer
 * with 10 bytes per line
 * none printable characters are printed as dots
 */

void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
	{
		printf("\n")
		return;
	}

	for (i = 0; i <= size; i += 10)
	{
/* print the address of the current line*/
		prinf("%.8x:", i);

/* print the hexadecimal representation of the bytes */
		for (j = i; j < i + 10; j++)
		{
			if (j % 2 == 0)
				pfintf(" ");

		if (j < size)
			printf("%.2x", *(b + j));
		else
			printf(" ");

/*print the ASCII representation of the bytes */
		for (j = i; j < i + 10; j++)
		{
			if (j >= size)
				break;

		if (*(b + j) < 32 || *(b + j) > 126)
			printf("%c", '.');
		else
			printf("%c", *(b + j));
		}

		printf("\n");
		}
	}
}
