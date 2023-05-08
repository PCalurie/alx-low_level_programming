#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file
 * @text_content: content to be appended
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, ret = -1;
	ssize_t nwr;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		nwr = write(fd, text_content, strlen(text_content));
		if (nwr == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
