#include "main.h"
/**
 * read_textfile - reads a text file and prints its letters
 * @filename: pointer to the file's name
 * @letters: number of letters to read and print
 * Return: number of letters 0 otherwise
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}

	char buf[letters];
	ssize_t nrd = read(fd, buf, letters);

	close(fd);

	if (nrd == -1)
	{
		return (0);
	}

	write(STDOUT_FILENO, buf, nrd);
	return (nrd);
}
