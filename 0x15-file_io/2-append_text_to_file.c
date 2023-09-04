#include "main.h"

/**
 * append_text_to_file - Append text to the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to append to the file.
 *
 * Return: On failure or if filename is NULL - -1.
 *         If the file doesn't exist or lacks write permissions - -1.
 *         On success - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor, write_result, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}

	file_descriptor = open(filename, O_WRONLY | O_APPEND);
	write_result = write(file_descriptor, text_content, len);

	if (file_descriptor == -1 || write_result == -1)
		return (-1);

	close(file_descriptor);

	return (1);
}
