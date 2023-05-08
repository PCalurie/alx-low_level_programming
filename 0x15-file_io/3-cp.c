#include "main.h"
/**
 * error_and_exit - prints an error message and exits with the specified code.
 * @msg: error message to print.
 * @code: exit code.
 */
void error_and_exit(const char *msg, int code)
{
	dprintf(STDERR_FILENO, "Error: %s\n", msg);
	exit(code);
}

/**
 * main - copies the contents of one file to another.
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: 0 on success, 97-100 on failure.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;
	ssize_t nchars, nwr;
	char buf[1024];

	if (argc != 3)
		error_and_exit("Usage: cp file_from file_to", 97);

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		error_and_exit("Can't read from file", 98);

	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to == -1)
		error_and_exit("Can't write to file", 99);

	while ((nchars = read(file_from, buf, 1024)) > 0)
	{
		nwr = write(file_to, buf, nchars);
	if (nwr != nchars)
		error_and_exit("Can't write to file", 99);
	}

	if (nchars == -1)
		error_and_exit("Can't read from file", 98);

	if (close(file_from) == -1)
		error_and_exit("Can't close file", 100);

	if (close(file_to) == -1)
		error_and_exit("Can't close file", 100);

	return (0);
}
