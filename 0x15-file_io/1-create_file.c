#include "main.h"

/**
 * create_file - this function creates a file
 * @filename: name of file to create 
 * @text_content: NULL terminated string to write to the file
 * Return: returns 1 on success, -1 on failure or if
 *		filename is NULL or text_content is NULL
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor, num_chars, bytes_written;

	if (filename == NULL)
		return (-1);

	file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file_descriptor == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (num_chars = 0; text_content[num_chars]; num_chars++)
		;

	bytes_written = write(file_descriptor, text_content, num_chars);
	if (bytes_written == -1)
	{
		close(file_descriptor);
		return (-1);
	}

	close(file_descriptor);

	return (1);
}
