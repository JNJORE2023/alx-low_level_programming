#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reading text file and printing content to standard output.
 * @filename: The name of the text file to be read.
 * @letters: The number of letters to be read.
 * Return: The actual number of bytes read and printed on success,
 *         or 0 if the function fails or the filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t file_descriptor;
	ssize_t bytes_read;
	ssize_t bytes_written;

	if (!filename)
		return (0);

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
	{
		close(file_descriptor);
		return (0);
	}

	bytes_read = read(file_descriptor, buffer, letters);
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	free(buffer);
	close(file_descriptor);

	if (bytes_written == -1 || bytes_read == -1)
		return (0);

	return (bytes_written);
}
