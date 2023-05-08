#include "main.h"
/**
 * append_text_to_file - appends text to the end of a file
 * @filename: the name of the file to append to
 * @text_content: the text to be appended
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, n, written;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (n = 0; text_content[n]; n++)
			;

		written = write(fd, text_content, n);
		if (written == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
