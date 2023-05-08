#include "main.h"
/**
 * read_textfile - reads a text file and prints its letters
 * @filename: pointer to the file's name
 * @letters: number of letters to read and print
 *
 * Return: number of letters read and printed, 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t nrd;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(letters * sizeof(char));
	if (!buf) {
		close(fd);
		return (0);
	}

	nrd = read(fd, buf, letters);
	close(fd);

	if (nrd == -1) {
		free(buf);
		return (0);
	}

	write(STDOUT_FILENO, buf, nrd);
	free(buf);

	return (nrd);
}
