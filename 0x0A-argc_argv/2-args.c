#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all arguments
 * @argv: argument
 * @argc: number of arguments
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int x = 0;

	while (argc > x)
		printf("%s\n", argv[x]);
	x++;

	return (0);
}
