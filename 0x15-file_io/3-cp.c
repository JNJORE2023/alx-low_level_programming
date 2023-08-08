#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * allocate_buffer - Allocates a buffer of 1024 bytes.
 * @file: The name of the associated file.
 *
 * Return: A pointer to the newly allocated buffer.
 */
char *allocate_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Unable to allocate buffer for %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_descriptor - Closes a file descriptor.
 * @fd: The file descriptor to be closed.
 */
void close_descriptor(int fd)
{
	int result;

	result = close(fd);

	if (result == -1)
	{
		dprintf(STDERR_FILENO, "Error: Unable to close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the content of one file to another.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 *
 * Return: 0 on success, or appropriate error code on failure.
 *
 * Description: Exits with error codes for various issues.
 */
int main(int argc, char *argv[])
{
	int src_fd, dest_fd, read_result, write_result;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = allocate_buffer(argv[2]);
	src_fd = open(argv[1], O_RDONLY);
	read_result = read(src_fd, buffer, 1024);
	dest_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (src_fd == -1 || read_result == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Unable to read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		write_result = write(dest_fd, buffer, read_result);
		if (dest_fd == -1 || write_result == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Unable to write to file %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		read_result = read(src_fd, buffer, 1024);
		dest_fd = open(argv[2], O_WRONLY | O_APPEND);

	} while (read_result > 0);

	free(buffer);
	close_descriptor(src_fd);
	close_descriptor(dest_fd);

	return (0);
}
