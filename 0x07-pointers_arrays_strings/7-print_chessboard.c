#include "main.h"
/**
 * print_chessboard - prints the chessboard
 * @a: tHE 2D araay of char representing the cheassboard
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i = 0, j;

	do {
		j = 0;
/* print each character in the row */
		while (j < 8)
		{
			_putchar(a[i][j];)
				j++;
		}
/* move to the next row and print a newline character */
		i++;
		_putcha('\n');

	} while (i < 8);
}
