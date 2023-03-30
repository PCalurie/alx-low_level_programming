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
	int i, j, k;

	k = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
/* print the address of the current line*/
	while (k < size)
	{
		j = size - k < 10 ? size - k : 10;
		printf("%08x: ", k);
/* print the hexadecimal representation of the bytes */
		for (i = 0; i < 10; i++)
		{
			if (i < j)
				printf("%02x", *(b + k + i));
			else
				printf("  ");
			if (i % 2)
			{
				printf(" ");
			}
		}
/*print the ASCII representation of the bytes */
			for (i = 0; i < j; i++)
			{
				int c = *(b + k + i);

				if (c < 32 || c > 132)
				{
					c = '.';
				}
				printf("%c", c);
			}
			printf("\n");
			k += 10;
	}
}
