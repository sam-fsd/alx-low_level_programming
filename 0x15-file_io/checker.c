#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * fd_err_checker - checks if a open() returned an error
 * @fd: file descriptor
 * @fd1: file descriptor
 * @file_from: pointer to a string
 * @file_to: pointer to a string
 */
void fd_err_checker(int fd, int fd1, char *file_from, char *file_to)
{
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		if (close(fd) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
			exit(100);
		}
		close(fd);
		exit(98);
	}

	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		if (close(fd1) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
			exit(100);
		}
		close(fd1);
		exit(99);
	}
}
