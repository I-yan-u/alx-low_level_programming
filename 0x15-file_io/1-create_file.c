#include "main.h"

/**
 * create_file - Creates an file and writes its content
 * to stdout.
 * @filename: The name of the file to create.
 * @text_content: The text content of the file
 * Return: 1 if successful -1 otherwise.
 */

int create_file(const char *filename, char *text_content)
{
	int l = 0, fd, wd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[l] != '\0')
			l++;
		wd = write(fd, text_content, l);
	}
	if (wd == -1 && wd != l)
		return (-1);
	return (1);
}

