#include "main.h"

/**
 * read_textfile - reads a file an prints it to the standard output
 * @filename: The name of the file to be rea
 * @letters: the ammount of characters to be read
 *
 * Return: returns number of letters or 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int fd;
	ssize_t rd, wd;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(letters + 1);
	if (buffer == NULL)
		return (0);

	rd = read(fd, buffer, letters);
	if (rd == -1)
		return (0);

	buffer[letters + 1] = '\0';
	close(fd);

	wd = write(STDOUT_FILENO, buffer, rd);
	if (wd == -1)
		return (0);

	free(buffer);
		return (rd);
}

