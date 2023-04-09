#include "main.h"

/**
 * read_textfile - this function reads a text file
 *			and prints it to the POSIX standard output
 * @filename: filename.
 * @letters: numbers of letters it should read and print
 * Return: returns the actual number of letters it could read and print
 *		returns 0 if file can not be opened or read,
 *		if filename is NULL or if write fails or does not write
 *		the expected amount of bytes.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytes_read, bytes_written;
	int file_descriptor;
	char *buffer;

	if (filename == NULL)
		return (0);

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (buffer == NULL)
		return (0);

	bytes_read = read(file_descriptor, buffer, letters);
	if (bytes_read == -1)
	{
		close(file_descriptor);
		free(buffer);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	close(file_descriptor);
	free(buffer);

	if (bytes_written == -1)
		return (0);

	return (bytes_written);
}
