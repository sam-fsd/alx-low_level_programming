#include "main.h"

/**
 * main - adds arguments minus filename
 * @argc: number of argument
 * @argv: array of argument
 * Return: 0 for success 1 if we encounter a
 * non-numeric argument
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1 || argc == 2)
	{
		printf("0\n");
		return (0);
	}
	
	for (i = 1; i < argc; i++)
	{
		if (!isdigit(*argv[i]))
		{
			printf("Error\n");
			return (1);
		}
	}

	for (i = 1; i < argc; i++)
		sum += atoi(argv[i]);

	printf("%d\n", sum);

	return (0);
}
