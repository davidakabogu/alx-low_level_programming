#include "main.h"

/**
 * append_text_to_file - this function appends text at the end of a file
 * @filename: this is the name of the file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: returns 1 on success and -1 on failure or if filename is NULL.
 *		If text_content is NULL, return 1 if the file exists
 *		and -1 if the file does not exist
 *		or if you do not have the required permissions to write the file
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor, num_chars, bytes_written;

	if (filename == NULL)
		return (-1);

	file_descriptor = open(filename, O_WRONLY | O_APPEND);
	if (file_descriptor == -1)
		return (-1);

	if (text_content)
	{
		for (num_chars = 0; text_content[num_chars]; num_chars++)
			;

		bytes_written = write(file_descriptor, text_content, num_chars);
		if (bytes_written == -1)
		{
			close(file_descriptor);
			return (-1);
		}
	}
	close(file_descriptor);

	return (1);
}
