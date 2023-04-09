#include "main.h"

/**
 * main - prints the name of the file
 * @argc: number of arguments passed to argv
 * @argv: array of strings(arguments)
 * Return: O(success)
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);

	return (0);
}
