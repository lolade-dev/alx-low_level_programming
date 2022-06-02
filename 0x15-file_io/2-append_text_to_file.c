#include "main.h"

/**
 * _strlen - finds the length of a string
 * @str: pointer to the string
 *
 * Return: length of the string
 */
size_t _strlen(char *str)
{
	size_t i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: name of the file
 * @text_content: NULL terminated strng to add at the end of the file
 * Return: 1 oe -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	size_t i;
	ssize_t len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	i = _strlen(text_content);

	if (text_content != NULL)
		len = write(fd, text_content, i);
	close(fd);

	if (len == -1)
		return (-1);

	return (1);
}
