#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX standard output.
 * @filename: Pointer to the name of the file.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters it could read and print,
 *         or 0 if file cannot be opened or read, or if filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rd, wr;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}

	rd = read(fd, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, rd);

	close(fd);
	free(buffer);

	if (rd == -1 || wr == -1 || wr != rd)
		return (0);

	return (wr);
}
