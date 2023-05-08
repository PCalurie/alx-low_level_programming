#include "main.h"
/**
 * create_file - creates a file
 * @filename: the filename
 * @text_content: content to be written in the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, nletters = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[nletters])
			nletters++;

		if (write(fd, text_content, nletters) == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
