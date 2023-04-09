#include "main.h"

/**
 * main - prints the number of arguments
 * @argc: numner of arguments
 * @argv: arguments passed
 * Return: 0(success)
 */
int main(int argc, char* argv)
{
	if (argc > 1)
		printf("%d\n", argc - 1);
	else
		printf("0\n");
}
