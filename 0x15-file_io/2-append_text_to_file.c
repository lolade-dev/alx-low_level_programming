#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: name of the file
 * @text_content: NULL terminated strng to add at the end of the file
 * Return: 1 oe -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i = 0;
	ssize_t len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[i])
			i++;

		len = write(fd, text_content, i);
		if (len != i)
			return (-1);
	}

	close(fd);
	return (1);
}
