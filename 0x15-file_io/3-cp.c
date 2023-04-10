#include "main.h"
#include <stdio.h>

/**
 * check_file - checks if a file can be opened.
 * @fd: file descriptor.
 * @filename: name of the file.
 * Return: no return.
 */
void check_file(int fd, char *filename)
{
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
}

/**
 * main - check the code for Holberton School students.
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, err_close;
	ssize_t nchars, nwr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	check_file(fd_from, argv[1]);

	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	check_file(fd_to, argv[2]);

	do {
		nchars = read(fd_from, buf, 1024);
		if (nchars == -1)
			check_file(-1, argv[1]);
		nwr = write(fd_to, buf, nchars);
		if (nwr == -1)
			check_file(0, argv[2]);
	} while (nchars == 1024);

	err_close = close(fd_from);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}

	err_close = close(fd_to);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	return (0);
}

