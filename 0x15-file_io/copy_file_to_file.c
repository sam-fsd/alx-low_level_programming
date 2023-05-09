#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - copies content of a file to another file
 * @argc: number of arguments passed
 * @argv: array of arguments passed including the filename
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int fd, fd1;
	char *file_from, *file_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = argv[1];
	file_to = argv[2];

	fd = open(file_from, O_RDONLY);
	fd1 = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	fd_err_checker(fd, fd1, file_from, file_to);
	read_write(fd, fd1, file_to);

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

	return (0);
}
