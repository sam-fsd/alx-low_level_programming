#include "main.h"

/**
 * main - prints the number of arguments
 * @argc: number of arguments
 * @argv: arguments passed
 * Return: 0(success)
 */
int main(int argc, char *argv[])
{
	int args = 0;

	if (argc == 1)
		printf("%d\n", argc - 1);
	else
	{
		while (argv[args] != NULL)
			args++;

		printf("%d\n", args - 1);
	}

	return (0);
}
