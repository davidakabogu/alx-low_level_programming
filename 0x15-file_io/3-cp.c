#include "main.h"
#include <stdio.h>

/**
 * check_file - this function checks if a file can be opened.
 * @file_from: source file
 * @file_to: destination file
 * @argv: ARGument Vector.
 */
void check_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - this programs copies the content of a file to another file
 * @argc: ARGument Count
 * @argv: ARGument Vector.
 * Return: returns 0 for successful
 */
int main(int argc, char *argv[])
{
	ssize_t bytes_written, num_chars = 1024;
	int file_from, file_to, error_close;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	check_file(file_from, file_to, argv);

	do {
		num_chars = read(file_from, buffer, 1024);
		if (num_chars == -1)
			check_file(-1, 0, argv);

		bytes_written = write(file_to, buffer, num_chars);
		if (bytes_written == -1)
			check_file(0, -1, argv);
	} while (num_chars == 1024);

	error_close = close(file_from);
	if (error_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	error_close = close(file_to);
	if (error_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
