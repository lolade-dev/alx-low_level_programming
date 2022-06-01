#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file to be read
 * @letters: number of letters it should read and print
 * Return: the actual numbers of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t lenr, lenw;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}

	lenr = read(fd, buf, letters);
	close(fd);

	if (lenr == -1)
	{
		free(buf);
		return (0);
	}

	lenw = write(STDOUT_FILENO, buf, lenr);
	free(buf);

	if (lenr != lenw)
		return (0);

	return (lenw);

}
