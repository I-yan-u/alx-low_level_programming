#include "main.h"

/**
 * append_text_to_file - appends text to an existing file.
 * @filename: The name file of existing file.
 * @text_content: The text to append.
 *
 * Return: 1 on success and -1 otherwise
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, lent = 0, wd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND, 0664);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[lent] != '\0')
			lent++;
		wd = write(fd, text_content, lent);
	}
	if (wd == -1)
		return (-1);

	close (fd);

	return (1);

}

