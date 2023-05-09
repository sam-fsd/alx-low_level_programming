#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define BUFFER_SIZE 1024
/**
 * read_write - reads a file and copy the content to another file
 * @fd: file descriptor of file_from
 * @fd1: file descriptor of file_to
 * @file_to: pointer to a string
 */
void read_write(int fd, int fd1, char *file_to)
{
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	while ((bytes_read = read(fd, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd1, buffer, bytes_read);

		if (bytes_written != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			if (close(fd) == -1)
			{
				dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
				exit(100);
			}
			close(fd);

			if (close(fd1) == -1)
			{
				dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
				exit(100);
			}
			close(fd1);

			exit(99);
		}
	}

	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
}
