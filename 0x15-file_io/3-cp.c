#include "main.h"

/**
 * error_msg - handles error msg output to stdout
 * @msg: The message to be formated
 * @ex_code: The exit codes for each message
 */

void error_msg(char *msg, int ex_code, ...)
{
	va_list ap;

	va_start(ap, ex_code);
	if (ex_code == 97)
		dprintf(STDERR_FILENO, msg, "");
	else if (ex_code == 98 || ex_code == 99)
		dprintf(STDERR_FILENO, msg, va_arg(ap, char *));
	else if (ex_code == 100)
		dprintf(STDERR_FILENO, msg, va_arg(ap, int));
	else
		dprintf(STDERR_FILENO, "Unknown Error\n");

	va_end(ap);
	exit(ex_code);
}

/**
 * main - copies content of a file to another
 * @argc: amount of args passed (must be equal to two)
 * @argv: The args passed (File names)
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	char buf[1024];
	ssize_t wd, rd;
	int fd_o, fd_c;

	if (argc != 3)
		error_msg("Usage: cp file_from file_to\n", 97);

	fd_o = open(argv[1], O_RDONLY);
	if (fd_o == -1)
		error_msg("Error: Can't read from file %s\n", 98, argv[1]);
	fd_c = open(argv[2], O_CREAT | O_RDWR | O_TRUNC, 0664);
	if (fd_c == -1)
		error_msg("Error: Can't write to %s\n", 99, argv[2]);
	while ((rd = read(fd_o, buf, 1024)) > 0)
	{
		wd = write(fd_c, buf, rd);
		if (wd == -1)
			error_msg("Error: Can't write to %s\n", 99, argv[2]);
	}
	if (rd == -1)
		error_msg("Error: Can't read from file %s\n", 98, argv[1]);
	if (close(fd_o) == -1)
		error_msg("Error: Can't close fd %d\n", 100, fd_o);
	if (close(fd_c) == -1)
		error_msg("Error: Can't close fd %d\n", 100, fd_c);

	return (0);
}

